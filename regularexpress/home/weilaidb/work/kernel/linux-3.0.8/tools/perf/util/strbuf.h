#define __PERF_STRBUF_H
extern char strbuf_slopbuf[];
struct strbuf ;
#define STRBUF_INIT
extern void strbuf_init(struct strbuf *buf, ssize_t hint);
extern void strbuf_release(struct strbuf *);
extern char *strbuf_detach(struct strbuf *, size_t *);
static inline ssize_t strbuf_avail(const struct strbuf *sb)
extern void strbuf_grow(struct strbuf *, size_t);
static inline void strbuf_setlen(struct strbuf *sb, size_t len)
static inline void strbuf_addch(struct strbuf *sb, int c)
extern void strbuf_remove(struct strbuf *, size_t pos, size_t len);
extern void strbuf_add(struct strbuf *, const void *, size_t);
static inline void strbuf_addstr(struct strbuf *sb, const char *s)
__attribute__((format(printf,2,3)))
extern void strbuf_addf(struct strbuf *sb, const char *fmt, ...);
extern ssize_t strbuf_read(struct strbuf *, int fd, ssize_t hint);
