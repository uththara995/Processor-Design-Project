clear all;
close all;

I = imread('us.jpg');
I = uint8(rgb2gray(I));

% I = uint8(0:255);

figure;
imshow(I);
title('Input image');

N = 256;

I = reshape(I,N^2,1);


s = serial('COM6');
set(s,'BaudRate',9600);
s.InputBufferSize = N^2;
s.OutputBufferSize = N^2;
get(s)
fopen(s);

% Send image to FPGA
for i = 1:N^2
    fwrite(s,I(i));
    java.lang.Thread.sleep(1);
end

display('Image sent to FPGA');

%Recieve image from FPGA
i = 1;
k = 0;
J = zeros(N^2,1);

while i < (N^2 + 1)
    k = k + 1;
    if(k>65536)
        break;
    end
    if(s.BytesAvailable)
        J(i) = uint8(fread(s,1));
        i = i + 1;
        k = 0;
    end
end

display('Downsampled image received from FPGA');

fclose(s);
delete(s)
clear s
%%
M = 127;
Q = uint8(reshape(J(1:M*M),M,M));
figure;
imshow(Q);
title('output image');
