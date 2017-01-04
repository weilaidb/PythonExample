#define __ASM_ARCH_MXC_H__
#error "Do not include directly."
#define MXC_CPU_MX1		1
#define MXC_CPU_MX21		21
#define MXC_CPU_MX25		25
#define MXC_CPU_MX27		27
#define MXC_CPU_MX31		31
#define MXC_CPU_MX35		35
#define MXC_CPU_MX50		50
#define MXC_CPU_MX51		51
#define MXC_CPU_MX53		53
#define IMX_CHIP_REVISION_1_0		0x10
#define IMX_CHIP_REVISION_1_1		0x11
#define IMX_CHIP_REVISION_1_2		0x12
#define IMX_CHIP_REVISION_1_3		0x13
#define IMX_CHIP_REVISION_2_0		0x20
#define IMX_CHIP_REVISION_2_1		0x21
#define IMX_CHIP_REVISION_2_2		0x22
#define IMX_CHIP_REVISION_2_3		0x23
#define IMX_CHIP_REVISION_3_0		0x30
#define IMX_CHIP_REVISION_3_1		0x31
#define IMX_CHIP_REVISION_3_2		0x32
#define IMX_CHIP_REVISION_3_3		0x33
#define IMX_CHIP_REVISION_UNKNOWN	0xff
#define IMX_CHIP_REVISION_1_0_STRING		"1.0"
#define IMX_CHIP_REVISION_1_1_STRING		"1.1"
#define IMX_CHIP_REVISION_1_2_STRING		"1.2"
#define IMX_CHIP_REVISION_1_3_STRING		"1.3"
#define IMX_CHIP_REVISION_2_0_STRING		"2.0"
#define IMX_CHIP_REVISION_2_1_STRING		"2.1"
#define IMX_CHIP_REVISION_2_2_STRING		"2.2"
#define IMX_CHIP_REVISION_2_3_STRING		"2.3"
#define IMX_CHIP_REVISION_3_0_STRING		"3.0"
#define IMX_CHIP_REVISION_3_1_STRING		"3.1"
#define IMX_CHIP_REVISION_3_2_STRING		"3.2"
#define IMX_CHIP_REVISION_3_3_STRING		"3.3"
#define IMX_CHIP_REVISION_UNKNOWN_STRING	"unknown"
extern unsigned int __mxc_cpu_type;
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX1
# endif
# define cpu_is_mx1()		(mxc_cpu_type == MXC_CPU_MX1)
# define cpu_is_mx1()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX21
# endif
# define cpu_is_mx21()		(mxc_cpu_type == MXC_CPU_MX21)
# define cpu_is_mx21()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX25
# endif
# define cpu_is_mx25()		(mxc_cpu_type == MXC_CPU_MX25)
# define cpu_is_mx25()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX27
# endif
# define cpu_is_mx27()		(mxc_cpu_type == MXC_CPU_MX27)
# define cpu_is_mx27()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX31
# endif
# define cpu_is_mx31()		(mxc_cpu_type == MXC_CPU_MX31)
# define cpu_is_mx31()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX35
# endif
# define cpu_is_mx35()		(mxc_cpu_type == MXC_CPU_MX35)
# define cpu_is_mx35()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX50
# endif
# define cpu_is_mx50()		(mxc_cpu_type == MXC_CPU_MX50)
# define cpu_is_mx50()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX51
# endif
# define cpu_is_mx51()		(mxc_cpu_type == MXC_CPU_MX51)
# define cpu_is_mx51()		(0)
# ifdef mxc_cpu_type
#  undef mxc_cpu_type
#  define mxc_cpu_type __mxc_cpu_type
# else
#  define mxc_cpu_type MXC_CPU_MX53
# endif
# define cpu_is_mx53()		(mxc_cpu_type == MXC_CPU_MX53)
# define cpu_is_mx53()		(0)
struct cpu_op ;
int tzic_enable_wake(int is_idle);
enum mxc_cpu_pwr_mode ;
extern struct cpu_op *(*get_cpu_op)(int *op);
#define cpu_is_mx3()	(cpu_is_mx31() || cpu_is_mx35())
#define cpu_is_mx2()	(cpu_is_mx21() || cpu_is_mx27())
