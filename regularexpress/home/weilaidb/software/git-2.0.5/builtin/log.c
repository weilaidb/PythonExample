static const char *default_date_mode = NULL;
static int default_abbrev_commit;
static int default_show_root = 1;
static int decoration_style;
static int decoration_given;
static int use_mailmap_config;
static const char *fmt_patch_subject_prefix = "PATCH";
static const char *fmt_pretty;
static const char * const builtin_log_usage[] = ;
struct line_opt_callback_data ;
static int parse_decoration_style(const char *var, const char *value)
static int decorate_callback(const struct option *opt, const char *arg, int unset)
static int log_line_range_callback(const struct option *option, const char *arg, int unset)
static void cmd_log_init_defaults(struct rev_info *rev)
static void cmd_log_init_finish(int argc, const char **argv, const char *prefix,
struct rev_info *rev, struct setup_revision_opt *opt)
static void cmd_log_init(int argc, const char **argv, const char *prefix,
struct rev_info *rev, struct setup_revision_opt *opt)
static int estimate_commit_count(struct rev_info *rev, struct commit_list *list)
static void show_early_header(struct rev_info *rev, const char *stage, int nr)
static struct itimerval early_output_timer;
static void log_show_early(struct rev_info *revs, struct commit_list *list)
static void early_output(int signal)
static void setup_early_output(struct rev_info *rev)
static void finish_early_output(struct rev_info *rev)
static int cmd_log_walk(struct rev_info *rev)
static int git_log_config(const char *var, const char *value, void *cb)
int cmd_whatchanged(int argc, const char **argv, const char *prefix)
static void show_tagger(char *buf, int len, struct rev_info *rev)
static int show_blob_object(const unsigned char *sha1, struct rev_info *rev, const char *obj_name)
static int show_tag_object(const unsigned char *sha1, struct rev_info *rev)
static int show_tree_object(const unsigned char *sha1,
const char *base, int baselen,
const char *pathname, unsigned mode, int stage, void *context)
static void show_rev_tweak_rev(struct rev_info *rev, struct setup_revision_opt *opt)
int cmd_show(int argc, const char **argv, const char *prefix)
int cmd_log_reflog(int argc, const char **argv, const char *prefix)
int cmd_log(int argc, const char **argv, const char *prefix)
static const char *fmt_patch_suffix = ".patch";
static int numbered = 0;
static int auto_number = 1;
static char *default_attach = NULL;
static struct string_list extra_hdr;
static struct string_list extra_to;
static struct string_list extra_cc;
static void add_header(const char *value)
#define THREAD_SHALLOW 1
#define THREAD_DEEP 2
static int thread;
static int do_signoff;
static const char *signature = git_version_string;
static int config_cover_letter;
enum ;
static int git_format_config(const char *var, const char *value, void *cb)
static FILE *realstdout = NULL;
static const char *output_directory = NULL;
static int outdir_offset;
static int reopen_stdout(struct commit *commit, const char *subject,
struct rev_info *rev, int quiet)
static void get_patch_ids(struct rev_info *rev, struct patch_ids *ids)
static void gen_message_id(struct rev_info *info, char *base)
static void print_signature(void)
static void add_branch_description(struct strbuf *buf, const char *branch_name)
static char *find_branch_name(struct rev_info *rev)
static void make_cover_letter(struct rev_info *rev, int use_stdout,
struct commit *origin,
int nr, struct commit **list,
const char *branch_name,
int quiet)
static const char *clean_message_id(const char *msg_id)
static const char *set_outdir(const char *prefix, const char *output_directory)
static const char * const builtin_format_patch_usage[] = ;
static int keep_subject = 0;
static int keep_callback(const struct option *opt, const char *arg, int unset)
static int subject_prefix = 0;
static int subject_prefix_callback(const struct option *opt, const char *arg,
int unset)
static int numbered_cmdline_opt = 0;
static int numbered_callback(const struct option *opt, const char *arg,
int unset)
static int no_numbered_callback(const struct option *opt, const char *arg,
int unset)
static int output_directory_callback(const struct option *opt, const char *arg,
int unset)
static int thread_callback(const struct option *opt, const char *arg, int unset)
static int attach_callback(const struct option *opt, const char *arg, int unset)
static int inline_callback(const struct option *opt, const char *arg, int unset)
static int header_callback(const struct option *opt, const char *arg, int unset)
static int to_callback(const struct option *opt, const char *arg, int unset)
static int cc_callback(const struct option *opt, const char *arg, int unset)
static int from_callback(const struct option *opt, const char *arg, int unset)
int cmd_format_patch(int argc, const char **argv, const char *prefix)
static int add_pending_commit(const char *arg, struct rev_info *revs, int flags)
static const char * const cherry_usage[] = ;
static void print_commit(char sign, struct commit *commit, int verbose,
int abbrev)
int cmd_cherry(int argc, const char **argv, const char *prefix)
