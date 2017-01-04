#define lru_to_page(_head) (list_entry((_head)->prev, struct page, lru))
int migrate_prep(void)
int migrate_prep_local(void)
void putback_lru_pages(struct list_head *l)
static int remove_migration_pte(struct page *new, struct vm_area_struct *vma,
unsigned long addr, void *old)
static void remove_migration_ptes(struct page *old, struct page *new)
void migration_entry_wait(struct mm_struct *mm, pmd_t *pmd,
unsigned long address)
static int migrate_page_move_mapping(struct address_space *mapping,
struct page *newpage, struct page *page)
int migrate_huge_page_move_mapping(struct address_space *mapping,
struct page *newpage, struct page *page)
void migrate_page_copy(struct page *newpage, struct page *page)
int fail_migrate_page(struct address_space *mapping,
struct page *newpage, struct page *page)
EXPORT_SYMBOL(fail_migrate_page);
int migrate_page(struct address_space *mapping,
struct page *newpage, struct page *page)
EXPORT_SYMBOL(migrate_page);
int buffer_migrate_page(struct address_space *mapping,
struct page *newpage, struct page *page)
EXPORT_SYMBOL(buffer_migrate_page);
static int writeout(struct address_space *mapping, struct page *page)
static int fallback_migrate_page(struct address_space *mapping,
struct page *newpage, struct page *page)
static int move_to_new_page(struct page *newpage, struct page *page,
int remap_swapcache, bool sync)
static int unmap_and_move(new_page_t get_new_page, unsigned long private,
struct page *page, int force, bool offlining, bool sync)
static int unmap_and_move_huge_page(new_page_t get_new_page,
unsigned long private, struct page *hpage,
int force, bool offlining, bool sync)
int migrate_pages(struct list_head *from,
new_page_t get_new_page, unsigned long private, bool offlining,
bool sync)
int migrate_huge_pages(struct list_head *from,
new_page_t get_new_page, unsigned long private, bool offlining,
bool sync)
struct page_to_node ;
static struct page *new_page_node(struct page *p, unsigned long private,
int **result)
static int do_move_page_to_node_array(struct mm_struct *mm,
struct page_to_node *pm,
int migrate_all)
static int do_pages_move(struct mm_struct *mm, struct task_struct *task,
unsigned long nr_pages,
const void __user * __user *pages,
const int __user *nodes,
int __user *status, int flags)
static void do_pages_stat_array(struct mm_struct *mm, unsigned long nr_pages,
const void __user **pages, int *status)
static int do_pages_stat(struct mm_struct *mm, unsigned long nr_pages,
const void __user * __user *pages,
int __user *status)
SYSCALL_DEFINE6(move_pages, pid_t, pid, unsigned long, nr_pages,
const void __user * __user *, pages,
const int __user *, nodes,
int __user *, status, int, flags)
int migrate_vmas(struct mm_struct *mm, const nodemask_t *to,
const nodemask_t *from, unsigned long flags)
