#undef DEBUG
#undef DEBUG
#define DPRINTK(stuff...) printk (stuff)
#define DPRINTK(stuff...)
size_t parport_ieee1284_write_compat (struct parport *port,
const void *buffer, size_t len,
int flags)
size_t parport_ieee1284_read_nibble (struct parport *port,
void *buffer, size_t len,
int flags)
size_t parport_ieee1284_read_byte (struct parport *port,
void *buffer, size_t len,
int flags)
static inline
int ecp_forward_to_reverse (struct parport *port)
static inline
int ecp_reverse_to_forward (struct parport *port)
size_t parport_ieee1284_ecp_write_data (struct parport *port,
const void *buffer, size_t len,
int flags)
size_t parport_ieee1284_ecp_read_data (struct parport *port,
void *buffer, size_t len, int flags)
size_t parport_ieee1284_ecp_write_addr (struct parport *port,
const void *buffer, size_t len,
int flags)
size_t parport_ieee1284_epp_write_data (struct parport *port,
const void *buffer, size_t len,
int flags)
size_t parport_ieee1284_epp_read_data (struct parport *port,
void *buffer, size_t len,
int flags)
size_t parport_ieee1284_epp_write_addr (struct parport *port,
const void *buffer, size_t len,
int flags)
size_t parport_ieee1284_epp_read_addr (struct parport *port,
void *buffer, size_t len,
int flags)
EXPORT_SYMBOL(parport_ieee1284_ecp_write_data);
EXPORT_SYMBOL(parport_ieee1284_ecp_read_data);
EXPORT_SYMBOL(parport_ieee1284_ecp_write_addr);
EXPORT_SYMBOL(parport_ieee1284_write_compat);
EXPORT_SYMBOL(parport_ieee1284_read_nibble);
EXPORT_SYMBOL(parport_ieee1284_read_byte);
EXPORT_SYMBOL(parport_ieee1284_epp_write_data);
EXPORT_SYMBOL(parport_ieee1284_epp_read_data);
EXPORT_SYMBOL(parport_ieee1284_epp_write_addr);
EXPORT_SYMBOL(parport_ieee1284_epp_read_addr);
