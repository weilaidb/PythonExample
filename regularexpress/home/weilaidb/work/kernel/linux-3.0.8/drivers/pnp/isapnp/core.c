int isapnp_disable;
static int isapnp_rdp;
static int isapnp_reset = 1;
static int isapnp_verbose = 1;
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Generic ISA Plug & Play support");
module_param(isapnp_disable, int, 0);
MODULE_PARM_DESC(isapnp_disable, "ISA Plug & Play disable");
module_param(isapnp_rdp, int, 0);
MODULE_PARM_DESC(isapnp_rdp, "ISA Plug & Play read data port");
module_param(isapnp_reset, int, 0);
MODULE_PARM_DESC(isapnp_reset, "ISA Plug & Play reset all cards");
module_param(isapnp_verbose, int, 0);
MODULE_PARM_DESC(isapnp_verbose, "ISA Plug & Play verbose mode");
MODULE_LICENSE("GPL");
#define _PIDXR		0x279
#define _PNPWRP		0xa79
#define _STAG_PNPVERNO		0x01
#define _STAG_LOGDEVID		0x02
#define _STAG_COMPATDEVID	0x03
#define _STAG_IRQ		0x04
#define _STAG_DMA		0x05
#define _STAG_STARTDEP		0x06
#define _STAG_ENDDEP		0x07
#define _STAG_IOPORT		0x08
#define _STAG_FIXEDIO		0x09
#define _STAG_VENDOR		0x0e
#define _STAG_END		0x0f
#define _LTAG_MEMRANGE		0x81
#define _LTAG_ANSISTR		0x82
#define _LTAG_UNICODESTR	0x83
#define _LTAG_VENDOR		0x84
#define _LTAG_MEM32RANGE	0x85
#define _LTAG_FIXEDMEM32RANGE	0x86
#define ISAPNP_CFG_ACTIVATE	0x30
#define ISAPNP_CFG_MEM		0x40
#define ISAPNP_CFG_PORT		0x60
#define ISAPNP_CFG_IRQ		0x70
#define ISAPNP_CFG_DMA		0x74
#define ISAPNP_MAX_MEM		4
#define ISAPNP_MAX_PORT		8
#define ISAPNP_MAX_IRQ		2
#define ISAPNP_MAX_DMA		2
static unsigned char isapnp_checksum_value;
static DEFINE_MUTEX(isapnp_cfg_mutex);
static int isapnp_csn_count;
static inline void write_data(unsigned char x)
static inline void write_address(unsigned char x)
static inline unsigned char read_data(void)
unsigned char isapnp_read_byte(unsigned char idx)
static unsigned short isapnp_read_word(unsigned char idx)
void isapnp_write_byte(unsigned char idx, unsigned char val)
static void isapnp_write_word(unsigned char idx, unsigned short val)
static void isapnp_key(void)
static void isapnp_wait(void)
static void isapnp_wake(unsigned char csn)
static void isapnp_device(unsigned char logdev)
static void isapnp_activate(unsigned char logdev)
static void isapnp_deactivate(unsigned char logdev)
static void __init isapnp_peek(unsigned char *data, int bytes)
#define RDP_STEP	32
static int isapnp_next_rdp(void)
static inline void isapnp_set_rdp(void)
static int __init isapnp_isolate_rdp_select(void)
static int __init isapnp_isolate(void)
static int __init isapnp_read_tag(unsigned char *type, unsigned short *size)
static void __init isapnp_skip_bytes(int count)
static struct pnp_dev *__init isapnp_parse_device(struct pnp_card *card,
int size, int number)
static void __init isapnp_parse_irq_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_dma_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_port_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_fixed_port_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_mem_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_mem32_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init isapnp_parse_fixed_mem32_resource(struct pnp_dev *dev,
unsigned int option_flags,
int size)
static void __init
isapnp_parse_name(char *name, unsigned int name_max, unsigned short *size)
static int __init isapnp_create_device(struct pnp_card *card,
unsigned short size)
static void __init isapnp_parse_resource_map(struct pnp_card *card)
static unsigned char __init isapnp_checksum(unsigned char *data)
static int __init isapnp_build_device_list(void)
int isapnp_present(void)
int isapnp_cfg_begin(int csn, int logdev)
int isapnp_cfg_end(void)
EXPORT_SYMBOL(isapnp_protocol);
EXPORT_SYMBOL(isapnp_present);
EXPORT_SYMBOL(isapnp_cfg_begin);
EXPORT_SYMBOL(isapnp_cfg_end);
EXPORT_SYMBOL(isapnp_write_byte);
static int isapnp_get_resources(struct pnp_dev *dev)
static int isapnp_set_resources(struct pnp_dev *dev)
static int isapnp_disable_resources(struct pnp_dev *dev)
struct pnp_protocol isapnp_protocol = ;
static int __init isapnp_init(void)
device_initcall(isapnp_init);
static int __init isapnp_setup_disable(char *str)
__setup("noisapnp", isapnp_setup_disable);
static int __init isapnp_setup_isapnp(char *str)
__setup("isapnp=", isapnp_setup_isapnp);
