#define _FS_CEPH_OSDMAP_H
struct ceph_pg_pool_info ;
struct ceph_pg_mapping ;
struct ceph_osdmap ;
#define ceph_file_layout_su(l) ((__s32)le32_to_cpu((l).fl_stripe_unit))
#define ceph_file_layout_stripe_count(l) \
((__s32)le32_to_cpu((l).fl_stripe_count))
#define ceph_file_layout_object_size(l) ((__s32)le32_to_cpu((l).fl_object_size))
#define ceph_file_layout_cas_hash(l) ((__s32)le32_to_cpu((l).fl_cas_hash))
#define ceph_file_layout_object_su(l) \
((__s32)le32_to_cpu((l).fl_object_stripe_unit))
#define ceph_file_layout_pg_preferred(l) \
((__s32)le32_to_cpu((l).fl_pg_preferred))
#define ceph_file_layout_pg_pool(l) \
((__s32)le32_to_cpu((l).fl_pg_pool))
static inline unsigned ceph_file_layout_stripe_width(struct ceph_file_layout *l)
static inline unsigned ceph_file_layout_period(struct ceph_file_layout *l)
static inline int ceph_osd_is_up(struct ceph_osdmap *map, int osd)
static inline bool ceph_osdmap_flag(struct ceph_osdmap *map, int flag)
extern char *ceph_osdmap_state_str(char *str, int len, int state);
static inline struct ceph_entity_addr *ceph_osd_addr(struct ceph_osdmap *map,
int osd)
extern struct ceph_osdmap *osdmap_decode(void **p, void *end);
extern struct ceph_osdmap *osdmap_apply_incremental(void **p, void *end,
struct ceph_osdmap *map,
struct ceph_messenger *msgr);
extern void ceph_osdmap_destroy(struct ceph_osdmap *map);
extern void ceph_calc_file_object_mapping(struct ceph_file_layout *layout,
u64 off, u64 *plen,
u64 *bno, u64 *oxoff, u64 *oxlen);
extern int ceph_calc_object_layout(struct ceph_object_layout *ol,
const char *oid,
struct ceph_file_layout *fl,
struct ceph_osdmap *osdmap);
extern int ceph_calc_pg_acting(struct ceph_osdmap *osdmap, struct ceph_pg pgid,
int *acting);
extern int ceph_calc_pg_primary(struct ceph_osdmap *osdmap,
struct ceph_pg pgid);
extern int ceph_pg_poolid_by_name(struct ceph_osdmap *map, const char *name);
