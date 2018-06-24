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
static const char *ng0 = "C:/Users/DilinDampahalage/Desktop/Processor-Design-Project/System_Design/io_manager.v";
static unsigned int ng1[] = {6U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {255U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};



static void Cont_57_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 8752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 7192);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 10456);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 65535U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 15);
    t39 = (t0 + 10312);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4072U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 6712);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t19, 16, t25, 16);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_58_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7192);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 10520);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 255U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 7);
    t39 = (t0 + 10328);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4232U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 7032);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t19, 8, t25, 8);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_59_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7192);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 10584);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 10344);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4392U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 6552);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t19, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Initial_146_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(146, ng0);

LAB2:    xsi_set_current_line(147, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);

LAB1:    return;
}

static void Always_150_4(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10360);
    *((int *)t2) = 1;
    t3 = (t0 + 9776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);

LAB5:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 7832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(154, ng0);

LAB38:    xsi_set_current_line(155, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 6712);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 16, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

LAB9:    xsi_set_current_line(165, ng0);

LAB39:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 5192U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB42:    goto LAB37;

LAB11:    xsi_set_current_line(177, ng0);

LAB44:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 6552);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB13:    xsi_set_current_line(183, ng0);

LAB45:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6552);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB15:    xsi_set_current_line(189, ng0);

LAB46:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 6712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 16, t7, 32);
    t9 = (t0 + 6712);
    xsi_vlogvar_wait_assign_value(t9, t16, 0, 0, 16, 0LL);
    t10 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t10, t16, 16, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(195, ng0);

LAB47:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 6872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB50:    goto LAB37;

LAB19:    xsi_set_current_line(203, ng0);

LAB51:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 3912U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(210, ng0);

LAB56:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB54:    goto LAB37;

LAB21:    xsi_set_current_line(218, ng0);

LAB57:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6712);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(225, ng0);

LAB58:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(230, ng0);

LAB59:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t3 = (t0 + 7512);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(237, ng0);

LAB60:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(243, ng0);

LAB61:    xsi_set_current_line(244, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(249, ng0);

LAB62:    xsi_set_current_line(250, ng0);
    t3 = (t0 + 5512U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB65:    goto LAB37;

LAB33:    xsi_set_current_line(260, ng0);

LAB67:    xsi_set_current_line(261, ng0);
    t3 = (t0 + 6872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB70:    goto LAB37;

LAB40:    xsi_set_current_line(167, ng0);

LAB43:    xsi_set_current_line(168, ng0);
    t5 = (t0 + 5352U);
    t7 = *((char **)t5);
    t5 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB42;

LAB48:    xsi_set_current_line(197, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB50;

LAB52:    xsi_set_current_line(206, ng0);

LAB55:    xsi_set_current_line(207, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB54;

LAB63:    xsi_set_current_line(251, ng0);

LAB66:    xsi_set_current_line(252, ng0);
    t5 = ((char*)((ng17)));
    t7 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 6712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 16, t5, 32);
    t7 = (t0 + 6712);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 16, 0LL);
    t9 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t9, t16, 16, 0, 1, 0LL);
    goto LAB65;

LAB68:    xsi_set_current_line(262, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB70;

}

static void Cont_271_5(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 10376);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003879469112_1380248235_init()
{
	static char *pe[] = {(void *)Cont_57_0,(void *)Cont_58_1,(void *)Cont_59_2,(void *)Initial_146_3,(void *)Always_150_4,(void *)Cont_271_5};
	xsi_register_didat("work_m_00000000003879469112_1380248235", "isim/io_manager_test_isim_beh.exe.sim/work/m_00000000003879469112_1380248235.didat");
	xsi_register_executes(pe);
}
