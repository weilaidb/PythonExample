static int allow_add;
static int allow_remove;
static int allow_replace;
static int info_only;
static int force_remove;
static int verbose;
static int mark_valid_only;
static int mark_skip_worktree_only;
#define MARK_FLAG 1
#define UNMARK_FLAG 2
__attribute__((format (printf, 1, 2)))
static void report(const char *fmt, ...)
static int mark_ce_flags(const char *path, int flag, int mark)
static int remove_one_path(const char *path)
static int process_lstat_error(const char *path, int err)
static int add_one_path(const struct cache_entry *old, const char *path, int len, struct stat *st)
static int process_directory(const char *path, int len, struct stat *st)
static int process_path(const char *path)
static int add_cacheinfo(unsigned int mode, const unsigned char *sha1,
const char *path, int stage)
static void chmod_path(int flip, const char *path)
static void update_one(const char *path)
static void read_index_info(int line_termination)
static const char * const update_index_usage[] = ;
static unsigned char head_sha1[20];
static unsigned char merge_head_sha1[20];
static struct cache_entry *read_one_ent(const char *which,
unsigned char *ent, const char *path,
int namelen, int stage)
static int unresolve_one(const char *path)
static void read_head_pointers(void)
static int do_unresolve(int ac, const char **av,
const char *prefix, int prefix_length)
static int do_reupdate(int ac, const char **av,
const char *prefix, int prefix_length)
struct refresh_params ;
static int refresh(struct refresh_params *o, unsigned int flag)
static int refresh_callback(const struct option *opt,
const char *arg, int unset)
static int really_refresh_callback(const struct option *opt,
const char *arg, int unset)
static int chmod_callback(const struct option *opt,
const char *arg, int unset)
static int resolve_undo_clear_callback(const struct option *opt,
const char *arg, int unset)
static int parse_new_style_cacheinfo(const char *arg,
unsigned int *mode,
unsigned char sha1[],
const char **path)
static int cacheinfo_callback(struct parse_opt_ctx_t *ctx,
const struct option *opt, int unset)
static int stdin_cacheinfo_callback(struct parse_opt_ctx_t *ctx,
const struct option *opt, int unset)
static int stdin_callback(struct parse_opt_ctx_t *ctx,
const struct option *opt, int unset)
static int unresolve_callback(struct parse_opt_ctx_t *ctx,
const struct option *opt, int flags)
static int reupdate_callback(struct parse_opt_ctx_t *ctx,
const struct option *opt, int flags)
int cmd_update_index(int argc, const char **argv, const char *prefix)
