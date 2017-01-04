#define MExxCTL 0x0
#define MExxBSIZE 0x4
#define MExxMNCF 0x8
#define MExxSARA 0x10
#define MExxSARB 0x14
#define MExxSBSIZE 0x18
#define MERAM_MExxCTL_VAL(ctl, next_icb, addr)	\
((ctl) | (((next_icb) & 0x1f) << 11) | (((addr) & 0x7ff) << 16))
#define	MERAM_MExxBSIZE_VAL(a, b, c) \
(((a) << 28) | ((b) << 16) | (c))
#define MEVCR1 0x4
#define MEACTS 0x10
#define MEQSEL1 0x40
#define MEQSEL2 0x44
#define MERAM_SEC_LINE 15
#define MERAM_LINE_WIDTH 2048
#define MERAM_ICB_OFFSET(base, idx, off)	\
((base) + (0x400 + ((idx) * 0x20) + (off)))
static inline void meram_write_icb(void __iomem *base, int idx, int off,
unsigned long val)
static inline unsigned long meram_read_icb(void __iomem *base, int idx, int off)
static inline void meram_write_reg(void __iomem *base, int off,
unsigned long val)
static inline unsigned long meram_read_reg(void __iomem *base, int off)
#define MERAM_CACHE_START(p)	 ((p) >> 16)
#define MERAM_CACHE_END(p)	 ((p) & 0xffff)
#define MERAM_CACHE_SET(o, s)	 ((((o) & 0xffff) << 16) | \
(((o) + (s) - 1) & 0xffff))
static inline int meram_check_overlap(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_icb *new)
static inline void meram_mark(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_icb *new)
static inline void meram_unmark(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_icb *icb)
static inline int is_nvcolor(int cspace)
static inline void meram_set_next_addr(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_cfg *cfg,
unsigned long base_addr_y,
unsigned long base_addr_c)
static inline void meram_get_next_icb_addr(struct sh_mobile_meram_info *pdata,
struct sh_mobile_meram_cfg *cfg,
unsigned long *icb_addr_y,
unsigned long *icb_addr_c)
#define MERAM_CALC_BYTECOUNT(x, y) \
(((x) * (y) + (MERAM_LINE_WIDTH - 1)) & ~(MERAM_LINE_WIDTH - 1))
static int meram_init(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_icb *icb,
int xres, int yres, int *out_pitch)
static void meram_deinit(struct sh_mobile_meram_priv *priv,
struct sh_mobile_meram_icb *icb)
static int sh_mobile_meram_register(struct sh_mobile_meram_info *pdata,
struct sh_mobile_meram_cfg *cfg,
int xres, int yres, int pixelformat,
unsigned long base_addr_y,
unsigned long base_addr_c,
unsigned long *icb_addr_y,
unsigned long *icb_addr_c,
int *pitch)
static int sh_mobile_meram_unregister(struct sh_mobile_meram_info *pdata,
struct sh_mobile_meram_cfg *cfg)
static int sh_mobile_meram_update(struct sh_mobile_meram_info *pdata,
struct sh_mobile_meram_cfg *cfg,
unsigned long base_addr_y,
unsigned long base_addr_c,
unsigned long *icb_addr_y,
unsigned long *icb_addr_c)
static struct sh_mobile_meram_ops sh_mobile_meram_ops = ;
static int sh_mobile_meram_remove(struct platform_device *pdev);
static int __devinit sh_mobile_meram_probe(struct platform_device *pdev)
static int sh_mobile_meram_remove(struct platform_device *pdev)
static struct platform_driver sh_mobile_meram_driver = ;
static int __init sh_mobile_meram_init(void)
static void __exit sh_mobile_meram_exit(void)
module_init(sh_mobile_meram_init);
module_exit(sh_mobile_meram_exit);
MODULE_DESCRIPTION("SuperH Mobile MERAM driver");
MODULE_AUTHOR("Damian Hobson-Garcia / Takanari Hayama");
MODULE_LICENSE("GPL v2");
