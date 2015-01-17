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
static const char *ng0 = "C:/Users/cal/Desktop/School/CST345/CST345_lab01/test_adder.v";
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "At time %t, a = %a, b = %b, sum = %sum, cout = %cout.";
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {1U, 0U};



static void Initial_45_0(char *t0)
{
    char t4[16];
    char t13[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t0, (char)118, t4, 64, (char)118, t6, 4, (char)118, t9, 4, (char)118, t11, 4, (char)118, t12, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB9:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB14;

LAB13:    if (t23 != 0)
        goto LAB15;

LAB16:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB7:    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB8:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB12;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB16;

LAB15:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(53, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB19;

LAB20:    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t0, (char)118, t4, 64, (char)118, t6, 4, (char)118, t9, 4, (char)118, t11, 4, (char)118, t12, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB22;

LAB21:    if (t23 != 0)
        goto LAB23;

LAB24:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB29;

LAB28:    if (t23 != 0)
        goto LAB30;

LAB31:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB22:    *((unsigned int *)t13) = 1;
    goto LAB24;

LAB23:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB27;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(60, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB34;

LAB35:    xsi_set_current_line(65, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t0, (char)118, t4, 64, (char)118, t6, 4, (char)118, t9, 4, (char)118, t11, 4, (char)118, t12, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB37;

LAB36:    if (t23 != 0)
        goto LAB38;

LAB39:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB44;

LAB43:    if (t23 != 0)
        goto LAB45;

LAB46:    t8 = (t13 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB1;

LAB37:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB38:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(66, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB42;

LAB44:    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB45:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(67, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB49;

}


extern void work_m_00000000003589198819_3223157518_init()
{
	static char *pe[] = {(void *)Initial_45_0};
	xsi_register_didat("work_m_00000000003589198819_3223157518", "isim/test_adder_isim_beh.exe.sim/work/m_00000000003589198819_3223157518.didat");
	xsi_register_executes(pe);
}
