#define DBG(s)
#define SETS(var, reg, field, val) var = (var & ~IO_MASK_(reg##_, field##_)) | \
IO_STATE_(reg##_, field##_, _##val)
enum io_if_group ;
struct watcher
;
struct if_group
;
struct interface
;
static struct if_group if_groups[6] = ;
static struct interface interfaces[] = ;
static struct watcher *watchers = NULL;
static unsigned int gpio_in_pins =  0xffffffff;
static unsigned int gpio_out_pins = 0xffffffff;
static unsigned char gpio_pb_pins = 0xff;
static unsigned char gpio_pa_pins = 0xff;
static enum cris_io_interface gpio_pa_owners[8];
static enum cris_io_interface gpio_pb_owners[8];
static enum cris_io_interface gpio_pg_owners[32];
static int cris_io_interface_init(void);
static unsigned char clear_group_from_set(const unsigned char groups, struct if_group *group)
static struct if_group *get_group(const unsigned char groups)
static void notify_watchers(void)
int cris_request_io_interface(enum cris_io_interface ioif, const char *device_id)
void cris_free_io_interface(enum cris_io_interface ioif)
static inline unsigned int create_mask(const unsigned stop_bit)
int cris_io_interface_allocate_pins(const enum cris_io_interface ioif,
const char port,
const unsigned start_bit,
const unsigned stop_bit)
int cris_io_interface_free_pins(const enum cris_io_interface ioif,
const char port,
const unsigned start_bit,
const unsigned stop_bit)
int cris_io_interface_register_watcher(void (*notify)(const unsigned int gpio_in_available,
const unsigned int gpio_out_available,
const unsigned char pa_available,
const unsigned char pb_available))
void cris_io_interface_delete_watcher(void (*notify)(const unsigned int gpio_in_available,
const unsigned int gpio_out_available,
const unsigned char pa_available,
const unsigned char pb_available))
static int cris_io_interface_init(void)
module_init(cris_io_interface_init);
EXPORT_SYMBOL(cris_request_io_interface);
EXPORT_SYMBOL(cris_free_io_interface);
EXPORT_SYMBOL(cris_io_interface_allocate_pins);
EXPORT_SYMBOL(cris_io_interface_free_pins);
EXPORT_SYMBOL(cris_io_interface_register_watcher);
EXPORT_SYMBOL(cris_io_interface_delete_watcher);
