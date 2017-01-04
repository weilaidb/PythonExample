#define _LINUX_KLIST_H
struct klist_node;
struct klist  __attribute__ ((aligned (sizeof(void *))));
#define KLIST_INIT(_name, _get, _put)					\
#define DEFINE_KLIST(_name, _get, _put)					\
struct klist _name = KLIST_INIT(_name, _get, _put)
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
void (*put)(struct klist_node *));
struct klist_node ;
extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);
extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);
extern int klist_node_attached(struct klist_node *n);
struct klist_iter ;
extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
