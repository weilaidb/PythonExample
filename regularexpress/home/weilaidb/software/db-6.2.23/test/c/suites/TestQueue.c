typedef enum  FAILURE_REASON;
const char *failure_reason_names[] = ;
SH_LIST_HEAD(sh_lq);
struct sh_le ;
char *
sh_l_as_string(l)
struct sh_lq *l;
struct sh_lq *
sh_l_init(items)
const char *items;
struct sh_lq *
sh_l_remove_head(l)
struct sh_lq *l;
struct sh_lq *
sh_l_remove_tail(l)
struct sh_lq *l;
struct sh_lq *
sh_l_remove_item(l, item)
struct sh_lq *l;
const char *item;
struct sh_lq *
sh_l_insert_head(l, item)
struct sh_lq *l;
const char *item;
struct sh_lq *
sh_l_insert_tail(l, item)
struct sh_lq *l;
const char *item;
struct sh_lq *
sh_l_insert_before(l, item, before_item)
struct sh_lq *l;
const char *item;
const char *before_item;
struct sh_lq *
sh_l_insert_after(l, item, after_item)
struct sh_lq *l;
const char *item;
const char *after_item;
void
sh_l_discard(l)
struct sh_lq *l;
int
sh_l_verify(l, items)
struct sh_lq *l;
const char *items;
SH_TAILQ_HEAD(sh_tq);
struct sh_te ;
char *
sh_t_as_string(l)
struct sh_tq *l;
struct sh_tq *
sh_t_init(items)
const char *items;
struct sh_tq *
sh_t_remove_head(l)
struct sh_tq *l;
struct sh_tq *
sh_t_remove_tail(l)
struct sh_tq *l;
struct sh_tq *
sh_t_remove_item(l, item)
struct sh_tq *l;
const char *item;
struct sh_tq *
sh_t_insert_head(l, item)
struct sh_tq *l;
const char *item;
struct sh_tq *
sh_t_insert_tail(l, item)
struct sh_tq *l;
const char *item;
struct sh_tq *
sh_t_insert_before(l, item, before_item)
struct sh_tq *l;
const char *item;
const char *before_item;
struct sh_tq *
sh_t_insert_after(l, item, after_item)
struct sh_tq *l;
const char *item;
const char *after_item;
void
sh_t_discard(l)
struct sh_tq *l;
int
sh_t_verify(l, items)
struct sh_tq *l;
const char *items;
int
sh_t_verify_TAILQ_LAST(l, items)
struct sh_tq *l;
const char *items;
typedef void *qds_t;
struct  qfns[]= ;
typedef enum  OP;
const char *op_names[] = ;
struct  ops[] = ;
int TestQueue(CuTest *ct)
