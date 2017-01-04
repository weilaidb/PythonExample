struct linux_romvec *romvec;
enum prom_major_version prom_vers;
unsigned int prom_rev, prom_prev;
int prom_root_node;
struct linux_nodeops *prom_nodeops;
extern void prom_meminit(void);
extern void prom_ranges_init(void);
void __init prom_init(struct linux_romvec *rp)
