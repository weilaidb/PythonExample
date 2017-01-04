static const char *prefix;
static int prefix_length = -1;
static int newfd = -1;
static int unidiff_zero;
static int p_value = 1;
static int p_value_known;
static int check_index;
static int update_index;
static int cached;
static int diffstat;
static int numstat;
static int summary;
static int check;
static int apply = 1;
static int apply_in_reverse;
static int apply_with_reject;
static int apply_verbosely;
static int allow_overlap;
static int no_add;
static int threeway;
static const char *fake_ancestor;
static int line_termination = '\n';
static unsigned int p_context = UINT_MAX;
static const char * const apply_usage[] = ;
static enum ws_error_action  ws_error_action = warn_on_ws_error;
static int whitespace_error;
static int squelch_whitespace_errors = 5;
static int applied_after_fixing_ws;
static enum ws_ignore  ws_ignore_action = ignore_ws_none;
static const char *patch_input_file;
static const char *root;
static int root_len;
static int read_stdin = 1;
static int options;
static void parse_whitespace_option(const char *option)
static void parse_ignorewhitespace_option(const char *option)
static void set_default_whitespace_mode(const char *whitespace_option)
static int max_change, max_len;
static int linenr = 1;
struct fragment ;
#define binary_patch_method leading
#define BINARY_DELTA_DEFLATED	1
#define BINARY_LITERAL_DEFLATED 2
struct patch ;
static void free_fragment_list(struct fragment *list)
static void free_patch(struct patch *patch)
static void free_patch_list(struct patch *list)
struct line ;
struct image ;
static struct string_list fn_table;
static uint32_t hash_line(const char *cp, size_t len)
static int fuzzy_matchlines(const char *s1, size_t n1,
const char *s2, size_t n2)
static void add_line_info(struct image *img, const char *bol, size_t len, unsigned flag)
static void prepare_image(struct image *image, char *buf, size_t len,
int prepare_linetable)
static void clear_image(struct image *image)
static void say_patch_name(FILE *output, const char *fmt, struct patch *patch)
#define SLOP (16)
static void read_patch_file(struct strbuf *sb, int fd)
static unsigned long linelen(const char *buffer, unsigned long size)
static int is_dev_null(const char *str)
#define TERM_SPACE	1
#define TERM_TAB	2
static int name_terminate(const char *name, int namelen, int c, int terminate)
static char *squash_slash(char *name)
static char *find_name_gnu(const char *line, const char *def, int p_value)
static size_t sane_tz_len(const char *line, size_t len)
static size_t tz_with_colon_len(const char *line, size_t len)
static size_t date_len(const char *line, size_t len)
static size_t short_time_len(const char *line, size_t len)
static size_t fractional_time_len(const char *line, size_t len)
static size_t trailing_spaces_len(const char *line, size_t len)
static size_t diff_timestamp_len(const char *line, size_t len)
static char *null_strdup(const char *s)
static char *find_name_common(const char *line, const char *def,
int p_value, const char *end, int terminate)
static char *find_name(const char *line, char *def, int p_value, int terminate)
static char *find_name_traditional(const char *line, char *def, int p_value)
static int count_slashes(const char *cp)
static int guess_p_value(const char *nameline)
static int has_epoch_timestamp(const char *nameline)
static void parse_traditional_patch(const char *first, const char *second, struct patch *patch)
static int gitdiff_hdrend(const char *line, struct patch *patch)
#define DIFF_OLD_NAME 0
#define DIFF_NEW_NAME 1
static char *gitdiff_verify_name(const char *line, int isnull, char *orig_name, int side)
static int gitdiff_oldname(const char *line, struct patch *patch)
static int gitdiff_newname(const char *line, struct patch *patch)
static int gitdiff_oldmode(const char *line, struct patch *patch)
static int gitdiff_newmode(const char *line, struct patch *patch)
static int gitdiff_delete(const char *line, struct patch *patch)
static int gitdiff_newfile(const char *line, struct patch *patch)
static int gitdiff_copysrc(const char *line, struct patch *patch)
static int gitdiff_copydst(const char *line, struct patch *patch)
static int gitdiff_renamesrc(const char *line, struct patch *patch)
static int gitdiff_renamedst(const char *line, struct patch *patch)
static int gitdiff_similarity(const char *line, struct patch *patch)
static int gitdiff_dissimilarity(const char *line, struct patch *patch)
static int gitdiff_index(const char *line, struct patch *patch)
static int gitdiff_unrecognized(const char *line, struct patch *patch)
static const char *skip_tree_prefix(const char *line, int llen)
static char *git_header_name(const char *line, int llen)
static int parse_git_header(const char *line, int len, unsigned int size, struct patch *patch)
static int parse_num(const char *line, unsigned long *p)
static int parse_range(const char *line, int len, int offset, const char *expect,
unsigned long *p1, unsigned long *p2)
static void recount_diff(const char *line, int size, struct fragment *fragment)
static int parse_fragment_header(const char *line, int len, struct fragment *fragment)
static int find_header(const char *line, unsigned long size, int *hdrsize, struct patch *patch)
static void record_ws_error(unsigned result, const char *line, int len, int linenr)
static void check_whitespace(const char *line, int len, unsigned ws_rule)
static int parse_fragment(const char *line, unsigned long size,
struct patch *patch, struct fragment *fragment)
static int parse_single_patch(const char *line, unsigned long size, struct patch *patch)
static inline int metadata_changes(struct patch *patch)
static char *inflate_it(const void *data, unsigned long size,
unsigned long inflated_size)
static struct fragment *parse_binary_hunk(char **buf_p,
unsigned long *sz_p,
int *status_p,
int *used_p)
static int parse_binary(char *buffer, unsigned long size, struct patch *patch)
static int parse_chunk(char *buffer, unsigned long size, struct patch *patch)
#define swap(a,b) myswap((a),(b),sizeof(a))
#define myswap(a, b, size) do  while (0)
static void reverse_patches(struct patch *p)
static const char pluses[] =
"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
static const char minuses[]=
"----------------------------------------------------------------------";
static void show_stats(struct patch *patch)
static int read_old_data(struct stat *st, const char *path, struct strbuf *buf)
static void update_pre_post_images(struct image *preimage,
struct image *postimage,
char *buf,
size_t len, size_t postlen)
static int match_fragment(struct image *img,
struct image *preimage,
struct image *postimage,
unsigned long try,
int try_lno,
unsigned ws_rule,
int match_beginning, int match_end)
static int find_pos(struct image *img,
struct image *preimage,
struct image *postimage,
int line,
unsigned ws_rule,
int match_beginning, int match_end)
static void remove_first_line(struct image *img)
static void remove_last_line(struct image *img)
static void update_image(struct image *img,
int applied_pos,
struct image *preimage,
struct image *postimage)
static int apply_one_fragment(struct image *img, struct fragment *frag,
int inaccurate_eof, unsigned ws_rule,
int nth_fragment)
static int apply_binary_fragment(struct image *img, struct patch *patch)
static int apply_binary(struct image *img, struct patch *patch)
static int apply_fragments(struct image *img, struct patch *patch)
static int read_blob_object(struct strbuf *buf, const unsigned char *sha1, unsigned mode)
static int read_file_or_gitlink(const struct cache_entry *ce, struct strbuf *buf)
static struct patch *in_fn_table(const char *name)
#define PATH_TO_BE_DELETED ((struct patch *) -2)
#define PATH_WAS_DELETED ((struct patch *) -1)
static int to_be_deleted(struct patch *patch)
static int was_deleted(struct patch *patch)
static void add_to_fn_table(struct patch *patch)
static void prepare_fn_table(struct patch *patch)
static int checkout_target(struct cache_entry *ce, struct stat *st)
static struct patch *previous_patch(struct patch *patch, int *gone)
static int verify_index_match(const struct cache_entry *ce, struct stat *st)
#define SUBMODULE_PATCH_WITHOUT_INDEX 1
static int load_patch_target(struct strbuf *buf,
const struct cache_entry *ce,
struct stat *st,
const char *name,
unsigned expected_mode)
static int load_preimage(struct image *image,
struct patch *patch, struct stat *st,
const struct cache_entry *ce)
static int three_way_merge(struct image *image,
char *path,
const unsigned char *base,
const unsigned char *ours,
const unsigned char *theirs)
static int load_current(struct image *image, struct patch *patch)
static int try_threeway(struct image *image, struct patch *patch,
struct stat *st, const struct cache_entry *ce)
static int apply_data(struct patch *patch, struct stat *st, const struct cache_entry *ce)
static int check_preimage(struct patch *patch, struct cache_entry **ce, struct stat *st)
#define EXISTS_IN_INDEX 1
#define EXISTS_IN_WORKTREE 2
static int check_to_create(const char *new_name, int ok_if_exists)
static int check_patch(struct patch *patch)
static int check_patch_list(struct patch *patch)
static int get_current_sha1(const char *path, unsigned char *sha1)
static int preimage_sha1_in_gitlink_patch(struct patch *p, unsigned char sha1[20])
static void build_fake_ancestor(struct patch *list, const char *filename)
static void stat_patch_list(struct patch *patch)
static void numstat_patch_list(struct patch *patch)
static void show_file_mode_name(const char *newdelete, unsigned int mode, const char *name)
static void show_mode_change(struct patch *p, int show_name)
static void show_rename_copy(struct patch *p)
static void summary_patch_list(struct patch *patch)
static void patch_stats(struct patch *patch)
static void remove_file(struct patch *patch, int rmdir_empty)
static void add_index_file(const char *path, unsigned mode, void *buf, unsigned long size)
static int try_create_file(const char *path, unsigned int mode, const char *buf, unsigned long size)
static void create_one_file(char *path, unsigned mode, const char *buf, unsigned long size)
static void add_conflicted_stages_file(struct patch *patch)
static void create_file(struct patch *patch)
static void write_out_one_result(struct patch *patch, int phase)
static int write_out_one_reject(struct patch *patch)
static int write_out_results(struct patch *list)
static struct lock_file lock_file;
static struct string_list limit_by_name;
static int has_include;
static void add_name_limit(const char *name, int exclude)
static int use_patch(struct patch *p)
static void prefix_one(char **name)
static void prefix_patches(struct patch *p)
#define INACCURATE_EOF	(1<<0)
#define RECOUNT		(1<<1)
static int apply_patch(int fd, const char *filename, int options)
static int git_apply_config(const char *var, const char *value, void *cb)
static int option_parse_exclude(const struct option *opt,
const char *arg, int unset)
static int option_parse_include(const struct option *opt,
const char *arg, int unset)
static int option_parse_p(const struct option *opt,
const char *arg, int unset)
static int option_parse_z(const struct option *opt,
const char *arg, int unset)
static int option_parse_space_change(const struct option *opt,
const char *arg, int unset)
static int option_parse_whitespace(const struct option *opt,
const char *arg, int unset)
static int option_parse_directory(const struct option *opt,
const char *arg, int unset)
int cmd_apply(int argc, const char **argv, const char *prefix_)
