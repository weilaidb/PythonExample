#define octCh(c) ('0' + c%8)
void prtCh(FILE *o, unsigned char c)
void printSpan(FILE *o, unsigned int lb, unsigned int ub)
unsigned int
Span_show(Span *s, FILE *o, unsigned int lb)
void
State_out(FILE *o, const State *s)
void
DFA_out(FILE *o, const DFA *dfa)
State *
State_new(void)
void
State_delete(State *s)
static Ins **closure(Ins **cP, Ins *i)
typedef struct GoTo  GoTo;
DFA *
DFA_new(Ins *ins, unsigned int ni, unsigned int lb, unsigned int ub, Char *rep)
void
DFA_delete(DFA *d)
void DFA_addState(DFA *d, State **a, State *s)
State *DFA_findState(DFA *d, Ins **kernel, unsigned int kCount)
