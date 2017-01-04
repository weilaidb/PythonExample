enum simmem_memtypes ;
struct prom_pmemblock mdesc[PROM_MAX_PMEMBLOCKS];
static char *mtypes[3] = ;
struct prom_pmemblock * __init prom_getmdesc(void)
static int __init prom_memtype_classify(unsigned int type)
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
