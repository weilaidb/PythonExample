#define RESOLVED 0
#define PUNTED 1
#define THREE_STAGED 2
void *RERERE_RESOLVED = &RERERE_RESOLVED;
static int rerere_enabled = -1;
static int rerere_autoupdate;
static char *merge_rr_path;
const char *rerere_path(const char *hex, const char *file)
static int has_rerere_resolution(const char *hex)
static void read_rr(struct string_list *rr)
static struct lock_file write_lock;
static int write_rr(struct string_list *rr, int out_fd)
static void ferr_write(const void *p, size_t count, FILE *fp, int *err)
static inline void ferr_puts(const char *s, FILE *fp, int *err)
struct rerere_io ;
static void rerere_io_putstr(const char *str, struct rerere_io *io)
static void rerere_io_putconflict(int ch, int size, struct rerere_io *io)
static void rerere_io_putmem(const char *mem, size_t sz, struct rerere_io *io)
struct rerere_io_file ;
static int rerere_file_getline(struct strbuf *sb, struct rerere_io *io_)
static int is_cmarker(char *buf, int marker_char, int marker_size, int want_sp)
static int handle_path(unsigned char *sha1, struct rerere_io *io, int marker_size)
static int handle_file(const char *path, unsigned char *sha1, const char *output)
struct rerere_io_mem ;
static int rerere_mem_getline(struct strbuf *sb, struct rerere_io *io_)
static int handle_cache(const char *path, unsigned char *sha1, const char *output)
static int check_one_conflict(int i, int *type)
static int find_conflict(struct string_list *conflict)
int rerere_remaining(struct string_list *merge_rr)
static int merge(const char *name, const char *path)
static struct lock_file index_lock;
static int update_paths(struct string_list *update)
static int do_plain_rerere(struct string_list *rr, int fd)
static int git_rerere_config(const char *var, const char *value, void *cb)
static int is_rerere_enabled(void)
int setup_rerere(struct string_list *merge_rr, int flags)
int rerere(int flags)
static int rerere_forget_one_path(const char *path, struct string_list *rr)
int rerere_forget(struct pathspec *pathspec)
static time_t rerere_created_at(const char *name)
static time_t rerere_last_used_at(const char *name)
static void unlink_rr_item(const char *name)
struct rerere_gc_config_cb ;
static int git_rerere_gc_config(const char *var, const char *value, void *cb)
void rerere_gc(struct string_list *rr)
void rerere_clear(struct string_list *merge_rr)
