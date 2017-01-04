#define Py_NODE_H
typedef struct _node  node;
PyAPI_FUNC(node *) PyNode_New(int type);
PyAPI_FUNC(int) PyNode_AddChild(node *n, int type,
char *str, int lineno, int col_offset);
PyAPI_FUNC(void) PyNode_Free(node *n);
PyAPI_FUNC(Py_ssize_t) _PyNode_SizeOf(node *n);
#define NCH(n)		((n)->n_nchildren)
#define CHILD(n, i)	(&(n)->n_child[i])
#define RCHILD(n, i)	(CHILD(n, NCH(n) + i))
#define TYPE(n)		((n)->n_type)
#define STR(n)		((n)->n_str)
#define REQ(n, type) assert(TYPE(n) == (type))
PyAPI_FUNC(void) PyNode_ListTree(node *);
