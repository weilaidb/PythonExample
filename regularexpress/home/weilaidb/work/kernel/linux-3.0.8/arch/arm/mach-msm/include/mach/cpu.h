#define __ARCH_ARM_MACH_MSM_CPU_H__
#define cpu_is_msm7x01()	0
#define cpu_is_msm7x30()	0
#define cpu_is_qsd8x50()	0
#define cpu_is_msm8x60()	0
#define cpu_is_msm8960()	0
# undef cpu_is_msm7x01
# define cpu_is_msm7x01()	1
# undef cpu_is_msm7x30
# define cpu_is_msm7x30()	1
# undef cpu_is_qsd8x50
# define cpu_is_qsd8x50()	1
# undef cpu_is_msm8x60
# define cpu_is_msm8x60()	1
# undef cpu_is_msm8960
# define cpu_is_msm8960()	1
