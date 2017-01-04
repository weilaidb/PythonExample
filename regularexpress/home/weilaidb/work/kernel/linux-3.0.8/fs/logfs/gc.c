#define WL_DELTA 397
#define WL_RATELIMIT 100
#define MAX_OBJ_ALIASES	2600
#define SCAN_RATIO 512
#define LIST_SIZE 64
#define SCAN_ROUNDS 128
#define SCAN_ROUNDS_HIGH 4
static int no_free_segments(struct super_block *sb)
static u8 root_distance(struct super_block *sb, gc_level_t __gc_level)
static int segment_is_reserved(struct super_block *sb, u32 segno)
static void logfs_mark_segment_bad(struct super_block *sb, u32 segno)
static u32 logfs_valid_bytes(struct super_block *sb, u32 segno, u32 *ec,
gc_level_t *gc_level)
static void logfs_cleanse_block(struct super_block *sb, u64 ofs, u64 ino,
u64 bix, gc_level_t gc_level)
static u32 logfs_gc_segment(struct super_block *sb, u32 segno)
static struct gc_candidate *add_list(struct gc_candidate *cand,
struct candidate_list *list)
static void remove_from_list(struct gc_candidate *cand)
static void free_candidate(struct super_block *sb, struct gc_candidate *cand)
u32 get_best_cand(struct super_block *sb, struct candidate_list *list, u32 *ec)
static void __add_candidate(struct super_block *sb, struct gc_candidate *cand)
static int add_candidate(struct super_block *sb, u32 segno, u32 valid, u32 ec,
u8 dist)
static void remove_segment_from_lists(struct super_block *sb, u32 segno)
static void scan_segment(struct super_block *sb, u32 segno)
static struct gc_candidate *first_in_list(struct candidate_list *list)
static struct gc_candidate *get_candidate(struct super_block *sb)
static int __logfs_gc_once(struct super_block *sb, struct gc_candidate *cand)
static int logfs_gc_once(struct super_block *sb)
static int logfs_scan_some(struct super_block *sb)
static void __logfs_gc_pass(struct super_block *sb, int target)
static int wl_ratelimit(struct super_block *sb, u64 *next_event)
static void logfs_wl_pass(struct super_block *sb)
static void logfs_journal_wl_pass(struct super_block *sb)
void logfs_gc_pass(struct super_block *sb)
static int check_area(struct super_block *sb, int i)
int logfs_check_areas(struct super_block *sb)
static void logfs_init_candlist(struct candidate_list *list, int maxcount,
int sort_by_ec)
int logfs_init_gc(struct super_block *sb)
static void logfs_cleanup_list(struct super_block *sb,
struct candidate_list *list)
void logfs_cleanup_gc(struct super_block *sb)
