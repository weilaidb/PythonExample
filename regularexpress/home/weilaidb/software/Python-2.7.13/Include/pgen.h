#define Py_PGEN_H
extern grammar *meta_grammar(void);
struct _node;
extern grammar *pgen(struct _node *);
