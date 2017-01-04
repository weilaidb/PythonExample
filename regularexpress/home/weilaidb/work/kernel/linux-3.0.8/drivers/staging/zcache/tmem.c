#define POOL_SENTINEL 0x87658765
#define OBJ_SENTINEL 0x12345678
#define OBJNODE_SENTINEL 0xfedcba09
static struct tmem_hostops tmem_hostops;
static void tmem_objnode_tree_init(void);
void tmem_register_hostops(struct tmem_hostops *m)
static struct tmem_pamops tmem_pamops;
void tmem_register_pamops(struct tmem_pamops *m)
static struct tmem_obj *tmem_obj_find(struct tmem_hashbucket *hb,
struct tmem_oid *oidp)
static void tmem_pampd_destroy_all_in_obj(struct tmem_obj *);
static void tmem_obj_free(struct tmem_obj *obj, struct tmem_hashbucket *hb)
static void tmem_obj_init(struct tmem_obj *obj, struct tmem_hashbucket *hb,
struct tmem_pool *pool,
struct tmem_oid *oidp)
static void tmem_pool_flush(struct tmem_pool *pool, bool destroy)
struct tmem_objnode_tree_path ;
static unsigned long tmem_objnode_tree_h2max[OBJNODE_TREE_MAX_PATH + 1];
static void tmem_objnode_tree_init(void)
static struct tmem_objnode *tmem_objnode_alloc(struct tmem_obj *obj)
static void tmem_objnode_free(struct tmem_objnode *objnode)
static void *tmem_pampd_lookup_in_obj(struct tmem_obj *obj, uint32_t index)
static int tmem_pampd_add_to_obj(struct tmem_obj *obj, uint32_t index,
void *pampd)
static void *tmem_pampd_delete_from_obj(struct tmem_obj *obj, uint32_t index)
static void tmem_objnode_node_destroy(struct tmem_obj *obj,
struct tmem_objnode *objnode,
unsigned int ht)
static void tmem_pampd_destroy_all_in_obj(struct tmem_obj *obj)
int tmem_put(struct tmem_pool *pool, struct tmem_oid *oidp, uint32_t index,
struct page *page)
int tmem_get(struct tmem_pool *pool, struct tmem_oid *oidp,
uint32_t index, struct page *page)
int tmem_flush_page(struct tmem_pool *pool,
struct tmem_oid *oidp, uint32_t index)
int tmem_flush_object(struct tmem_pool *pool, struct tmem_oid *oidp)
int tmem_destroy_pool(struct tmem_pool *pool)
static LIST_HEAD(tmem_global_pool_list);
void tmem_new_pool(struct tmem_pool *pool, uint32_t flags)
