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
static const char *ng0 = "C:/Users/cal/Desktop/School/CST345/CST345_Lab02/test_lab02.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.";
static unsigned int ng5[] = {31U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {17U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {2U, 0U};



static void Initial_74_0(char *t0)
{
    char t4[16];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(95, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(104, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(112, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(121, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(129, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(137, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4896);
    xsi_process_wait(t2, 128000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(144, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 10.000000000000000);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    t3 = (t0 + 1688U);
    t9 = *((char **)t3);
    t3 = (t0 + 1848U);
    t10 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    t3 = (t0 + 2168U);
    t12 = *((char **)t3);
    t3 = (t0 + 2328U);
    t13 = *((char **)t3);
    t3 = (t0 + 2488U);
    t14 = *((char **)t3);
    t3 = (t0 + 2648U);
    t15 = *((char **)t3);
    t3 = (t0 + 2808U);
    t16 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 14, t0, (char)118, t4, 64, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1);
    goto LAB1;

}

static void Always_149_1(char *t0)
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

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5144);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 4168);
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

LAB8:    t14 = (t0 + 4168);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}


extern void work_m_00000000004100913011_3134118846_init()
{
	static char *pe[] = {(void *)Initial_74_0,(void *)Always_149_1};
	xsi_register_didat("work_m_00000000004100913011_3134118846", "isim/test_lab02_isim_beh.exe.sim/work/m_00000000004100913011_3134118846.didat");
	xsi_register_executes(pe);
}
