#define OCFS2_LOCAL_ALLOC(dinode)	(&((dinode)->id2.i_lab))
static u32 ocfs2_local_alloc_count_bits(struct ocfs2_dinode *alloc);
static int ocfs2_local_alloc_find_clear_bits(struct ocfs2_super *osb,
struct ocfs2_dinode *alloc,
u32 *numbits,
struct ocfs2_alloc_reservation *resv);
static void ocfs2_clear_local_alloc(struct ocfs2_dinode *alloc);
static int ocfs2_sync_local_to_main(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_dinode *alloc,
struct inode *main_bm_inode,
struct buffer_head *main_bm_bh);
static int ocfs2_local_alloc_reserve_for_window(struct ocfs2_super *osb,
struct ocfs2_alloc_context **ac,
struct inode **bitmap_inode,
struct buffer_head **bitmap_bh);
static int ocfs2_local_alloc_new_window(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_alloc_context *ac);
static int ocfs2_local_alloc_slide_window(struct ocfs2_super *osb,
struct inode *local_alloc_inode);
#define	OCFS2_LA_MAX_DEFAULT_MB	256
#define	OCFS2_LA_OLD_DEFAULT	8
unsigned int ocfs2_la_default_mb(struct ocfs2_super *osb)
void ocfs2_la_set_sizes(struct ocfs2_super *osb, int requested_mb)
static inline int ocfs2_la_state_enabled(struct ocfs2_super *osb)
void ocfs2_local_alloc_seen_free_bits(struct ocfs2_super *osb,
unsigned int num_clusters)
void ocfs2_la_enable_worker(struct work_struct *work)
int ocfs2_alloc_should_use_local(struct ocfs2_super *osb, u64 bits)
int ocfs2_load_local_alloc(struct ocfs2_super *osb)
void ocfs2_shutdown_local_alloc(struct ocfs2_super *osb)
int ocfs2_begin_local_alloc_recovery(struct ocfs2_super *osb,
int slot_num,
struct ocfs2_dinode **alloc_copy)
int ocfs2_complete_local_alloc_recovery(struct ocfs2_super *osb,
struct ocfs2_dinode *alloc)
int ocfs2_reserve_local_alloc_bits(struct ocfs2_super *osb,
u32 bits_wanted,
struct ocfs2_alloc_context *ac)
int ocfs2_claim_local_alloc_bits(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 bits_wanted,
u32 *bit_off,
u32 *num_bits)
static u32 ocfs2_local_alloc_count_bits(struct ocfs2_dinode *alloc)
static int ocfs2_local_alloc_find_clear_bits(struct ocfs2_super *osb,
struct ocfs2_dinode *alloc,
u32 *numbits,
struct ocfs2_alloc_reservation *resv)
static void ocfs2_clear_local_alloc(struct ocfs2_dinode *alloc)
static int ocfs2_sync_local_to_main(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_dinode *alloc,
struct inode *main_bm_inode,
struct buffer_head *main_bm_bh)
enum ocfs2_la_event ;
#define OCFS2_LA_ENABLE_INTERVAL (30 * HZ)
static int ocfs2_recalc_la_window(struct ocfs2_super *osb,
enum ocfs2_la_event event)
static int ocfs2_local_alloc_reserve_for_window(struct ocfs2_super *osb,
struct ocfs2_alloc_context **ac,
struct inode **bitmap_inode,
struct buffer_head **bitmap_bh)
static int ocfs2_local_alloc_new_window(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_alloc_context *ac)
static int ocfs2_local_alloc_slide_window(struct ocfs2_super *osb,
struct inode *local_alloc_inode)
