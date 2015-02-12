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



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 4072);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t0 + 4232);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 744);
    t2 = *((char **)t1);
    t1 = (t0 + 4392);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = (t0 + 4552);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);

LAB1:    return;
}

static void Always_54_1(char *t0)
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7032);
    *((int *)t2) = 1;
    t3 = (t0 + 5752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 3672U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:
LAB8:    t11 = (t0 + 2872U);
    t12 = *((char **)t11);
    t11 = (t0 + 4072);
    t14 = (t0 + 4072);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2712U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t18, 6, 2);
    t17 = (t13 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3032U);
    t3 = *((char **)t2);
    t2 = (t0 + 4232);
    t4 = (t0 + 4232);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2712U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4392);
    t4 = (t0 + 4392);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2712U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4552);
    t4 = (t0 + 4552);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2712U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB10;

LAB11:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB12;

LAB13:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB14;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB16;

}

static void Cont_62_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4072);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2232U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 7176);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 7048);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_63_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4232);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2392U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 7240);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 7064);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_64_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4392);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2552U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 7304);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 7080);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_65_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4552);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2712U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 7368);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 7096);
    *((int *)t23) = 1;

LAB1:    return;
}


extern void unisims_ver_m_00000000003258974243_0139717632_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Always_54_1,(void *)Cont_62_2,(void *)Cont_63_3,(void *)Cont_64_4,(void *)Cont_65_5};
	xsi_register_didat("unisims_ver_m_00000000003258974243_0139717632", "isim/lab04_toplevel_test_isim_beh.exe.sim/unisims_ver/m_00000000003258974243_0139717632.didat");
	xsi_register_executes(pe);
}
