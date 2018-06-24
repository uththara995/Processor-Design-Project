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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/io_manager_test.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};



static int sp_UART_WRITE_BYTE(char *t1, char *t2)
{
    char t8[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2336);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(59, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    t4 = (t1 + 2976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 2336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(62, ng0);

LAB11:    xsi_set_current_line(63, ng0);
    t15 = (t1 + 2816);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 2816);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 2976);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t18, 1, t17, t21, 2, t24, 32, 1);
    t25 = (t1 + 2336);
    xsi_vlogvar_wait_assign_value(t25, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(61, ng0);
    t4 = (t1 + 2976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 2976);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB8;

LAB13:    goto LAB4;

}

static void Always_47_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2176);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_72_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3952);
    t4 = (t0 + 984);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB8:    t7 = (t0 + 4048);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 4048);
    t17 = *((char **)t16);
    t16 = (t0 + 984);
    t18 = (t0 + 3952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 4144U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3952);
    t4 = (t0 + 984);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB15:    t7 = (t0 + 4048);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB17:    if (t15 != 0)
        goto LAB18;

LAB13:    t8 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t8);

LAB14:    t16 = (t0 + 4048);
    t17 = *((char **)t16);
    t16 = (t0 + 984);
    t18 = (t0 + 3952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t7 = (t0 + 4144U);
    *((char **)t7) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3952);
    t4 = (t0 + 984);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB22:    t7 = (t0 + 4048);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB24:    if (t15 != 0)
        goto LAB25;

LAB20:    t8 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t8);

LAB21:    t16 = (t0 + 4048);
    t17 = *((char **)t16);
    t16 = (t0 + 984);
    t18 = (t0 + 3952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t7 = (t0 + 4144U);
    *((char **)t7) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3952);
    t4 = (t0 + 984);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB29:    t7 = (t0 + 4048);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB31:    if (t15 != 0)
        goto LAB32;

LAB27:    t8 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t8);

LAB28:    t16 = (t0 + 4048);
    t17 = *((char **)t16);
    t16 = (t0 + 984);
    t18 = (t0 + 3952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB30:;
LAB32:    t7 = (t0 + 4144U);
    *((char **)t7) = &&LAB29;
    goto LAB1;

LAB33:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}


extern void work_m_00000000003523293600_0835998352_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Initial_72_1};
	static char *se[] = {(void *)sp_UART_WRITE_BYTE};
	xsi_register_didat("work_m_00000000003523293600_0835998352", "isim/io_manager_test_isim_beh.exe.sim/work/m_00000000003523293600_0835998352.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
