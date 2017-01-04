MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VPSS Driver");
MODULE_AUTHOR("Texas Instruments");
#define DM644X_SBL_PCR_VPSS		(4)
#define DM355_VPSSBL_INTSEL		0x10
#define DM355_VPSSBL_EVTSEL		0x14
#define DM355_VPSSBL_CCDCMUX		0x1c
#define DM355_VPSSCLK_CLKCTRL		0x04
#define VPSS_HSSISEL_SHIFT		4
#define DM355_VPSSBL_INTSEL_DEFAULT	0xff83ff10
#define DM355_VPSSBL_EVTSEL_DEFAULT	0x4
#define DM365_ISP5_PCCR 		0x04
#define DM365_ISP5_INTSEL1		0x10
#define DM365_ISP5_INTSEL2		0x14
#define DM365_ISP5_INTSEL3		0x18
#define DM365_ISP5_CCDCMUX 		0x20
#define DM365_ISP5_PG_FRAME_SIZE 	0x28
#define DM365_VPBE_CLK_CTRL 		0x00
#define DM365_ISP5_INTSEL1_DEFAULT	0x0b1f0100
#define DM365_ISP5_INTSEL2_DEFAULT	0x1f0a0f1f
#define DM365_ISP5_INTSEL3_DEFAULT	0x00000015
#define DM365_CCDC_PG_VD_POL_SHIFT 	0
#define DM365_CCDC_PG_HD_POL_SHIFT 	1
#define CCD_SRC_SEL_MASK		(BIT_MASK(5) | BIT_MASK(4))
#define CCD_SRC_SEL_SHIFT		4
enum vpss_platform_type ;
struct vpss_hw_ops ;
struct vpss_oper_config ;
static struct vpss_oper_config oper_cfg;
static inline u32 bl_regr(u32 offset)
static inline void bl_regw(u32 val, u32 offset)
static inline u32 vpss_regr(u32 offset)
static inline void vpss_regw(u32 val, u32 offset)
static inline u32 isp5_read(u32 offset)
static inline void isp5_write(u32 val, u32 offset)
static void dm365_select_ccdc_source(enum vpss_ccdc_source_sel src_sel)
static void dm355_select_ccdc_source(enum vpss_ccdc_source_sel src_sel)
int vpss_select_ccdc_source(enum vpss_ccdc_source_sel src_sel)
EXPORT_SYMBOL(vpss_select_ccdc_source);
static int dm644x_clear_wbl_overflow(enum vpss_wbl_sel wbl_sel)
int vpss_clear_wbl_overflow(enum vpss_wbl_sel wbl_sel)
EXPORT_SYMBOL(vpss_clear_wbl_overflow);
static int dm355_enable_clock(enum vpss_clock_sel clock_sel, int en)
static int dm365_enable_clock(enum vpss_clock_sel clock_sel, int en)
int vpss_enable_clock(enum vpss_clock_sel clock_sel, int en)
EXPORT_SYMBOL(vpss_enable_clock);
void dm365_vpss_set_sync_pol(struct vpss_sync_pol sync)
EXPORT_SYMBOL(dm365_vpss_set_sync_pol);
void dm365_vpss_set_pg_frame_size(struct vpss_pg_frame_size frame_size)
EXPORT_SYMBOL(dm365_vpss_set_pg_frame_size);
static int __init vpss_probe(struct platform_device *pdev)
static int __devexit vpss_remove(struct platform_device *pdev)
static struct platform_driver vpss_driver = ;
static void vpss_exit(void)
static int __init vpss_init(void)
subsys_initcall(vpss_init);
module_exit(vpss_exit);
