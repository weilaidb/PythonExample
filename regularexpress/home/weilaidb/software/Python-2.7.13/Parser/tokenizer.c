extern char *PyOS_Readline(FILE *, FILE *, char *);
#define TABSIZE 8
static struct tok_state *tok_new(void);
static int tok_nextc(struct tok_state *tok);
static void tok_backup(struct tok_state *tok, int c);
char *_PyParser_TokenNames[] = ;
static struct tok_state *
tok_new(void)
static char *
new_string(const char *s, Py_ssize_t len)
static char *
decoding_fgets(char *s, int size, struct tok_state *tok)
static int
decoding_feof(struct tok_state *tok)
static char *
decode_str(const char *str, int exec_input, struct tok_state *tok)
static char *
error_ret(struct tok_state *tok)
static char *
get_normal_name(char *s)
static char *
get_coding_spec(const char *s, Py_ssize_t size)
static int
check_coding_spec(const char* line, Py_ssize_t size, struct tok_state *tok,
int set_readline(struct tok_state *, const char *))
static int
check_bom(int get_char(struct tok_state *),
void unget_char(int, struct tok_state *),
int set_readline(struct tok_state *, const char *),
struct tok_state *tok)
static char *
fp_readl(char *s, int size, struct tok_state *tok)
static int
fp_setreadl(struct tok_state *tok, const char* enc)
static int fp_getc(struct tok_state *tok)
static void fp_ungetc(int c, struct tok_state *tok)
static char *
decoding_fgets(char *s, int size, struct tok_state *tok)
static int
decoding_feof(struct tok_state *tok)
static int
buf_getc(struct tok_state *tok)
static void
buf_ungetc(int c, struct tok_state *tok)
static int
buf_setreadl(struct tok_state *tok, const char* enc)
static PyObject *
translate_into_utf8(const char* str, const char* enc)
static char *
translate_newlines(const char *s, int exec_input, struct tok_state *tok)
static const char *
decode_str(const char *input, int single, struct tok_state *tok)
struct tok_state *
PyTokenizer_FromString(const char *str, int exec_input)
struct tok_state *
PyTokenizer_FromFile(FILE *fp, char *ps1, char *ps2)
void
PyTokenizer_Free(struct tok_state *tok)
#if !defined(PGEN) && defined(Py_USING_UNICODE)
static int
tok_stdin_decode(struct tok_state *tok, char **inp)
static int
tok_nextc(register struct tok_state *tok)
static void
tok_backup(register struct tok_state *tok, register int c)
int
PyToken_OneChar(int c)
int
PyToken_TwoChars(int c1, int c2)
int
PyToken_ThreeChars(int c1, int c2, int c3)
static int
indenterror(struct tok_state *tok)
static int
tok_get(register struct tok_state *tok, char **p_start, char **p_end)
int
PyTokenizer_Get(struct tok_state *tok, char **p_start, char **p_end)
#if defined(PGEN) || !defined(Py_USING_UNICODE)
char*
PyTokenizer_RestoreEncoding(struct tok_state* tok, int len, int* offset)
static PyObject *
dec_utf8(const char *enc, const char *text, size_t len)
char *
PyTokenizer_RestoreEncoding(struct tok_state* tok, int len, int *offset)
void
tok_dump(int type, char *start, char *end)
