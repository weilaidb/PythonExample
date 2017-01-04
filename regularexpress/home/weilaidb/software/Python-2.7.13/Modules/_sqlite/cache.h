#define PYSQLITE_CACHE_H
typedef struct _pysqlite_Node
pysqlite_Node;
typedef struct
pysqlite_Cache;
extern PyTypeObject pysqlite_NodeType;
extern PyTypeObject pysqlite_CacheType;
int pysqlite_node_init(pysqlite_Node* self, PyObject* args, PyObject* kwargs);
void pysqlite_node_dealloc(pysqlite_Node* self);
int pysqlite_cache_init(pysqlite_Cache* self, PyObject* args, PyObject* kwargs);
void pysqlite_cache_dealloc(pysqlite_Cache* self);
PyObject* pysqlite_cache_get(pysqlite_Cache* self, PyObject* args);
int pysqlite_cache_setup_types(void);
