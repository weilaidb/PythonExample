#define _1(fn, pfx, sfx) fn(pfx, sfx)
#define _10(fn, pfx, sfx)				\
_1(fn, pfx##0, sfx), _1(fn, pfx##1, sfx),	\
_1(fn, pfx##2, sfx), _1(fn, pfx##3, sfx),	\
_1(fn, pfx##4, sfx), _1(fn, pfx##5, sfx),	\
_1(fn, pfx##6, sfx), _1(fn, pfx##7, sfx),	\
_1(fn, pfx##8, sfx), _1(fn, pfx##9, sfx)
#define _80(fn, pfx, sfx)				\
_10(fn, pfx##1, sfx),	_10(fn, pfx##2, sfx),	\
_10(fn, pfx##3, sfx),	_10(fn, pfx##4, sfx),	\
_10(fn, pfx##5, sfx),	_10(fn, pfx##6, sfx),	\
_10(fn, pfx##7, sfx),	_10(fn, pfx##8, sfx)
#define _190(fn, pfx, sfx) \
_10(fn, pfx, sfx), _80(fn, pfx, sfx), _10(fn, pfx##9, sfx), \
_10(fn, pfx##10, sfx), _80(fn, pfx##1, sfx), _1(fn, pfx##190, sfx)
#define _PORT(pfx, sfx) pfx##_##sfx
#define PORT_ALL(str) _190(_PORT, PORT, str)
enum ;
#define _I___D(nr)			     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PD)
#define _I__U_(nr)			     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PU)
#define _I__UD(nr)			     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PD, PORT##nr##_IN_PU)
#define __O___(nr)							\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT)
#define _IO___(nr)				     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN)
#define _IO__D(nr)					     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PD)
#define _IO_U_(nr)					     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PU)
#define _IO_UD(nr)					     \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PD, PORT##nr##_IN_PU)
static pinmux_enum_t pinmux_data[] = ;
#define _GPIO_PORT(pfx, sfx) PINMUX_GPIO(GPIO_PORT##pfx, PORT##pfx##_DATA)
#define GPIO_PORT_ALL() _190(_GPIO_PORT, , unused)
#define GPIO_FN(str) PINMUX_GPIO(GPIO_FN_##str, str##_MARK)
static struct pinmux_gpio pinmux_gpios[] = ;
#define PCRH(in, in_pd, in_pu, out)		\
0, (out), (in), 0,			\
0, 0, 0, 0,				\
0, 0, (in_pd), 0,			\
0, 0, (in_pu), 0
#define PORTCR(nr, reg)						\
static struct pinmux_cfg_reg pinmux_config_regs[] = ;
static struct pinmux_data_reg pinmux_data_regs[] = ;
static struct pinmux_info sh7372_pinmux_info = ;
void sh7372_pinmux_init(void)
