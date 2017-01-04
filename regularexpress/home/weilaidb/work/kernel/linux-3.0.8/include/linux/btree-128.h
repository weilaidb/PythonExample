extern struct btree_geo btree_geo128;
struct btree_head128 ;
static inline void btree_init_mempool128(struct btree_head128 *head,
mempool_t *mempool)
static inline int btree_init128(struct btree_head128 *head)
static inline void btree_destroy128(struct btree_head128 *head)
static inline void *btree_lookup128(struct btree_head128 *head, u64 k1, u64 k2)
static inline void *btree_get_prev128(struct btree_head128 *head,
u64 *k1, u64 *k2)
static inline int btree_insert128(struct btree_head128 *head, u64 k1, u64 k2,
void *val, gfp_t gfp)
static inline int btree_update128(struct btree_head128 *head, u64 k1, u64 k2,
void *val)
static inline void *btree_remove128(struct btree_head128 *head, u64 k1, u64 k2)
static inline void *btree_last128(struct btree_head128 *head, u64 *k1, u64 *k2)
static inline int btree_merge128(struct btree_head128 *target,
struct btree_head128 *victim,
gfp_t gfp)
void visitor128(void *elem, unsigned long opaque, unsigned long *__key,
size_t index, void *__func);
typedef void (*visitor128_t)(void *elem, unsigned long opaque,
u64 key1, u64 key2, size_t index);
static inline size_t btree_visitor128(struct btree_head128 *head,
unsigned long opaque,
visitor128_t func2)
static inline size_t btree_grim_visitor128(struct btree_head128 *head,
unsigned long opaque,
visitor128_t func2)
#define btree_for_each_safe128(head, k1, k2, val)	\
for (val = btree_last128(head, &k1, &k2);	\
val;					\
val = btree_get_prev128(head, &k1, &k2))
