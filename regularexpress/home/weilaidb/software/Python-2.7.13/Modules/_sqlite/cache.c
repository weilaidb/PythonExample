pysqlite_Node* pysqlite_new_node(PyObject* key, PyObject* data)
void pysqlite_node_dealloc(pysqlite_Node* self)
int pysqlite_cache_init(pysqlite_Cache* self, PyObject* args, PyObject* kwargs)
void pysqlite_cache_dealloc(pysqlite_Cache* self)
PyObject* pysqlite_cache_get(pysqlite_Cache* self, PyObject* args)
PyObject* pysqlite_cache_display(pysqlite_Cache* self, PyObject* args)
static PyMethodDef cache_methods[] = ;
PyTypeObject pysqlite_NodeType = ;
PyTypeObject pysqlite_CacheType = ;
extern int pysqlite_cache_setup_types(void)
