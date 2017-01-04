static int bisearch(ucs_char_t ucs, const struct interval *table, int max)
static int git_wcwidth(ucs_char_t ch)
static ucs_char_t pick_one_utf8_char(const char **start, size_t *remainder_p)
int utf8_width(const char **start, size_t *remainder_p)
int utf8_strnwidth(const char *string, int len, int skip_ansi)
int utf8_strwidth(const char *string)
int is_utf8(const char *text)
static void strbuf_addchars(struct strbuf *sb, int c, size_t n)
static void strbuf_add_indented_text(struct strbuf *buf, const char *text,
int indent, int indent2)
void strbuf_add_wrapped_text(struct strbuf *buf,
const char *text, int indent1, int indent2, int width)
void strbuf_add_wrapped_bytes(struct strbuf *buf, const char *data, int len,
int indent, int indent2, int width)
void strbuf_utf8_replace(struct strbuf *sb_src, int pos, int width,
const char *subst)
int is_encoding_utf8(const char *name)
int same_encoding(const char *src, const char *dst)
int utf8_fprintf(FILE *stream, const char *format, ...)
#if defined(OLD_ICONV) || (defined(__sun__) && !defined(_XPG6))
typedef const char * iconv_ibp;
typedef char * iconv_ibp;
char *reencode_string_iconv(const char *in, size_t insz, iconv_t conv, int *outsz_p)
char *reencode_string_len(const char *in, int insz,
const char *out_encoding, const char *in_encoding,
int *outsz)
int mbs_chrlen(const char **text, size_t *remainder_p, const char *encoding)
static ucs_char_t next_hfs_char(const char **in)
int is_hfs_dotgit(const char *path)
