#define FAILED_RUN "failed to run %s"
static const char * const builtin_gc_usage[] = ;
static int pack_refs = 1;
static int prune_reflogs = 1;
static int aggressive_depth = 250;
static int aggressive_window = 250;
static int gc_auto_threshold = 6700;
static int gc_auto_pack_limit = 50;
static int detach_auto = 1;
static const char *prune_expire = "2.weeks.ago";
static struct argv_array pack_refs_cmd = ARGV_ARRAY_INIT;
static struct argv_array reflog = ARGV_ARRAY_INIT;
static struct argv_array repack = ARGV_ARRAY_INIT;
static struct argv_array prune = ARGV_ARRAY_INIT;
static struct argv_array rerere = ARGV_ARRAY_INIT;
static char *pidfile;
static void remove_pidfile(void)
static void remove_pidfile_on_signal(int signo)
static int gc_config(const char *var, const char *value, void *cb)
static int too_many_loose_objects(void)
static int too_many_packs(void)
static void add_repack_all_option(void)
static int need_to_gc(void)
static const char *lock_repo_for_gc(int force, pid_t* ret_pid)
static int gc_before_repack(void)
int cmd_gc(int argc, const char **argv, const char *prefix)
