#define AT93C_ADDR_SHIFT	7
#define AT93C_ADDR_MAX		((1 << AT93C_ADDR_SHIFT) - 1)
#define AT93C_RCMD		(0x6 << AT93C_ADDR_SHIFT)
#define AT93C_WCMD		(0x5 << AT93C_ADDR_SHIFT)
#define AT93C_WENCMD		0x260
#define AT93C_WDSCMD		0x200
struct at93c_defs *at93c;
static void at93c_reg_write(u32 val)
static u32 at93c_reg_read(void)
static u32 at93c_datareg_read(void)
static void at93c_cycle_clk(u32 data)
static void at93c_write_databit(u8 bit)
static unsigned int at93c_read_databit(void)
static u8 at93c_read_byte(void)
static void at93c_write_bits(u32 data, int size)
static void at93c_init_op(void)
static void at93c_end_op(void)
static void at93c_wait(void)
;
static void at93c_disable_wp(void)
static void at93c_enable_wp(void)
u8 at93c_read(u8 addr)
void at93c_write(u8 addr, u8 data)
