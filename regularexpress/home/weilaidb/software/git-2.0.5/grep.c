static int grep_source_load(struct grep_source *gs);
static int grep_source_is_binary(struct grep_source *gs);
static struct grep_opt grep_defaults;
void init_grep_defaults(void)
static int parse_pattern_type_arg(const char *opt, const char *arg)
int grep_config(const char *var, const char *value, void *cb)
void grep_init(struct grep_opt *opt, const char *prefix)
void grep_commit_pattern_type(enum grep_pattern_type pattern_type, struct grep_opt *opt)
void grep_set_pattern_type_option(enum grep_pattern_type pattern_type, struct grep_opt *opt)
static struct grep_pat *create_grep_pat(const char *pat, size_t patlen,
const char *origin, int no,
enum grep_pat_token t,
enum grep_header_field field)
static void do_append_grep_pat(struct grep_pat ***tail, struct grep_pat *p)
void append_header_grep_pattern(struct grep_opt *opt,
enum grep_header_field field, const char *pat)
void append_grep_pattern(struct grep_opt *opt, const char *pat,
const char *origin, int no, enum grep_pat_token t)
void append_grep_pat(struct grep_opt *opt, const char *pat, size_t patlen,
const char *origin, int no, enum grep_pat_token t)
struct grep_opt *grep_opt_dup(const struct grep_opt *opt)
static NORETURN void compile_regexp_failed(const struct grep_pat *p,
const char *error)
static void compile_pcre_regexp(struct grep_pat *p, const struct grep_opt *opt)
static int pcrematch(struct grep_pat *p, const char *line, const char *eol,
regmatch_t *match, int eflags)
static void free_pcre_regexp(struct grep_pat *p)
static void compile_pcre_regexp(struct grep_pat *p, const struct grep_opt *opt)
static int pcrematch(struct grep_pat *p, const char *line, const char *eol,
regmatch_t *match, int eflags)
static void free_pcre_regexp(struct grep_pat *p)
static int is_fixed(const char *s, size_t len)
static void compile_regexp(struct grep_pat *p, struct grep_opt *opt)
static struct grep_expr *compile_pattern_or(struct grep_pat **);
static struct grep_expr *compile_pattern_atom(struct grep_pat **list)
static struct grep_expr *compile_pattern_not(struct grep_pat **list)
static struct grep_expr *compile_pattern_and(struct grep_pat **list)
static struct grep_expr *compile_pattern_or(struct grep_pat **list)
static struct grep_expr *compile_pattern_expr(struct grep_pat **list)
static void indent(int in)
static void dump_grep_pat(struct grep_pat *p)
static void dump_grep_expression_1(struct grep_expr *x, int in)
static void dump_grep_expression(struct grep_opt *opt)
static struct grep_expr *grep_true_expr(void)
static struct grep_expr *grep_or_expr(struct grep_expr *left, struct grep_expr *right)
static struct grep_expr *prep_header_patterns(struct grep_opt *opt)
static struct grep_expr *grep_splice_or(struct grep_expr *x, struct grep_expr *y)
static void compile_grep_patterns_real(struct grep_opt *opt)
void compile_grep_patterns(struct grep_opt *opt)
static void free_pattern_expr(struct grep_expr *x)
void free_grep_patterns(struct grep_opt *opt)
static char *end_of_line(char *cp, unsigned long *left)
static int word_char(char ch)
static void output_color(struct grep_opt *opt, const void *data, size_t size,
const char *color)
static void output_sep(struct grep_opt *opt, char sign)
static void show_name(struct grep_opt *opt, const char *name)
static int fixmatch(struct grep_pat *p, char *line, char *eol,
regmatch_t *match)
static int regmatch(const regex_t *preg, char *line, char *eol,
regmatch_t *match, int eflags)
static int patmatch(struct grep_pat *p, char *line, char *eol,
regmatch_t *match, int eflags)
static int strip_timestamp(char *bol, char **eol_p)
static struct  header_field[] = ;
static int match_one_pattern(struct grep_pat *p, char *bol, char *eol,
enum grep_context ctx,
regmatch_t *pmatch, int eflags)
static int match_expr_eval(struct grep_expr *x, char *bol, char *eol,
enum grep_context ctx, int collect_hits)
static int match_expr(struct grep_opt *opt, char *bol, char *eol,
enum grep_context ctx, int collect_hits)
static int match_line(struct grep_opt *opt, char *bol, char *eol,
enum grep_context ctx, int collect_hits)
static int match_next_pattern(struct grep_pat *p, char *bol, char *eol,
enum grep_context ctx,
regmatch_t *pmatch, int eflags)
static int next_match(struct grep_opt *opt, char *bol, char *eol,
enum grep_context ctx, regmatch_t *pmatch, int eflags)
static void show_line(struct grep_opt *opt, char *bol, char *eol,
const char *name, unsigned lno, char sign)
int grep_use_locks;
pthread_mutex_t grep_attr_mutex;
static inline void grep_attr_lock(void)
static inline void grep_attr_unlock(void)
pthread_mutex_t grep_read_mutex;
#define grep_attr_lock()
#define grep_attr_unlock()
static int match_funcname(struct grep_opt *opt, struct grep_source *gs, char *bol, char *eol)
static void show_funcname_line(struct grep_opt *opt, struct grep_source *gs,
char *bol, unsigned lno)
static void show_pre_context(struct grep_opt *opt, struct grep_source *gs,
char *bol, char *end, unsigned lno)
static int should_lookahead(struct grep_opt *opt)
static int look_ahead(struct grep_opt *opt,
unsigned long *left_p,
unsigned *lno_p,
char **bol_p)
static void std_output(struct grep_opt *opt, const void *buf, size_t size)
static int fill_textconv_grep(struct userdiff_driver *driver,
struct grep_source *gs)
static int grep_source_1(struct grep_opt *opt, struct grep_source *gs, int collect_hits)
static void clr_hit_marker(struct grep_expr *x)
static int chk_hit_marker(struct grep_expr *x)
int grep_source(struct grep_opt *opt, struct grep_source *gs)
int grep_buffer(struct grep_opt *opt, char *buf, unsigned long size)
void grep_source_init(struct grep_source *gs, enum grep_source_type type,
const char *name, const char *path,
const void *identifier)
void grep_source_clear(struct grep_source *gs)
void grep_source_clear_data(struct grep_source *gs)
static int grep_source_load_sha1(struct grep_source *gs)
static int grep_source_load_file(struct grep_source *gs)
static int grep_source_load(struct grep_source *gs)
void grep_source_load_driver(struct grep_source *gs)
static int grep_source_is_binary(struct grep_source *gs)
