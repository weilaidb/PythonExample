int quote_path_fully = 1;
static inline int need_bs_quote(char c)
void sq_quote_buf(struct strbuf *dst, const char *src)
void sq_quote_argv(struct strbuf *dst, const char** argv, size_t maxlen)
static char *sq_dequote_step(char *arg, char **next)
char *sq_dequote(char *arg)
static int sq_dequote_to_argv_internal(char *arg,
const char ***argv, int *nr, int *alloc,
struct argv_array *array)
int sq_dequote_to_argv(char *arg, const char ***argv, int *nr, int *alloc)
int sq_dequote_to_argv_array(char *arg, struct argv_array *array)
#define X8(x)   x, x, x, x, x, x, x, x
#define X16(x)  X8(x), X8(x)
static signed char const sq_lookup[256] = ;
static inline int sq_must_quote(char c)
static size_t next_quote_pos(const char *s, ssize_t maxlen)
static size_t quote_c_style_counted(const char *name, ssize_t maxlen,
struct strbuf *sb, FILE *fp, int no_dq)
size_t quote_c_style(const char *name, struct strbuf *sb, FILE *fp, int nodq)
void quote_two_c_style(struct strbuf *sb, const char *prefix, const char *path, int nodq)
void write_name_quoted(const char *name, FILE *fp, int terminator)
void write_name_quotedpfx(const char *pfx, size_t pfxlen,
const char *name, FILE *fp, int terminator)
void write_name_quoted_relative(const char *name, const char *prefix,
FILE *fp, int terminator)
char *quote_path_relative(const char *in, const char *prefix,
struct strbuf *out)
int unquote_c_style(struct strbuf *sb, const char *quoted, const char **endp)
void perl_quote_buf(struct strbuf *sb, const char *src)
void python_quote_buf(struct strbuf *sb, const char *src)
void tcl_quote_buf(struct strbuf *sb, const char *src)
