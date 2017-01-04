#define Py_TOKENIZER_H
#define MAXINDENT 100
struct tok_state ;
extern struct tok_state *PyTokenizer_FromString(const char *, int);
extern struct tok_state *PyTokenizer_FromFile(FILE *, char *, char *);
extern void PyTokenizer_Free(struct tok_state *);
extern int PyTokenizer_Get(struct tok_state *, char **, char **);
#if defined(PGEN) || defined(Py_USING_UNICODE)
extern char * PyTokenizer_RestoreEncoding(struct tok_state* tok,
int len, int *offset);
