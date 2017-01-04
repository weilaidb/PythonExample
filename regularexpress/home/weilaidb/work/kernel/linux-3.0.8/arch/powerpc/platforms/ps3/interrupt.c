#if defined(DEBUG)
#define DBG udbg_printf
#define DBG pr_debug
#define PS3_BMP_MINALIGN 64
struct ps3_bmp ;
struct ps3_private ;
static DEFINE_PER_CPU(struct ps3_private, ps3_private);
static void ps3_chip_mask(struct irq_data *d)
static void ps3_chip_unmask(struct irq_data *d)
static void ps3_chip_eoi(struct irq_data *d)
static struct irq_chip ps3_irq_chip = ;
static int ps3_virq_setup(enum ps3_cpu_binding cpu, unsigned long outlet,
unsigned int *virq)
static int ps3_virq_destroy(unsigned int virq)
int ps3_irq_plug_setup(enum ps3_cpu_binding cpu, unsigned long outlet,
unsigned int *virq)
EXPORT_SYMBOL_GPL(ps3_irq_plug_setup);
int ps3_irq_plug_destroy(unsigned int virq)
EXPORT_SYMBOL_GPL(ps3_irq_plug_destroy);
int ps3_event_receive_port_setup(enum ps3_cpu_binding cpu, unsigned int *virq)
EXPORT_SYMBOL_GPL(ps3_event_receive_port_setup);
int ps3_event_receive_port_destroy(unsigned int virq)
int ps3_send_event_locally(unsigned int virq)
int ps3_sb_event_receive_port_setup(struct ps3_system_bus_device *dev,
enum ps3_cpu_binding cpu, unsigned int *virq)
EXPORT_SYMBOL(ps3_sb_event_receive_port_setup);
int ps3_sb_event_receive_port_destroy(struct ps3_system_bus_device *dev,
unsigned int virq)
EXPORT_SYMBOL(ps3_sb_event_receive_port_destroy);
int ps3_io_irq_setup(enum ps3_cpu_binding cpu, unsigned int interrupt_id,
unsigned int *virq)
EXPORT_SYMBOL_GPL(ps3_io_irq_setup);
int ps3_io_irq_destroy(unsigned int virq)
EXPORT_SYMBOL_GPL(ps3_io_irq_destroy);
int ps3_vuart_irq_setup(enum ps3_cpu_binding cpu, void* virt_addr_bmp,
unsigned int *virq)
EXPORT_SYMBOL_GPL(ps3_vuart_irq_setup);
int ps3_vuart_irq_destroy(unsigned int virq)
EXPORT_SYMBOL_GPL(ps3_vuart_irq_destroy);
int ps3_spe_irq_setup(enum ps3_cpu_binding cpu, unsigned long spe_id,
unsigned int class, unsigned int *virq)
int ps3_spe_irq_destroy(unsigned int virq)
#define PS3_INVALID_OUTLET ((irq_hw_number_t)-1)
#define PS3_PLUG_MAX 63
#if defined(DEBUG)
static void _dump_64_bmp(const char *header, const u64 *p, unsigned cpu,
const char* func, int line)
static void __maybe_unused _dump_256_bmp(const char *header,
const u64 *p, unsigned cpu, const char* func, int line)
#define dump_bmp(_x) _dump_bmp(_x, __func__, __LINE__)
static void _dump_bmp(struct ps3_private* pd, const char* func, int line)
#define dump_mask(_x) _dump_mask(_x, __func__, __LINE__)
static void __maybe_unused _dump_mask(struct ps3_private *pd,
const char* func, int line)
static void dump_bmp(struct ps3_private* pd) ;
static int ps3_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static int ps3_host_match(struct irq_host *h, struct device_node *np)
static struct irq_host_ops ps3_host_ops = ;
void __init ps3_register_ipi_debug_brk(unsigned int cpu, unsigned int virq)
static unsigned int ps3_get_irq(void)
void __init ps3_init_IRQ(void)
void ps3_shutdown_IRQ(int cpu)
