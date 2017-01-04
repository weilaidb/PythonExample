#define CH7xxx_REG_VID		0x4a
#define CH7xxx_REG_DID		0x4b
#define CH7011_VID		0x83
#define CH7009A_VID		0x84
#define CH7009B_VID		0x85
#define CH7301_VID		0x95
#define CH7xxx_VID		0x84
#define CH7xxx_DID		0x17
#define CH7xxx_NUM_REGS		0x4c
#define CH7xxx_CM		0x1c
#define CH7xxx_CM_XCM		(1<<0)
#define CH7xxx_CM_MCP		(1<<2)
#define CH7xxx_INPUT_CLOCK	0x1d
#define CH7xxx_GPIO		0x1e
#define CH7xxx_GPIO_HPIR	(1<<3)
#define CH7xxx_IDF		0x1f
#define CH7xxx_IDF_HSP		(1<<3)
#define CH7xxx_IDF_VSP		(1<<4)
#define CH7xxx_CONNECTION_DETECT 0x20
#define CH7xxx_CDET_DVI		(1<<5)
#define CH7301_DAC_CNTL		0x21
#define CH7301_HOTPLUG		0x23
#define CH7xxx_TCTL		0x31
#define CH7xxx_TVCO		0x32
#define CH7xxx_TPCP		0x33
#define CH7xxx_TPD		0x34
#define CH7xxx_TPVT		0x35
#define CH7xxx_TLPF		0x36
#define CH7xxx_TCT		0x37
#define CH7301_TEST_PATTERN	0x48
#define CH7xxx_PM		0x49
#define CH7xxx_PM_FPD		(1<<0)
#define CH7301_PM_DACPD0	(1<<1)
#define CH7301_PM_DACPD1	(1<<2)
#define CH7301_PM_DACPD2	(1<<3)
#define CH7xxx_PM_DVIL		(1<<6)
#define CH7xxx_PM_DVIP		(1<<7)
#define CH7301_SYNC_POLARITY	0x56
#define CH7301_SYNC_RGB_YUV	(1<<0)
#define CH7301_SYNC_POL_DVI	(1<<5)
static struct ch7xxx_id_struct  ch7xxx_ids[] = ;
struct ch7xxx_priv ;
static char *ch7xxx_get_id(uint8_t vid)
static bool ch7xxx_readb(struct intel_dvo_device *dvo, int addr, uint8_t *ch)
static bool ch7xxx_writeb(struct intel_dvo_device *dvo, int addr, uint8_t ch)
static bool ch7xxx_init(struct intel_dvo_device *dvo,
struct i2c_adapter *adapter)
static enum drm_connector_status ch7xxx_detect(struct intel_dvo_device *dvo)
static enum drm_mode_status ch7xxx_mode_valid(struct intel_dvo_device *dvo,
struct drm_display_mode *mode)
static void ch7xxx_mode_set(struct intel_dvo_device *dvo,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void ch7xxx_dpms(struct intel_dvo_device *dvo, int mode)
static void ch7xxx_dump_regs(struct intel_dvo_device *dvo)
static void ch7xxx_destroy(struct intel_dvo_device *dvo)
struct intel_dvo_dev_ops ch7xxx_ops = ;
