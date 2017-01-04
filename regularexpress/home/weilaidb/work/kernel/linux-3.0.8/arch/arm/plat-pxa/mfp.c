#define MFPR_SIZE	(PAGE_SIZE)
#define MFPR_PULL_SEL		(0x1 << 15)
#define MFPR_PULLUP_EN		(0x1 << 14)
#define MFPR_PULLDOWN_EN	(0x1 << 13)
#define MFPR_SLEEP_SEL		(0x1 << 9)
#define MFPR_SLEEP_OE_N		(0x1 << 7)
#define MFPR_EDGE_CLEAR		(0x1 << 6)
#define MFPR_EDGE_FALL_EN	(0x1 << 5)
#define MFPR_EDGE_RISE_EN	(0x1 << 4)
#define MFPR_SLEEP_DATA(x)	((x) << 8)
#define MFPR_DRIVE(x)		(((x) & 0x7) << 10)
#define MFPR_AF_SEL(x)		(((x) & 0x7) << 0)
#define MFPR_EDGE_NONE		(0)
#define MFPR_EDGE_RISE		(MFPR_EDGE_RISE_EN)
#define MFPR_EDGE_FALL		(MFPR_EDGE_FALL_EN)
#define MFPR_EDGE_BOTH		(MFPR_EDGE_RISE | MFPR_EDGE_FALL)
#define MFPR_LPM_INPUT		(0)
#define MFPR_LPM_DRIVE_LOW	(MFPR_SLEEP_DATA(0) | MFPR_PULLDOWN_EN)
#define MFPR_LPM_DRIVE_HIGH    	(MFPR_SLEEP_DATA(1) | MFPR_PULLUP_EN)
#define MFPR_LPM_PULL_LOW      	(MFPR_LPM_DRIVE_LOW  | MFPR_SLEEP_OE_N)
#define MFPR_LPM_PULL_HIGH     	(MFPR_LPM_DRIVE_HIGH | MFPR_SLEEP_OE_N)
#define MFPR_LPM_FLOAT         	(MFPR_SLEEP_OE_N)
#define MFPR_LPM_MASK		(0xe080)
#define MFPR_PULL_NONE		(0)
#define MFPR_PULL_LOW		(MFPR_PULL_SEL | MFPR_PULLDOWN_EN)
#define MFPR_PULL_BOTH		(MFPR_PULL_LOW | MFPR_PULLUP_EN)
#define MFPR_PULL_HIGH		(MFPR_PULL_SEL | MFPR_PULLUP_EN)
#define MFPR_PULL_FLOAT		(MFPR_PULL_SEL)
static DEFINE_SPINLOCK(mfp_spin_lock);
static void __iomem *mfpr_mmio_base;
struct mfp_pin ;
static struct mfp_pin mfp_table[MFP_PIN_MAX];
static const unsigned long mfpr_lpm[] = ;
static const unsigned long mfpr_pull[] = ;
static const unsigned long mfpr_edge[] = ;
#define mfpr_readl(off)			\
__raw_readl(mfpr_mmio_base + (off))
#define mfpr_writel(off, val)		\
__raw_writel(val, mfpr_mmio_base + (off))
#define mfp_configured(p)	((p)->config != -1)
static unsigned long mfpr_off_readback;
#define mfpr_sync()	(void)__raw_readl(mfpr_mmio_base + mfpr_off_readback)
static inline void __mfp_config_run(struct mfp_pin *p)
static inline void __mfp_config_lpm(struct mfp_pin *p)
void mfp_config(unsigned long *mfp_cfgs, int num)
unsigned long mfp_read(int mfp)
void mfp_write(int mfp, unsigned long val)
void __init mfp_init_base(unsigned long mfpr_base)
void __init mfp_init_addr(struct mfp_addr_map *map)
void mfp_config_lpm(void)
void mfp_config_run(void)
