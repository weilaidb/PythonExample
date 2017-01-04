#if KERNEL_ELFCLASS == ELFCLASS32
typedef Elf32_Addr	kernel_ulong_t;
#define BITS_PER_LONG 32
typedef Elf64_Addr	kernel_ulong_t;
#define BITS_PER_LONG 64
typedef uint32_t	__u32;
typedef uint16_t	__u16;
typedef unsigned char	__u8;
#define ADD(str, sep, cond, field)                              \
do  while(0)
static inline void add_wildcard(char *str)
unsigned int cross_build = 0;
static void device_id_check(const char *modname, const char *device_id,
unsigned long size, unsigned long id_size,
void *symval)
static void do_usb_entry(struct usb_device_id *id,
unsigned int bcdDevice_initial, int bcdDevice_initial_digits,
unsigned char range_lo, unsigned char range_hi,
unsigned char max, struct module *mod)
static unsigned int incbcd(unsigned int *bcd,
int inc,
unsigned char max,
size_t chars)
static void do_usb_entry_multi(struct usb_device_id *id, struct module *mod)
static void do_usb_table(void *symval, unsigned long size,
struct module *mod)
static int do_hid_entry(const char *filename,
struct hid_device_id *id, char *alias)
static int do_ieee1394_entry(const char *filename,
struct ieee1394_device_id *id, char *alias)
static int do_pci_entry(const char *filename,
struct pci_device_id *id, char *alias)
static int do_ccw_entry(const char *filename,
struct ccw_device_id *id, char *alias)
static int do_ap_entry(const char *filename,
struct ap_device_id *id, char *alias)
static int do_css_entry(const char *filename,
struct css_device_id *id, char *alias)
static int do_serio_entry(const char *filename,
struct serio_device_id *id, char *alias)
static int do_acpi_entry(const char *filename,
struct acpi_device_id *id, char *alias)
static void do_pnp_device_entry(void *symval, unsigned long size,
struct module *mod)
static void do_pnp_card_entries(void *symval, unsigned long size,
struct module *mod)
static int do_pcmcia_entry(const char *filename,
struct pcmcia_device_id *id, char *alias)
static int do_of_entry (const char *filename, struct of_device_id *of, char *alias)
static int do_vio_entry(const char *filename, struct vio_device_id *vio,
char *alias)
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
static void do_input(char *alias,
kernel_ulong_t *arr, unsigned int min, unsigned int max)
static int do_input_entry(const char *filename, struct input_device_id *id,
char *alias)
static int do_eisa_entry(const char *filename, struct eisa_device_id *eisa,
char *alias)
static int do_parisc_entry(const char *filename, struct parisc_device_id *id,
char *alias)
static int do_sdio_entry(const char *filename,
struct sdio_device_id *id, char *alias)
static int do_ssb_entry(const char *filename,
struct ssb_device_id *id, char *alias)
static int do_bcma_entry(const char *filename,
struct bcma_device_id *id, char *alias)
static int do_virtio_entry(const char *filename, struct virtio_device_id *id,
char *alias)
static int do_i2c_entry(const char *filename, struct i2c_device_id *id,
char *alias)
static int do_spi_entry(const char *filename, struct spi_device_id *id,
char *alias)
static const struct dmifield  dmi_fields[] = ;
static void dmi_ascii_filter(char *d, const char *s)
static int do_dmi_entry(const char *filename, struct dmi_system_id *id,
char *alias)
static int do_platform_entry(const char *filename,
struct platform_device_id *id, char *alias)
static int do_mdio_entry(const char *filename,
struct mdio_device_id *id, char *alias)
static int do_zorro_entry(const char *filename, struct zorro_device_id *id,
char *alias)
static int do_isapnp_entry(const char *filename,
struct isapnp_device_id *id, char *alias)
static inline int sym_is(const char *symbol, const char *name)
static void do_table(void *symval, unsigned long size,
unsigned long id_size,
const char *device_id,
void *function,
struct module *mod)
void handle_moddevtable(struct module *mod, struct elf_info *info,
Elf_Sym *sym, const char *symname)
void add_moddevtable(struct buffer *buf, struct module *mod)
