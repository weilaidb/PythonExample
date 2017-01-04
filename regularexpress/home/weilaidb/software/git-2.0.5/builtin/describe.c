#define SEEN		(1u << 0)
#define MAX_TAGS	(FLAG_BITS - 1)
static const char * const describe_usage[] = ;
static int debug;
static int all;
static int tags;
static int longformat;
static int first_parent;
static int abbrev = -1;
static int max_candidates = 10;
static struct hashmap names;
static int have_util;
static const char *pattern;
static int always;
static const char *dirty;
static const char *diff_index_args[] = ;
struct commit_name ;
static const char *prio_names[] = ;
static int commit_name_cmp(const struct commit_name *cn1,
const struct commit_name *cn2, const void *peeled)
static inline unsigned int hash_sha1(const unsigned char *sha1)
static inline struct commit_name *find_commit_name(const unsigned char *peeled)
static int replace_name(struct commit_name *e,
int prio,
const unsigned char *sha1,
struct tag **tag)
static void add_to_known_names(const char *path,
const unsigned char *peeled,
int prio,
const unsigned char *sha1)
static int get_name(const char *path, const unsigned char *sha1, int flag, void *cb_data)
struct possible_tag ;
static int compare_pt(const void *a_, const void *b_)
static unsigned long finish_depth_computation(
struct commit_list **list,
struct possible_tag *best)
static void display_name(struct commit_name *n)
static void show_suffix(int depth, const unsigned char *sha1)
static void describe(const char *arg, int last_one)
int cmd_describe(int argc, const char **argv, const char *prefix)
