#define MODULE_NAME		"omapfb-sossi"
#define OMAP_SOSSI_BASE         0xfffbac00
#define SOSSI_ID_REG		0x00
#define SOSSI_INIT1_REG		0x04
#define SOSSI_INIT2_REG		0x08
#define SOSSI_INIT3_REG		0x0c
#define SOSSI_FIFO_REG		0x10
#define SOSSI_REOTABLE_REG	0x14
#define SOSSI_TEARING_REG	0x18
#define SOSSI_INIT1B_REG	0x1c
#define SOSSI_FIFOB_REG		0x20
#define DMA_GSCR          0xfffedc04
#define DMA_LCD_CCR       0xfffee3c2
#define DMA_LCD_CTRL      0xfffee3c4
#define DMA_LCD_LCH_CTRL  0xfffee3ea
#define CONF_SOSSI_RESET_R      (1 << 23)
#define RD_ACCESS		0
#define WR_ACCESS		1
#define SOSSI_MAX_XMIT_BYTES	(512 * 1024)
static struct  sossi;
static inline u32 sossi_read_reg(int reg)
static inline u16 sossi_read_reg16(int reg)
static inline u8 sossi_read_reg8(int reg)
static inline void sossi_write_reg(int reg, u32 value)
static inline void sossi_write_reg16(int reg, u16 value)
static inline void sossi_write_reg8(int reg, u8 value)
static void sossi_set_bits(int reg, u32 bits)
static void sossi_clear_bits(int reg, u32 bits)
#define HZ_TO_PS(x)	(1000000000 / (x / 1000))
static u32 ps_to_sossi_ticks(u32 ps, int div)
static int calc_rd_timings(struct extif_timings *t)
static int calc_wr_timings(struct extif_timings *t)
static void _set_timing(int div, int tw0, int tw1)
static void _set_bits_per_cycle(int bus_pick_count, int bus_pick_width)
static void _set_tearsync_mode(int mode, unsigned line)
static inline void set_timing(int access)
static void sossi_start_transfer(void)
static void sossi_stop_transfer(void)
static void wait_end_of_write(void)
static void send_data(const void *data, unsigned int len)
static void set_cycles(unsigned int len)
static int sossi_convert_timings(struct extif_timings *t)
static void sossi_set_timings(const struct extif_timings *t)
static void sossi_get_clk_info(u32 *clk_period, u32 *max_clk_div)
static void sossi_set_bits_per_cycle(int bpc)
static int sossi_setup_tearsync(unsigned pin_cnt,
unsigned hs_pulse_time, unsigned vs_pulse_time,
int hs_pol_inv, int vs_pol_inv, int div)
static int sossi_enable_tearsync(int enable, unsigned line)
static void sossi_write_command(const void *data, unsigned int len)
static void sossi_write_data(const void *data, unsigned int len)
static void sossi_transfer_area(int width, int height,
void (callback)(void *data), void *data)
static void sossi_dma_callback(void *data)
static void sossi_read_data(void *data, unsigned int len)
static irqreturn_t sossi_match_irq(int irq, void *data)
static int sossi_init(struct omapfb_device *fbdev)
static void sossi_cleanup(void)
struct lcd_ctrl_extif omap1_ext_if = ;
