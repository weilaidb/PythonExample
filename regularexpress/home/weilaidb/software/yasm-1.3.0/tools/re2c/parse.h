#define re2c_parse_h
typedef struct Symbol  Symbol;
void Symbol_init(Symbol *, const SubStr*);
static Symbol *Symbol_new(const SubStr*);
Symbol *Symbol_find(const SubStr*);
void line_source(FILE *, unsigned int);
void parse(FILE *, FILE *);
static Symbol *
Symbol_new(const SubStr *str)
