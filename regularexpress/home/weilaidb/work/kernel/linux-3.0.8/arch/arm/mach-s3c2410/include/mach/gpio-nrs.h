#define __MACH_GPIONRS_H
#define S3C2410_GPIONO(bank,offset) ((bank) + (offset))
#define S3C2410_GPIO_BANKG   (32*6)
#define S3C2410_GPIO_BANKH   (32*7)
#define S3C2410_GPIO_A_NR	(32)
#define S3C2410_GPIO_B_NR	(32)
#define S3C2410_GPIO_C_NR	(32)
#define S3C2410_GPIO_D_NR	(32)
#define S3C2410_GPIO_E_NR	(32)
#define S3C2410_GPIO_F_NR	(32)
#define S3C2410_GPIO_G_NR	(32)
#define S3C2410_GPIO_H_NR	(32)
#define S3C2410_GPIO_J_NR	(32)
#define S3C2410_GPIO_K_NR	(32)
#define S3C2410_GPIO_L_NR	(32)
#define S3C2410_GPIO_M_NR	(32)
#if CONFIG_S3C_GPIO_SPACE != 0
#error CONFIG_S3C_GPIO_SPACE cannot be zero at the moment
#define S3C2410_GPIO_NEXT(__gpio) \
((__gpio##_START) + (__gpio##_NR) + CONFIG_S3C_GPIO_SPACE + 0)
enum s3c_gpio_number ;
#define S3C2410_GPA(_nr)	(S3C2410_GPIO_A_START + (_nr))
#define S3C2410_GPB(_nr)	(S3C2410_GPIO_B_START + (_nr))
#define S3C2410_GPC(_nr)	(S3C2410_GPIO_C_START + (_nr))
#define S3C2410_GPD(_nr)	(S3C2410_GPIO_D_START + (_nr))
#define S3C2410_GPE(_nr)	(S3C2410_GPIO_E_START + (_nr))
#define S3C2410_GPF(_nr)	(S3C2410_GPIO_F_START + (_nr))
#define S3C2410_GPG(_nr)	(S3C2410_GPIO_G_START + (_nr))
#define S3C2410_GPH(_nr)	(S3C2410_GPIO_H_START + (_nr))
#define S3C2410_GPJ(_nr)	(S3C2410_GPIO_J_START + (_nr))
#define S3C2410_GPK(_nr)	(S3C2410_GPIO_K_START + (_nr))
#define S3C2410_GPL(_nr)	(S3C2410_GPIO_L_START + (_nr))
#define S3C2410_GPM(_nr)	(S3C2410_GPIO_M_START + (_nr))
#define S3C2410_GPA0	S3C2410_GPA(0)
#define S3C2410_GPA1	S3C2410_GPA(1)
#define S3C2410_GPA3	S3C2410_GPA(3)
#define S3C2410_GPA7	S3C2410_GPA(7)
#define S3C2410_GPE0	S3C2410_GPE(0)
#define S3C2410_GPE1	S3C2410_GPE(1)
#define S3C2410_GPE2	S3C2410_GPE(2)
#define S3C2410_GPE3	S3C2410_GPE(3)
#define S3C2410_GPE4	S3C2410_GPE(4)
#define S3C2410_GPE5	S3C2410_GPE(5)
#define S3C2410_GPE6	S3C2410_GPE(6)
#define S3C2410_GPE7	S3C2410_GPE(7)
#define S3C2410_GPE8	S3C2410_GPE(8)
#define S3C2410_GPE9	S3C2410_GPE(9)
#define S3C2410_GPE10	S3C2410_GPE(10)
#define S3C2410_GPH10	S3C2410_GPH(10)