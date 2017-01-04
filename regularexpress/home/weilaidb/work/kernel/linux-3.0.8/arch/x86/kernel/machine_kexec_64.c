static int init_one_level2_page(struct kimage *image, pgd_t *pgd,
unsigned long addr)
static void init_level2_page(pmd_t *level2p, unsigned long addr)
static int init_level3_page(struct kimage *image, pud_t *level3p,
unsigned long addr, unsigned long last_addr)
static int init_level4_page(struct kimage *image, pgd_t *level4p,
unsigned long addr, unsigned long last_addr)
static void free_transition_pgtable(struct kimage *image)
static int init_transition_pgtable(struct kimage *image, pgd_t *pgd)
static int init_pgtable(struct kimage *image, unsigned long start_pgtable)
static void set_idt(void *newidt, u16 limit)
;
static void set_gdt(void *newgdt, u16 limit)
;
static void load_segments(void)
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
void machine_kexec(struct kimage *image)
void arch_crash_save_vmcoreinfo(void)
