struct cplb_entry icplb_tbl[NR_CPUS][MAX_CPLBS] PDT_ATTR;
struct cplb_entry dcplb_tbl[NR_CPUS][MAX_CPLBS] PDT_ATTR;
int first_switched_icplb PDT_ATTR;
int first_switched_dcplb PDT_ATTR;
struct cplb_boundary dcplb_bounds[9] PDT_ATTR;
struct cplb_boundary icplb_bounds[9] PDT_ATTR;
int icplb_nr_bounds PDT_ATTR;
int dcplb_nr_bounds PDT_ATTR;
void __init generate_cplb_tables_cpu(unsigned int cpu)
void __init generate_cplb_tables_all(void)
