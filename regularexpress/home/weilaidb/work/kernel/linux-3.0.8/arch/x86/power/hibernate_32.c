extern int restore_image(void);
extern const void __nosave_begin, __nosave_end;
pgd_t *resume_pg_dir;
static pmd_t *resume_one_md_table_init(pgd_t *pgd)
static pte_t *resume_one_page_table_init(pmd_t *pmd)
static int resume_physical_mapping_init(pgd_t *pgd_base)
static inline void resume_init_first_level_page_table(pgd_t *pg_dir)
int swsusp_arch_resume(void)
int pfn_is_nosave(unsigned long pfn)
