static const char * const fmt_merge_msg_usage[] = ;
static int use_branch_desc;
int fmt_merge_msg_config(const char *key, const char *value, void *cb)
struct src_data ;
struct origin_data ;
static void init_src_data(struct src_data *data)
static struct string_list srcs = STRING_LIST_INIT_DUP;
static struct string_list origins = STRING_LIST_INIT_DUP;
struct merge_parents ;
static struct merge_parent *find_merge_parent(struct merge_parents *table,
unsigned char *given,
unsigned char *commit)
static void add_merge_parent(struct merge_parents *table,
unsigned char *given,
unsigned char *commit)
static int handle_line(char *line, struct merge_parents *merge_parents)
static void print_joined(const char *singular, const char *plural,
struct string_list *list, struct strbuf *out)
static void add_branch_desc(struct strbuf *out, const char *name)
#define util_as_integral(elem) ((intptr_t)((elem)->util))
static void record_person(int which, struct string_list *people,
struct commit *commit)
static int cmp_string_list_util_as_integral(const void *a_, const void *b_)
static void add_people_count(struct strbuf *out, struct string_list *people)
static void credit_people(struct strbuf *out,
struct string_list *them,
int kind)
static void add_people_info(struct strbuf *out,
struct string_list *authors,
struct string_list *committers)
static void shortlog(const char *name,
struct origin_data *origin_data,
struct commit *head,
struct rev_info *rev,
struct fmt_merge_msg_opts *opts,
struct strbuf *out)
static void fmt_merge_msg_title(struct strbuf *out,
const char *current_branch)
static void fmt_tag_signature(struct strbuf *tagbuf,
struct strbuf *sig,
const char *buf,
unsigned long len)
static void fmt_merge_msg_sigs(struct strbuf *out)
static void find_merge_parents(struct merge_parents *result,
struct strbuf *in, unsigned char *head)
int fmt_merge_msg(struct strbuf *in, struct strbuf *out,
struct fmt_merge_msg_opts *opts)
int cmd_fmt_merge_msg(int argc, const char **argv, const char *prefix)
