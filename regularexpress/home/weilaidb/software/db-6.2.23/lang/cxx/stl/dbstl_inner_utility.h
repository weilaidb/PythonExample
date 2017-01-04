#define _DB_STL_GLOBAL_INNER_OBJECT_
START_NS(dbstl)
class _exported DbstlGlobalInnerObject
;
void _exported register_global_object(DbstlGlobalInnerObject *gio);
template<typename T>
class _exported DbstlHeapObject : public DbstlGlobalInnerObject
;
END_NS
