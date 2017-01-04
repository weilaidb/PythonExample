#define CUTOFF_DATE_SLOP 86400
typedef struct rev_name  rev_name;
static long cutoff = LONG_MAX;
#define MERGE_TRAVERSAL_WEIGHT 65535
static void name_rev(struct commit *commit,
const char *tip_name, int generation, int distance,
int deref)
static int subpath_matches(const char *path, const char *filter)
static const char *name_ref_abbrev(const char *refname, int shorten_unambiguous)
struct name_ref_data ;
static struct tip_table  tip_table;
static void add_to_tip_table(const unsigned char *sha1, const char *refname,
int shorten_unambiguous)
static int tipcmp(const void *a_, const void *b_)
static int name_ref(const char *path, const unsigned char *sha1, int flags, void *cb_data)
static const unsigned char *nth_tip_table_ent(size_t ix, void *table_)
static const char *get_exact_ref_match(const struct object *o)
static const char *get_rev_name(const struct object *o)
static void show_name(const struct object *obj,
const char *caller_name,
int always, int allow_undefined, int name_only)
static char const * const name_rev_usage[] = ;
static void name_rev_line(char *p, struct name_ref_data *data)
int cmd_name_rev(int argc, const char **argv, const char *prefix)
