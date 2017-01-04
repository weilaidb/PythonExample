int starts_with(const char *str, const char *prefix)
int ends_with(const char *str, const char *suffix)
char strbuf_slopbuf[1];
void strbuf_init(struct strbuf *sb, size_t hint)
void strbuf_release(struct strbuf *sb)
char *strbuf_detach(struct strbuf *sb, size_t *sz)
void strbuf_attach(struct strbuf *sb, void *buf, size_t len, size_t alloc)
void strbuf_grow(struct strbuf *sb, size_t extra)
void strbuf_trim(struct strbuf *sb)
void strbuf_rtrim(struct strbuf *sb)
void strbuf_ltrim(struct strbuf *sb)
struct strbuf **strbuf_split_buf(const char *str, size_t slen,
int terminator, int max)
void strbuf_list_free(struct strbuf **sbs)
int strbuf_cmp(const struct strbuf *a, const struct strbuf *b)
void strbuf_splice(struct strbuf *sb, size_t pos, size_t len,
const void *data, size_t dlen)
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len)
void strbuf_remove(struct strbuf *sb, size_t pos, size_t len)
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
void strbuf_adddup(struct strbuf *sb, size_t pos, size_t len)
void strbuf_addf(struct strbuf *sb, const char *fmt, ...)
static void add_lines(struct strbuf *out,
const char *prefix1,
const char *prefix2,
const char *buf, size_t size)
void strbuf_add_commented_lines(struct strbuf *out, const char *buf, size_t size)
void strbuf_commented_addf(struct strbuf *sb, const char *fmt, ...)
void strbuf_vaddf(struct strbuf *sb, const char *fmt, va_list ap)
void strbuf_expand(struct strbuf *sb, const char *format, expand_fn_t fn,
void *context)
size_t strbuf_expand_dict_cb(struct strbuf *sb, const char *placeholder,
void *context)
void strbuf_addbuf_percentquote(struct strbuf *dst, const struct strbuf *src)
size_t strbuf_fread(struct strbuf *sb, size_t size, FILE *f)
ssize_t strbuf_read(struct strbuf *sb, int fd, size_t hint)
#define STRBUF_MAXLINK (2*PATH_MAX)
int strbuf_readlink(struct strbuf *sb, const char *path, size_t hint)
int strbuf_getwholeline(struct strbuf *sb, FILE *fp, int term)
int strbuf_getline(struct strbuf *sb, FILE *fp, int term)
int strbuf_getwholeline_fd(struct strbuf *sb, int fd, int term)
int strbuf_read_file(struct strbuf *sb, const char *path, size_t hint)
void strbuf_add_lines(struct strbuf *out, const char *prefix,
const char *buf, size_t size)
void strbuf_addstr_xml_quoted(struct strbuf *buf, const char *s)
static int is_rfc3986_reserved(char ch)
static int is_rfc3986_unreserved(char ch)
static void strbuf_add_urlencode(struct strbuf *sb, const char *s, size_t len,
int reserved)
void strbuf_addstr_urlencode(struct strbuf *sb, const char *s,
int reserved)
void strbuf_humanise_bytes(struct strbuf *buf, off_t bytes)
int printf_ln(const char *fmt, ...)
int fprintf_ln(FILE *fp, const char *fmt, ...)
