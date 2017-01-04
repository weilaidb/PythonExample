struct decoration name_decoration = ;
enum decoration_type ;
static char decoration_colors[][COLOR_MAXLEN] = ;
static const char *decorate_get_color(int decorate_use_color, enum decoration_type ix)
static int parse_decorate_color_slot(const char *slot)
int parse_decorate_color_config(const char *var, const int ofs, const char *value)
#define decorate_get_color_opt(o, ix) \
decorate_get_color((o)->use_color, ix)
static void add_name_decoration(enum decoration_type type, const char *name, struct object *obj)
static int add_ref_decoration(const char *refname, const unsigned char *sha1, int flags, void *cb_data)
static int add_graft_decoration(const struct commit_graft *graft, void *cb_data)
void load_ref_decorations(int flags)
static void show_parents(struct commit *commit, int abbrev)
static void show_children(struct rev_info *opt, struct commit *commit, int abbrev)
void format_decorations(struct strbuf *sb,
const struct commit *commit,
int use_color)
void show_decorations(struct rev_info *opt, struct commit *commit)
static unsigned int digits_in_number(unsigned int number)
void fmt_output_subject(struct strbuf *filename,
const char *subject,
struct rev_info *info)
void fmt_output_commit(struct strbuf *filename,
struct commit *commit,
struct rev_info *info)
void log_write_email_headers(struct rev_info *opt, struct commit *commit,
const char **subject_p,
const char **extra_headers_p,
int *need_8bit_cte_p)
static void show_sig_lines(struct rev_info *opt, int status, const char *bol)
static void show_signature(struct rev_info *opt, struct commit *commit)
static int which_parent(const unsigned char *sha1, const struct commit *commit)
static int is_common_merge(const struct commit *commit)
static void show_one_mergetag(struct rev_info *opt,
struct commit_extra_header *extra,
struct commit *commit)
static void show_mergetag(struct rev_info *opt, struct commit *commit)
void show_log(struct rev_info *opt)
int log_tree_diff_flush(struct rev_info *opt)
static int do_diff_combined(struct rev_info *opt, struct commit *commit)
static int log_tree_diff(struct rev_info *opt, struct commit *commit, struct log_info *log)
int log_tree_commit(struct rev_info *opt, struct commit *commit)
