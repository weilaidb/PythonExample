enum bp_state ;
static DEFINE_MUTEX(balloon_mutex);
struct balloon_stats balloon_stats;
EXPORT_SYMBOL_GPL(balloon_stats);
static unsigned long frame_list[PAGE_SIZE / sizeof(unsigned long)];
#define inc_totalhigh_pages() (totalhigh_pages++)
#define dec_totalhigh_pages() (totalhigh_pages--)
#define inc_totalhigh_pages() do  while(0)
#define dec_totalhigh_pages() do  while(0)
static LIST_HEAD(ballooned_pages);
static void balloon_process(struct work_struct *work);
static DECLARE_DELAYED_WORK(balloon_worker, balloon_process);
#define GFP_BALLOON \
(GFP_HIGHUSER | __GFP_NOWARN | __GFP_NORETRY | __GFP_NOMEMALLOC)
static void scrub_page(struct page *page)
static void __balloon_append(struct page *page)
static void balloon_append(struct page *page)
static struct page *balloon_retrieve(bool prefer_highmem)
static struct page *balloon_first_page(void)
static struct page *balloon_next_page(struct page *page)
static enum bp_state update_schedule(enum bp_state state)
static long current_credit(void)
static enum bp_state increase_reservation(unsigned long nr_pages)
static enum bp_state decrease_reservation(unsigned long nr_pages, gfp_t gfp)
static void balloon_process(struct work_struct *work)
void balloon_set_new_target(unsigned long target)
EXPORT_SYMBOL_GPL(balloon_set_new_target);
int alloc_xenballooned_pages(int nr_pages, struct page** pages)
EXPORT_SYMBOL(alloc_xenballooned_pages);
void free_xenballooned_pages(int nr_pages, struct page** pages)
EXPORT_SYMBOL(free_xenballooned_pages);
static int __init balloon_init(void)
subsys_initcall(balloon_init);
MODULE_LICENSE("GPL");
