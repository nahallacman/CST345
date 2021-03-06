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
static const char *ng0 = "C:/Users/mainuser/Desktop/School/CST345/Lab04/Mux_disp.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {31U, 31U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {15U, 15U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {79U, 0U};
static unsigned int ng13[] = {18U, 0U};
static unsigned int ng14[] = {6U, 0U};
static int ng15[] = {4, 0};
static unsigned int ng16[] = {76U, 0U};
static int ng17[] = {5, 0};
static unsigned int ng18[] = {36U, 0U};
static int ng19[] = {6, 0};
static unsigned int ng20[] = {32U, 0U};
static int ng21[] = {7, 0};
static unsigned int ng22[] = {15U, 0U};
static int ng23[] = {8, 0};
static unsigned int ng24[] = {0U, 0U};
static int ng25[] = {9, 0};
static unsigned int ng26[] = {12U, 0U};
static int ng27[] = {10, 0};
static unsigned int ng28[] = {8U, 0U};
static int ng29[] = {11, 0};
static unsigned int ng30[] = {96U, 0U};
static int ng31[] = {12, 0};
static unsigned int ng32[] = {49U, 0U};
static int ng33[] = {13, 0};
static unsigned int ng34[] = {66U, 0U};
static int ng35[] = {14, 0};
static unsigned int ng36[] = {48U, 0U};
static int ng37[] = {15, 0};
static unsigned int ng38[] = {56U, 0U};
static unsigned int ng39[] = {127U, 127U};



static void Always_61_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7200);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
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

LAB7:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t5, 32);
    t11 = (t0 + 4808);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 2);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4808);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    goto LAB8;

}

static void Always_84_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 7216);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 4808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(87, ng0);
    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    t10 = (t0 + 2008U);
    t12 = *((char **)t10);
    xsi_vlogtype_concat(t9, 5, 5, 2U, t12, 4, t11, 1);
    t10 = (t0 + 4968);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    goto LAB17;

LAB9:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 2168U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t9, 5, 5, 2U, t5, 4, t4, 1);
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    goto LAB17;

LAB11:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2328U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t9, 5, 5, 2U, t5, 4, t4, 1);
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    goto LAB17;

LAB13:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2488U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t9, 5, 5, 2U, t5, 4, t4, 1);
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    goto LAB17;

}

static void Always_97_2(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 7232);
    *((int *)t2) = 1;
    t3 = (t0 + 6416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 4808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t2, 3, 0, 1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(100, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 4648);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    t11 = (t0 + 4488);
    xsi_vlogvar_assign_value(t11, t9, 1, 0, 1);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t9, 2, 0, 1);
    t13 = (t0 + 4168);
    xsi_vlogvar_assign_value(t13, t9, 3, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t7 = (t0 + 4328);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t7 = (t0 + 4328);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t7 = (t0 + 4328);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB17;

}

static void Always_111_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 7248);
    *((int *)t2) = 1;
    t3 = (t0 + 6664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t5 = (t0 + 4968);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);

LAB6:    t16 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t16, 32);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng17)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng19)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng21)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng23)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng25)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng27)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng29)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng31)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng33)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng35)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng37)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t2, 2, 0, 1);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t2, 3, 0, 1);
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t2, 4, 0, 1);
    t9 = (t0 + 3048);
    xsi_vlogvar_assign_value(t9, t2, 5, 0, 1);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t2, 6, 0, 1);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(114, ng0);
    t18 = ((char*)((ng11)));
    t19 = (t0 + 3848);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    t20 = (t0 + 3688);
    xsi_vlogvar_assign_value(t20, t18, 1, 0, 1);
    t21 = (t0 + 3528);
    xsi_vlogvar_assign_value(t21, t18, 2, 0, 1);
    t22 = (t0 + 3368);
    xsi_vlogvar_assign_value(t22, t18, 3, 0, 1);
    t23 = (t0 + 3208);
    xsi_vlogvar_assign_value(t23, t18, 4, 0, 1);
    t24 = (t0 + 3048);
    xsi_vlogvar_assign_value(t24, t18, 5, 0, 1);
    t25 = (t0 + 2888);
    xsi_vlogvar_assign_value(t25, t18, 6, 0, 1);
    goto LAB41;

LAB9:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB11:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB13:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB15:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB17:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB19:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB25:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB27:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB29:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB31:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB33:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng34)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng36)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng38)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t3, 5, 0, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t3, 6, 0, 1);
    goto LAB41;

}

static void Always_135_4(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7264);
    *((int *)t2) = 1;
    t3 = (t0 + 6912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 4968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 1);
    goto LAB2;

}


extern void work_m_00000000002789701401_0625618753_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Always_84_1,(void *)Always_97_2,(void *)Always_111_3,(void *)Always_135_4};
	xsi_register_didat("work_m_00000000002789701401_0625618753", "isim/lab04_toplevel_test_isim_beh.exe.sim/work/m_00000000002789701401_0625618753.didat");
	xsi_register_executes(pe);
}
