static DEFINE_MUTEX(pfifo_lock);
static unsigned int pfifo_used = 0;
int pfifo_request(unsigned int pfifo_mask)
void pfifo_free(unsigned int pfifo_mask)
EXPORT_SYMBOL(pfifo_push);
EXPORT_SYMBOL(pfifo_pop);
EXPORT_SYMBOL(pfifo_fill_level);
EXPORT_SYMBOL(pfifo_empty);
EXPORT_SYMBOL(pfifo_request);
EXPORT_SYMBOL(pfifo_free);
