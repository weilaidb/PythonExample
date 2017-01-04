#define QUOTE_H
struct strbuf;
extern void sq_quote_buf(struct strbuf *, const char *src);
extern void sq_quote_argv(struct strbuf *, const char **argv, size_t maxlen);
extern char *sq_dequote(char *);
extern int sq_dequote_to_argv(char *arg, const char ***argv, int *nr, int *alloc);
struct argv_array;
extern int sq_dequote_to_argv_array(char *arg, struct argv_array *);
extern int unquote_c_style(struct strbuf *, const char *quoted, const char **endp);
extern size_t quote_c_style(const char *name, struct strbuf *, FILE *, int no_dq);
extern void quote_two_c_style(struct strbuf *, const char *, const char *, int);
extern void write_name_quoted(const char *name, FILE *, int terminator);
extern void write_name_quotedpfx(const char *pfx, size_t pfxlen,
const char *name, FILE *, int terminator);
extern void write_name_quoted_relative(const char *name, const char *prefix,
FILE *fp, int terminator);
extern char *quote_path_relative(const char *in, const char *prefix,
struct strbuf *out);
extern void perl_quote_buf(struct strbuf *sb, const char *src);
extern void python_quote_buf(struct strbuf *sb, const char *src);
extern void tcl_quote_buf(struct strbuf *sb, const char *src);
