#define WACOM_PL_RES		20
#define WACOM_PENPRTN_RES	40
#define WACOM_VOLITO_RES	50
#define WACOM_GRAPHIRE_RES	80
#define WACOM_INTUOS_RES	100
#define WACOM_INTUOS3_RES	200
static int wacom_penpartner_irq(struct wacom_wac *wacom)
static int wacom_pl_irq(struct wacom_wac *wacom)
static int wacom_ptu_irq(struct wacom_wac *wacom)
static int wacom_dtu_irq(struct wacom_wac *wacom)
static int wacom_graphire_irq(struct wacom_wac *wacom)
static int wacom_intuos_inout(struct wacom_wac *wacom)
static void wacom_intuos_general(struct wacom_wac *wacom)
static int wacom_intuos_irq(struct wacom_wac *wacom)
static int wacom_tpc_mt_touch(struct wacom_wac *wacom)
static int wacom_tpc_single_touch(struct wacom_wac *wacom, size_t len)
static int wacom_tpc_pen(struct wacom_wac *wacom)
static int wacom_tpc_irq(struct wacom_wac *wacom, size_t len)
static int wacom_bpt_touch(struct wacom_wac *wacom)
static int wacom_bpt_pen(struct wacom_wac *wacom)
static int wacom_bpt_irq(struct wacom_wac *wacom, size_t len)
void wacom_wac_irq(struct wacom_wac *wacom_wac, size_t len)
static void wacom_setup_cintiq(struct wacom_wac *wacom_wac)
static void wacom_setup_intuos(struct wacom_wac *wacom_wac)
void wacom_setup_device_quirks(struct wacom_features *features)
static unsigned int wacom_calculate_touch_res(unsigned int logical_max,
unsigned int physical_max)
void wacom_setup_input_capabilities(struct input_dev *input_dev,
struct wacom_wac *wacom_wac)
static const struct wacom_features wacom_features_0x00 =
;
static const struct wacom_features wacom_features_0x10 =
;
static const struct wacom_features wacom_features_0x11 =
;
static const struct wacom_features wacom_features_0x12 =
;
static const struct wacom_features wacom_features_0x13 =
;
static const struct wacom_features wacom_features_0x14 =
;
static const struct wacom_features wacom_features_0x15 =
;
static const struct wacom_features wacom_features_0x16 =
;
static const struct wacom_features wacom_features_0x17 =
;
static const struct wacom_features wacom_features_0x18 =
;
static const struct wacom_features wacom_features_0x19 =
;
static const struct wacom_features wacom_features_0x60 =
;
static const struct wacom_features wacom_features_0x61 =
;
static const struct wacom_features wacom_features_0x62 =
;
static const struct wacom_features wacom_features_0x63 =
;
static const struct wacom_features wacom_features_0x64 =
;
static const struct wacom_features wacom_features_0x65 =
;
static const struct wacom_features wacom_features_0x69 =
;
static const struct wacom_features wacom_features_0x20 =
;
static const struct wacom_features wacom_features_0x21 =
;
static const struct wacom_features wacom_features_0x22 =
;
static const struct wacom_features wacom_features_0x23 =
;
static const struct wacom_features wacom_features_0x24 =
;
static const struct wacom_features wacom_features_0x30 =
;
static const struct wacom_features wacom_features_0x31 =
;
static const struct wacom_features wacom_features_0x32 =
;
static const struct wacom_features wacom_features_0x33 =
;
static const struct wacom_features wacom_features_0x34 =
;
static const struct wacom_features wacom_features_0x35 =
;
static const struct wacom_features wacom_features_0x37 =
;
static const struct wacom_features wacom_features_0x38 =
;
static const struct wacom_features wacom_features_0x39 =
;
static const struct wacom_features wacom_features_0xC4 =
;
static const struct wacom_features wacom_features_0xC0 =
;
static const struct wacom_features wacom_features_0xC2 =
;
static const struct wacom_features wacom_features_0x03 =
;
static const struct wacom_features wacom_features_0x41 =
;
static const struct wacom_features wacom_features_0x42 =
;
static const struct wacom_features wacom_features_0x43 =
;
static const struct wacom_features wacom_features_0x44 =
;
static const struct wacom_features wacom_features_0x45 =
;
static const struct wacom_features wacom_features_0xB0 =
;
static const struct wacom_features wacom_features_0xB1 =
;
static const struct wacom_features wacom_features_0xB2 =
;
static const struct wacom_features wacom_features_0xB3 =
;
static const struct wacom_features wacom_features_0xB4 =
;
static const struct wacom_features wacom_features_0xB5 =
;
static const struct wacom_features wacom_features_0xB7 =
;
static const struct wacom_features wacom_features_0xB8 =
;
static const struct wacom_features wacom_features_0xB9 =
;
static const struct wacom_features wacom_features_0xBA =
;
static const struct wacom_features wacom_features_0xBB =
;
static const struct wacom_features wacom_features_0xBC =
;
static const struct wacom_features wacom_features_0x3F =
;
static const struct wacom_features wacom_features_0xC5 =
;
static const struct wacom_features wacom_features_0xC6 =
;
static const struct wacom_features wacom_features_0xC7 =
;
static const struct wacom_features wacom_features_0xCE =
;
static const struct wacom_features wacom_features_0xF0 =
;
static const struct wacom_features wacom_features_0xCC =
;
static const struct wacom_features wacom_features_0x90 =
;
static const struct wacom_features wacom_features_0x93 =
;
static const struct wacom_features wacom_features_0x9A =
;
static const struct wacom_features wacom_features_0x9F =
;
static const struct wacom_features wacom_features_0xE2 =
;
static const struct wacom_features wacom_features_0xE3 =
;
static const struct wacom_features wacom_features_0xE6 =
;
static const struct wacom_features wacom_features_0x47 =
;
static const struct wacom_features wacom_features_0xD0 =
;
static const struct wacom_features wacom_features_0xD1 =
;
static const struct wacom_features wacom_features_0xD2 =
;
static const struct wacom_features wacom_features_0xD3 =
;
static const struct wacom_features wacom_features_0xD4 =
;
static const struct wacom_features wacom_features_0xD6 =
;
static const struct wacom_features wacom_features_0xD7 =
;
static const struct wacom_features wacom_features_0xD8 =
;
static const struct wacom_features wacom_features_0xDA =
;
static struct wacom_features wacom_features_0xDB =
;
static const struct wacom_features wacom_features_0x6004 =
;
#define USB_DEVICE_WACOM(prod)					\
USB_DEVICE(USB_VENDOR_ID_WACOM, prod),			\
.driver_info = (kernel_ulong_t)&wacom_features_##prod
#define USB_DEVICE_LENOVO(prod)					\
USB_DEVICE(USB_VENDOR_ID_LENOVO, prod),			\
.driver_info = (kernel_ulong_t)&wacom_features_##prod
const struct usb_device_id wacom_ids[] = ;
MODULE_DEVICE_TABLE(usb, wacom_ids);
