static char const * const grep_usage[] = ;
static int use_threads = 1;
#define THREADS 8
static pthread_t threads[THREADS];
struct work_item ;
#define TODO_SIZE 128
static struct work_item todo[TODO_SIZE];
static int todo_start;
static int todo_end;
static int todo_done;
static int all_work_added;
static pthread_mutex_t grep_mutex;
static inline void grep_lock(void)
static inline void grep_unlock(void)
static pthread_cond_t cond_add;
static pthread_cond_t cond_write;
static pthread_cond_t cond_result;
static int skip_first_line;
static void add_work(struct grep_opt *opt, enum grep_source_type type,
const char *name, const char *path, const void *id)
static struct work_item *get_work(void)
static void work_done(struct work_item *w)
static void *run(void *arg)
static void strbuf_out(struct grep_opt *opt, const void *buf, size_t size)
static void start_threads(struct grep_opt *opt)
static int wait_all(void)
static int wait_all(void)
static int grep_cmd_config(const char *var, const char *value, void *cb)
static void *lock_and_read_sha1_file(const unsigned char *sha1, enum object_type *type, unsigned long *size)
static int grep_sha1(struct grep_opt *opt, const unsigned char *sha1,
const char *filename, int tree_name_len,
const char *path)
static int grep_file(struct grep_opt *opt, const char *filename)
static void append_path(struct grep_opt *opt, const void *data, size_t len)
static void run_pager(struct grep_opt *opt, const char *prefix)
static int grep_cache(struct grep_opt *opt, const struct pathspec *pathspec, int cached)
static int grep_tree(struct grep_opt *opt, const struct pathspec *pathspec,
struct tree_desc *tree, struct strbuf *base, int tn_len,
int check_attr)
static int grep_object(struct grep_opt *opt, const struct pathspec *pathspec,
struct object *obj, const char *name, struct object_context *oc)
static int grep_objects(struct grep_opt *opt, const struct pathspec *pathspec,
const struct object_array *list)
static int grep_directory(struct grep_opt *opt, const struct pathspec *pathspec,
int exc_std)
static int context_callback(const struct option *opt, const char *arg,
int unset)
static int file_callback(const struct option *opt, const char *arg, int unset)
static int not_callback(const struct option *opt, const char *arg, int unset)
static int and_callback(const struct option *opt, const char *arg, int unset)
static int open_callback(const struct option *opt, const char *arg, int unset)
static int close_callback(const struct option *opt, const char *arg, int unset)
static int pattern_callback(const struct option *opt, const char *arg,
int unset)
static int help_callback(const struct option *opt, const char *arg, int unset)
int cmd_grep(int argc, const char **argv, const char *prefix)
