#define _1(fn, pfx, sfx) fn(pfx, sfx)
#define _10(fn, pfx, sfx)				\
_1(fn, pfx##0, sfx), _1(fn, pfx##1, sfx),	\
_1(fn, pfx##2, sfx), _1(fn, pfx##3, sfx),	\
_1(fn, pfx##4, sfx), _1(fn, pfx##5, sfx),	\
_1(fn, pfx##6, sfx), _1(fn, pfx##7, sfx),	\
_1(fn, pfx##8, sfx), _1(fn, pfx##9, sfx)
#define _310(fn, pfx, sfx)				\
_10(fn, pfx,    sfx), _10(fn, pfx##1, sfx),	\
_10(fn, pfx##2, sfx), _10(fn, pfx##3, sfx),	\
_10(fn, pfx##4, sfx), _10(fn, pfx##5, sfx),	\
_10(fn, pfx##6, sfx), _10(fn, pfx##7, sfx),	\
_10(fn, pfx##8, sfx), _10(fn, pfx##9, sfx),	\
_10(fn, pfx##10, sfx),				\
_1(fn, pfx##110, sfx), _1(fn, pfx##111, sfx),	\
_1(fn, pfx##112, sfx), _1(fn, pfx##113, sfx),	\
_1(fn, pfx##114, sfx), _1(fn, pfx##115, sfx),	\
_1(fn, pfx##116, sfx), _1(fn, pfx##117, sfx),	\
_1(fn, pfx##118, sfx),				\
_1(fn, pfx##128, sfx), _1(fn, pfx##129, sfx),	\
_10(fn, pfx##13, sfx), _10(fn, pfx##14, sfx),	\
_10(fn, pfx##15, sfx),				\
_1(fn, pfx##160, sfx), _1(fn, pfx##161, sfx),	\
_1(fn, pfx##162, sfx), _1(fn, pfx##163, sfx),	\
_1(fn, pfx##164, sfx),				\
_1(fn, pfx##192, sfx), _1(fn, pfx##193, sfx),	\
_1(fn, pfx##194, sfx), _1(fn, pfx##195, sfx),	\
_1(fn, pfx##196, sfx), _1(fn, pfx##197, sfx),	\
_1(fn, pfx##198, sfx), _1(fn, pfx##199, sfx),	\
_10(fn, pfx##20, sfx), _10(fn, pfx##21, sfx),	\
_10(fn, pfx##22, sfx), _10(fn, pfx##23, sfx),	\
_10(fn, pfx##24, sfx), _10(fn, pfx##25, sfx),	\
_10(fn, pfx##26, sfx), _10(fn, pfx##27, sfx),	\
_1(fn, pfx##280, sfx), _1(fn, pfx##281, sfx),	\
_1(fn, pfx##282, sfx),				\
_1(fn, pfx##288, sfx), _1(fn, pfx##289, sfx),	\
_10(fn, pfx##29, sfx), _10(fn, pfx##30, sfx)
#define _PORT(pfx, sfx) pfx##_##sfx
#define PORT_310(str) _310(_PORT, PORT, str)
enum ;
#define PORT_DATA_I(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0, PORT##nr##_IN)
#define PORT_DATA_I_PD(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_IN, PORT##nr##_IN_PD)
#define PORT_DATA_I_PU(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_IN, PORT##nr##_IN_PU)
#define PORT_DATA_I_PU_PD(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_IN, PORT##nr##_IN_PD,	\
PORT##nr##_IN_PU)
#define PORT_DATA_O(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_OUT)
#define PORT_DATA_IO(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_OUT, PORT##nr##_IN)
#define PORT_DATA_IO_PD(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_OUT, PORT##nr##_IN,		\
PORT##nr##_IN_PD)
#define PORT_DATA_IO_PU(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_OUT, PORT##nr##_IN,		\
PORT##nr##_IN_PU)
#define PORT_DATA_IO_PU_PD(nr)	\
PINMUX_DATA(PORT##nr##_DATA, PORT##nr##_FN0,	\
PORT##nr##_OUT, PORT##nr##_IN,		\
PORT##nr##_IN_PD, PORT##nr##_IN_PU)
static pinmux_enum_t pinmux_data[] = ;
#define _GPIO_PORT(pfx, sfx) PINMUX_GPIO(GPIO_PORT##pfx, PORT##pfx##_DATA)
#define GPIO_PORT_310() _310(_GPIO_PORT, , unused)
#define GPIO_FN(str) PINMUX_GPIO(GPIO_FN_##str, str##_MARK)
static struct pinmux_gpio pinmux_gpios[] = ;
#define PORTCR(nr, reg)	\
static struct pinmux_cfg_reg pinmux_config_regs[] = ;
static struct pinmux_data_reg pinmux_data_regs[] = ;
static struct pinmux_info sh73a0_pinmux_info = ;
void sh73a0_pinmux_init(void)
