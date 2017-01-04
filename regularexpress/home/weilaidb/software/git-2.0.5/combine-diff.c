static struct combine_diff_path *intersect_paths(struct combine_diff_path *curr, int n, int num_parent)
struct lline ;
struct plost ;
struct sline ;
static int match_string_spaces(const char *line1, int len1,
const char *line2, int len2,
long flags)
enum coalesce_direction ;
static struct lline *coalesce_lines(struct lline *base, int *lenbase,
struct lline *new, int lennew,
unsigned long parent, long flags)
static char *grab_blob(const unsigned char *sha1, unsigned int mode,
unsigned long *size, struct userdiff_driver *textconv,
const char *path)
static void append_lost(struct sline *sline, int n, const char *line, int len)
struct combine_diff_state ;
static void consume_line(void *state_, char *line, unsigned long len)
static void combine_diff(const unsigned char *parent, unsigned int mode,
mmfile_t *result_file,
struct sline *sline, unsigned int cnt, int n,
int num_parent, int result_deleted,
struct userdiff_driver *textconv,
const char *path, long flags)
static unsigned long context = 3;
static char combine_marker = '@';
static int interesting(struct sline *sline, unsigned long all_mask)
static unsigned long adjust_hunk_tail(struct sline *sline,
unsigned long all_mask,
unsigned long hunk_begin,
unsigned long i)
static unsigned long find_next(struct sline *sline,
unsigned long mark,
unsigned long i,
unsigned long cnt,
int look_for_uninteresting)
static int give_context(struct sline *sline, unsigned long cnt, int num_parent)
static int make_hunks(struct sline *sline, unsigned long cnt,
int num_parent, int dense)
static void show_parent_lno(struct sline *sline, unsigned long l0, unsigned long l1, int n, unsigned long null_context)
static int hunk_comment_line(const char *bol)
static void show_line_to_eol(const char *line, int len, const char *reset)
static void dump_sline(struct sline *sline, const char *line_prefix,
unsigned long cnt, int num_parent,
int use_color, int result_deleted)
static void reuse_combine_diff(struct sline *sline, unsigned long cnt,
int i, int j)
static void dump_quoted_path(const char *head,
const char *prefix,
const char *path,
const char *line_prefix,
const char *c_meta, const char *c_reset)
static void show_combined_header(struct combine_diff_path *elem,
int num_parent,
int dense,
struct rev_info *rev,
const char *line_prefix,
int mode_differs,
int show_file_header)
static void show_patch_diff(struct combine_diff_path *elem, int num_parent,
int dense, int working_tree_file,
struct rev_info *rev)
static void show_raw_diff(struct combine_diff_path *p, int num_parent, struct rev_info *rev)
void show_combined_diff(struct combine_diff_path *p,
int num_parent,
int dense,
struct rev_info *rev)
static void free_combined_pair(struct diff_filepair *pair)
static struct diff_filepair *combined_pair(struct combine_diff_path *p,
int num_parent)
static void handle_combined_callback(struct diff_options *opt,
struct combine_diff_path *paths,
int num_parent,
int num_paths)
static const char *path_path(void *obj)
void diff_tree_combined(const unsigned char *sha1,
const struct sha1_array *parents,
int dense,
struct rev_info *rev)
void diff_tree_combined_merge(const struct commit *commit, int dense,
struct rev_info *rev)
