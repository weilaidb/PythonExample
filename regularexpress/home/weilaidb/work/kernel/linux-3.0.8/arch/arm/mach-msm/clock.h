#define __ARCH_ARM_MACH_MSM_CLOCK_H
#define CLKFLAG_INVERT			0x00000001
#define CLKFLAG_NOINVERT		0x00000002
#define CLKFLAG_NONEST			0x00000004
#define CLKFLAG_NORESET			0x00000008
#define CLK_FIRST_AVAILABLE_FLAG	0x00000100
#define CLKFLAG_AUTO_OFF		0x00000200
#define CLKFLAG_MIN			0x00000400
#define CLKFLAG_MAX			0x00000800
struct clk_ops ;
struct clk ;
#define OFF CLKFLAG_AUTO_OFF
#define CLK_MIN CLKFLAG_MIN
#define CLK_MAX CLKFLAG_MAX
#define CLK_MINMAX (CLK_MIN | CLK_MAX)
int __init clock_debug_init(void);
int __init clock_debug_add(struct clk *clock);
static inline int __init clock_debug_init(void)
static inline int __init clock_debug_add(struct clk *clock)
