char prom_version[80];
int prom_stdout;
phandle prom_chosen_node;
extern void prom_cif_init(void *, void *);
void __init prom_init(void *cif_handler, void *cif_stack)
void __init prom_init_report(void)
