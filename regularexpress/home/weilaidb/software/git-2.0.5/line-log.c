static void range_set_grow(struct range_set *rs, size_t extra)
#define RANGE_SET_INIT
void range_set_init(struct range_set *rs, size_t prealloc)
void range_set_release(struct range_set *rs)
static void range_set_copy(struct range_set *dst, struct range_set *src)
static void range_set_move(struct range_set *dst, struct range_set *src)
void range_set_append_unsafe(struct range_set *rs, long a, long b)
void range_set_append(struct range_set *rs, long a, long b)
static int range_cmp(const void *_r, const void *_s)
static void range_set_check_invariants(struct range_set *rs)
void sort_and_merge_range_set(struct range_set *rs)
static void range_set_union(struct range_set *out,
struct range_set *a, struct range_set *b)
static void range_set_difference(struct range_set *out,
struct range_set *a, struct range_set *b)
static void diff_ranges_init(struct diff_ranges *diff)
static void diff_ranges_release(struct diff_ranges *diff)
void line_log_data_init(struct line_log_data *r)
static void line_log_data_clear(struct line_log_data *r)
static void free_line_log_data(struct line_log_data *r)
static struct line_log_data *
search_line_log_data(struct line_log_data *list, const char *path,
struct line_log_data **insertion_point)
static void line_log_data_insert(struct line_log_data **list,
char *path,
long begin, long end)
struct collect_diff_cbdata ;
static int collect_diff_cb(long start_a, long count_a,
long start_b, long count_b,
void *data)
static void collect_diff(mmfile_t *parent, mmfile_t *target, struct diff_ranges *out)
static int ranges_overlap(struct range *a, struct range *b)
static void diff_ranges_filter_touched(struct diff_ranges *out,
struct diff_ranges *diff,
struct range_set *rs)
static void range_set_shift_diff(struct range_set *out,
struct range_set *rs,
struct diff_ranges *diff)
static void range_set_map_across_diff(struct range_set *out,
struct range_set *rs,
struct diff_ranges *diff,
struct diff_ranges **touched_out)
static struct commit *check_single_commit(struct rev_info *revs)
static void fill_blob_sha1(struct commit *commit, struct diff_filespec *spec)
static void fill_line_ends(struct diff_filespec *spec, long *lines,
unsigned long **line_ends)
struct nth_line_cb ;
static const char *nth_line(void *data, long line)
static struct line_log_data *
parse_lines(struct commit *commit, const char *prefix, struct string_list *args)
static struct line_log_data *line_log_data_copy_one(struct line_log_data *r)
static struct line_log_data *
line_log_data_copy(struct line_log_data *r)
static struct line_log_data *line_log_data_merge(struct line_log_data *a,
struct line_log_data *b)
static void add_line_range(struct rev_info *revs, struct commit *commit,
struct line_log_data *range)
static void clear_commit_line_range(struct rev_info *revs, struct commit *commit)
static struct line_log_data *lookup_line_range(struct rev_info *revs,
struct commit *commit)
void line_log_init(struct rev_info *rev, const char *prefix, struct string_list *args)
static int count_parents(struct commit *commit)
static void move_diff_queue(struct diff_queue_struct *dst,
struct diff_queue_struct *src)
static void filter_diffs_for_paths(struct line_log_data *range, int keep_deletions)
static inline int diff_might_be_rename(void)
static void queue_diffs(struct line_log_data *range,
struct diff_options *opt,
struct diff_queue_struct *queue,
struct commit *commit, struct commit *parent)
static char *get_nth_line(long line, unsigned long *ends, void *data)
static void print_line(const char *prefix, char first,
long line, unsigned long *ends, void *data,
const char *color, const char *reset)
static char *output_prefix(struct diff_options *opt)
static void dump_diff_hacky_one(struct rev_info *rev, struct line_log_data *range)
static void dump_diff_hacky(struct rev_info *rev, struct line_log_data *range)
static int process_diff_filepair(struct rev_info *rev,
struct diff_filepair *pair,
struct line_log_data *range,
struct diff_ranges **diff_out)
static struct diff_filepair *diff_filepair_dup(struct diff_filepair *pair)
static void free_diffqueues(int n, struct diff_queue_struct *dq)
static int process_all_files(struct line_log_data **range_out,
struct rev_info *rev,
struct diff_queue_struct *queue,
struct line_log_data *range)
int line_log_print(struct rev_info *rev, struct commit *commit)
static int process_ranges_ordinary_commit(struct rev_info *rev, struct commit *commit,
struct line_log_data *range)
static int process_ranges_merge_commit(struct rev_info *rev, struct commit *commit,
struct line_log_data *range)
static int process_ranges_arbitrary_commit(struct rev_info *rev, struct commit *commit)
static enum rewrite_result line_log_rewrite_one(struct rev_info *rev, struct commit **pp)
int line_log_filter(struct rev_info *rev)
