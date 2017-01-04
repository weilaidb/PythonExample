#define Py_SYMTABLE_H
typedef enum _block_type
_Py_block_ty;
struct _symtable_entry;
struct symtable ;
typedef struct _symtable_entry  PySTEntryObject;
PyAPI_DATA(PyTypeObject) PySTEntry_Type;
#define PySTEntry_Check(op) (Py_TYPE(op) == &PySTEntry_Type)
PyAPI_FUNC(int) PyST_GetScope(PySTEntryObject *, PyObject *);
PyAPI_FUNC(struct symtable *) PySymtable_Build(mod_ty, const char *,
PyFutureFeatures *);
PyAPI_FUNC(PySTEntryObject *) PySymtable_Lookup(struct symtable *, void *);
PyAPI_FUNC(void) PySymtable_Free(struct symtable *);
#define DEF_GLOBAL 1
#define DEF_LOCAL 2
#define DEF_PARAM 2<<1
#define USE 2<<2
#define DEF_FREE 2<<3
#define DEF_FREE_CLASS 2<<4
#define DEF_IMPORT 2<<5
#define DEF_BOUND (DEF_LOCAL | DEF_PARAM | DEF_IMPORT)
#define SCOPE_OFF 11
#define SCOPE_MASK 7
#define LOCAL 1
#define GLOBAL_EXPLICIT 2
#define GLOBAL_IMPLICIT 3
#define FREE 4
#define CELL 5
#define OPT_IMPORT_STAR 1
#define OPT_EXEC 2
#define OPT_BARE_EXEC 4
#define OPT_TOPLEVEL 8
#define GENERATOR 1
#define GENERATOR_EXPRESSION 2
