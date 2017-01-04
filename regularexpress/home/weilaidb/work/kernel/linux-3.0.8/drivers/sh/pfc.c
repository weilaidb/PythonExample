#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int enum_in_range(pinmux_enum_t enum_id, struct pinmux_range *r)
static unsigned long gpio_read_raw_reg(unsigned long reg,
unsigned long reg_width)
static void gpio_write_raw_reg(unsigned long reg,
unsigned long reg_width,
unsigned long data)
static void gpio_write_bit(struct pinmux_data_reg *dr,
unsigned long in_pos, unsigned long value)
static int gpio_read_reg(unsigned long reg, unsigned long reg_width,
unsigned long field_width, unsigned long in_pos)
static void gpio_write_reg(unsigned long reg, unsigned long reg_width,
unsigned long field_width, unsigned long in_pos,
unsigned long value)
static int setup_data_reg(struct pinmux_info *gpioc, unsigned gpio)
static void setup_data_regs(struct pinmux_info *gpioc)
static int get_data_reg(struct pinmux_info *gpioc, unsigned gpio,
struct pinmux_data_reg **drp, int *bitp)
static int get_config_reg(struct pinmux_info *gpioc, pinmux_enum_t enum_id,
struct pinmux_cfg_reg **crp, int *indexp,
unsigned long **cntp)
static int get_gpio_enum_id(struct pinmux_info *gpioc, unsigned gpio,
int pos, pinmux_enum_t *enum_idp)
static void write_config_reg(struct pinmux_info *gpioc,
struct pinmux_cfg_reg *crp,
int index)
static int check_config_reg(struct pinmux_info *gpioc,
struct pinmux_cfg_reg *crp,
int index)
enum ;
static int pinmux_config_gpio(struct pinmux_info *gpioc, unsigned gpio,
int pinmux_type, int cfg_mode)
static DEFINE_SPINLOCK(gpio_lock);
static struct pinmux_info *chip_to_pinmux(struct gpio_chip *chip)
static int sh_gpio_request(struct gpio_chip *chip, unsigned offset)
static void sh_gpio_free(struct gpio_chip *chip, unsigned offset)
static int pinmux_direction(struct pinmux_info *gpioc,
unsigned gpio, int new_pinmux_type)
static int sh_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static void sh_gpio_set_value(struct pinmux_info *gpioc,
unsigned gpio, int value)
static int sh_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static int sh_gpio_get_value(struct pinmux_info *gpioc, unsigned gpio)
static int sh_gpio_get(struct gpio_chip *chip, unsigned offset)
static void sh_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
int register_pinmux(struct pinmux_info *pip)
int unregister_pinmux(struct pinmux_info *pip)
