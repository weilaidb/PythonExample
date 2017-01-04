struct uwb_est ;
static struct uwb_est *uwb_est;
static u8 uwb_est_size;
static u8 uwb_est_used;
static DEFINE_RWLOCK(uwb_est_lock);
static
struct uwb_est_entry uwb_est_00_00xx[] = ;
static
struct uwb_est_entry uwb_est_01_00xx[] = ;
int uwb_est_create(void)
void uwb_est_destroy(void)
static
int uwb_est_grow(void)
int uwb_est_register(u8 type, u8 event_high, u16 vendor, u16 product,
const struct uwb_est_entry *entry, size_t entries)
EXPORT_SYMBOL_GPL(uwb_est_register);
int uwb_est_unregister(u8 type, u8 event_high, u16 vendor, u16 product,
const struct uwb_est_entry *entry, size_t entries)
EXPORT_SYMBOL_GPL(uwb_est_unregister);
static
ssize_t uwb_est_get_size(struct uwb_rc *uwb_rc, struct uwb_est *est,
u8 event_low, const struct uwb_rceb *rceb,
size_t rceb_size)
ssize_t uwb_est_find_size(struct uwb_rc *rc, const struct uwb_rceb *rceb,
size_t rceb_size)
EXPORT_SYMBOL_GPL(uwb_est_find_size);
