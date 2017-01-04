static struct sha1_array good_revs;
static struct sha1_array skipped_revs;
static unsigned char *current_bad_sha1;
static const char *argv_checkout[] = ;
static const char *argv_show_branch[] = ;
static const char *argv_update_ref[] = ;
#define COUNTED		(1u<<16)
static int count_distance(struct commit_list *entry)
static void clear_distance(struct commit_list *list)
#define DEBUG_BISECT 0
static inline int weight(struct commit_list *elem)
static inline void weight_set(struct commit_list *elem, int weight)
static int count_interesting_parents(struct commit *commit)
static inline int halfway(struct commit_list *p, int nr)
#if !DEBUG_BISECT
#define show_list(a,b,c,d) do  while (0)
static void show_list(const char *debug, int counted, int nr,
struct commit_list *list)
static struct commit_list *best_bisection(struct commit_list *list, int nr)
struct commit_dist ;
static int compare_commit_dist(const void *a_, const void *b_)
static struct commit_list *best_bisection_sorted(struct commit_list *list, int nr)
static struct commit_list *do_find_bisection(struct commit_list *list,
int nr, int *weights,
int find_all)
struct commit_list *find_bisection(struct commit_list *list,
int *reaches, int *all,
int find_all)
static int register_ref(const char *refname, const unsigned char *sha1,
int flags, void *cb_data)
static int read_bisect_refs(void)
static void read_bisect_paths(struct argv_array *array)
static char *join_sha1_array_hex(struct sha1_array *array, char delim)
struct commit_list *filter_skipped(struct commit_list *list,
struct commit_list **tried,
int show_all,
int *count,
int *skipped_first)
#define PRN_MODULO 32768
static unsigned get_prn(unsigned count)
static int sqrti(int val)
static struct commit_list *skip_away(struct commit_list *list, int count)
static struct commit_list *managed_skipped(struct commit_list *list,
struct commit_list **tried)
static void bisect_rev_setup(struct rev_info *revs, const char *prefix,
const char *bad_format, const char *good_format,
int read_paths)
static void bisect_common(struct rev_info *revs)
static void exit_if_skipped_commits(struct commit_list *tried,
const unsigned char *bad)
static int is_expected_rev(const unsigned char *sha1)
static void mark_expected_rev(char *bisect_rev_hex)
static int bisect_checkout(char *bisect_rev_hex, int no_checkout)
static struct commit *get_commit_reference(const unsigned char *sha1)
static struct commit **get_bad_and_good_commits(int *rev_nr)
static void handle_bad_merge_base(void)
static void handle_skipped_merge_base(const unsigned char *mb)
static void check_merge_bases(int no_checkout)
static int check_ancestors(const char *prefix)
static void check_good_are_ancestors_of_bad(const char *prefix, int no_checkout)
static void show_diff_tree(const char *prefix, struct commit *commit)
int bisect_next_all(const char *prefix, int no_checkout)
static inline int log2i(int n)
static inline int exp2i(int n)
int estimate_bisect_steps(int all)
