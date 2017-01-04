int prefixcmp(const char *str, const char *prefix)
char strbuf_slopbuf[1];
void strbuf_init(struct strbuf *sb, ssize_t hint)
void strbuf_release(struct strbuf *sb)
char *strbuf_detach(struct strbuf *sb, size_t *sz)
void strbuf_grow(struct strbuf *sb, size_t extra)
static void strbuf_splice(struct strbuf *sb, size_t pos, size_t len,
const void *data, size_t dlen)
void strbuf_remove(struct strbuf *sb, size_t pos, size_t len)
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
void strbuf_addf(struct strbuf *sb, const char *fmt, ...)
ssize_t strbuf_read(struct strbuf *sb, int fd, ssize_t hint)
