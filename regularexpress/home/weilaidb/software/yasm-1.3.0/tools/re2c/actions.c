static Symbol *first = NULL;
void
Symbol_init(Symbol *r, const SubStr *str)
Symbol *
Symbol_find(const SubStr *str)
static unsigned int
AltOp_fixedLength(RegExp *r)
static unsigned int
CatOp_fixedLength(RegExp *r)
unsigned int
RegExp_fixedLength(RegExp *r)
void
RegExp_calcSize(RegExp *re, Char *rep)
static void
MatchOp_compile(RegExp *re, Char *rep, Ins *i)
static void
AltOp_compile(RegExp *re, Char *rep, Ins *i)
void
RegExp_compile(RegExp *re, Char *rep, Ins *i)
static void
MatchOp_split(RegExp *re, CharSet *s)
void
RegExp_split(RegExp *re, CharSet *s)
void
RegExp_display(RegExp *re, FILE *o)
void
Range_out(FILE *o, const Range *r)
static Range *doUnion(Range *r1, Range *r2)
static Range *doDiff(Range *r1, Range *r2)
static RegExp *merge(RegExp *m1, RegExp *m2)
RegExp *mkDiff(RegExp *e1, RegExp *e2)
static RegExp *doAlt(RegExp *e1, RegExp *e2)
RegExp *mkAlt(RegExp *e1, RegExp *e2)
static unsigned char unescape(SubStr *s)
static Range *getRange(SubStr *s)
static RegExp *matchChar(unsigned int c)
RegExp *strToRE(SubStr s)
RegExp *strToCaseInsensitiveRE(SubStr s)
RegExp *ranToRE(SubStr s)
RegExp *invToRE(SubStr s)
RegExp *mkDot()
RegExp *
RegExp_new_RuleOp(RegExp *e, RegExp *c, Token *t, unsigned int a)
static void optimize(Ins *i)
void genCode(FILE *o, RegExp *re)
