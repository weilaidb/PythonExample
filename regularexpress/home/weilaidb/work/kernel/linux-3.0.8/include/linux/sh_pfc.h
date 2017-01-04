#define __SH_PFC_H
typedef unsigned short pinmux_enum_t;
typedef unsigned short pinmux_flag_t;
#define PINMUX_TYPE_NONE            0
#define PINMUX_TYPE_FUNCTION        1
#define PINMUX_TYPE_GPIO            2
#define PINMUX_TYPE_OUTPUT          3
#define PINMUX_TYPE_INPUT           4
#define PINMUX_TYPE_INPUT_PULLUP    5
#define PINMUX_TYPE_INPUT_PULLDOWN  6
#define PINMUX_FLAG_TYPE            (0x7)
#define PINMUX_FLAG_WANT_PULLUP     (1 << 3)
#define PINMUX_FLAG_WANT_PULLDOWN   (1 << 4)
#define PINMUX_FLAG_DBIT_SHIFT      5
#define PINMUX_FLAG_DBIT            (0x1f << PINMUX_FLAG_DBIT_SHIFT)
#define PINMUX_FLAG_DREG_SHIFT      10
#define PINMUX_FLAG_DREG            (0x3f << PINMUX_FLAG_DREG_SHIFT)
struct pinmux_gpio ;
#define PINMUX_GPIO(gpio, data_or_mark) [gpio] =
#define PINMUX_DATA(data_or_mark, ids...) data_or_mark, ids, 0
struct pinmux_cfg_reg ;
#define PINMUX_CFG_REG(name, r, r_width, f_width) \
.reg = r, .reg_width = r_width, .field_width = f_width,		\
.cnt = (unsigned long [r_width / f_width]) , \
.enum_ids = (pinmux_enum_t [(r_width / f_width) * (1 << f_width)]) \
struct pinmux_data_reg ;
#define PINMUX_DATA_REG(name, r, r_width) \
.reg = r, .reg_width = r_width,	\
.enum_ids = (pinmux_enum_t [r_width]) \
struct pinmux_range ;
struct pinmux_info ;
int register_pinmux(struct pinmux_info *pip);
int unregister_pinmux(struct pinmux_info *pip);
