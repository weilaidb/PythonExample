#define DEBUG(x)
struct crisv32_ioport crisv32_ioports[] = ;
#define NBR_OF_PORTS ARRAY_SIZE(crisv32_ioports)
struct crisv32_iopin crisv32_led_net0_green;
struct crisv32_iopin crisv32_led_net0_red;
struct crisv32_iopin crisv32_led_net1_green;
struct crisv32_iopin crisv32_led_net1_red;
struct crisv32_iopin crisv32_led2_green;
struct crisv32_iopin crisv32_led2_red;
struct crisv32_iopin crisv32_led3_green;
struct crisv32_iopin crisv32_led3_red;
static unsigned long io_dummy;
static struct crisv32_ioport dummy_port = ;
static struct crisv32_iopin dummy_led = ;
static int __init crisv32_io_init(void)
__initcall(crisv32_io_init);
int crisv32_io_get(struct crisv32_iopin *iopin,
unsigned int port, unsigned int pin)
int crisv32_io_get_name(struct crisv32_iopin *iopin, const char *name)
struct cris_io_operations *cris_iops = NULL;
EXPORT_SYMBOL(cris_iops);
