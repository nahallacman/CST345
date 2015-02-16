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
static const char *ng0 = "C:/Users/cal/Desktop/School/CST345/Lab04/keypad_controller.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {11U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {13U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {15U, 15U};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {3U, 3U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {4U, 0U};
static unsigned int ng19[] = {5U, 0U};
static unsigned int ng20[] = {6U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {8U, 0U};



static void Always_38_0(char *t0)
{
    char t13[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    goto LAB8;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(44, ng0);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t28, 2, t29, 32);
    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB15;

}

static void Always_51_1(char *t0)
{
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

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(54, ng0);

LAB6:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB7:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB18:    goto LAB2;

LAB8:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB18;

LAB10:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

LAB12:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

LAB14:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

}

static void Always_71_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(78, ng0);

LAB14:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(74, ng0);

LAB13:    xsi_set_current_line(75, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

}

static void Always_86_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(89, ng0);
    t7 = ((char*)((ng11)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB17;

LAB9:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

LAB11:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

LAB13:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

}

static void Always_98_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t10, 2, t7, 2);

LAB6:    t11 = ((char*)((ng11)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t11, 4);
    if (t12 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng12)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng13)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng14)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng18)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng19)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng20)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng22)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng21)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng2)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t12 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);
    t13 = ((char*)((ng16)));
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    goto LAB41;

LAB9:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB11:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB13:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB15:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB31:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB33:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

}


extern void work_m_00000000003108907931_0869158047_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Always_51_1,(void *)Always_71_2,(void *)Always_86_3,(void *)Always_98_4};
	xsi_register_didat("work_m_00000000003108907931_0869158047", "isim/test_keypad_controller_isim_beh.exe.sim/work/m_00000000003108907931_0869158047.didat");
	xsi_register_executes(pe);
}
