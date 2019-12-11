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
static const char *ng0 = "E:/ISELab/Lab2Dop/codeConverter.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0097794386_3212880686_p_0(char *t0)
{
    char t5[16];
    char t6[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t24 = (t0 + 1192U);
    t25 = *((char **)t24);
    t24 = (t0 + 3192);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 8U);
    xsi_driver_first_trans_fast_port(t24);

LAB2:    t30 = (t0 + 3112);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1192U);
    t7 = *((char **)t1);
    t1 = (t0 + 4812U);
    t8 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t6, t7, t1);
    t9 = (t0 + 4889);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t5, t8, t6, t9, t11);
    t16 = (t5 + 12U);
    t15 = *((unsigned int *)t16);
    t17 = (1U * t15);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 3192);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 8U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t17, 0);
    goto LAB6;

LAB8:    goto LAB2;

}


extern void work_a_0097794386_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0097794386_3212880686_p_0};
	xsi_register_didat("work_a_0097794386_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_0097794386_3212880686.didat");
	xsi_register_executes(pe);
}
