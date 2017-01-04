static void set_idt(void *newidt, __u16 limit)
static void set_gdt(void *newgdt, __u16 limit)
static void load_segments(void)
static void machine_kexec_free_page_tables(struct kimage *image)
static int machine_kexec_alloc_page_tables(struct kimage *image)
static void machine_kexec_page_table_set_one(
pgd_t *pgd, pmd_t *pmd, pte_t *pte,
unsigned long vaddr, unsigned long paddr)
static void machine_kexec_prepare_page_tables(struct kimage *image)
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
void machine_kexec(struct kimage *image)
void arch_crash_save_vmcoreinfo(void)
