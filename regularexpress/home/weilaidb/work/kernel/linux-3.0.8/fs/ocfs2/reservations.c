#define OCFS2_CHECK_RESERVATIONS
DEFINE_SPINLOCK(resv_lock);
#define	OCFS2_MIN_RESV_WINDOW_BITS	8
#define	OCFS2_MAX_RESV_WINDOW_BITS	1024
int ocfs2_dir_resv_allowed(struct ocfs2_super *osb)
static unsigned int ocfs2_resv_window_bits(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv)
static inline unsigned int ocfs2_resv_end(struct ocfs2_alloc_reservation *resv)
static inline int ocfs2_resv_empty(struct ocfs2_alloc_reservation *resv)
static inline int ocfs2_resmap_disabled(struct ocfs2_reservation_map *resmap)
static void ocfs2_dump_resv(struct ocfs2_reservation_map *resmap)
static int ocfs2_validate_resmap_bits(struct ocfs2_reservation_map *resmap,
int i,
struct ocfs2_alloc_reservation *resv)
static void ocfs2_check_resmap(struct ocfs2_reservation_map *resmap)
static inline void ocfs2_check_resmap(struct ocfs2_reservation_map *resmap)
void ocfs2_resv_init_once(struct ocfs2_alloc_reservation *resv)
void ocfs2_resv_set_type(struct ocfs2_alloc_reservation *resv,
unsigned int flags)
int ocfs2_resmap_init(struct ocfs2_super *osb,
struct ocfs2_reservation_map *resmap)
static void ocfs2_resv_mark_lru(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv)
static void __ocfs2_resv_trunc(struct ocfs2_alloc_reservation *resv)
static void ocfs2_resv_remove(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv)
static void __ocfs2_resv_discard(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv)
void ocfs2_resv_discard(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv)
static void ocfs2_resmap_clear_all_resv(struct ocfs2_reservation_map *resmap)
void ocfs2_resmap_restart(struct ocfs2_reservation_map *resmap,
unsigned int clen, char *disk_bitmap)
void ocfs2_resmap_uninit(struct ocfs2_reservation_map *resmap)
static void ocfs2_resv_insert(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *new)
static struct ocfs2_alloc_reservation *
ocfs2_find_resv_lhs(struct ocfs2_reservation_map *resmap, unsigned int goal)
static int ocfs2_resmap_find_free_bits(struct ocfs2_reservation_map *resmap,
unsigned int wanted,
unsigned int search_start,
unsigned int search_len,
unsigned int *rstart,
unsigned int *rlen)
static void __ocfs2_resv_find_window(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
unsigned int goal, unsigned int wanted)
static void ocfs2_cannibalize_resv(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
unsigned int wanted)
static void ocfs2_resv_find_window(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
unsigned int wanted)
int ocfs2_resmap_resv_bits(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
int *cstart, int *clen)
static void
ocfs2_adjust_resv_from_alloc(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
unsigned int start, unsigned int end)
void ocfs2_resmap_claimed_bits(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
u32 cstart, u32 clen)
