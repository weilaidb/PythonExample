extern int Py_DebugFlag;
#define D(x) if (!Py_DebugFlag); else x
#define D(x)
static void s_reset(stack *);
static void
s_reset(stack *s)
#define s_empty(s) ((s)->s_top == &(s)->s_base[MAXSTACK])
static int
s_push(register stack *s, dfa *d, node *parent)
static void
s_pop(register stack *s)
#define s_pop(s) (s)->s_top++
parser_state *
PyParser_New(grammar *g, int start)
void
PyParser_Delete(parser_state *ps)
static int
shift(register stack *s, int type, char *str, int newstate, int lineno, int col_offset)
static int
push(register stack *s, int type, dfa *d, int newstate, int lineno, int col_offset)
static int
classify(parser_state *ps, int type, char *str)
static void
future_hack(parser_state *ps)
int
PyParser_AddToken(register parser_state *ps, register int type, char *str,
int lineno, int col_offset, int *expected_ret)
void
dumptree(grammar *g, node *n)
void
showtree(grammar *g, node *n)
void
printtree(parser_state *ps)
