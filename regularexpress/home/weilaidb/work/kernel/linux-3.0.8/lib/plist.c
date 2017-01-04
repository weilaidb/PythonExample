static struct plist_head test_head;
static void plist_check_prev_next(struct list_head *t, struct list_head *p,
struct list_head *n)
static void plist_check_list(struct list_head *top)
static void plist_check_head(struct plist_head *head)
# define plist_check_head(h)	do  while (0)
void plist_add(struct plist_node *node, struct plist_head *head)
void plist_del(struct plist_node *node, struct plist_head *head)
static struct plist_node __initdata test_node[241];
static void __init plist_test_check(int nr_expect)
static int  __init plist_test(void)
module_init(plist_test);
