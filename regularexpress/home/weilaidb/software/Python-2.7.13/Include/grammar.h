#define Py_GRAMMAR_H
typedef struct  label;
#define EMPTY 0
typedef struct  labellist;
typedef struct  arc;
typedef struct  state;
typedef struct  dfa;
typedef struct  grammar;
grammar *newgrammar(int start);
dfa *adddfa(grammar *g, int type, char *name);
int addstate(dfa *d);
void addarc(dfa *d, int from, int to, int lbl);
dfa *PyGrammar_FindDFA(grammar *g, int type);
int addlabel(labellist *ll, int type, char *str);
int findlabel(labellist *ll, int type, char *str);
char *PyGrammar_LabelRepr(label *lb);
void translatelabels(grammar *g);
void addfirstsets(grammar *g);
void PyGrammar_AddAccelerators(grammar *g);
void PyGrammar_RemoveAccelerators(grammar *);
void printgrammar(grammar *g, FILE *fp);
void printnonterminals(grammar *g, FILE *fp);
