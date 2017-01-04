static struct diff_rename_dst  *rename_dst;
static int rename_dst_nr, rename_dst_alloc;
static struct diff_rename_dst *locate_rename_dst(struct diff_filespec *two,
int insert_ok)
static struct diff_rename_src  *rename_src;
static int rename_src_nr, rename_src_alloc;
static struct diff_rename_src *register_rename_src(struct diff_filepair *p)
static int basename_same(struct diff_filespec *src, struct diff_filespec *dst)
struct diff_score ;
static int estimate_similarity(struct diff_filespec *src,
struct diff_filespec *dst,
int minimum_score)
static void record_rename_pair(int dst_index, int src_index, int score)
static int score_compare(const void *a_, const void *b_)
struct file_similarity ;
static unsigned int hash_filespec(struct diff_filespec *filespec)
static int find_identical_files(struct hashmap *srcs,
int dst_index,
struct diff_options *options)
static void insert_file_table(struct hashmap *table, int index, struct diff_filespec *filespec)
static int find_exact_renames(struct diff_options *options)
#define NUM_CANDIDATE_PER_DST 4
static void record_if_better(struct diff_score m[], struct diff_score *o)
static int too_many_rename_candidates(int num_create,
struct diff_options *options)
static int find_renames(struct diff_score *mx, int dst_cnt, int minimum_score, int copies)
void diffcore_rename(struct diff_options *options)
