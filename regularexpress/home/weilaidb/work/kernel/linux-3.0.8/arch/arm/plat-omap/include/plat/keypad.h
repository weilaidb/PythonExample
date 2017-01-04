#define ASMARM_ARCH_KEYPAD_H
#warning Please update the board to use matrix-keypad driver
struct omap_kp_platform_data ;
#define GROUP_SHIFT	14
#define GROUP_0		(0 << GROUP_SHIFT)
#define GROUP_1		(1 << GROUP_SHIFT)
#define GROUP_2		(2 << GROUP_SHIFT)
#define GROUP_3		(3 << GROUP_SHIFT)
#define GROUP_MASK	GROUP_3
#if KEY_MAX & GROUP_MASK
#error Group bits in conflict with keynum bits
