#define __LINUX_MFD_STMPE_H
enum stmpe_block ;
enum stmpe_partnum ;
enum ;
struct stmpe_variant_info;
struct stmpe ;
extern int stmpe_reg_write(struct stmpe *stmpe, u8 reg, u8 data);
extern int stmpe_reg_read(struct stmpe *stmpe, u8 reg);
extern int stmpe_block_read(struct stmpe *stmpe, u8 reg, u8 length,
u8 *values);
extern int stmpe_block_write(struct stmpe *stmpe, u8 reg, u8 length,
const u8 *values);
extern int stmpe_set_bits(struct stmpe *stmpe, u8 reg, u8 mask, u8 val);
extern int stmpe_set_altfunc(struct stmpe *stmpe, u32 pins,
enum stmpe_block block);
extern int stmpe_enable(struct stmpe *stmpe, unsigned int blocks);
extern int stmpe_disable(struct stmpe *stmpe, unsigned int blocks);
struct matrix_keymap_data;
struct stmpe_keypad_platform_data ;
#define STMPE_GPIO_NOREQ_811_TOUCH	(0xf0)
struct stmpe_gpio_platform_data ;
struct stmpe_ts_platform_data ;
struct stmpe_platform_data ;
#define STMPE_NR_INTERNAL_IRQS	9
#define STMPE_INT_GPIO(x)	(STMPE_NR_INTERNAL_IRQS + (x))
#define STMPE_NR_GPIOS		24
#define STMPE_NR_IRQS		STMPE_INT_GPIO(STMPE_NR_GPIOS)
