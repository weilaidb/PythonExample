#define PCI_ASLE 0xe4
#define PCI_ASLS 0xfc
#define OPREGION_HEADER_OFFSET 0
#define OPREGION_ACPI_OFFSET   0x100
#define   ACPI_CLID 0x01ac
#define   ACPI_CDCK 0x01b0
#define OPREGION_SWSCI_OFFSET  0x200
#define OPREGION_ASLE_OFFSET   0x300
#define OPREGION_VBT_OFFSET    0x400
#define OPREGION_SIGNATURE "IntelGraphicsMem"
#define MBOX_ACPI      (1<<0)
#define MBOX_SWSCI     (1<<1)
#define MBOX_ASLE      (1<<2)
struct opregion_header  __attribute__((packed));
struct opregion_acpi  __attribute__((packed));
struct opregion_swsci  __attribute__((packed));
struct opregion_asle  __attribute__((packed));
#define ASLE_SET_ALS_ILLUM     (1 << 0)
#define ASLE_SET_BACKLIGHT     (1 << 1)
#define ASLE_SET_PFIT          (1 << 2)
#define ASLE_SET_PWM_FREQ      (1 << 3)
#define ASLE_REQ_MSK           0xf
#define ASLE_ALS_ILLUM_FAILED	(1<<10)
#define ASLE_BACKLIGHT_FAILED	(1<<12)
#define ASLE_PFIT_FAILED	(1<<14)
#define ASLE_PWM_FREQ_FAILED	(1<<16)
#define ASLE_BCLP_VALID                (1<<31)
#define ASLE_BCLP_MSK          (~(1<<31))
#define ASLE_PFIT_VALID         (1<<31)
#define ASLE_PFIT_CENTER (1<<0)
#define ASLE_PFIT_STRETCH_TEXT (1<<1)
#define ASLE_PFIT_STRETCH_GFX (1<<2)
#define ASLE_PFMB_BRIGHTNESS_MASK (0xff)
#define ASLE_PFMB_BRIGHTNESS_VALID (1<<8)
#define ASLE_PFMB_PWM_MASK (0x7ffffe00)
#define ASLE_PFMB_PWM_VALID (1<<31)
#define ASLE_CBLV_VALID         (1<<31)
#define ACPI_OTHER_OUTPUT (0<<8)
#define ACPI_VGA_OUTPUT (1<<8)
#define ACPI_TV_OUTPUT (2<<8)
#define ACPI_DIGITAL_OUTPUT (3<<8)
#define ACPI_LVDS_OUTPUT (4<<8)
static u32 asle_set_backlight(struct drm_device *dev, u32 bclp)
static u32 asle_set_als_illum(struct drm_device *dev, u32 alsi)
static u32 asle_set_pwm_freq(struct drm_device *dev, u32 pfmb)
static u32 asle_set_pfit(struct drm_device *dev, u32 pfit)
void intel_opregion_asle_intr(struct drm_device *dev)
void intel_opregion_gse_intr(struct drm_device *dev)
#define ASLE_ALS_EN    (1<<0)
#define ASLE_BLC_EN    (1<<1)
#define ASLE_PFIT_EN   (1<<2)
#define ASLE_PFMB_EN   (1<<3)
void intel_opregion_enable_asle(struct drm_device *dev)
#define ACPI_EV_DISPLAY_SWITCH (1<<0)
#define ACPI_EV_LID            (1<<1)
#define ACPI_EV_DOCK           (1<<2)
static struct intel_opregion *system_opregion;
static int intel_opregion_video_event(struct notifier_block *nb,
unsigned long val, void *data)
static struct notifier_block intel_opregion_notifier = ;
static void intel_didl_outputs(struct drm_device *dev)
void intel_opregion_init(struct drm_device *dev)
void intel_opregion_fini(struct drm_device *dev)
int intel_opregion_setup(struct drm_device *dev)
