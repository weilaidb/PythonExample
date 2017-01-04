static const u_char mantissa[] = ;
static const u_int exponent[] = ;
#define SPEED_CVT(v) \
(mantissa[(((v)>>3)&15)-1] * exponent[(v)&7] / 10)
#define POWER_CVT(v) \
(mantissa[((v)>>3)&15] * exponent[(v)&7] / 10)
#define POWER_SCALE(v)		(exponent[(v)&7])
#define MAX_TUPLES		200
#define IRQ_INFO2_VALID		0x10
static int cis_width;
module_param(cis_width, int, 0444);
void release_cis_mem(struct pcmcia_socket *s)
static void __iomem *set_cis_map(struct pcmcia_socket *s,
unsigned int card_offset, unsigned int flags)
#define IS_ATTR		1
#define IS_INDIRECT	8
int pcmcia_read_cis_mem(struct pcmcia_socket *s, int attr, u_int addr,
u_int len, void *ptr)
int pcmcia_write_cis_mem(struct pcmcia_socket *s, int attr, u_int addr,
u_int len, void *ptr)
static int read_cis_cache(struct pcmcia_socket *s, int attr, u_int addr,
size_t len, void *ptr)
static void
remove_cis_cache(struct pcmcia_socket *s, int attr, u_int addr, u_int len)
void destroy_cis_cache(struct pcmcia_socket *s)
int verify_cis_cache(struct pcmcia_socket *s)
int pcmcia_replace_cis(struct pcmcia_socket *s,
const u8 *data, const size_t len)
typedef struct tuple_flags  tuple_flags;
#define LINK_SPACE(f)	(((tuple_flags *)(&(f)))->link_space)
#define HAS_LINK(f)	(((tuple_flags *)(&(f)))->has_link)
#define MFC_FN(f)	(((tuple_flags *)(&(f)))->mfc_fn)
#define SPACE(f)	(((tuple_flags *)(&(f)))->space)
int pccard_get_first_tuple(struct pcmcia_socket *s, unsigned int function,
tuple_t *tuple)
static int follow_link(struct pcmcia_socket *s, tuple_t *tuple)
int pccard_get_next_tuple(struct pcmcia_socket *s, unsigned int function,
tuple_t *tuple)
int pccard_get_tuple_data(struct pcmcia_socket *s, tuple_t *tuple)
static int parse_device(tuple_t *tuple, cistpl_device_t *device)
static int parse_checksum(tuple_t *tuple, cistpl_checksum_t *csum)
static int parse_longlink(tuple_t *tuple, cistpl_longlink_t *link)
static int parse_longlink_mfc(tuple_t *tuple, cistpl_longlink_mfc_t *link)
static int parse_strings(u_char *p, u_char *q, int max,
char *s, u_char *ofs, u_char *found)
static int parse_vers_1(tuple_t *tuple, cistpl_vers_1_t *vers_1)
static int parse_altstr(tuple_t *tuple, cistpl_altstr_t *altstr)
static int parse_jedec(tuple_t *tuple, cistpl_jedec_t *jedec)
static int parse_manfid(tuple_t *tuple, cistpl_manfid_t *m)
static int parse_funcid(tuple_t *tuple, cistpl_funcid_t *f)
static int parse_funce(tuple_t *tuple, cistpl_funce_t *f)
static int parse_config(tuple_t *tuple, cistpl_config_t *config)
static u_char *parse_power(u_char *p, u_char *q, cistpl_power_t *pwr)
static u_char *parse_timing(u_char *p, u_char *q, cistpl_timing_t *timing)
static u_char *parse_io(u_char *p, u_char *q, cistpl_io_t *io)
static u_char *parse_mem(u_char *p, u_char *q, cistpl_mem_t *mem)
static u_char *parse_irq(u_char *p, u_char *q, cistpl_irq_t *irq)
static int parse_cftable_entry(tuple_t *tuple,
cistpl_cftable_entry_t *entry)
static int parse_device_geo(tuple_t *tuple, cistpl_device_geo_t *geo)
static int parse_vers_2(tuple_t *tuple, cistpl_vers_2_t *v2)
static int parse_org(tuple_t *tuple, cistpl_org_t *org)
static int parse_format(tuple_t *tuple, cistpl_format_t *fmt)
int pcmcia_parse_tuple(tuple_t *tuple, cisparse_t *parse)
EXPORT_SYMBOL(pcmcia_parse_tuple);
int pccard_validate_cis(struct pcmcia_socket *s, unsigned int *info)
#define to_socket(_dev) container_of(_dev, struct pcmcia_socket, dev)
static ssize_t pccard_extract_cis(struct pcmcia_socket *s, char *buf,
loff_t off, size_t count)
static ssize_t pccard_show_cis(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t pccard_store_cis(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
struct bin_attribute pccard_cis_attr = ;
