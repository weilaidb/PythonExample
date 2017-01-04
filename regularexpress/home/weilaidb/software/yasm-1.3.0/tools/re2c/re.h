#define re2c_re_h
typedef struct extop  ExtOp;
typedef struct CharPtn  CharPtn;
typedef struct CharSet  CharSet;
typedef struct Range  Range;
static void
Range_init(Range *r, unsigned int l, unsigned int u)
static Range *
Range_new(unsigned int l, unsigned int u)
static void
Range_copy(Range *ro, const Range *r)
static Range *
Range_new_copy(Range *r)
void Range_out(FILE *, const Range *);
typedef enum  RegExpType;
typedef struct RegExp  RegExp;
static RegExp *
RegExp_isA(RegExp *r, RegExpType t)
void RegExp_split(RegExp*, CharSet*);
void RegExp_calcSize(RegExp*, Char*);
unsigned int RegExp_fixedLength(RegExp*);
void RegExp_compile(RegExp*, Char*, Ins*);
void RegExp_display(RegExp*, FILE *);
static RegExp *
RegExp_new_NullOp(void)
static RegExp *
RegExp_new_MatchOp(Range *m)
RegExp *RegExp_new_RuleOp(RegExp*, RegExp*, Token*, unsigned int);
static RegExp *
RegExp_new_AltOp(RegExp *e1, RegExp *e2)
static RegExp *
RegExp_new_CatOp(RegExp *e1, RegExp *e2)
static RegExp *
RegExp_new_CloseOp(RegExp *e)
static RegExp *
RegExp_new_CloseVOp(RegExp *e, int lb, int ub)
extern void genCode(FILE *, RegExp*);
extern RegExp *mkDiff(RegExp*, RegExp*);
extern RegExp *mkDot(void);
extern RegExp *strToRE(SubStr);
extern RegExp *strToCaseInsensitiveRE(SubStr);
extern RegExp *ranToRE(SubStr);
extern RegExp *invToRE(SubStr);
extern RegExp *mkAlt(RegExp*, RegExp*);
