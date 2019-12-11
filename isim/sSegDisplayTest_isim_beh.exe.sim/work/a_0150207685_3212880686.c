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
static const char *ng0 = "C:/dd/Lab2Dop/sSegDisplay.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0150207685_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6312);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0150207685_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6328);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0150207685_3212880686_p_2(char *t0)
{
    char t3[16];
    char *t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t4 = (t0 + 9296U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t3, t5, t4, (unsigned char)3);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (3U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6600);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 3U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 9296U);
    t5 = (t0 + 9674);
    t7 = (t3 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 2;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t16 = (2 - 0);
    t8 = (t16 * 1);
    t8 = (t8 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t8;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t3);
    if (t2 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(3U, t9, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 9677);
    t13 = (t0 + 6600);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t11, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB8;

}

static void work_a_0150207685_3212880686_p_3(char *t0)
{
    char t19[16];
    char t21[16];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 9680);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 9683);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 9686);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 9696);
    t3 = (t0 + 6664);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 6360);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(64, ng0);
    t11 = (t0 + 9689);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t15 = (7 - 3);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t20 = ((IEEE_P_2592010699) + 4024);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (0 - 0);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t26 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 3;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - 3);
    t25 = (t28 * -1);
    t25 = (t25 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t11, t21, (char)97, t13, t26, (char)101);
    t25 = (1U + 4U);
    t29 = (5U != t25);
    if (t29 == 1)
        goto LAB11;

LAB12:    t27 = (t0 + 6664);
    t30 = (t27 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t18, 5U);
    xsi_driver_first_trans_fast(t27);
    goto LAB2;

LAB4:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 9690);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t3 = (t5 + t17);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t21 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 0;
    t11 = (t9 + 4U);
    *((int *)t11) = 1;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t4 = (1 - 0);
    t25 = (t4 * 1);
    t25 = (t25 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t25;
    t11 = (t26 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 4;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t7 = (4 - 6);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t25;
    t6 = xsi_base_array_concat(t6, t19, t8, (char)97, t1, t21, (char)97, t3, t26, (char)101);
    t25 = (2U + 3U);
    t29 = (5U != t25);
    if (t29 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 6664);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = (7 - 7);
    t15 = (t4 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t29 = *((unsigned char *)t1);
    t3 = (t0 + 9692);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t21 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 0;
    t11 = (t9 + 4U);
    *((int *)t11) = 3;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t7 = (3 - 0);
    t25 = (t7 * 1);
    t25 = (t25 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t25;
    t6 = xsi_base_array_concat(t6, t19, t8, (char)99, t29, (char)97, t3, t21, (char)101);
    t25 = (1U + 4U);
    t34 = (5U != t25);
    if (t34 == 1)
        goto LAB15;

LAB16:    t11 = (t0 + 6664);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t6, 5U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB10:;
LAB11:    xsi_size_not_matching(5U, t25, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(5U, t25, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(5U, t25, 0);
    goto LAB16;

}

static void work_a_0150207685_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 9701);
    t4 = xsi_mem_cmp(t1, t2, 5U);
    if (t4 == 1)
        goto LAB3;

LAB15:    t5 = (t0 + 9706);
    t7 = xsi_mem_cmp(t5, t2, 5U);
    if (t7 == 1)
        goto LAB4;

LAB16:    t8 = (t0 + 9711);
    t10 = xsi_mem_cmp(t8, t2, 5U);
    if (t10 == 1)
        goto LAB5;

LAB17:    t11 = (t0 + 9716);
    t13 = xsi_mem_cmp(t11, t2, 5U);
    if (t13 == 1)
        goto LAB6;

LAB18:    t14 = (t0 + 9721);
    t16 = xsi_mem_cmp(t14, t2, 5U);
    if (t16 == 1)
        goto LAB7;

LAB19:    t17 = (t0 + 9726);
    t19 = xsi_mem_cmp(t17, t2, 5U);
    if (t19 == 1)
        goto LAB8;

LAB20:    t20 = (t0 + 9731);
    t22 = xsi_mem_cmp(t20, t2, 5U);
    if (t22 == 1)
        goto LAB9;

LAB21:    t23 = (t0 + 9736);
    t25 = xsi_mem_cmp(t23, t2, 5U);
    if (t25 == 1)
        goto LAB10;

LAB22:    t26 = (t0 + 9741);
    t28 = xsi_mem_cmp(t26, t2, 5U);
    if (t28 == 1)
        goto LAB11;

LAB23:    t29 = (t0 + 9746);
    t31 = xsi_mem_cmp(t29, t2, 5U);
    if (t31 == 1)
        goto LAB12;

LAB24:    t32 = (t0 + 9751);
    t34 = xsi_mem_cmp(t32, t2, 5U);
    if (t34 == 1)
        goto LAB13;

LAB25:
LAB14:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3768U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 6376);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(86, ng0);
    t35 = (t0 + 2568U);
    t36 = *((char **)t35);
    t35 = (t0 + 6728);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t36, 7U);
    xsi_driver_first_trans_fast(t35);
    goto LAB2;

LAB4:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 6728);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB26:;
}

static void work_a_0150207685_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 9756);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB12:    t6 = (t0 + 9759);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB13:    t9 = (t0 + 9762);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB14:    t12 = (t0 + 9765);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB15:    t15 = (t0 + 9768);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB16:    t18 = (t0 + 9771);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB10;

LAB17:
LAB11:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9810);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(101, ng0);

LAB21:    t2 = (t0 + 6392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;

LAB1:    return;
LAB5:    xsi_set_current_line(103, ng0);
    t21 = (t0 + 9774);
    t23 = (t0 + 6792);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t21, 6U);
    xsi_driver_first_trans_fast(t23);
    goto LAB4;

LAB6:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9780);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9786);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB8:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9792);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB9:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9798);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9804);
    t4 = (t0 + 6792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB18:;
LAB19:    t3 = (t0 + 6392);
    *((int *)t3) = 0;
    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}


extern void work_a_0150207685_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0150207685_3212880686_p_0,(void *)work_a_0150207685_3212880686_p_1,(void *)work_a_0150207685_3212880686_p_2,(void *)work_a_0150207685_3212880686_p_3,(void *)work_a_0150207685_3212880686_p_4,(void *)work_a_0150207685_3212880686_p_5};
	xsi_register_didat("work_a_0150207685_3212880686", "isim/sSegDisplayTest_isim_beh.exe.sim/work/a_0150207685_3212880686.didat");
	xsi_register_executes(pe);
}
