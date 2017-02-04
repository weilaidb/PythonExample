#define YASM_INTTREE_H
#define YASM_LIB_DECL
typedef struct IntervalTreeNode  IntervalTreeNode;
typedef struct it_recursion_node  it_recursion_node;
typedef struct IntervalTree  IntervalTree;
YASM_LIB_DECL
*IT_create;
YASM_LIB_DECL
IT_destroy;
YASM_LIB_DECL
IT_print;
YASM_LIB_DECL
*IT_delete_node;
YASM_LIB_DECL
*IT_insert;
YASM_LIB_DECL
*IT_get_predecessor;
YASM_LIB_DECL
*IT_get_successor;
YASM_LIB_DECL
IT_enumerate (IntervalTreeNode *node, void *cbd));
