enum yamon_memtypes ;
static struct prom_pmemblock mdesc[PROM_MAX_PMEMBLOCKS];
static char *mtypes[3] = ;
unsigned long physical_memsize = 0L;
static struct prom_pmemblock * __init prom_getmdesc(void)
static int __init prom_memtype_classify(unsigned int type)
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
