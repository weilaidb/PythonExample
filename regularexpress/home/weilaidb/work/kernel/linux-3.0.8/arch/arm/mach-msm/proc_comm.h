#define _ARCH_ARM_MACH_MSM_PROC_COMM_H_
enum ;
enum ;
enum vreg_pdown_id ;
enum ;
#define GPIO_ENABLE	0
#define GPIO_DISABLE	1
#define GPIO_INPUT	0
#define GPIO_OUTPUT	1
#define GPIO_NO_PULL	0
#define GPIO_PULL_DOWN	1
#define GPIO_KEEPER	2
#define GPIO_PULL_UP	3
#define GPIO_2MA	0
#define GPIO_4MA	1
#define GPIO_6MA	2
#define GPIO_8MA	3
#define GPIO_10MA	4
#define GPIO_12MA	5
#define GPIO_14MA	6
#define GPIO_16MA	7
#define PCOM_GPIO_CFG(gpio, func, dir, pull, drvstr) \
((((gpio) & 0x3FF) << 4)	| \
((func) & 0xf)			| \
(((dir) & 0x1) << 14)		| \
(((pull) & 0x3) << 15)		| \
(((drvstr) & 0xF) << 17))
int msm_proc_comm(unsigned cmd, unsigned *data1, unsigned *data2);
void __init proc_comm_boot_wait(void);
