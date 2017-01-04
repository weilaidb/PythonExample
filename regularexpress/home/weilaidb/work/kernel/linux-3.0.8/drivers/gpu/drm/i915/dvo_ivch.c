#define VR00		0x00
# define VR00_BASE_ADDRESS_MASK		0x007f
#define VR01		0x01
# define VR01_PANEL_FIT_ENABLE		(1 << 3)
# define VR01_LCD_ENABLE		(1 << 2)
# define VR01_DVO_BYPASS_ENABLE		(1 << 1)
# define VR01_DVO_ENABLE		(1 << 0)
#define VR10		0x10
# define VR10_LVDS_ENABLE		(1 << 4)
# define VR10_INTERFACE_1X18		(0 << 2)
# define VR10_INTERFACE_1X24		(1 << 2)
# define VR10_INTERFACE_2X18		(2 << 2)
# define VR10_INTERFACE_2X24		(3 << 2)
#define VR20	0x20
#define VR21	0x20
#define VR30		0x30
# define VR30_PANEL_ON			(1 << 15)
#define VR40		0x40
# define VR40_STALL_ENABLE		(1 << 13)
# define VR40_VERTICAL_INTERP_ENABLE	(1 << 12)
# define VR40_ENHANCED_PANEL_FITTING	(1 << 11)
# define VR40_HORIZONTAL_INTERP_ENABLE	(1 << 10)
# define VR40_AUTO_RATIO_ENABLE		(1 << 9)
# define VR40_CLOCK_GATING_ENABLE	(1 << 8)
#define VR41		0x41
#define VR42		0x42
#define VR43		0x43
#define VR80	    0x80
#define VR81	    0x81
#define VR82	    0x82
#define VR83	    0x83
#define VR84	    0x84
#define VR85	    0x85
#define VR86	    0x86
#define VR87	    0x87
#define VR88	    0x88
#define VR8E	    0x8E
# define VR8E_PANEL_TYPE_MASK		(0xf << 0)
# define VR8E_PANEL_INTERFACE_CMOS	(0 << 4)
# define VR8E_PANEL_INTERFACE_LVDS	(1 << 4)
# define VR8E_FORCE_DEFAULT_PANEL	(1 << 5)
#define VR8F	    0x8F
# define VR8F_VCH_PRESENT		(1 << 0)
# define VR8F_DISPLAY_CONN		(1 << 1)
# define VR8F_POWER_MASK		(0x3c)
# define VR8F_POWER_POS			(2)
struct ivch_priv ;
static void ivch_dump_regs(struct intel_dvo_device *dvo);
static bool ivch_read(struct intel_dvo_device *dvo, int addr, uint16_t *data)
static bool ivch_write(struct intel_dvo_device *dvo, int addr, uint16_t data)
static bool ivch_init(struct intel_dvo_device *dvo,
struct i2c_adapter *adapter)
static enum drm_connector_status ivch_detect(struct intel_dvo_device *dvo)
static enum drm_mode_status ivch_mode_valid(struct intel_dvo_device *dvo,
struct drm_display_mode *mode)
static void ivch_dpms(struct intel_dvo_device *dvo, int mode)
static void ivch_mode_set(struct intel_dvo_device *dvo,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void ivch_dump_regs(struct intel_dvo_device *dvo)
static void ivch_destroy(struct intel_dvo_device *dvo)
struct intel_dvo_dev_ops ivch_ops= ;
