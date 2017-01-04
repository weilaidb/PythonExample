#define STRBUF_H
extern char strbuf_slopbuf[];
struct strbuf ;
#define STRBUF_INIT
extern void strbuf_init(struct strbuf *, size_t);
extern void strbuf_release(struct strbuf *);
extern char *strbuf_detach(struct strbuf *, size_t *);
extern void strbuf_attach(struct strbuf *, void *, size_t, size_t);
static inline void strbuf_swap(struct strbuf *a, struct strbuf *b)
static inline size_t strbuf_avail(const struct strbuf *sb)
extern void strbuf_grow(struct strbuf *, size_t);
static inline void strbuf_setlen(struct strbuf *sb, size_t len)
#define strbuf_reset(sb)  strbuf_setlen(sb, 0)
extern void strbuf_trim(struct strbuf *);
extern void strbuf_rtrim(struct strbuf *);
extern void strbuf_ltrim(struct strbuf *);
extern int strbuf_cmp(const struct strbuf *, const struct strbuf *);
extern struct strbuf **strbuf_split_buf(const char *, size_t,
int terminator, int max);
static inline struct strbuf **strbuf_split_str(const char *str,
int terminator, int max)
static inline struct strbuf **strbuf_split_max(const struct strbuf *sb,
int terminator, int max)
static inline struct strbuf **strbuf_split(const struct strbuf *sb,
int terminator)
extern void strbuf_list_free(struct strbuf **);
static inline void strbuf_addch(struct strbuf *sb, int c)
extern void strbuf_insert(struct strbuf *, size_t pos, const void *, size_t);
extern void strbuf_remove(struct strbuf *, size_t pos, size_t len);
extern void strbuf_splice(struct strbuf *, size_t pos, size_t len,
const void *, size_t);
extern void strbuf_add_commented_lines(struct strbuf *out, const char *buf, size_t size);
extern void strbuf_add(struct strbuf *, const void *, size_t);
static inline void strbuf_addstr(struct strbuf *sb, const char *s)
static inline void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2)
extern void strbuf_adddup(struct strbuf *sb, size_t pos, size_t len);
typedef size_t (*expand_fn_t) (struct strbuf *sb, const char *placeholder, void *context);
extern void strbuf_expand(struct strbuf *sb, const char *format, expand_fn_t fn, void *context);
struct strbuf_expand_dict_entry ;
extern size_t strbuf_expand_dict_cb(struct strbuf *sb, const char *placeholder, void *context);
extern void strbuf_addbuf_percentquote(struct strbuf *dst, const struct strbuf *src);
__attribute__((format (printf,2,3)))
extern void strbuf_addf(struct strbuf *sb, const char *fmt, ...);
__attribute__((format (printf, 2, 3)))
extern void strbuf_commented_addf(struct strbuf *sb, const char *fmt, ...);
__attribute__((format (printf,2,0)))
extern void strbuf_vaddf(struct strbuf *sb, const char *fmt, va_list ap);
extern void strbuf_add_lines(struct strbuf *sb, const char *prefix, const char *buf, size_t size);
extern void strbuf_addstr_xml_quoted(struct strbuf *sb, const char *s);
static inline void strbuf_complete_line(struct strbuf *sb)
extern size_t strbuf_fread(struct strbuf *, size_t, FILE *);
extern ssize_t strbuf_read(struct strbuf *, int fd, size_t hint);
extern int strbuf_read_file(struct strbuf *sb, const char *path, size_t hint);
extern int strbuf_readlink(struct strbuf *sb, const char *path, size_t hint);
extern int strbuf_getwholeline(struct strbuf *, FILE *, int);
extern int strbuf_getline(struct strbuf *, FILE *, int);
extern int strbuf_getwholeline_fd(struct strbuf *, int, int);
extern void stripspace(struct strbuf *buf, int skip_comments);
extern int launch_editor(const char *path, struct strbuf *buffer, const char *const *env);
extern int strbuf_branchname(struct strbuf *sb, const char *name);
extern int strbuf_check_branch_ref(struct strbuf *sb, const char *name);
extern void strbuf_addstr_urlencode(struct strbuf *, const char *,
int reserved);
extern void strbuf_humanise_bytes(struct strbuf *buf, off_t bytes);
__attribute__((format (printf,1,2)))
extern int printf_ln(const char *fmt, ...);
__attribute__((format (printf,2,3)))
extern int fprintf_ln(FILE *fp, const char *fmt, ...);
