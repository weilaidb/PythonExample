static const struct hid_blacklist  hid_blacklist[] = ;
struct quirks_list_struct ;
static LIST_HEAD(dquirks_list);
static DECLARE_RWSEM(dquirks_rwsem);
static struct hid_blacklist *usbhid_exists_dquirk(const u16 idVendor,
const u16 idProduct)
static int usbhid_modify_dquirk(const u16 idVendor, const u16 idProduct,
const u32 quirks)
static void usbhid_remove_all_dquirks(void)
int usbhid_quirks_init(char **quirks_param)
void usbhid_quirks_exit(void)
static const struct hid_blacklist *usbhid_exists_squirk(const u16 idVendor,
const u16 idProduct)
u32 usbhid_lookup_quirk(const u16 idVendor, const u16 idProduct)
EXPORT_SYMBOL_GPL(usbhid_lookup_quirk);
