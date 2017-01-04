#define TFP410_VID		0x014C
#define TFP410_DID		0x0410
#define TFP410_VID_LO		0x00
#define TFP410_VID_HI		0x01
#define TFP410_DID_LO		0x02
#define TFP410_DID_HI		0x03
#define TFP410_REV		0x04
#define TFP410_CTL_1		0x08
#define TFP410_CTL_1_TDIS	(1<<6)
#define TFP410_CTL_1_VEN	(1<<5)
#define TFP410_CTL_1_HEN	(1<<4)
#define TFP410_CTL_1_DSEL	(1<<3)
#define TFP410_CTL_1_BSEL	(1<<2)
#define TFP410_CTL_1_EDGE	(1<<1)
#define TFP410_CTL_1_PD		(1<<0)
#define TFP410_CTL_2		0x09
#define TFP410_CTL_2_VLOW	(1<<7)
#define TFP410_CTL_2_MSEL_MASK	(0x7<<4)
#define TFP410_CTL_2_MSEL	(1<<4)
#define TFP410_CTL_2_TSEL	(1<<3)
#define TFP410_CTL_2_RSEN	(1<<2)
#define TFP410_CTL_2_HTPLG	(1<<1)
#define TFP410_CTL_2_MDI	(1<<0)
#define TFP410_CTL_3		0x0A
#define TFP410_CTL_3_DK_MASK 	(0x7<<5)
#define TFP410_CTL_3_DK		(1<<5)
#define TFP410_CTL_3_DKEN	(1<<4)
#define TFP410_CTL_3_CTL_MASK	(0x7<<1)
#define TFP410_CTL_3_CTL	(1<<1)
#define TFP410_USERCFG		0x0B
#define TFP410_DE_DLY		0x32
#define TFP410_DE_CTL		0x33
#define TFP410_DE_CTL_DEGEN	(1<<6)
#define TFP410_DE_CTL_VSPOL	(1<<5)
#define TFP410_DE_CTL_HSPOL	(1<<4)
#define TFP410_DE_CTL_DEDLY8	(1<<0)
#define TFP410_DE_TOP		0x34
#define TFP410_DE_CNT_LO	0x36
#define TFP410_DE_CNT_HI	0x37
#define TFP410_DE_LIN_LO	0x38
#define TFP410_DE_LIN_HI	0x39
#define TFP410_H_RES_LO		0x3A
#define TFP410_H_RES_HI		0x3B
#define TFP410_V_RES_LO		0x3C
#define TFP410_V_RES_HI		0x3D
struct tfp410_priv ;
static bool tfp410_readb(struct intel_dvo_device *dvo, int addr, uint8_t *ch)
static bool tfp410_writeb(struct intel_dvo_device *dvo, int addr, uint8_t ch)
static int tfp410_getid(struct intel_dvo_device *dvo, int addr)
static bool tfp410_init(struct intel_dvo_device *dvo,
struct i2c_adapter *adapter)
static enum drm_connector_status tfp410_detect(struct intel_dvo_device *dvo)
static enum drm_mode_status tfp410_mode_valid(struct intel_dvo_device *dvo,
struct drm_display_mode *mode)
static void tfp410_mode_set(struct intel_dvo_device *dvo,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void tfp410_dpms(struct intel_dvo_device *dvo, int mode)
static void tfp410_dump_regs(struct intel_dvo_device *dvo)
static void tfp410_destroy(struct intel_dvo_device *dvo)
struct intel_dvo_dev_ops tfp410_ops = ;
