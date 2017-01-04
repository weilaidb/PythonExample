enum crlf_action ;
struct text_stat ;
static void gather_stats(const char *buf, unsigned long size, struct text_stat *stats)
static int is_binary(unsigned long size, struct text_stat *stats)
static enum eol output_eol(enum crlf_action crlf_action)
static void check_safe_crlf(const char *path, enum crlf_action crlf_action,
struct text_stat *stats, enum safe_crlf checksafe)
static int has_cr_in_index(const char *path)
static int crlf_to_git(const char *path, const char *src, size_t len,
struct strbuf *buf,
enum crlf_action crlf_action, enum safe_crlf checksafe)
static int crlf_to_worktree(const char *path, const char *src, size_t len,
struct strbuf *buf, enum crlf_action crlf_action)
struct filter_params ;
static int filter_buffer(int in, int out, void *data)
static int apply_filter(const char *path, const char *src, size_t len,
struct strbuf *dst, const char *cmd)
static struct convert_driver  *user_convert, **user_convert_tail;
static int read_convert_config(const char *var, const char *value, void *cb)
static int count_ident(const char *cp, unsigned long size)
static int ident_to_git(const char *path, const char *src, size_t len,
struct strbuf *buf, int ident)
static int ident_to_worktree(const char *path, const char *src, size_t len,
struct strbuf *buf, int ident)
static enum crlf_action git_path_check_crlf(const char *path, struct git_attr_check *check)
static enum eol git_path_check_eol(const char *path, struct git_attr_check *check)
static struct convert_driver *git_path_check_convert(const char *path,
struct git_attr_check *check)
static int git_path_check_ident(const char *path, struct git_attr_check *check)
static enum crlf_action input_crlf_action(enum crlf_action text_attr, enum eol eol_attr)
struct conv_attrs ;
static const char *conv_attr_name[] = ;
#define NUM_CONV_ATTRS ARRAY_SIZE(conv_attr_name)
static void convert_attrs(struct conv_attrs *ca, const char *path)
int convert_to_git(const char *path, const char *src, size_t len,
struct strbuf *dst, enum safe_crlf checksafe)
static int convert_to_working_tree_internal(const char *path, const char *src,
size_t len, struct strbuf *dst,
int normalizing)
int convert_to_working_tree(const char *path, const char *src, size_t len, struct strbuf *dst)
int renormalize_buffer(const char *path, const char *src, size_t len, struct strbuf *dst)
typedef int (*filter_fn)(struct stream_filter *,
const char *input, size_t *isize_p,
char *output, size_t *osize_p);
typedef void (*free_fn)(struct stream_filter *);
struct stream_filter_vtbl ;
struct stream_filter ;
static int null_filter_fn(struct stream_filter *filter,
const char *input, size_t *isize_p,
char *output, size_t *osize_p)
static void null_free_fn(struct stream_filter *filter)
static struct stream_filter_vtbl null_vtbl = ;
static struct stream_filter null_filter_singleton = ;
int is_null_stream_filter(struct stream_filter *filter)
struct lf_to_crlf_filter ;
static int lf_to_crlf_filter_fn(struct stream_filter *filter,
const char *input, size_t *isize_p,
char *output, size_t *osize_p)
static void lf_to_crlf_free_fn(struct stream_filter *filter)
static struct stream_filter_vtbl lf_to_crlf_vtbl = ;
static struct stream_filter *lf_to_crlf_filter(void)
#define FILTER_BUFFER 1024
struct cascade_filter ;
static int cascade_filter_fn(struct stream_filter *filter,
const char *input, size_t *isize_p,
char *output, size_t *osize_p)
static void cascade_free_fn(struct stream_filter *filter)
static struct stream_filter_vtbl cascade_vtbl = ;
static struct stream_filter *cascade_filter(struct stream_filter *one,
struct stream_filter *two)
#define IDENT_DRAINING (-1)
#define IDENT_SKIPPING (-2)
struct ident_filter ;
static int is_foreign_ident(const char *str)
static void ident_drain(struct ident_filter *ident, char **output_p, size_t *osize_p)
static int ident_filter_fn(struct stream_filter *filter,
const char *input, size_t *isize_p,
char *output, size_t *osize_p)
static void ident_free_fn(struct stream_filter *filter)
static struct stream_filter_vtbl ident_vtbl = ;
static struct stream_filter *ident_filter(const unsigned char *sha1)
struct stream_filter *get_stream_filter(const char *path, const unsigned char *sha1)
void free_stream_filter(struct stream_filter *filter)
int stream_filter(struct stream_filter *filter,
const char *input, size_t *isize_p,
char *output, size_t *osize_p)
