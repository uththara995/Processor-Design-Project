%% MATLAB Implementation of the Image Downsampling Algorithm

clear all;
close all;

%% Load the image

im = uint8(rgb2gray(imread('lena_256x256.png')));

%% Display the original image

figure;
title('Original Image');
imshow(im);

%% Cast the image to a 1D array 

I = reshape(im,[1,256*256]);

%% Gaussian Filtering 

raw_index = 2;
byte_index = 258;
down_sample_index = 1;

while(byte_index < 254*254)
    if (raw_index - 256 == 0)
        byte_index = byte_index + 258;
        raw_index = 2;    
    end
    
    G= zeros(1,9);
    
    G(1)= I(byte_index - 256 - 1)*1;
    G(2)= I(byte_index - 256)*2;
    G(3)= I(byte_index - 256 + 1)*1;
    G(4)= I(byte_index - 1)*2;
    G(5)= I(byte_index)*4;
    G(6)= I(byte_index + 1)*2;
    G(7)= I(byte_index + 256 - 1)*1;
    G(8)= I(byte_index + 256 )*2;
    G(9)= I(byte_index + 256 + 1)*1;
    
    avrg = bitshift(sum(G),-4);
    I(down_sample_index) = avrg;
    raw_index = raw_index + 2; 
    byte_index = byte_index + 2;
    down_sample_index = down_sample_index + 1;
    
    
end  

%% Displying gaussian filtered image

gf_im = reshape(I(1:127*127),[127,127]);
gf_im = uint8(gf_im);

figure;
imshow(gf_im);   


%% Down sampling
    
    
    
    
    
    
    





