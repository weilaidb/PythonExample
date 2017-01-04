#define _LINUX_DS_H
struct pcmcia_socket;
struct pcmcia_device;
struct config_t;
struct net_device;
struct pcmcia_dynids ;
struct pcmcia_driver ;
int pcmcia_register_driver(struct pcmcia_driver *driver);
void pcmcia_unregister_driver(struct pcmcia_driver *driver);
enum ;
struct pcmcia_device ;
#define to_pcmcia_dev(n) container_of(n, struct pcmcia_device, dev)
#define to_pcmcia_drv(n) container_of(n, struct pcmcia_driver, drv)
size_t pcmcia_get_tuple(struct pcmcia_device *p_dev, cisdata_t code,
u8 **buf);
int pcmcia_loop_tuple(struct pcmcia_device *p_dev, cisdata_t code,
int (*loop_tuple) (struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data),
void *priv_data);
int pcmcia_get_mac_from_cis(struct pcmcia_device *p_dev,
struct net_device *dev);
int pcmcia_parse_tuple(tuple_t *tuple, cisparse_t *parse);
int pcmcia_loop_config(struct pcmcia_device *p_dev,
int	(*conf_check)	(struct pcmcia_device *p_dev,
void *priv_data),
void *priv_data);
struct pcmcia_device *pcmcia_dev_present(struct pcmcia_device *p_dev);
int pcmcia_reset_card(struct pcmcia_socket *skt);
int pcmcia_read_config_byte(struct pcmcia_device *p_dev, off_t where, u8 *val);
int pcmcia_write_config_byte(struct pcmcia_device *p_dev, off_t where, u8 val);
int pcmcia_request_io(struct pcmcia_device *p_dev);
int __must_check
__pcmcia_request_exclusive_irq(struct pcmcia_device *p_dev,
irq_handler_t handler);
static inline __must_check __deprecated int
pcmcia_request_exclusive_irq(struct pcmcia_device *p_dev,
irq_handler_t handler)
int __must_check pcmcia_request_irq(struct pcmcia_device *p_dev,
irq_handler_t handler);
int pcmcia_enable_device(struct pcmcia_device *p_dev);
int pcmcia_request_window(struct pcmcia_device *p_dev, struct resource *res,
unsigned int speed);
int pcmcia_release_window(struct pcmcia_device *p_dev, struct resource *res);
int pcmcia_map_mem_page(struct pcmcia_device *p_dev, struct resource *res,
unsigned int offset);
int pcmcia_fixup_vpp(struct pcmcia_device *p_dev, unsigned char new_vpp);
int pcmcia_fixup_iowidth(struct pcmcia_device *p_dev);
void pcmcia_disable_device(struct pcmcia_device *p_dev);
#define IO_DATA_PATH_WIDTH	0x18
#define IO_DATA_PATH_WIDTH_8	0x00
#define IO_DATA_PATH_WIDTH_16	0x08
#define IO_DATA_PATH_WIDTH_AUTO	0x10
#define WIN_MEMORY_TYPE_CM	0x00
#define WIN_MEMORY_TYPE_AM	0x20
#define WIN_DATA_WIDTH_8	0x00
#define WIN_DATA_WIDTH_16	0x02
#define WIN_ENABLE		0x01
#define WIN_USE_WAIT		0x40
#define WIN_FLAGS_MAP		0x63
#define WIN_FLAGS_REQ		0x1c
#define PRESENT_OPTION		0x001
#define PRESENT_STATUS		0x002
#define PRESENT_PIN_REPLACE	0x004
#define PRESENT_COPY		0x008
#define PRESENT_EXT_STATUS	0x010
#define PRESENT_IOBASE_0	0x020
#define PRESENT_IOBASE_1	0x040
#define PRESENT_IOBASE_2	0x080
#define PRESENT_IOBASE_3	0x100
#define PRESENT_IOSIZE		0x200
#define CONF_ENABLE_IRQ         0x0001
#define CONF_ENABLE_SPKR        0x0002
#define CONF_ENABLE_PULSE_IRQ   0x0004
#define CONF_ENABLE_ESR         0x0008
#define CONF_ENABLE_IOCARD	0x0010
#define CONF_ENABLE_ZVCARD	0x0020
#define CONF_AUTO_CHECK_VCC	0x0100
#define CONF_AUTO_SET_VPP	0x0200
#define CONF_AUTO_AUDIO		0x0400
#define CONF_AUTO_SET_IO	0x0800
#define CONF_AUTO_SET_IOMEM	0x1000
