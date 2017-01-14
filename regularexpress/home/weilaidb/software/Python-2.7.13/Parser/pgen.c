extern int Py_DebugFlag;
extern int Py_IgnoreEnvironmentFlag;
typedef struct _nfaarc  nfaarc;
typedef struct _nfastate  nfastate;
typedef struct _nfa  nfa;
static void compile_rhs(labellist *ll,
nfa *nf, node *n, int *pa, int *pb);
static void compile_alt(labellist *ll,
nfa *nf, node *n, int *pa, int *pb);
static void compile_item(labellist *ll,
nfa *nf, node *n, int *pa, int *pb);
static void compile_atom(labellist *ll,
nfa *nf, node *n, int *pa, int *pb);
static int
addnfastate(nfa *nf)
static void
addnfaarc(nfa *nf, int from, int to, int lbl)
static nfa *
newnfa(char *name)
typedef struct _nfagrammar  nfagrammar;
static void compile_rule(nfagrammar *gr, node *n);
static nfagrammar *
newnfagrammar(void)
static nfa *
addnfa(nfagrammar *gr, char *name)
static char REQNFMT[] = ;
#define REQN(i, count) do  while (0)
#define REQN(i, count)
static nfagrammar *
metacompile(node *n)
static void
compile_rule(nfagrammar *gr, node *n)
static void
compile_rhs(labellist *ll, nfa *nf, node *n, int *pa, int *pb)
static void
compile_alt(labellist *ll, nfa *nf, node *n, int *pa, int *pb)
static void
compile_item(labellist *ll, nfa *nf, node *n, int *pa, int *pb)
static void
compile_atom(labellist *ll, nfa *nf, node *n, int *pa, int *pb)
static void
dumpstate(labellist *ll, nfa *nf, int istate)
static void
dumpnfa(labellist *ll, nfa *nf)
static void
addclosure(bitset ss, nfa *nf, int istate)
typedef struct _ss_arc  ss_arc;
typedef struct _ss_state  ss_state;
typedef struct _ss_dfa  ss_dfa;
static void printssdfa(int xx_nstates, ss_state *xx_state, int nbits,
labellist *ll, char *msg);
static void simplify(int xx_nstates, ss_state *xx_state);
static void convert(dfa *d, int xx_nstates, ss_state *xx_state);
static void
makedfa(nfagrammar *gr, nfa *nf, dfa *d)
static void
printssdfa(int xx_nstates, ss_state *xx_state, int nbits,
labellist *ll, char *msg)
static int
samestate(ss_state *s1, ss_state *s2)
static void
renamestates(int xx_nstates, ss_state *xx_state, int from, int to)
static void
simplify(int xx_nstates, ss_state *xx_state)
static void
convert(dfa *d, int xx_nstates, ss_state *xx_state)
static grammar *
maketables(nfagrammar *gr)
grammar *
pgen(node *n)
grammar *
Py_pgen(node *n)
