#define MAX_SLABS 500
#define MAX_ALIASES 500
#define MAX_NODES 1024
struct slabinfo  slabinfo[MAX_SLABS];
struct aliasinfo  aliasinfo[MAX_ALIASES];
int slabs = 0;
int actual_slabs = 0;
int aliases = 0;
int alias_targets = 0;
int highest_node = 0;
char buffer[4096];
int show_empty = 0;
int show_report = 0;
int show_alias = 0;
int show_slab = 0;
int skip_zero = 1;
int show_numa = 0;
int show_track = 0;
int show_first_alias = 0;
int validate = 0;
int shrink = 0;
int show_inverted = 0;
int show_single_ref = 0;
int show_totals = 0;
int sort_size = 0;
int sort_active = 0;
int set_debug = 0;
int show_ops = 0;
int show_activity = 0;
int sanity = 0;
int redzone = 0;
int poison = 0;
int tracking = 0;
int tracing = 0;
int page_size;
regex_t pattern;
static void fatal(const char *x, ...)
static void usage(void)
static unsigned long read_obj(const char *name)
static unsigned long get_obj(const char *name)
static unsigned long get_obj_and_str(const char *name, char **x)
static void set_obj(struct slabinfo *s, const char *name, int n)
static unsigned long read_slab_obj(struct slabinfo *s, const char *name)
static int store_size(char *buffer, unsigned long value)
static void decode_numa_list(int *numa, char *t)
static void slab_validate(struct slabinfo *s)
static void slab_shrink(struct slabinfo *s)
int line = 0;
static void first_line(void)
static struct aliasinfo *find_one_alias(struct slabinfo *find)
static unsigned long slab_size(struct slabinfo *s)
static unsigned long slab_activity(struct slabinfo *s)
static void slab_numa(struct slabinfo *s, int mode)
static void show_tracking(struct slabinfo *s)
static void ops(struct slabinfo *s)
static const char *onoff(int x)
static void slab_stats(struct slabinfo *s)
static void report(struct slabinfo *s)
static void slabcache(struct slabinfo *s)
static int debug_opt_scan(char *opt)
static int slab_empty(struct slabinfo *s)
static void slab_debug(struct slabinfo *s)
static void totals(void)
static void sort_slabs(void)
static void sort_aliases(void)
static void link_slabs(void)
static void alias(void)
static void rename_slabs(void)
static int slab_mismatch(char *slab)
static void read_slab_dir(void)
static void output_slabs(void)
struct option opts[] = ;
int main(int argc, char *argv[])
