#if !RAID6_USE_EMPTY_ZERO_PAGE
const char raid6_empty_zero_page[PAGE_SIZE] __attribute__((aligned(256)));
EXPORT_SYMBOL(raid6_empty_zero_page);
struct raid6_calls raid6_call;
EXPORT_SYMBOL_GPL(raid6_call);
const struct raid6_calls * const raid6_algos[] = ;
#define RAID6_TIME_JIFFIES_LG2	4
#define RAID6_TIME_JIFFIES_LG2	9
#define time_before(x, y) ((x) < (y))
int __init raid6_select_algo(void)
static void raid6_exit(void)
subsys_initcall(raid6_select_algo);
module_exit(raid6_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RAID6 Q-syndrome calculations");
