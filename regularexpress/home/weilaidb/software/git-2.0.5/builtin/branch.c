static const char * const builtin_branch_usage[] = ;
#define REF_LOCAL_BRANCH    0x01
#define REF_REMOTE_BRANCH   0x02
static const char *head;
static unsigned char head_sha1[20];
static int branch_use_color = -1;
static char branch_colors[][COLOR_MAXLEN] = ;
enum color_branch ;
static enum merge_filter  merge_filter;
static unsigned char merge_filter_ref[20];
static struct string_list output = STRING_LIST_INIT_DUP;
static unsigned int colopts;
static int parse_branch_color_slot(const char *var, int ofs)
static int git_branch_config(const char *var, const char *value, void *cb)
static const char *branch_get_color(enum color_branch ix)
static int branch_merged(int kind, const char *name,
struct commit *rev, struct commit *head_rev)
static int check_branch_commit(const char *branchname, const char *refname,
unsigned char *sha1, struct commit *head_rev,
int kinds, int force)
static void delete_branch_config(const char *branchname)
static int delete_branches(int argc, const char **argv, int force, int kinds,
int quiet)
struct ref_item ;
struct ref_list ;
static char *resolve_symref(const char *src, const char *prefix)
struct append_ref_cb ;
static int match_patterns(const char **pattern, const char *refname)
static int append_ref(const char *refname, const unsigned char *sha1, int flags, void *cb_data)
static void free_ref_list(struct ref_list *ref_list)
static int ref_cmp(const void *r1, const void *r2)
static void fill_tracking_info(struct strbuf *stat, const char *branch_name,
int show_upstream_ref)
static int matches_merge_filter(struct commit *commit)
static void add_verbose_info(struct strbuf *out, struct ref_item *item,
int verbose, int abbrev)
static void print_ref_item(struct ref_item *item, int maxwidth, int verbose,
int abbrev, int current, char *prefix)
static int calc_maxwidth(struct ref_list *refs)
static char *get_head_description(void)
static void show_detached(struct ref_list *ref_list)
static int print_ref_list(int kinds, int detached, int verbose, int abbrev, struct commit_list *with_commit, const char **pattern)
static void rename_branch(const char *oldname, const char *newname, int force)
static int opt_parse_merge_filter(const struct option *opt, const char *arg, int unset)
static const char edit_description[] = "BRANCH_DESCRIPTION";
static int edit_branch_description(const char *branch_name)
int cmd_branch(int argc, const char **argv, const char *prefix)
