#define __RADEONFB_H__
#define DEBUG		1
#if defined(CONFIG_PPC_OF) || defined(CONFIG_SPARC)
enum radeon_family ;
#define IS_RV100_VARIANT(rinfo) (((rinfo)->family == CHIP_FAMILY_RV100)  || \
((rinfo)->family == CHIP_FAMILY_RV200)  || \
((rinfo)->family == CHIP_FAMILY_RS100)  || \
((rinfo)->family == CHIP_FAMILY_RS200)  || \
((rinfo)->family == CHIP_FAMILY_RV250)  || \
((rinfo)->family == CHIP_FAMILY_RV280)  || \
((rinfo)->family == CHIP_FAMILY_RS300))
#define IS_R300_VARIANT(rinfo) (((rinfo)->family == CHIP_FAMILY_R300)  || \
((rinfo)->family == CHIP_FAMILY_RV350) || \
((rinfo)->family == CHIP_FAMILY_R350)  || \
((rinfo)->family == CHIP_FAMILY_RV380) || \
((rinfo)->family == CHIP_FAMILY_R420)  || \
((rinfo)->family == CHIP_FAMILY_RC410) || \
((rinfo)->family == CHIP_FAMILY_RS480))
enum radeon_chip_flags ;
enum radeon_errata ;
enum radeon_montype ;
enum ddc_type ;
enum conn_type ;
struct pll_info ;
struct radeon_regs ;
struct panel_info ;
struct radeonfb_info;
struct radeon_i2c_chan ;
enum radeon_pm_mode ;
typedef void (*reinit_function_ptr)(struct radeonfb_info *rinfo);
struct radeonfb_info ;
#define PRIMARY_MONITOR(rinfo)	(rinfo->mon1_type)
static inline void _radeon_msleep(struct radeonfb_info *rinfo, unsigned long ms)
#define INREG8(addr)		readb((rinfo->mmio_base)+addr)
#define OUTREG8(addr,val)	writeb(val, (rinfo->mmio_base)+addr)
#define INREG16(addr)		readw((rinfo->mmio_base)+addr)
#define OUTREG16(addr,val)	writew(val, (rinfo->mmio_base)+addr)
#define INREG(addr)		readl((rinfo->mmio_base)+addr)
#define OUTREG(addr,val)	writel(val, (rinfo->mmio_base)+addr)
static inline void _OUTREGP(struct radeonfb_info *rinfo, u32 addr,
u32 val, u32 mask)
#define OUTREGP(addr,val,mask)	_OUTREGP(rinfo, addr, val,mask)
static inline void radeon_pll_errata_after_index(struct radeonfb_info *rinfo)
static inline void radeon_pll_errata_after_data(struct radeonfb_info *rinfo)
static inline u32 __INPLL(struct radeonfb_info *rinfo, u32 addr)
static inline void __OUTPLL(struct radeonfb_info *rinfo, unsigned int index,
u32 val)
static inline void __OUTPLLP(struct radeonfb_info *rinfo, unsigned int index,
u32 val, u32 mask)
#define INPLL(addr)			__INPLL(rinfo, addr)
#define OUTPLL(index, val)		__OUTPLL(rinfo, index, val)
#define OUTPLLP(index, val, mask)	__OUTPLLP(rinfo, index, val, mask)
#define BIOS_IN8(v)  	(readb(rinfo->bios_seg + (v)))
#define BIOS_IN16(v) 	(readb(rinfo->bios_seg + (v)) | \
(readb(rinfo->bios_seg + (v) + 1) << 8))
#define BIOS_IN32(v) 	(readb(rinfo->bios_seg + (v)) | \
(readb(rinfo->bios_seg + (v) + 1) << 8) | \
(readb(rinfo->bios_seg + (v) + 2) << 16) | \
(readb(rinfo->bios_seg + (v) + 3) << 24))
static inline int round_div(int num, int den)
static inline int var_to_depth(const struct fb_var_screeninfo *var)
static inline u32 radeon_get_dstbpp(u16 depth)
static inline void _radeon_fifo_wait(struct radeonfb_info *rinfo, int entries)
static inline void radeon_engine_flush (struct radeonfb_info *rinfo)
static inline void _radeon_engine_idle(struct radeonfb_info *rinfo)
#define radeon_engine_idle()		_radeon_engine_idle(rinfo)
#define radeon_fifo_wait(entries)	_radeon_fifo_wait(rinfo,entries)
#define radeon_msleep(ms)		_radeon_msleep(rinfo,ms)
extern void radeon_create_i2c_busses(struct radeonfb_info *rinfo);
extern void radeon_delete_i2c_busses(struct radeonfb_info *rinfo);
extern int radeon_probe_i2c_connector(struct radeonfb_info *rinfo, int conn, u8 **out_edid);
extern int radeonfb_pci_suspend(struct pci_dev *pdev, pm_message_t state);
extern int radeonfb_pci_resume(struct pci_dev *pdev);
extern void radeonfb_pm_init(struct radeonfb_info *rinfo, int dynclk, int ignore_devlist, int force_sleep);
extern void radeonfb_pm_exit(struct radeonfb_info *rinfo);
extern void radeon_probe_screens(struct radeonfb_info *rinfo,
const char *monitor_layout, int ignore_edid);
extern void radeon_check_modes(struct radeonfb_info *rinfo, const char *mode_option);
extern int radeon_match_mode(struct radeonfb_info *rinfo,
struct fb_var_screeninfo *dest,
const struct fb_var_screeninfo *src);
extern void radeonfb_fillrect(struct fb_info *info, const struct fb_fillrect *region);
extern void radeonfb_copyarea(struct fb_info *info, const struct fb_copyarea *area);
extern void radeonfb_imageblit(struct fb_info *p, const struct fb_image *image);
extern int radeonfb_sync(struct fb_info *info);
extern void radeonfb_engine_init (struct radeonfb_info *rinfo);
extern void radeonfb_engine_reset(struct radeonfb_info *rinfo);
extern int radeon_screen_blank(struct radeonfb_info *rinfo, int blank, int mode_switch);
extern void radeon_write_mode (struct radeonfb_info *rinfo, struct radeon_regs *mode,
int reg_only);
extern void radeonfb_bl_init(struct radeonfb_info *rinfo);
extern void radeonfb_bl_exit(struct radeonfb_info *rinfo);
static inline void radeonfb_bl_init(struct radeonfb_info *rinfo)
static inline void radeonfb_bl_exit(struct radeonfb_info *rinfo)
