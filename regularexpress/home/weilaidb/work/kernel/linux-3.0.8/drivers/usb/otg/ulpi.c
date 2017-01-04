struct ulpi_info ;
#define ULPI_ID(vendor, product) (((vendor) << 16) | (product))
#define ULPI_INFO(_id, _name)		\
static struct ulpi_info ulpi_ids[] = ;
static int ulpi_set_otg_flags(struct otg_transceiver *otg)
static int ulpi_set_fc_flags(struct otg_transceiver *otg)
static int ulpi_set_ic_flags(struct otg_transceiver *otg)
static int ulpi_set_flags(struct otg_transceiver *otg)
static int ulpi_check_integrity(struct otg_transceiver *otg)
static int ulpi_init(struct otg_transceiver *otg)
static int ulpi_set_host(struct otg_transceiver *otg, struct usb_bus *host)
static int ulpi_set_vbus(struct otg_transceiver *otg, bool on)
struct otg_transceiver *
otg_ulpi_create(struct otg_io_access_ops *ops,
unsigned int flags)
EXPORT_SYMBOL_GPL(otg_ulpi_create);
