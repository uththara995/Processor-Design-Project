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
    xilinxcorelib_ver_m_00000000000567966154_2429261138_init();
    xilinxcorelib_ver_m_00000000001358910285_1571443074_init();
    xilinxcorelib_ver_m_00000000001687936702_2559047490_init();
    xilinxcorelib_ver_m_00000000000277421008_0470728765_init();
    xilinxcorelib_ver_m_00000000001603977570_1079973422_init();
    work_m_00000000000403262735_0362415942_init();
    work_m_00000000001820274327_0768645600_init();
    work_m_00000000000072151625_2910696936_init();
    xilinxcorelib_ver_m_00000000000567966154_1813146553_init();
    xilinxcorelib_ver_m_00000000001358910285_2708713321_init();
    xilinxcorelib_ver_m_00000000001687936702_2843080771_init();
    xilinxcorelib_ver_m_00000000000277421008_2534890983_init();
    xilinxcorelib_ver_m_00000000001603977570_2058059426_init();
    work_m_00000000000403262735_3059417024_init();
    work_m_00000000003486225043_1744761271_init();
    work_m_00000000003124882084_1158689566_init();
    work_m_00000000001625650596_2236041363_init();
    work_m_00000000002880285452_0684797233_init();
    work_m_00000000000681036923_1636161660_init();
    work_m_00000000001768265668_0109217514_init();
    work_m_00000000003879469112_1380248235_init();
    work_m_00000000001653254388_0835998352_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001653254388_0835998352");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
