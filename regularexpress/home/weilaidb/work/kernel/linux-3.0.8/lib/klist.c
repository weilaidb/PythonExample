#define KNODE_DEAD		1LU
#define KNODE_KLIST_MASK	~KNODE_DEAD
static struct klist *knode_klist(struct klist_node *knode)
static bool knode_dead(struct klist_node *knode)
static void knode_set_klist(struct klist_node *knode, struct klist *klist)
static void knode_kill(struct klist_node *knode)
void klist_init(struct klist *k, void (*get)(struct klist_node *),
void (*put)(struct klist_node *))
EXPORT_SYMBOL_GPL(klist_init);
static void add_head(struct klist *k, struct klist_node *n)
static void add_tail(struct klist *k, struct klist_node *n)
static void klist_node_init(struct klist *k, struct klist_node *n)
void klist_add_head(struct klist_node *n, struct klist *k)
EXPORT_SYMBOL_GPL(klist_add_head);
void klist_add_tail(struct klist_node *n, struct klist *k)
EXPORT_SYMBOL_GPL(klist_add_tail);
void klist_add_after(struct klist_node *n, struct klist_node *pos)
EXPORT_SYMBOL_GPL(klist_add_after);
void klist_add_before(struct klist_node *n, struct klist_node *pos)
EXPORT_SYMBOL_GPL(klist_add_before);
struct klist_waiter ;
static DEFINE_SPINLOCK(klist_remove_lock);
static LIST_HEAD(klist_remove_waiters);
static void klist_release(struct kref *kref)
static int klist_dec_and_del(struct klist_node *n)
static void klist_put(struct klist_node *n, bool kill)
void klist_del(struct klist_node *n)
EXPORT_SYMBOL_GPL(klist_del);
void klist_remove(struct klist_node *n)
EXPORT_SYMBOL_GPL(klist_remove);
int klist_node_attached(struct klist_node *n)
EXPORT_SYMBOL_GPL(klist_node_attached);
void klist_iter_init_node(struct klist *k, struct klist_iter *i,
struct klist_node *n)
EXPORT_SYMBOL_GPL(klist_iter_init_node);
void klist_iter_init(struct klist *k, struct klist_iter *i)
EXPORT_SYMBOL_GPL(klist_iter_init);
void klist_iter_exit(struct klist_iter *i)
EXPORT_SYMBOL_GPL(klist_iter_exit);
static struct klist_node *to_klist_node(struct list_head *n)
struct klist_node *klist_next(struct klist_iter *i)
EXPORT_SYMBOL_GPL(klist_next);
