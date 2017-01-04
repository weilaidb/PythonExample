static FILE *
win32_tmpfile (void)
static void useLabel(size_t value)
void Go_compact(Go *g)
void Go_unmap(Go *g, Go *base, State *x)
static void doGen(Go *g, State *s, unsigned char *bm, unsigned char m)
static int matches(Go *g1, State *s1, Go *g2, State *s2)
typedef struct BitMap  BitMap;
static BitMap *BitMap_find_go(Go*, State*);
static BitMap *BitMap_find(State*);
static void BitMap_gen(FILE *, unsigned int, unsigned int);
static BitMap *BitMap_new(Go*, State*);
static BitMap *BitMap_first = NULL;
BitMap *
BitMap_new(Go *g, State *x)
BitMap *
BitMap_find_go(Go *g, State *x)
BitMap *
BitMap_find(State *x)
void BitMap_gen(FILE *o, unsigned int lb, unsigned int ub)
static void genGoTo(FILE *o, State *from, State *to, int *readCh,
const char *indent)
static void genIf(FILE *o, const char *cmp, unsigned int v, int *readCh)
static void indent(FILE *o, unsigned int i)
static void need(FILE *o, unsigned int n, int *readCh)
void
Action_emit(Action *a, FILE *o, int *readCh)
Action *
Action_new_Accept(State *x, unsigned int n, unsigned int *s, State **r)
static void doLinear(FILE *o, unsigned int i, Span *s, unsigned int n,
State *from, State *next, int *readCh)
void
Go_genLinear(Go *g, FILE *o, State *from, State *next, int *readCh)
static void genCases(FILE *o, unsigned int lb, Span *s)
void
Go_genSwitch(Go *g, FILE *o, State *from, State *next, int *readCh)
static void doBinary(FILE *o, unsigned int i, Span *s, unsigned int n,
State *from, State *next, int *readCh)
void
Go_genBinary(Go *g, FILE *o, State *from, State *next, int *readCh)
void
Go_genBase(Go *g, FILE *o, State *from, State *next, int *readCh)
void
Go_genGoto(Go *g, FILE *o, State *from, State *next, int *readCh)
void State_emit(State *s, FILE *o, int *readCh)
static unsigned int merge(Span *x0, State *fg, State *bg)
const unsigned int cInfinity = ~0;
typedef struct SCC  SCC;
static void SCC_init(SCC*, unsigned int);
static SCC *SCC_new(unsigned int);
static void SCC_destroy(SCC*);
static void SCC_delete(SCC*);
static void SCC_traverse(SCC*, State*);
static void
SCC_init(SCC *s, unsigned int size)
static SCC *
SCC_new(unsigned int size)
static void
SCC_destroy(SCC *s)
static void
SCC_delete(SCC *s)
static void SCC_traverse(SCC *s, State *x)
static unsigned int maxDist(State *s)
static void calcDepth(State *head)
void DFA_findSCCs(DFA *d)
void DFA_split(DFA *d, State *s)
void DFA_emit(DFA *d, FILE *o){
static unsigned int label = 0;
State *s;
unsigned int i, bitmap_brace = 0;
unsigned int nRules = 0;
unsigned int nSaves = 0;
unsigned int *saves;
unsigned int nOrgOline;
State **rules;
State *accept = NULL;
Span *span;
FILE *tmpo;
int hasFillLabels;
int maxFillIndexes, orgVFillIndexes;
unsigned int start_label;
hasFillLabels = (0<=vFillIndexes);
if (hasFillLabels && label!=0) {
fputs("re2c : error : multiple
for(s = d->head; s; s = s->next)
rules = malloc(sizeof(State*)*nRules);
memset(rules, 0, (nRules)*sizeof(State*));
for(s = d->head; s; s = s->next)
for(s = d->head; s; s = s->next)
span = malloc(sizeof(Span)*(d->ubChar - d->lbChar));
for(s = d->head; s; s = s->next)
free(span);
free(d->head->action);
if(bFlag)
