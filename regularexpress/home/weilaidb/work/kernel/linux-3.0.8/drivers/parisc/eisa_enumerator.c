#define EPI 0xc80
#define NUM_SLOT 16
#define SLOT2PORT(x) (x<<12)
#define get_8(x) (*(u_int8_t*)(x))
static inline u_int16_t get_16(const unsigned char *x)
static inline u_int32_t get_32(const unsigned char *x)
static inline u_int32_t get_24(const unsigned char *x)
static void print_eisa_id(char *s, u_int32_t id)
static int configure_memory(const unsigned char *buf,
struct resource *mem_parent,
char *name)
static int configure_irq(const unsigned char *buf)
static int configure_dma(const unsigned char *buf)
static int configure_port(const unsigned char *buf, struct resource *io_parent,
char *board)
static int configure_port_init(const unsigned char *buf)
static int configure_choise(const unsigned char *buf, u_int8_t *info)
static int configure_type_string(const unsigned char *buf)
static int configure_function(const unsigned char *buf, int *more)
static int parse_slot_config(int slot,
const unsigned char *buf,
struct eeprom_eisa_slot_info *es,
struct resource *io_parent,
struct resource *mem_parent)
static int init_slot(int slot, struct eeprom_eisa_slot_info *es)
int eisa_enumerator(unsigned long eeprom_addr,
struct resource *io_parent, struct resource *mem_parent)
