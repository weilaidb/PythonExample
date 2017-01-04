#define GREP_H
typedef int pcre;
typedef int pcre_extra;
enum grep_pat_token ;
enum grep_context ;
enum grep_header_field ;
struct grep_pat ;
enum grep_expr_node ;
enum grep_pattern_type ;
struct grep_expr ;
struct grep_opt ;
extern void init_grep_defaults(void);
extern int grep_config(const char *var, const char *value, void *);
extern void grep_init(struct grep_opt *, const char *prefix);
void grep_set_pattern_type_option(enum grep_pattern_type, struct grep_opt *opt);
void grep_commit_pattern_type(enum grep_pattern_type, struct grep_opt *opt);
extern void append_grep_pat(struct grep_opt *opt, const char *pat, size_t patlen, const char *origin, int no, enum grep_pat_token t);
extern void append_grep_pattern(struct grep_opt *opt, const char *pat, const char *origin, int no, enum grep_pat_token t);
extern void append_header_grep_pattern(struct grep_opt *, enum grep_header_field, const char *);
extern void compile_grep_patterns(struct grep_opt *opt);
extern void free_grep_patterns(struct grep_opt *opt);
extern int grep_buffer(struct grep_opt *opt, char *buf, unsigned long size);
struct grep_source ;
void grep_source_init(struct grep_source *gs, enum grep_source_type type,
const char *name, const char *path,
const void *identifier);
void grep_source_clear_data(struct grep_source *gs);
void grep_source_clear(struct grep_source *gs);
void grep_source_load_driver(struct grep_source *gs);
int grep_source(struct grep_opt *opt, struct grep_source *gs);
extern struct grep_opt *grep_opt_dup(const struct grep_opt *opt);
extern int grep_threads_ok(const struct grep_opt *opt);
extern int grep_use_locks;
extern pthread_mutex_t grep_attr_mutex;
extern pthread_mutex_t grep_read_mutex;
static inline void grep_read_lock(void)
static inline void grep_read_unlock(void)
#define grep_read_lock()
#define grep_read_unlock()
