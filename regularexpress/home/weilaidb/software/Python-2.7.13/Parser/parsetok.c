int Py_TabcheckFlag;
static node *parsetok(struct tok_state *, grammar *, int, perrdetail *, int *);
static void initerr(perrdetail *err_ret, const char* filename);
node *
PyParser_ParseString(const char *s, grammar *g, int start, perrdetail *err_ret)
node *
PyParser_ParseStringFlags(const char *s, grammar *g, int start,
perrdetail *err_ret, int flags)
node *
PyParser_ParseStringFlagsFilename(const char *s, const char *filename,
grammar *g, int start,
perrdetail *err_ret, int flags)
node *
PyParser_ParseStringFlagsFilenameEx(const char *s, const char *filename,
grammar *g, int start,
perrdetail *err_ret, int *flags)
node *
PyParser_ParseFile(FILE *fp, const char *filename, grammar *g, int start,
char *ps1, char *ps2, perrdetail *err_ret)
node *
PyParser_ParseFileFlags(FILE *fp, const char *filename, grammar *g, int start,
char *ps1, char *ps2, perrdetail *err_ret, int flags)
node *
PyParser_ParseFileFlagsEx(FILE *fp, const char *filename, grammar *g, int start,
char *ps1, char *ps2, perrdetail *err_ret, int *flags)
static node *
parsetok(struct tok_state *tok, grammar *g, int start, perrdetail *err_ret,
int *flags)
static void
initerr(perrdetail *err_ret, const char *filename)
