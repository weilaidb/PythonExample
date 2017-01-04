static inline u64 omap3_l3_readll(void __iomem *base, u16 reg)
static inline void omap3_l3_writell(void __iomem *base, u16 reg, u64 value)
static inline enum omap3_l3_code omap3_l3_decode_error_code(u64 error)
static inline u32 omap3_l3_decode_addr(u64 error_addr)
static inline unsigned omap3_l3_decode_cmd(u64 error)
static inline enum omap3_l3_initiator_id omap3_l3_decode_initid(u64 error)
static inline unsigned omap3_l3_decode_req_info(u64 error)
static char *omap3_l3_code_string(u8 code)
static char *omap3_l3_initiator_string(u8 initid)
static irqreturn_t omap3_l3_block_irq(struct omap3_l3 *l3,
u64 error, int error_addr)
static irqreturn_t omap3_l3_app_irq(int irq, void *_l3)
static int __init omap3_l3_probe(struct platform_device *pdev)
static int __exit omap3_l3_remove(struct platform_device *pdev)
static struct platform_driver omap3_l3_driver = ;
static int __init omap3_l3_init(void)
postcore_initcall_sync(omap3_l3_init);
static void __exit omap3_l3_exit(void)
module_exit(omap3_l3_exit);
