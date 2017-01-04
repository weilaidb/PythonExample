#define YASM_INTTREE_H
#define YASM_LIB_DECL
typedef struct IntervalTreeNode  IntervalTreeNode;
typedef struct it_recursion_node  it_recursion_node;
typedef struct IntervalTree  IntervalTree;
YASM_LIB_DECL
IntervalTree *IT_create(void);
YASM_LIB_DECL
void IT_destroy(IntervalTree *);
YASM_LIB_DECL
void IT_print(const IntervalTree *);
YASM_LIB_DECL
void *IT_delete_node(IntervalTree *, IntervalTreeNode *, long *low,
long *high);
YASM_LIB_DECL
IntervalTreeNode *IT_insert(IntervalTree *, long low, long high, void *data);
YASM_LIB_DECL
IntervalTreeNode *IT_get_predecessor(const IntervalTree *, IntervalTreeNode *);
YASM_LIB_DECL
IntervalTreeNode *IT_get_successor(const IntervalTree *, IntervalTreeNode *);
YASM_LIB_DECL
void IT_enumerate(IntervalTree *, long low, long high, void *cbd,
void (*callback) (IntervalTreeNode *node, void *cbd));
