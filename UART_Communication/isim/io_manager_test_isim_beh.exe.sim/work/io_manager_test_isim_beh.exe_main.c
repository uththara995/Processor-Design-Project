/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002392131471_4217414517_init();
    xilinxcorelib_ver_m_00000000000567966154_0233571953_init();
    xilinxcorelib_ver_m_00000000001358910285_1571443074_init();
    xilinxcorelib_ver_m_00000000001687936702_2559047490_init();
    xilinxcorelib_ver_m_00000000000277421008_2310103327_init();
    xilinxcorelib_ver_m_00000000001603977570_3112737792_init();
    work_m_00000000000621624591_0362415942_init();
    work_m_00000000001820274327_0768645600_init();
    work_m_00000000000072151625_2910696936_init();
    work_m_00000000000874831977_1380248235_init();
    work_m_00000000003523293600_0835998352_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003523293600_0835998352");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
