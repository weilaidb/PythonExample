static int io_speed;
module_param(io_speed, int, 0444);
int pcmcia_validate_mem(struct pcmcia_socket *s)
struct resource *pcmcia_find_mem_region(u_long base, u_long num, u_long align,
int low, struct pcmcia_socket *s)
static void release_io_space(struct pcmcia_socket *s, struct resource *res)
static int alloc_io_space(struct pcmcia_socket *s, struct resource *res,
unsigned int lines)
static int pcmcia_access_config(struct pcmcia_device *p_dev,
off_t where, u8 *val,
int (*accessf) (struct pcmcia_socket *s,
int attr, unsigned int addr,
unsigned int len, void *ptr))
int pcmcia_read_config_byte(struct pcmcia_device *p_dev, off_t where, u8 *val)
EXPORT_SYMBOL(pcmcia_read_config_byte);
int pcmcia_write_config_byte(struct pcmcia_device *p_dev, off_t where, u8 val)
EXPORT_SYMBOL(pcmcia_write_config_byte);
int pcmcia_map_mem_page(struct pcmcia_device *p_dev, struct resource *res,
unsigned int offset)
EXPORT_SYMBOL(pcmcia_map_mem_page);
int pcmcia_fixup_iowidth(struct pcmcia_device *p_dev)
EXPORT_SYMBOL(pcmcia_fixup_iowidth);
int pcmcia_fixup_vpp(struct pcmcia_device *p_dev, unsigned char new_vpp)
EXPORT_SYMBOL(pcmcia_fixup_vpp);
int pcmcia_release_configuration(struct pcmcia_device *p_dev)
static int pcmcia_release_io(struct pcmcia_device *p_dev)
int pcmcia_release_window(struct pcmcia_device *p_dev, struct resource *res)
EXPORT_SYMBOL(pcmcia_release_window);
int pcmcia_enable_device(struct pcmcia_device *p_dev)
EXPORT_SYMBOL(pcmcia_enable_device);
int pcmcia_request_io(struct pcmcia_device *p_dev)
EXPORT_SYMBOL(pcmcia_request_io);
int __must_check pcmcia_request_irq(struct pcmcia_device *p_dev,
irq_handler_t handler)
EXPORT_SYMBOL(pcmcia_request_irq);
int __must_check
__pcmcia_request_exclusive_irq(struct pcmcia_device *p_dev,
irq_handler_t handler)
EXPORT_SYMBOL(__pcmcia_request_exclusive_irq);
static u8 pcmcia_used_irq[32];
static irqreturn_t test_action(int cpl, void *dev_id)
static int pcmcia_setup_isa_irq(struct pcmcia_device *p_dev, int type)
void pcmcia_cleanup_irq(struct pcmcia_socket *s)
static int pcmcia_setup_isa_irq(struct pcmcia_device *p_dev, int type)
void pcmcia_cleanup_irq(struct pcmcia_socket *s)
int pcmcia_setup_irq(struct pcmcia_device *p_dev)
int pcmcia_request_window(struct pcmcia_device *p_dev, struct resource *res,
unsigned int speed)
EXPORT_SYMBOL(pcmcia_request_window);
void pcmcia_disable_device(struct pcmcia_device *p_dev)
EXPORT_SYMBOL(pcmcia_disable_device);
