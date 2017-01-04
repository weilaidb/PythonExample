static char blame_usage[] = N_("git blame [options] [rev-opts] [rev] [--] file");
static const char *blame_opt_usage[] = ;
static int longest_file;
static int longest_author;
static int max_orig_digits;
static int max_digits;
static int max_score_digits;
static int show_root;
static int reverse;
static int blank_boundary;
static int incremental;
static int xdl_opts;
static int abbrev = -1;
static int no_whole_file_rename;
static enum date_mode blame_date_mode = DATE_ISO8601;
static size_t blame_date_width;
static struct string_list mailmap;
#define DEBUG 0
static int num_read_blob;
static int num_get_patch;
static int num_commits;
#define PICKAXE_BLAME_MOVE		01
#define PICKAXE_BLAME_COPY		02
#define PICKAXE_BLAME_COPY_HARDER	04
#define PICKAXE_BLAME_COPY_HARDEST	010
static unsigned blame_move_score;
static unsigned blame_copy_score;
#define BLAME_DEFAULT_MOVE_SCORE	20
#define BLAME_DEFAULT_COPY_SCORE	40
#define METAINFO_SHOWN		(1u<<12)
#define MORE_THAN_ONE_PATH	(1u<<13)
struct origin ;
static int diff_hunks(mmfile_t *file_a, mmfile_t *file_b, long ctxlen,
xdl_emit_hunk_consume_func_t hunk_func, void *cb_data)
int textconv_object(const char *path,
unsigned mode,
const unsigned char *sha1,
int sha1_valid,
char **buf,
unsigned long *buf_size)
static void fill_origin_blob(struct diff_options *opt,
struct origin *o, mmfile_t *file)
static inline struct origin *origin_incref(struct origin *o)
static void origin_decref(struct origin *o)
static void drop_origin_blob(struct origin *o)
struct blame_entry ;
struct scoreboard ;
static void sanity_check_refcnt(struct scoreboard *);
static void coalesce(struct scoreboard *sb)
static struct origin *make_origin(struct commit *commit, const char *path)
static struct origin *get_origin(struct scoreboard *sb,
struct commit *commit,
const char *path)
static int fill_blob_sha1_and_mode(struct origin *origin)
static struct origin *find_origin(struct scoreboard *sb,
struct commit *parent,
struct origin *origin)
static struct origin *find_rename(struct scoreboard *sb,
struct commit *parent,
struct origin *origin)
static void add_blame_entry(struct scoreboard *sb, struct blame_entry *e)
static void dup_entry(struct blame_entry *dst, struct blame_entry *src)
static const char *nth_line(struct scoreboard *sb, long lno)
static const char *nth_line_cb(void *data, long lno)
static void split_overlap(struct blame_entry *split,
struct blame_entry *e,
int tlno, int plno, int same,
struct origin *parent)
static void split_blame(struct scoreboard *sb,
struct blame_entry *split,
struct blame_entry *e)
static void decref_split(struct blame_entry *split)
static void blame_overlap(struct scoreboard *sb, struct blame_entry *e,
int tlno, int plno, int same,
struct origin *parent)
static int find_last_in_target(struct scoreboard *sb, struct origin *target)
static void blame_chunk(struct scoreboard *sb,
int tlno, int plno, int same,
struct origin *target, struct origin *parent)
struct blame_chunk_cb_data ;
static int blame_chunk_cb(long start_a, long count_a,
long start_b, long count_b, void *data)
static int pass_blame_to_parent(struct scoreboard *sb,
struct origin *target,
struct origin *parent)
static unsigned ent_score(struct scoreboard *sb, struct blame_entry *e)
static void copy_split_if_better(struct scoreboard *sb,
struct blame_entry *best_so_far,
struct blame_entry *this)
static void handle_split(struct scoreboard *sb,
struct blame_entry *ent,
int tlno, int plno, int same,
struct origin *parent,
struct blame_entry *split)
struct handle_split_cb_data ;
static int handle_split_cb(long start_a, long count_a,
long start_b, long count_b, void *data)
static void find_copy_in_blob(struct scoreboard *sb,
struct blame_entry *ent,
struct origin *parent,
struct blame_entry *split,
mmfile_t *file_p)
static int find_move_in_parent(struct scoreboard *sb,
struct origin *target,
struct origin *parent)
struct blame_list ;
static struct blame_list *setup_blame_list(struct scoreboard *sb,
struct origin *target,
int min_score,
int *num_ents_p)
static void reset_scanned_flag(struct scoreboard *sb)
static int find_copy_in_parent(struct scoreboard *sb,
struct origin *target,
struct commit *parent,
struct origin *porigin,
int opt)
static void pass_whole_blame(struct scoreboard *sb,
struct origin *origin, struct origin *porigin)
static struct commit_list *first_scapegoat(struct rev_info *revs, struct commit *commit)
static int num_scapegoats(struct rev_info *revs, struct commit *commit)
#define MAXSG 16
static void pass_blame(struct scoreboard *sb, struct origin *origin, int opt)
struct commit_info ;
static void get_ac_line(const char *inbuf, const char *what,
struct strbuf *name, struct strbuf *mail,
unsigned long *time, struct strbuf *tz)
static void commit_info_init(struct commit_info *ci)
static void commit_info_destroy(struct commit_info *ci)
static void get_commit_info(struct commit *commit,
struct commit_info *ret,
int detailed)
static void write_filename_info(const char *path)
static int emit_one_suspect_detail(struct origin *suspect, int repeat)
static void found_guilty_entry(struct blame_entry *ent)
static void assign_blame(struct scoreboard *sb, int opt)
static const char *format_time(unsigned long time, const char *tz_str,
int show_raw_time)
#define OUTPUT_ANNOTATE_COMPAT	001
#define OUTPUT_LONG_OBJECT_NAME	002
#define OUTPUT_RAW_TIMESTAMP	004
#define OUTPUT_PORCELAIN	010
#define OUTPUT_SHOW_NAME	020
#define OUTPUT_SHOW_NUMBER	040
#define OUTPUT_SHOW_SCORE      0100
#define OUTPUT_NO_AUTHOR       0200
#define OUTPUT_SHOW_EMAIL	0400
#define OUTPUT_LINE_PORCELAIN 01000
static void emit_porcelain_details(struct origin *suspect, int repeat)
static void emit_porcelain(struct scoreboard *sb, struct blame_entry *ent,
int opt)
static void emit_other(struct scoreboard *sb, struct blame_entry *ent, int opt)
static void output(struct scoreboard *sb, int option)
static int prepare_lines(struct scoreboard *sb)
static int read_ancestry(const char *graft_file)
static int update_auto_abbrev(int auto_abbrev, struct origin *suspect)
static void find_alignment(struct scoreboard *sb, int *option)
static void sanity_check_refcnt(struct scoreboard *sb)
static int has_string_in_work_tree(const char *path)
static unsigned parse_score(const char *arg)
static const char *add_prefix(const char *prefix, const char *path)
static int git_blame_config(const char *var, const char *value, void *cb)
static void verify_working_tree_path(struct commit *work_tree, const char *path)
static struct commit_list **append_parent(struct commit_list **tail, const unsigned char *sha1)
static void append_merge_parents(struct commit_list **tail)
static void set_commit_buffer_from_strbuf(struct commit *c, struct strbuf *sb)
static struct commit *fake_working_tree_commit(struct diff_options *opt,
const char *path,
const char *contents_from)
static const char *prepare_final(struct scoreboard *sb)
static const char *prepare_initial(struct scoreboard *sb)
static int blame_copy_callback(const struct option *option, const char *arg, int unset)
static int blame_move_callback(const struct option *option, const char *arg, int unset)
int cmd_blame(int argc, const char **argv, const char *prefix)
