#define _LINUX_CS_INTERNAL_H
#define CLIENT_WIN_REQ(i)	(0x1<<(i))
#define BIND_FN_ALL	0xff
typedef struct config_t  config_t;
struct cis_cache_entry ;
struct pccard_resource_ops ;
#define CONFIG_LOCKED		0x01
#define CONFIG_IRQ_REQ		0x02
#define CONFIG_IO_REQ		0x04
#define SOCKET_PRESENT		0x0008
#define SOCKET_INUSE		0x0010
#define SOCKET_SUSPEND		0x0080
#define SOCKET_WIN_REQ(i)	(0x0100<<(i))
#define SOCKET_CARDBUS		0x8000
#define SOCKET_CARDBUS_CONFIG	0x10000
extern int static_init(struct pcmcia_socket *s);
extern struct resource *pcmcia_make_resource(unsigned long start,
unsigned long end,
int flags, const char *name);
extern int pccard_sysfs_add_socket(struct device *dev);
extern void pccard_sysfs_remove_socket(struct device *dev);
int cb_alloc(struct pcmcia_socket *s);
void cb_free(struct pcmcia_socket *s);
struct pcmcia_callback;
extern struct rw_semaphore pcmcia_socket_list_rwsem;
extern struct list_head pcmcia_socket_list;
extern struct class pcmcia_socket_class;
int pccard_register_pcmcia(struct pcmcia_socket *s, struct pcmcia_callback *c);
struct pcmcia_socket *pcmcia_get_socket_by_nr(unsigned int nr);
void pcmcia_parse_uevents(struct pcmcia_socket *socket, unsigned int events);
#define PCMCIA_UEVENT_EJECT	0x0001
#define PCMCIA_UEVENT_INSERT	0x0002
#define PCMCIA_UEVENT_SUSPEND	0x0004
#define PCMCIA_UEVENT_RESUME	0x0008
#define PCMCIA_UEVENT_REQUERY	0x0010
struct pcmcia_socket *pcmcia_get_socket(struct pcmcia_socket *skt);
void pcmcia_put_socket(struct pcmcia_socket *skt);
extern struct bus_type pcmcia_bus_type;
struct pcmcia_device;
extern int pcmcia_release_configuration(struct pcmcia_device *p_dev);
extern int pcmcia_validate_mem(struct pcmcia_socket *s);
extern struct resource *pcmcia_find_mem_region(u_long base,
u_long num,
u_long align,
int low,
struct pcmcia_socket *s);
void pcmcia_cleanup_irq(struct pcmcia_socket *s);
int pcmcia_setup_irq(struct pcmcia_device *p_dev);
extern struct bin_attribute pccard_cis_attr;
int pcmcia_read_cis_mem(struct pcmcia_socket *s, int attr,
u_int addr, u_int len, void *ptr);
int pcmcia_write_cis_mem(struct pcmcia_socket *s, int attr,
u_int addr, u_int len, void *ptr);
void release_cis_mem(struct pcmcia_socket *s);
void destroy_cis_cache(struct pcmcia_socket *s);
int pccard_read_tuple(struct pcmcia_socket *s, unsigned int function,
cisdata_t code, void *parse);
int pcmcia_replace_cis(struct pcmcia_socket *s,
const u8 *data, const size_t len);
int pccard_validate_cis(struct pcmcia_socket *s, unsigned int *count);
int verify_cis_cache(struct pcmcia_socket *s);
int pccard_loop_tuple(struct pcmcia_socket *s, unsigned int function,
cisdata_t code, cisparse_t *parse, void *priv_data,
int (*loop_tuple) (tuple_t *tuple,
cisparse_t *parse,
void *priv_data));
int pccard_get_first_tuple(struct pcmcia_socket *s, unsigned int function,
tuple_t *tuple);
int pccard_get_next_tuple(struct pcmcia_socket *s, unsigned int function,
tuple_t *tuple);
int pccard_get_tuple_data(struct pcmcia_socket *s, tuple_t *tuple);