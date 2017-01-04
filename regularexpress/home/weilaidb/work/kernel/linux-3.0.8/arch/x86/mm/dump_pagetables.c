struct pg_state ;
struct addr_marker ;
enum address_markers_idx ;
static struct addr_marker address_markers[] = ;
#define PTE_LEVEL_MULT (PAGE_SIZE)
#define PMD_LEVEL_MULT (PTRS_PER_PTE * PTE_LEVEL_MULT)
#define PUD_LEVEL_MULT (PTRS_PER_PMD * PMD_LEVEL_MULT)
#define PGD_LEVEL_MULT (PTRS_PER_PUD * PUD_LEVEL_MULT)
static void printk_prot(struct seq_file *m, pgprot_t prot, int level)
static unsigned long normalize_addr(unsigned long u)
static void note_page(struct seq_file *m, struct pg_state *st,
pgprot_t new_prot, int level)
static void walk_pte_level(struct seq_file *m, struct pg_state *st, pmd_t addr,
unsigned long P)
#if PTRS_PER_PMD > 1
static void walk_pmd_level(struct seq_file *m, struct pg_state *st, pud_t addr,
unsigned long P)
#define walk_pmd_level(m,s,a,p) walk_pte_level(m,s,__pmd(pud_val(a)),p)
#define pud_large(a) pmd_large(__pmd(pud_val(a)))
#define pud_none(a)  pmd_none(__pmd(pud_val(a)))
#if PTRS_PER_PUD > 1
static void walk_pud_level(struct seq_file *m, struct pg_state *st, pgd_t addr,
unsigned long P)
#define walk_pud_level(m,s,a,p) walk_pmd_level(m,s,__pud(pgd_val(a)),p)
#define pgd_large(a) pud_large(__pud(pgd_val(a)))
#define pgd_none(a)  pud_none(__pud(pgd_val(a)))
static void walk_pgd_level(struct seq_file *m)
static int ptdump_show(struct seq_file *m, void *v)
static int ptdump_open(struct inode *inode, struct file *filp)
static const struct file_operations ptdump_fops = ;
static int pt_dump_init(void)
__initcall(pt_dump_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arjan van de Ven <arjan@linux.intel.com>");
MODULE_DESCRIPTION("Kernel debugging helper that dumps pagetables");
