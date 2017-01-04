#define __MB862XX_H__
struct mb862xx_l1_cfg ;
#define MB862XX_BASE		'M'
#define MB862XX_L1_GET_CFG	_IOR(MB862XX_BASE, 0, struct mb862xx_l1_cfg*)
#define MB862XX_L1_SET_CFG	_IOW(MB862XX_BASE, 1, struct mb862xx_l1_cfg*)
#define MB862XX_L1_ENABLE	_IOW(MB862XX_BASE, 2, int)
#define MB862XX_L1_CAP_CTL	_IOW(MB862XX_BASE, 3, int)
#define PCI_VENDOR_ID_FUJITSU_LIMITED	0x10cf
#define PCI_DEVICE_ID_FUJITSU_CORALP	0x2019
#define PCI_DEVICE_ID_FUJITSU_CORALPA	0x201e
#define PCI_DEVICE_ID_FUJITSU_CARMINE	0x202b
#define GC_MMR_CORALP_EVB_VAL		0x11d7fa13
enum gdctype ;
struct mb862xx_gc_mode ;
struct mb862xxfb_par ;
extern void mb862xxfb_init_accel(struct fb_info *info, int xres);
extern int mb862xx_i2c_init(struct mb862xxfb_par *par);
extern void mb862xx_i2c_exit(struct mb862xxfb_par *par);
static inline int mb862xx_i2c_init(struct mb862xxfb_par *par)
static inline void mb862xx_i2c_exit(struct mb862xxfb_par *par)
#if defined(CONFIG_FB_MB862XX_LIME) && defined(CONFIG_FB_MB862XX_PCI_GDC)
#error	"Select Lime GDC or CoralP/Carmine support, but not both together"
#if defined(CONFIG_FB_MB862XX_LIME)
#define gdc_read	__raw_readl
#define gdc_write	__raw_writel
#define gdc_read	readl
#define gdc_write	writel
#define inreg(type, off)	\
gdc_read((par->type + (off)))
#define outreg(type, off, val)	\
gdc_write((val), (par->type + (off)))
#define pack(a, b)	(((a) << 16) | (b))
