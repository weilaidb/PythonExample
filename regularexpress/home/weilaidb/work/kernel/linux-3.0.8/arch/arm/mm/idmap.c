static void idmap_add_pmd(pud_t *pud, unsigned long addr, unsigned long end,
unsigned long prot)
static void idmap_add_pud(pgd_t *pgd, unsigned long addr, unsigned long end,
unsigned long prot)
void identity_mapping_add(pgd_t *pgd, unsigned long addr, unsigned long end)
static void idmap_del_pmd(pud_t *pud, unsigned long addr, unsigned long end)
static void idmap_del_pud(pgd_t *pgd, unsigned long addr, unsigned long end)
void identity_mapping_del(pgd_t *pgd, unsigned long addr, unsigned long end)
void setup_mm_for_reboot(char mode)
