struct  p1275buf;
extern void prom_world(int);
extern void prom_cif_direct(unsigned long *args);
extern void prom_cif_callback(void);
DEFINE_RAW_SPINLOCK(prom_entry_lock);
void p1275_cmd_direct(unsigned long *args)
void prom_cif_init(void *cif_handler, void *cif_stack)
