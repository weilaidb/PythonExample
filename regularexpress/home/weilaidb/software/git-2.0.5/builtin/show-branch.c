static const char* show_branch_usage[] = ;
static int showbranch_use_color = -1;
static int default_num;
static int default_alloc;
static const char **default_arg;
#define UNINTERESTING	01
#define REV_SHIFT	 2
#define MAX_REVS	(FLAG_BITS - REV_SHIFT)
#define DEFAULT_REFLOG	4
static const char *get_color_code(int idx)
static const char *get_color_reset_code(void)
static struct commit *interesting(struct commit_list *list)
static struct commit *pop_one_commit(struct commit_list **list_p)
struct commit_name ;
static void name_commit(struct commit *commit, const char *head_name, int nth)
static void name_parent(struct commit *commit, struct commit *parent)
static int name_first_parent_chain(struct commit *c)
static void name_commits(struct commit_list *list,
struct commit **rev,
char **ref_name,
int num_rev)
static int mark_seen(struct commit *commit, struct commit_list **seen_p)
static void join_revs(struct commit_list **list_p,
struct commit_list **seen_p,
int num_rev, int extra)
static void show_one_commit(struct commit *commit, int no_name)
static char *ref_name[MAX_REVS + 1];
static int ref_name_cnt;
static const char *find_digit_prefix(const char *s, int *v)
static int version_cmp(const char *a, const char *b)
static int compare_ref_name(const void *a_, const void *b_)
static void sort_ref_range(int bottom, int top)
static int append_ref(const char *refname, const unsigned char *sha1,
int allow_dups)
static int append_head_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int append_remote_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int append_tag_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static const char *match_ref_pattern = NULL;
static int match_ref_slash = 0;
static int count_slash(const char *s)
static int append_matching_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static void snarf_refs(int head, int remotes)
static int rev_is_head(char *head, int headlen, char *name,
unsigned char *head_sha1, unsigned char *sha1)
static int show_merge_base(struct commit_list *seen, int num_rev)
static int show_independent(struct commit **rev,
int num_rev,
char **ref_name,
unsigned int *rev_mask)
static void append_one_rev(const char *av)
static int git_show_branch_config(const char *var, const char *value, void *cb)
static int omit_in_dense(struct commit *commit, struct commit **rev, int n)
static int reflog = 0;
static int parse_reflog_param(const struct option *opt, const char *arg,
int unset)
int cmd_show_branch(int ac, const char **av, const char *prefix)
