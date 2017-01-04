#define _1(fn, pfx, sfx) fn(pfx, sfx)
#define _10(fn, pfx, sfx)				\
_1(fn, pfx##0, sfx), _1(fn, pfx##1, sfx),	\
_1(fn, pfx##2, sfx), _1(fn, pfx##3, sfx),	\
_1(fn, pfx##4, sfx), _1(fn, pfx##5, sfx),	\
_1(fn, pfx##6, sfx), _1(fn, pfx##7, sfx),	\
_1(fn, pfx##8, sfx), _1(fn, pfx##9, sfx)
#define _90(fn, pfx, sfx)				\
_10(fn, pfx##1, sfx), _10(fn, pfx##2, sfx),	\
_10(fn, pfx##3, sfx), _10(fn, pfx##4, sfx),	\
_10(fn, pfx##5, sfx), _10(fn, pfx##6, sfx),	\
_10(fn, pfx##7, sfx), _10(fn, pfx##8, sfx),	\
_10(fn, pfx##9, sfx)
#define _273(fn, pfx, sfx)		\
_10(fn, pfx, sfx), _90(fn, pfx, sfx),		\
_10(fn, pfx##10, sfx), _90(fn, pfx##1, sfx),	\
_10(fn, pfx##20, sfx), _10(fn, pfx##21, sfx),	\
_10(fn, pfx##22, sfx), _10(fn, pfx##23, sfx),	\
_10(fn, pfx##24, sfx), _10(fn, pfx##25, sfx),	\
_10(fn, pfx##26, sfx), _1(fn, pfx##270, sfx),	\
_1(fn, pfx##271, sfx), _1(fn, pfx##272, sfx)
#define _PORT(pfx, sfx) pfx##_##sfx
#define PORT_273(str) _273(_PORT, PORT, str)
enum ;
#define PORT_DATA_I(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_IN)
#define PORT_DATA_I_PD(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PD)
#define PORT_DATA_I_PU(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PU)
#define PORT_DATA_I_PU_PD(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, \
PORT##nr##_IN, PORT##nr##_IN_PD, PORT##nr##_IN_PU)
#define PORT_DATA_O(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT)
#define PORT_DATA_IO(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN)
#define PORT_DATA_IO_PD(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PD)
#define PORT_DATA_IO_PU(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PU)
#define PORT_DATA_IO_PU_PD(nr) \
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_OUT, \
PORT##nr##_IN, PORT##nr##_IN_PD, PORT##nr##_IN_PU)
static pinmux_enum_t pinmux_data[] = ;
#define _GPIO_PORT(pfx, sfx) PINMUX_GPIO(GPIO_PORT##pfx, PORT##pfx##_DATA)
#define GPIO_PORT_273() _273(_GPIO_PORT, , unused)
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
static struct pinmux_info sh7367_pinmux_info = ;
void sh7367_pinmux_init(void)
