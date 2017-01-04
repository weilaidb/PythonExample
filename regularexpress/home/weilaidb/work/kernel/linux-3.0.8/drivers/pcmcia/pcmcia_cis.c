int pccard_read_tuple(struct pcmcia_socket *s, unsigned int function,
cisdata_t code, void *parse)
int pccard_loop_tuple(struct pcmcia_socket *s, unsigned int function,
cisdata_t code, cisparse_t *parse, void *priv_data,
int (*loop_tuple) (tuple_t *tuple,
cisparse_t *parse,
void *priv_data))
static int pcmcia_io_cfg_data_width(unsigned int flags)
struct pcmcia_cfg_mem ;
static int pcmcia_do_loop_config(tuple_t *tuple, cisparse_t *parse, void *priv)
int pcmcia_loop_config(struct pcmcia_device *p_dev,
int	(*conf_check)	(struct pcmcia_device *p_dev,
void *priv_data),
void *priv_data)
EXPORT_SYMBOL(pcmcia_loop_config);
struct pcmcia_loop_mem ;
static int pcmcia_do_loop_tuple(tuple_t *tuple, cisparse_t *parse, void *priv)
;
int pcmcia_loop_tuple(struct pcmcia_device *p_dev, cisdata_t code,
int (*loop_tuple) (struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data),
void *priv_data)
EXPORT_SYMBOL(pcmcia_loop_tuple);
struct pcmcia_loop_get ;
static int pcmcia_do_get_tuple(struct pcmcia_device *p_dev, tuple_t *tuple,
void *priv)
size_t pcmcia_get_tuple(struct pcmcia_device *p_dev, cisdata_t code,
unsigned char **buf)
EXPORT_SYMBOL(pcmcia_get_tuple);
static int pcmcia_do_get_mac(struct pcmcia_device *p_dev, tuple_t *tuple,
void *priv)
int pcmcia_get_mac_from_cis(struct pcmcia_device *p_dev, struct net_device *dev)
EXPORT_SYMBOL(pcmcia_get_mac_from_cis);
