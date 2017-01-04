struct cplb_entry icplb_tbl[NR_CPUS][MAX_CPLBS];
struct cplb_entry dcplb_tbl[NR_CPUS][MAX_CPLBS];
int first_switched_icplb, first_switched_dcplb;
int first_mask_dcplb;
void __init generate_cplb_tables_cpu(unsigned int cpu)
void __init generate_cplb_tables_all(void)
