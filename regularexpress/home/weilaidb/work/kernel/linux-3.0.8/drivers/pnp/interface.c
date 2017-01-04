struct pnp_info_buffer ;
typedef struct pnp_info_buffer pnp_info_buffer_t;
static int pnp_printf(pnp_info_buffer_t * buffer, char *fmt, ...)
static void pnp_print_port(pnp_info_buffer_t * buffer, char *space,
struct pnp_port *port)
static void pnp_print_irq(pnp_info_buffer_t * buffer, char *space,
struct pnp_irq *irq)
static void pnp_print_dma(pnp_info_buffer_t * buffer, char *space,
struct pnp_dma *dma)
static void pnp_print_mem(pnp_info_buffer_t * buffer, char *space,
struct pnp_mem *mem)
static void pnp_print_option(pnp_info_buffer_t * buffer, char *space,
struct pnp_option *option)
static ssize_t pnp_show_options(struct device *dmdev,
struct device_attribute *attr, char *buf)
static ssize_t pnp_show_current_resources(struct device *dmdev,
struct device_attribute *attr,
char *buf)
static ssize_t pnp_set_current_resources(struct device *dmdev,
struct device_attribute *attr,
const char *ubuf, size_t count)
static ssize_t pnp_show_current_ids(struct device *dmdev,
struct device_attribute *attr, char *buf)
struct device_attribute pnp_interface_attrs[] = ;
