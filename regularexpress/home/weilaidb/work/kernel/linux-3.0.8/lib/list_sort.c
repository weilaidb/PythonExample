#define MAX_LIST_LENGTH_BITS 20
static struct list_head *merge(void *priv,
int (*cmp)(void *priv, struct list_head *a,
struct list_head *b),
struct list_head *a, struct list_head *b)
static void merge_and_restore_back_links(void *priv,
int (*cmp)(void *priv, struct list_head *a,
struct list_head *b),
struct list_head *head,
struct list_head *a, struct list_head *b)
void list_sort(void *priv, struct list_head *head,
int (*cmp)(void *priv, struct list_head *a,
struct list_head *b))
EXPORT_SYMBOL(list_sort);
#define TEST_LIST_LEN (512+128+2)
#define TEST_POISON1 0xDEADBEEF
#define TEST_POISON2 0xA324354C
struct debug_el ;
static struct debug_el **elts __initdata;
static int __init check(struct debug_el *ela, struct debug_el *elb)
static int __init cmp(void *priv, struct list_head *a, struct list_head *b)
static int __init list_sort_test(void)
module_init(list_sort_test);
