#define _TMEM_H_
#define TMEM_PUT_PAGE			4
#define TMEM_GET_PAGE			5
#define TMEM_FLUSH_PAGE			6
#define TMEM_FLUSH_OBJECT		7
#define TMEM_POOL_PERSIST		1
#define TMEM_POOL_SHARED		2
#define TMEM_POOL_PRECOMPRESSED		4
#define TMEM_POOL_PAGESIZE_SHIFT	4
#define TMEM_POOL_PAGESIZE_MASK		0xf
#define TMEM_POOL_RESERVED_BITS		0x00ffff00
#define SENTINELS
#define DECL_SENTINEL uint32_t sentinel;
#define SET_SENTINEL(_x, _y) (_x->sentinel = _y##_SENTINEL)
#define INVERT_SENTINEL(_x, _y) (_x->sentinel = ~_y##_SENTINEL)
#define ASSERT_SENTINEL(_x, _y) WARN_ON(_x->sentinel != _y##_SENTINEL)
#define ASSERT_INVERTED_SENTINEL(_x, _y) WARN_ON(_x->sentinel != ~_y##_SENTINEL)
#define DECL_SENTINEL
#define SET_SENTINEL(_x, _y) do  while (0)
#define INVERT_SENTINEL(_x, _y) do  while (0)
#define ASSERT_SENTINEL(_x, _y) do  while (0)
#define ASSERT_INVERTED_SENTINEL(_x, _y) do  while (0)
#define ASSERT_SPINLOCK(_l)	WARN_ON(!spin_is_locked(_l))
#define TMEM_HASH_BUCKET_BITS	8
#define TMEM_HASH_BUCKETS	(1<<TMEM_HASH_BUCKET_BITS)
struct tmem_hashbucket ;
struct tmem_pool ;
#define is_persistent(_p)  (_p->persistent)
#define is_ephemeral(_p)   (!(_p->persistent))
struct tmem_oid ;
static inline void tmem_oid_set_invalid(struct tmem_oid *oidp)
static inline bool tmem_oid_valid(struct tmem_oid *oidp)
static inline int tmem_oid_compare(struct tmem_oid *left,
struct tmem_oid *right)
static inline unsigned tmem_oid_hash(struct tmem_oid *oidp)
struct tmem_objnode;
struct tmem_obj ;
#define OBJNODE_TREE_MAP_SHIFT 6
#define OBJNODE_TREE_MAP_SIZE (1UL << OBJNODE_TREE_MAP_SHIFT)
#define OBJNODE_TREE_MAP_MASK (OBJNODE_TREE_MAP_SIZE-1)
#define OBJNODE_TREE_INDEX_BITS (8 * sizeof(unsigned long))
#define OBJNODE_TREE_MAX_PATH \
(OBJNODE_TREE_INDEX_BITS/OBJNODE_TREE_MAP_SHIFT + 2)
struct tmem_objnode ;
struct tmem_pamops ;
extern void tmem_register_pamops(struct tmem_pamops *m);
struct tmem_hostops ;
extern void tmem_register_hostops(struct tmem_hostops *m);
extern int tmem_put(struct tmem_pool *, struct tmem_oid *, uint32_t index,
struct page *page);
extern int tmem_get(struct tmem_pool *, struct tmem_oid *, uint32_t index,
struct page *page);
extern int tmem_flush_page(struct tmem_pool *, struct tmem_oid *,
uint32_t index);
extern int tmem_flush_object(struct tmem_pool *, struct tmem_oid *);
extern int tmem_destroy_pool(struct tmem_pool *);
extern void tmem_new_pool(struct tmem_pool *, uint32_t);
