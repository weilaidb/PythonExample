extern int Py_DebugFlag;
static void calcfirstset(grammar *, dfa *);
void
addfirstsets(grammar *g)
static void
calcfirstset(grammar *g, dfa *d)
