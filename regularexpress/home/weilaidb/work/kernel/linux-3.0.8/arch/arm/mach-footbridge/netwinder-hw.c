#define IRDA_IO_BASE		0x180
#define GP1_IO_BASE		0x338
#define GP2_IO_BASE		0x33a
#define DEFAULT_LEDS	0
#define DEFAULT_LEDS	GPIO_GREEN_LED
static inline void wb977_open(void)
static inline void wb977_close(void)
static inline void wb977_wb(int reg, int val)
static inline void wb977_ww(int reg, int val)
#define wb977_device_select(dev)	wb977_wb(0x07, dev)
#define wb977_device_disable()		wb977_wb(0x30, 0x00)
#define wb977_device_enable()		wb977_wb(0x30, 0x01)
DEFINE_SPINLOCK(nw_gpio_lock);
EXPORT_SYMBOL(nw_gpio_lock);
static unsigned int current_gpio_op;
static unsigned int current_gpio_io;
static unsigned int current_cpld;
void nw_gpio_modify_op(unsigned int mask, unsigned int set)
EXPORT_SYMBOL(nw_gpio_modify_op);
static inline void __gpio_modify_io(int mask, int in)
void nw_gpio_modify_io(unsigned int mask, unsigned int in)
EXPORT_SYMBOL(nw_gpio_modify_io);
unsigned int nw_gpio_read(void)
EXPORT_SYMBOL(nw_gpio_read);
static inline void wb977_init_global(void)
static inline void wb977_init_printer(void)
static inline void wb977_init_keyboard(void)
static inline void wb977_init_irda(void)
static inline void wb977_init_gpio(void)
static void __init wb977_init(void)
void nw_cpld_modify(unsigned int mask, unsigned int set)
EXPORT_SYMBOL(nw_cpld_modify);
static void __init cpld_init(void)
static unsigned char rwa_unlock[] __initdata =
;
#define dprintk(x...)
#define dprintk(x...) printk(x)
#define WRITE_RWA(r,v) do  while (0)
static inline void rwa010_unlock(void)
static inline void rwa010_read_ident(void)
static inline void rwa010_global_init(void)
static inline void rwa010_game_port_init(void)
static inline void rwa010_waveartist_init(int base, int irq, int dma)
static inline void rwa010_soundblaster_init(int sb_base, int al_base, int irq, int dma)
static void rwa010_soundblaster_reset(void)
static void __init rwa010_init(void)
static int __init nw_hw_init(void)
__initcall(nw_hw_init);
static void __init
fixup_netwinder(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(NETWINDER, "Rebel-NetWinder")
.boot_params	= 0x00000100,
.video_start	= 0x000a0000,
.video_end	= 0x000bffff,
.reserve_lp0	= 1,
.reserve_lp2	= 1,
.fixup		= fixup_netwinder,
.map_io		= footbridge_map_io,
.init_irq	= footbridge_init_irq,
.timer		= &isa_timer,
MACHINE_END
