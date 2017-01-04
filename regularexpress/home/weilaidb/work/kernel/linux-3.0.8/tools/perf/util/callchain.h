#define __PERF_CALLCHAIN_H
enum chain_mode ;
struct callchain_node ;
struct callchain_root ;
struct callchain_param;
typedef void (*sort_chain_func_t)(struct rb_root *, struct callchain_root *,
u64, struct callchain_param *);
struct callchain_param ;
struct callchain_list ;
struct callchain_cursor_node ;
struct callchain_cursor ;
static inline void callchain_init(struct callchain_root *root)
static inline u64 callchain_cumul_hits(struct callchain_node *node)
int callchain_register_param(struct callchain_param *param);
int callchain_append(struct callchain_root *root,
struct callchain_cursor *cursor,
u64 period);
int callchain_merge(struct callchain_cursor *cursor,
struct callchain_root *dst, struct callchain_root *src);
bool ip_callchain__valid(struct ip_callchain *chain,
const union perf_event *event);
static inline void callchain_cursor_reset(struct callchain_cursor *cursor)
int callchain_cursor_append(struct callchain_cursor *cursor, u64 ip,
struct map *map, struct symbol *sym);
static inline void callchain_cursor_commit(struct callchain_cursor *cursor)
static inline struct callchain_cursor_node *
callchain_cursor_current(struct callchain_cursor *cursor)
static inline void callchain_cursor_advance(struct callchain_cursor *cursor)
