extern int Py_DebugFlag;
grammar *
newgrammar(int start)
dfa *
adddfa(grammar *g, int type, char *name)
int
addstate(dfa *d)
void
addarc(dfa *d, int from, int to, int lbl)
int
addlabel(labellist *ll, int type, char *str)
int
findlabel(labellist *ll, int type, char *str)
static void translabel(grammar *, label *);
void
translatelabels(grammar *g)
static void
translabel(grammar *g, label *lb)
