#define SIL164_VID 0x0001
#define SIL164_DID 0x0006
#define SIL164_VID_LO 0x00
#define SIL164_VID_HI 0x01
#define SIL164_DID_LO 0x02
#define SIL164_DID_HI 0x03
#define SIL164_REV    0x04
#define SIL164_RSVD   0x05
#define SIL164_FREQ_LO 0x06
#define SIL164_FREQ_HI 0x07
#define SIL164_REG8 0x08
#define SIL164_8_VEN (1<<5)
#define SIL164_8_HEN (1<<4)
#define SIL164_8_DSEL (1<<3)
#define SIL164_8_BSEL (1<<2)
#define SIL164_8_EDGE (1<<1)
#define SIL164_8_PD   (1<<0)
#define SIL164_REG9 0x09
#define SIL164_9_VLOW (1<<7)
#define SIL164_9_MSEL_MASK (0x7<<4)
#define SIL164_9_TSEL (1<<3)
#define SIL164_9_RSEN (1<<2)
#define SIL164_9_HTPLG (1<<1)
#define SIL164_9_MDI (1<<0)
#define SIL164_REGC 0x0c
struct sil164_priv ;
#define SILPTR(d) ((SIL164Ptr)(d->DriverPrivate.ptr))
static bool sil164_readb(struct intel_dvo_device *dvo, int addr, uint8_t *ch)
static bool sil164_writeb(struct intel_dvo_device *dvo, int addr, uint8_t ch)
static bool sil164_init(struct intel_dvo_device *dvo,
struct i2c_adapter *adapter)
static enum drm_connector_status sil164_detect(struct intel_dvo_device *dvo)
static enum drm_mode_status sil164_mode_valid(struct intel_dvo_device *dvo,
struct drm_display_mode *mode)
static void sil164_mode_set(struct intel_dvo_device *dvo,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void sil164_dpms(struct intel_dvo_device *dvo, int mode)
static void sil164_dump_regs(struct intel_dvo_device *dvo)
static void sil164_destroy(struct intel_dvo_device *dvo)
struct intel_dvo_dev_ops sil164_ops = ;
