#define GIT_UTF8_H
typedef unsigned int ucs_char_t;
size_t display_mode_esc_sequence_len(const char *s);
int utf8_width(const char **start, size_t *remainder_p);
int utf8_strnwidth(const char *string, int len, int skip_ansi);
int utf8_strwidth(const char *string);
int is_utf8(const char *text);
int is_encoding_utf8(const char *name);
int same_encoding(const char *, const char *);
__attribute__((format (printf, 2, 3)))
int utf8_fprintf(FILE *, const char *, ...);
void strbuf_add_wrapped_text(struct strbuf *buf,
const char *text, int indent, int indent2, int width);
void strbuf_add_wrapped_bytes(struct strbuf *buf, const char *data, int len,
int indent, int indent2, int width);
void strbuf_utf8_replace(struct strbuf *sb, int pos, int width,
const char *subst);
char *reencode_string_iconv(const char *in, size_t insz,
iconv_t conv, int *outsz);
char *reencode_string_len(const char *in, int insz,
const char *out_encoding,
const char *in_encoding,
int *outsz);
#define reencode_string_len(a,b,c,d,e) NULL
static inline char *reencode_string(const char *in,
const char *out_encoding,
const char *in_encoding)
int mbs_chrlen(const char **text, size_t *remainder_p, const char *encoding);
int is_hfs_dotgit(const char *path);
