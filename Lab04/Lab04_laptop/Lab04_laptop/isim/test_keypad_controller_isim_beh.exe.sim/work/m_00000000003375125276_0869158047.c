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
static const char *ng0 = "C:/Users/mainuser/Desktop/School/CST345/Lab04/keypad_controller.v";
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
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {30U, 0U};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {29U, 0U};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {27U, 0U};
static unsigned int ng19[] = {6U, 0U};
static unsigned int ng20[] = {23U, 0U};
static unsigned int ng21[] = {46U, 0U};
static unsigned int ng22[] = {8U, 0U};
static unsigned int ng23[] = {45U, 0U};
static unsigned int ng24[] = {9U, 0U};
static unsigned int ng25[] = {43U, 0U};
static unsigned int ng26[] = {10U, 0U};
static unsigned int ng27[] = {39U, 0U};
static unsigned int ng28[] = {62U, 0U};
static unsigned int ng29[] = {12U, 0U};
static unsigned int ng30[] = {61U, 0U};
static unsigned int ng31[] = {59U, 0U};
static unsigned int ng32[] = {55U, 0U};
static unsigned int ng33[] = {0U, 0U};



static void Always_35_0(char *t0)
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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
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

LAB7:    xsi_set_current_line(40, ng0);
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

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    goto LAB8;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);
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

static void Always_48_1(char *t0)
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(51, ng0);

LAB6:    xsi_set_current_line(53, ng0);
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
LAB16:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB18:    goto LAB2;

LAB8:    xsi_set_current_line(54, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB18;

LAB10:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

LAB12:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

LAB14:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB18;

}

static void Always_68_2(char *t0)
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

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
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

LAB11:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

}

static void Always_109_3(char *t0)
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
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t0 + 2248);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 6, 6, 2U, t8, 2, t6, 4);

LAB6:    t9 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t9, 6);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng18)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng23)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng25)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng27)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(112, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB41;

LAB9:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB11:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB13:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB15:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB31:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB33:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB41;

}


extern void work_m_00000000003375125276_0869158047_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_48_1,(void *)Always_68_2,(void *)Always_109_3};
	xsi_register_didat("work_m_00000000003375125276_0869158047", "isim/test_keypad_controller_isim_beh.exe.sim/work/m_00000000003375125276_0869158047.didat");
	xsi_register_executes(pe);
}
