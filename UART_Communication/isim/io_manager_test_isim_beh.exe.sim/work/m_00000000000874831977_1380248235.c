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
static const char *ng0 = "C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/io_manager.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {255U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};



static void Initial_103_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(103, ng0);

LAB2:    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);

LAB1:    return;
}

static void Always_107_1(char *t0)
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 8192);
    *((int *)t2) = 1;
    t3 = (t0 + 7408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 6208);
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

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng1)));
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
LAB35:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(111, ng0);

LAB38:    xsi_set_current_line(112, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 16, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB9:    xsi_set_current_line(120, ng0);

LAB39:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 4208U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB42:    goto LAB37;

LAB11:    xsi_set_current_line(132, ng0);

LAB44:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB13:    xsi_set_current_line(138, ng0);

LAB45:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB15:    xsi_set_current_line(144, ng0);

LAB46:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 5248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 16, t7, 32);
    t9 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t9, t16, 0, 0, 16, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(150, ng0);

LAB47:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 5248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB49;

LAB48:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB50;

LAB51:    t18 = (t16 + 4);
    t11 = *((unsigned int *)t18);
    t12 = (~(t11));
    t13 = *((unsigned int *)t16);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB55:    goto LAB37;

LAB19:    xsi_set_current_line(158, ng0);

LAB56:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB59:    goto LAB37;

LAB21:    xsi_set_current_line(168, ng0);

LAB60:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(175, ng0);

LAB61:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(180, ng0);

LAB62:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 4048U);
    t4 = *((char **)t3);
    t3 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(187, ng0);

LAB63:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5728);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(193, ng0);

LAB64:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5728);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(199, ng0);

LAB65:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 4528U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB68:    goto LAB37;

LAB33:    xsi_set_current_line(210, ng0);

LAB70:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 5248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB72;

LAB71:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB73;

LAB74:    t18 = (t16 + 4);
    t11 = *((unsigned int *)t18);
    t12 = (~(t11));
    t13 = *((unsigned int *)t16);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB78:    goto LAB37;

LAB40:    xsi_set_current_line(122, ng0);

LAB43:    xsi_set_current_line(123, ng0);
    t5 = (t0 + 4368U);
    t7 = *((char **)t5);
    t5 = (t0 + 5568);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB42;

LAB49:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t16) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(152, ng0);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB55;

LAB57:    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB59;

LAB66:    xsi_set_current_line(201, ng0);

LAB69:    xsi_set_current_line(202, ng0);
    t5 = ((char*)((ng17)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 16, t5, 32);
    t7 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 16, 0LL);
    goto LAB68;

LAB72:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t16) = 1;
    goto LAB74;

LAB76:    xsi_set_current_line(212, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB78;

}

static void Cont_222_2(char *t0)
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

LAB0:    t1 = (t0 + 7624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 6208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 8208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_223_3(char *t0)
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 7872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 5248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 8368);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 5, 7);
    t27 = (t0 + 8224);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000000874831977_1380248235_init()
{
	static char *pe[] = {(void *)Initial_103_0,(void *)Always_107_1,(void *)Cont_222_2,(void *)Cont_223_3};
	xsi_register_didat("work_m_00000000000874831977_1380248235", "isim/io_manager_test_isim_beh.exe.sim/work/m_00000000000874831977_1380248235.didat");
	xsi_register_executes(pe);
}
