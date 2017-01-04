static const char * const git_tag_usage[] = ;
#define STRCMP_SORT     0
#define VERCMP_SORT     1
#define SORT_MASK       0x7fff
#define REVERSE_SORT    0x8000
struct tag_filter ;
static struct sha1_array points_at;
static unsigned int colopts;
static int match_pattern(const char **patterns, const char *ref)
static const unsigned char *match_points_at(const char *refname,
const unsigned char *sha1)
static int in_commit_list(const struct commit_list *want, struct commit *c)
static int contains_recurse(struct commit *candidate,
const struct commit_list *want)
static int contains(struct commit *candidate, const struct commit_list *want)
static void show_tag_lines(const unsigned char *sha1, int lines)
static int show_reference(const char *refname, const unsigned char *sha1,
int flag, void *cb_data)
static int sort_by_version(const void *a_, const void *b_)
static int list_tags(const char **patterns, int lines,
struct commit_list *with_commit, int sort)
typedef int (*each_tag_name_fn)(const char *name, const char *ref,
const unsigned char *sha1);
static int for_each_tag_name(const char **argv, each_tag_name_fn fn)
static int delete_tag(const char *name, const char *ref,
const unsigned char *sha1)
static int verify_tag(const char *name, const char *ref,
const unsigned char *sha1)
static int do_sign(struct strbuf *buffer)
static const char tag_template[] =
N_("\nWrite a tag message\n"
"Lines starting with '%c' will be ignored.\n");
static const char tag_template_nocleanup[] =
N_("\nWrite a tag message\n"
"Lines starting with '%c' will be kept; you may remove them"
" yourself if you want to.\n");
static int git_tag_config(const char *var, const char *value, void *cb)
static void write_tag_body(int fd, const unsigned char *sha1)
static int build_tag_object(struct strbuf *buf, int sign, unsigned char *result)
struct create_tag_options ;
static void create_tag(const unsigned char *object, const char *tag,
struct strbuf *buf, struct create_tag_options *opt,
unsigned char *prev, unsigned char *result)
struct msg_arg ;
static int parse_msg_arg(const struct option *opt, const char *arg, int unset)
static int strbuf_check_tag_ref(struct strbuf *sb, const char *name)
static int parse_opt_points_at(const struct option *opt __attribute__((unused)),
const char *arg, int unset)
static int parse_opt_sort(const struct option *opt, const char *arg, int unset)
int cmd_tag(int argc, const char **argv, const char *prefix)
