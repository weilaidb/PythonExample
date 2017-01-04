static DEFINE_SPINLOCK(index_access_lock);
static DEFINE_SPINLOCK(port_access_lock);
unsigned char ec_read(unsigned short addr)
EXPORT_SYMBOL_GPL(ec_read);
void ec_write(unsigned short addr, unsigned char val)
EXPORT_SYMBOL_GPL(ec_write);
int ec_query_seq(unsigned char cmd)
EXPORT_SYMBOL_GPL(ec_query_seq);
int ec_query_event_num(void)
EXPORT_SYMBOL(ec_query_event_num);
int ec_get_event_num(void)
EXPORT_SYMBOL(ec_get_event_num);
