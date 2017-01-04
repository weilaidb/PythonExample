static int threaded_check_leading_path(struct cache_def *cache, const char *name, int len);
static int threaded_has_dirs_only_path(struct cache_def *cache, const char *name, int len, int prefix_len);
static int longest_path_match(const char *name_a, int len_a,
const char *name_b, int len_b,
int *previous_slash)
static struct cache_def default_cache;
static inline void reset_lstat_cache(struct cache_def *cache)
#define FL_DIR      (1 << 0)
#define FL_NOENT    (1 << 1)
#define FL_SYMLINK  (1 << 2)
#define FL_LSTATERR (1 << 3)
#define FL_ERR      (1 << 4)
#define FL_FULLPATH (1 << 5)
static int lstat_cache_matchlen(struct cache_def *cache,
const char *name, int len,
int *ret_flags, int track_flags,
int prefix_len_stat_func)
static int lstat_cache(struct cache_def *cache, const char *name, int len,
int track_flags, int prefix_len_stat_func)
#define USE_ONLY_LSTAT  0
int threaded_has_symlink_leading_path(struct cache_def *cache, const char *name, int len)
int has_symlink_leading_path(const char *name, int len)
int check_leading_path(const char *name, int len)
static int threaded_check_leading_path(struct cache_def *cache, const char *name, int len)
int has_dirs_only_path(const char *name, int len, int prefix_len)
static int threaded_has_dirs_only_path(struct cache_def *cache, const char *name, int len, int prefix_len)
static struct removal_def  removal;
static void do_remove_scheduled_dirs(int new_len)
void schedule_dir_for_removal(const char *name, int len)
void remove_scheduled_dirs(void)
