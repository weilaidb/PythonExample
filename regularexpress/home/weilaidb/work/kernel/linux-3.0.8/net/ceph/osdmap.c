char *ceph_osdmap_state_str(char *str, int len, int state)
static int calc_bits_of(unsigned t)
static void calc_pg_masks(struct ceph_pg_pool_info *pi)
static int crush_decode_uniform_bucket(void **p, void *end,
struct crush_bucket_uniform *b)
static int crush_decode_list_bucket(void **p, void *end,
struct crush_bucket_list *b)
static int crush_decode_tree_bucket(void **p, void *end,
struct crush_bucket_tree *b)
static int crush_decode_straw_bucket(void **p, void *end,
struct crush_bucket_straw *b)
static struct crush_map *crush_decode(void *pbyval, void *end)
static int pgid_cmp(struct ceph_pg l, struct ceph_pg r)
static int __insert_pg_mapping(struct ceph_pg_mapping *new,
struct rb_root *root)
static struct ceph_pg_mapping *__lookup_pg_mapping(struct rb_root *root,
struct ceph_pg pgid)
static int __insert_pg_pool(struct rb_root *root, struct ceph_pg_pool_info *new)
static struct ceph_pg_pool_info *__lookup_pg_pool(struct rb_root *root, int id)
int ceph_pg_poolid_by_name(struct ceph_osdmap *map, const char *name)
EXPORT_SYMBOL(ceph_pg_poolid_by_name);
static void __remove_pg_pool(struct rb_root *root, struct ceph_pg_pool_info *pi)
static int __decode_pool(void **p, void *end, struct ceph_pg_pool_info *pi)
static int __decode_pool_names(void **p, void *end, struct ceph_osdmap *map)
void ceph_osdmap_destroy(struct ceph_osdmap *map)
static int osdmap_set_max_osd(struct ceph_osdmap *map, int max)
struct ceph_osdmap *osdmap_decode(void **p, void *end)
struct ceph_osdmap *osdmap_apply_incremental(void **p, void *end,
struct ceph_osdmap *map,
struct ceph_messenger *msgr)
void ceph_calc_file_object_mapping(struct ceph_file_layout *layout,
u64 off, u64 *plen,
u64 *ono,
u64 *oxoff, u64 *oxlen)
EXPORT_SYMBOL(ceph_calc_file_object_mapping);
int ceph_calc_object_layout(struct ceph_object_layout *ol,
const char *oid,
struct ceph_file_layout *fl,
struct ceph_osdmap *osdmap)
EXPORT_SYMBOL(ceph_calc_object_layout);
static int *calc_pg_raw(struct ceph_osdmap *osdmap, struct ceph_pg pgid,
int *osds, int *num)
int ceph_calc_pg_acting(struct ceph_osdmap *osdmap, struct ceph_pg pgid,
int *acting)
int ceph_calc_pg_primary(struct ceph_osdmap *osdmap, struct ceph_pg pgid)
EXPORT_SYMBOL(ceph_calc_pg_primary);
