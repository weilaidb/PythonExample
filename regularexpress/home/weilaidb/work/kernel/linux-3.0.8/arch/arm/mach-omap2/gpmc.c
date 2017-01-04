#undef DEBUG
#define GPMC_REVISION		0x00
#define GPMC_SYSCONFIG		0x10
#define GPMC_SYSSTATUS		0x14
#define GPMC_IRQSTATUS		0x18
#define GPMC_IRQENABLE		0x1c
#define GPMC_TIMEOUT_CONTROL	0x40
#define GPMC_ERR_ADDRESS	0x44
#define GPMC_ERR_TYPE		0x48
#define GPMC_CONFIG		0x50
#define GPMC_STATUS		0x54
#define GPMC_PREFETCH_CONFIG1	0x1e0
#define GPMC_PREFETCH_CONFIG2	0x1e4
#define GPMC_PREFETCH_CONTROL	0x1ec
#define GPMC_PREFETCH_STATUS	0x1f0
#define GPMC_ECC_CONFIG		0x1f4
#define GPMC_ECC_CONTROL	0x1f8
#define GPMC_ECC_SIZE_CONFIG	0x1fc
#define GPMC_ECC1_RESULT        0x200
#define GPMC_CS0_OFFSET		0x60
#define GPMC_CS_SIZE		0x30
#define GPMC_MEM_START		0x00000000
#define GPMC_MEM_END		0x3FFFFFFF
#define BOOT_ROM_SPACE		0x100000
#define GPMC_CHUNK_SHIFT	24
#define GPMC_SECTION_SHIFT	28
#define CS_NUM_SHIFT		24
#define ENABLE_PREFETCH		(0x1 << 7)
#define DMA_MPU_MODE		2
struct gpmc_cs_config ;
struct omap3_gpmc_regs ;
static struct resource	gpmc_mem_root;
static struct resource	gpmc_cs_mem[GPMC_CS_NUM];
static DEFINE_SPINLOCK(gpmc_mem_lock);
static unsigned int gpmc_cs_map;
static int gpmc_ecc_used = -EINVAL;
static void __iomem *gpmc_base;
static struct clk *gpmc_l3_clk;
static irqreturn_t gpmc_handle_irq(int irq, void *dev);
static void gpmc_write_reg(int idx, u32 val)
static u32 gpmc_read_reg(int idx)
static void gpmc_cs_write_byte(int cs, int idx, u8 val)
static u8 gpmc_cs_read_byte(int cs, int idx)
void gpmc_cs_write_reg(int cs, int idx, u32 val)
u32 gpmc_cs_read_reg(int cs, int idx)
unsigned long gpmc_get_fclk_period(void)
unsigned int gpmc_ns_to_ticks(unsigned int time_ns)
unsigned int gpmc_ps_to_ticks(unsigned int time_ps)
unsigned int gpmc_ticks_to_ns(unsigned int ticks)
unsigned int gpmc_round_ns_to_ticks(unsigned int time_ns)
static int set_gpmc_timing_reg(int cs, int reg, int st_bit, int end_bit,
int time, const char *name)
static int set_gpmc_timing_reg(int cs, int reg, int st_bit, int end_bit,
int time)
#define GPMC_SET_ONE(reg, st, end, field) \
if (set_gpmc_timing_reg(cs, (reg), (st), (end),		\
t->field, #field) < 0)			\
return -1
#define GPMC_SET_ONE(reg, st, end, field) \
if (set_gpmc_timing_reg(cs, (reg), (st), (end), t->field) < 0) \
return -1
int gpmc_cs_calc_divider(int cs, unsigned int sync_clk)
int gpmc_cs_set_timings(int cs, const struct gpmc_timings *t)
static void gpmc_cs_enable_mem(int cs, u32 base, u32 size)
static void gpmc_cs_disable_mem(int cs)
static void gpmc_cs_get_memconf(int cs, u32 *base, u32 *size)
static int gpmc_cs_mem_enabled(int cs)
int gpmc_cs_set_reserved(int cs, int reserved)
int gpmc_cs_reserved(int cs)
static unsigned long gpmc_mem_align(unsigned long size)
static int gpmc_cs_insert_mem(int cs, unsigned long base, unsigned long size)
int gpmc_cs_request(int cs, unsigned long size, unsigned long *base)
EXPORT_SYMBOL(gpmc_cs_request);
void gpmc_cs_free(int cs)
EXPORT_SYMBOL(gpmc_cs_free);
int gpmc_read_status(int cmd)
EXPORT_SYMBOL(gpmc_read_status);
int gpmc_cs_configure(int cs, int cmd, int wval)
EXPORT_SYMBOL(gpmc_cs_configure);
int gpmc_nand_read(int cs, int cmd)
EXPORT_SYMBOL(gpmc_nand_read);
int gpmc_nand_write(int cs, int cmd, int wval)
EXPORT_SYMBOL(gpmc_nand_write);
int gpmc_prefetch_enable(int cs, int fifo_th, int dma_mode,
unsigned int u32_count, int is_write)
EXPORT_SYMBOL(gpmc_prefetch_enable);
int gpmc_prefetch_reset(int cs)
EXPORT_SYMBOL(gpmc_prefetch_reset);
static void __init gpmc_mem_init(void)
static int __init gpmc_init(void)
postcore_initcall(gpmc_init);
static irqreturn_t gpmc_handle_irq(int irq, void *dev)
static struct omap3_gpmc_regs gpmc_context;
void omap3_gpmc_save_context(void)
void omap3_gpmc_restore_context(void)
int gpmc_enable_hwecc(int cs, int mode, int dev_width, int ecc_size)
int gpmc_calculate_ecc(int cs, const u_char *dat, u_char *ecc_code)
