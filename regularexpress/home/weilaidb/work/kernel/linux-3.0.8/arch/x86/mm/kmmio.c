#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define KMMIO_PAGE_HASH_BITS 4
#define KMMIO_PAGE_TABLE_SIZE (1 << KMMIO_PAGE_HASH_BITS)
struct kmmio_fault_page ;
struct kmmio_delayed_release ;
struct kmmio_context ;
static DEFINE_SPINLOCK(kmmio_lock);
unsigned int kmmio_count;
static struct list_head kmmio_page_table[KMMIO_PAGE_TABLE_SIZE];
static LIST_HEAD(kmmio_probes);
static struct list_head *kmmio_page_list(unsigned long page)
static DEFINE_PER_CPU(struct kmmio_context, kmmio_ctx);
static struct kmmio_probe *get_kmmio_probe(unsigned long addr)
static struct kmmio_fault_page *get_kmmio_fault_page(unsigned long page)
static void clear_pmd_presence(pmd_t *pmd, bool clear, pmdval_t *old)
static void clear_pte_presence(pte_t *pte, bool clear, pteval_t *old)
static int clear_page_presence(struct kmmio_fault_page *f, bool clear)
static int arm_kmmio_fault_page(struct kmmio_fault_page *f)
static void disarm_kmmio_fault_page(struct kmmio_fault_page *f)
int kmmio_handler(struct pt_regs *regs, unsigned long addr)
static int post_kmmio_handler(unsigned long condition, struct pt_regs *regs)
static int add_kmmio_fault_page(unsigned long page)
static void release_kmmio_fault_page(unsigned long page,
struct kmmio_fault_page **release_list)
int register_kmmio_probe(struct kmmio_probe *p)
EXPORT_SYMBOL(register_kmmio_probe);
static void rcu_free_kmmio_fault_pages(struct rcu_head *head)
static void remove_kmmio_fault_pages(struct rcu_head *head)
void unregister_kmmio_probe(struct kmmio_probe *p)
EXPORT_SYMBOL(unregister_kmmio_probe);
static int
kmmio_die_notifier(struct notifier_block *nb, unsigned long val, void *args)
static struct notifier_block nb_die = ;
int kmmio_init(void)
void kmmio_cleanup(void)
