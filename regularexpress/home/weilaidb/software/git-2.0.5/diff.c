#define FAST_WORKING_DIRECTORY 0
#define FAST_WORKING_DIRECTORY 1
static int diff_detect_rename_default;
static int diff_rename_limit_default = 400;
static int diff_suppress_blank_empty;
static int diff_use_color_default = -1;
static int diff_context_default = 3;
static const char *diff_word_regex_cfg;
static const char *external_diff_cmd_cfg;
static const char *diff_order_file_cfg;
int diff_auto_refresh_index = 1;
static int diff_mnemonic_prefix;
static int diff_no_prefix;
static int diff_stat_graph_width;
static int diff_dirstat_permille_default = 30;
static struct diff_options default_diff_options;
static long diff_algorithm;
static char diff_colors[][COLOR_MAXLEN] = ;
static int parse_diff_color_slot(const char *var, int ofs)
static int parse_dirstat_params(struct diff_options *options, const char *params_string,
struct strbuf *errmsg)
static int parse_submodule_params(struct diff_options *options, const char *value)
static int git_config_rename(const char *var, const char *value)
long parse_algorithm_value(const char *value)
int git_diff_ui_config(const char *var, const char *value, void *cb)
int git_diff_basic_config(const char *var, const char *value, void *cb)
static char *quote_two(const char *one, const char *two)
static const char *external_diff(void)
static struct diff_tempfile  diff_temp[2];
typedef unsigned long (*sane_truncate_fn)(char *line, unsigned long len);
struct emit_callback ;
static int count_lines(const char *data, int size)
static int fill_mmfile(mmfile_t *mf, struct diff_filespec *one)
static unsigned long diff_filespec_size(struct diff_filespec *one)
static int count_trailing_blank(mmfile_t *mf, unsigned ws_rule)
static void check_blank_at_eof(mmfile_t *mf1, mmfile_t *mf2,
struct emit_callback *ecbdata)
static void emit_line_0(struct diff_options *o, const char *set, const char *reset,
int first, const char *line, int len)
static void emit_line(struct diff_options *o, const char *set, const char *reset,
const char *line, int len)
static int new_blank_line_at_eof(struct emit_callback *ecbdata, const char *line, int len)
static void emit_add_line(const char *reset,
struct emit_callback *ecbdata,
const char *line, int len)
static void emit_hunk_header(struct emit_callback *ecbdata,
const char *line, int len)
static struct diff_tempfile *claim_diff_tempfile(void)
static int remove_tempfile_installed;
static void remove_tempfile(void)
static void remove_tempfile_on_signal(int signo)
static void print_line_count(FILE *file, int count)
static void emit_rewrite_lines(struct emit_callback *ecb,
int prefix, const char *data, int size)
static void emit_rewrite_diff(const char *name_a,
const char *name_b,
struct diff_filespec *one,
struct diff_filespec *two,
struct userdiff_driver *textconv_one,
struct userdiff_driver *textconv_two,
struct diff_options *o)
struct diff_words_buffer ;
static void diff_words_append(char *line, unsigned long len,
struct diff_words_buffer *buffer)
struct diff_words_style_elem ;
struct diff_words_style ;
static struct diff_words_style diff_words_styles[] = ;
struct diff_words_data ;
static int fn_out_diff_words_write_helper(FILE *fp,
struct diff_words_style_elem *st_el,
const char *newline,
size_t count, const char *buf,
const char *line_prefix)
static int color_words_output_graph_prefix(struct diff_words_data *diff_words)
static void fn_out_diff_words_aux(void *priv, char *line, unsigned long len)
static int find_word_boundaries(mmfile_t *buffer, regex_t *word_regex,
int *begin, int *end)
static void diff_words_fill(struct diff_words_buffer *buffer, mmfile_t *out,
regex_t *word_regex)
static void diff_words_show(struct diff_words_data *diff_words)
static void diff_words_flush(struct emit_callback *ecbdata)
static void diff_filespec_load_driver(struct diff_filespec *one)
static const char *userdiff_word_regex(struct diff_filespec *one)
static void init_diff_words_data(struct emit_callback *ecbdata,
struct diff_options *orig_opts,
struct diff_filespec *one,
struct diff_filespec *two)
static void free_diff_words_data(struct emit_callback *ecbdata)
const char *diff_get_color(int diff_use_color, enum color_diff ix)
const char *diff_line_prefix(struct diff_options *opt)
static unsigned long sane_truncate_line(struct emit_callback *ecb, char *line, unsigned long len)
static void find_lno(const char *line, struct emit_callback *ecbdata)
static void fn_out_consume(void *priv, char *line, unsigned long len)
static char *pprint_rename(const char *a, const char *b)
struct diffstat_t ;
static struct diffstat_file *diffstat_add(struct diffstat_t *diffstat,
const char *name_a,
const char *name_b)
static void diffstat_consume(void *priv, char *line, unsigned long len)
const char mime_boundary_leader[] = "------------";
static int scale_linear(int it, int width, int max_change)
static void show_name(FILE *file,
const char *prefix, const char *name, int len)
static void show_graph(FILE *file, char ch, int cnt, const char *set, const char *reset)
static void fill_print_name(struct diffstat_file *file)
int print_stat_summary(FILE *fp, int files, int insertions, int deletions)
static void show_stats(struct diffstat_t *data, struct diff_options *options)
static void show_shortstats(struct diffstat_t *data, struct diff_options *options)
static void show_numstat(struct diffstat_t *data, struct diff_options *options)
struct dirstat_file ;
struct dirstat_dir ;
static long gather_dirstat(struct diff_options *opt, struct dirstat_dir *dir,
unsigned long changed, const char *base, int baselen)
static int dirstat_compare(const void *_a, const void *_b)
static void show_dirstat(struct diff_options *options)
static void show_dirstat_by_line(struct diffstat_t *data, struct diff_options *options)
static void free_diffstat_info(struct diffstat_t *diffstat)
struct checkdiff_t ;
static int is_conflict_marker(const char *line, int marker_size, unsigned long len)
static void checkdiff_consume(void *priv, char *line, unsigned long len)
static unsigned char *deflate_it(char *data,
unsigned long size,
unsigned long *result_size)
static void emit_binary_diff_body(FILE *file, mmfile_t *one, mmfile_t *two,
const char *prefix)
static void emit_binary_diff(FILE *file, mmfile_t *one, mmfile_t *two,
const char *prefix)
int diff_filespec_is_binary(struct diff_filespec *one)
static const struct userdiff_funcname *diff_funcname_pattern(struct diff_filespec *one)
void diff_set_mnemonic_prefix(struct diff_options *options, const char *a, const char *b)
struct userdiff_driver *get_textconv(struct diff_filespec *one)
static void builtin_diff(const char *name_a,
const char *name_b,
struct diff_filespec *one,
struct diff_filespec *two,
const char *xfrm_msg,
int must_show_header,
struct diff_options *o,
int complete_rewrite)
static void builtin_diffstat(const char *name_a, const char *name_b,
struct diff_filespec *one,
struct diff_filespec *two,
struct diffstat_t *diffstat,
struct diff_options *o,
struct diff_filepair *p)
static void builtin_checkdiff(const char *name_a, const char *name_b,
const char *attr_path,
struct diff_filespec *one,
struct diff_filespec *two,
struct diff_options *o)
struct diff_filespec *alloc_filespec(const char *path)
void free_filespec(struct diff_filespec *spec)
void fill_filespec(struct diff_filespec *spec, const unsigned char *sha1,
int sha1_valid, unsigned short mode)
static int reuse_worktree_file(const char *name, const unsigned char *sha1, int want_file)
static int diff_populate_gitlink(struct diff_filespec *s, int size_only)
int diff_populate_filespec(struct diff_filespec *s, int size_only)
void diff_free_filespec_blob(struct diff_filespec *s)
void diff_free_filespec_data(struct diff_filespec *s)
static void prep_temp_blob(const char *path, struct diff_tempfile *temp,
void *blob,
unsigned long size,
const unsigned char *sha1,
int mode)
static struct diff_tempfile *prepare_temp_file(const char *name,
struct diff_filespec *one)
static void run_external_diff(const char *pgm,
const char *name,
const char *other,
struct diff_filespec *one,
struct diff_filespec *two,
const char *xfrm_msg,
int complete_rewrite,
struct diff_options *o)
static int similarity_index(struct diff_filepair *p)
static void fill_metainfo(struct strbuf *msg,
const char *name,
const char *other,
struct diff_filespec *one,
struct diff_filespec *two,
struct diff_options *o,
struct diff_filepair *p,
int *must_show_header,
int use_color)
static void run_diff_cmd(const char *pgm,
const char *name,
const char *other,
const char *attr_path,
struct diff_filespec *one,
struct diff_filespec *two,
struct strbuf *msg,
struct diff_options *o,
struct diff_filepair *p)
static void diff_fill_sha1_info(struct diff_filespec *one)
static void strip_prefix(int prefix_length, const char **namep, const char **otherp)
static void run_diff(struct diff_filepair *p, struct diff_options *o)
static void run_diffstat(struct diff_filepair *p, struct diff_options *o,
struct diffstat_t *diffstat)
static void run_checkdiff(struct diff_filepair *p, struct diff_options *o)
void diff_setup(struct diff_options *options)
void diff_setup_done(struct diff_options *options)
static int opt_arg(const char *arg, int arg_short, const char *arg_long, int *val)
static int diff_scoreopt_parse(const char *opt);
static inline int short_opt(char opt, const char **argv,
const char **optarg)
int parse_long_opt(const char *opt, const char **argv,
const char **optarg)
static int stat_opt(struct diff_options *options, const char **av)
static int parse_dirstat_opt(struct diff_options *options, const char *params)
static int parse_submodule_opt(struct diff_options *options, const char *value)
static const char diff_status_letters[] = ;
static unsigned int filter_bit['Z' + 1];
static void prepare_filter_bits(void)
static unsigned filter_bit_tst(char status, const struct diff_options *opt)
static int parse_diff_filter_opt(const char *optarg, struct diff_options *opt)
static void enable_patch_output(int *fmt)
int diff_opt_parse(struct diff_options *options, const char **av, int ac)
int parse_rename_score(const char **cp_p)
static int diff_scoreopt_parse(const char *opt)
struct diff_queue_struct diff_queued_diff;
void diff_q(struct diff_queue_struct *queue, struct diff_filepair *dp)
struct diff_filepair *diff_queue(struct diff_queue_struct *queue,
struct diff_filespec *one,
struct diff_filespec *two)
void diff_free_filepair(struct diff_filepair *p)
const char *diff_unique_abbrev(const unsigned char *sha1, int len)
static void diff_flush_raw(struct diff_filepair *p, struct diff_options *opt)
int diff_unmodified_pair(struct diff_filepair *p)
static void diff_flush_patch(struct diff_filepair *p, struct diff_options *o)
static void diff_flush_stat(struct diff_filepair *p, struct diff_options *o,
struct diffstat_t *diffstat)
static void diff_flush_checkdiff(struct diff_filepair *p,
struct diff_options *o)
int diff_queue_is_empty(void)
#if DIFF_DEBUG
void diff_debug_filespec(struct diff_filespec *s, int x, const char *one)
void diff_debug_filepair(const struct diff_filepair *p, int i)
void diff_debug_queue(const char *msg, struct diff_queue_struct *q)
static void diff_resolve_rename_copy(void)
static int check_pair_status(struct diff_filepair *p)
static void flush_one_pair(struct diff_filepair *p, struct diff_options *opt)
static void show_file_mode_name(FILE *file, const char *newdelete, struct diff_filespec *fs)
static void show_mode_change(FILE *file, struct diff_filepair *p, int show_name,
const char *line_prefix)
static void show_rename_copy(FILE *file, const char *renamecopy, struct diff_filepair *p,
const char *line_prefix)
static void diff_summary(struct diff_options *opt, struct diff_filepair *p)
struct patch_id_t ;
static int remove_space(char *line, int len)
static void patch_id_consume(void *priv, char *line, unsigned long len)
static int diff_get_patch_id(struct diff_options *options, unsigned char *sha1)
int diff_flush_patch_id(struct diff_options *options, unsigned char *sha1)
static int is_summary_empty(const struct diff_queue_struct *q)
static const char rename_limit_warning[] =
"inexact rename detection was skipped due to too many files.";
static const char degrade_cc_to_c_warning[] =
"only found copies from modified paths due to too many files.";
static const char rename_limit_advice[] =
"you may want to set your %s variable to at least "
"%d and retry the command.";
void diff_warn_rename_limit(const char *varname, int needed, int degraded_cc)
void diff_flush(struct diff_options *options)
static int match_filter(const struct diff_options *options, const struct diff_filepair *p)
static void diffcore_apply_filter(struct diff_options *options)
static int diff_filespec_is_identical(struct diff_filespec *one,
struct diff_filespec *two)
static int diff_filespec_check_stat_unmatch(struct diff_filepair *p)
static void diffcore_skip_stat_unmatch(struct diff_options *diffopt)
static int diffnamecmp(const void *a_, const void *b_)
void diffcore_fix_diff_index(struct diff_options *options)
void diffcore_std(struct diff_options *options)
int diff_result_code(struct diff_options *opt, int status)
int diff_can_quit_early(struct diff_options *opt)
static int is_submodule_ignored(const char *path, struct diff_options *options)
void diff_addremove(struct diff_options *options,
int addremove, unsigned mode,
const unsigned char *sha1,
int sha1_valid,
const char *concatpath, unsigned dirty_submodule)
void diff_change(struct diff_options *options,
unsigned old_mode, unsigned new_mode,
const unsigned char *old_sha1,
const unsigned char *new_sha1,
int old_sha1_valid, int new_sha1_valid,
const char *concatpath,
unsigned old_dirty_submodule, unsigned new_dirty_submodule)
struct diff_filepair *diff_unmerge(struct diff_options *options, const char *path)
static char *run_textconv(const char *pgm, struct diff_filespec *spec,
size_t *outsize)
size_t fill_textconv(struct userdiff_driver *driver,
struct diff_filespec *df,
char **outbuf)
void setup_diff_pager(struct diff_options *opt)
