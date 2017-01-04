#define _DB_STL_UTILITY_H__
START_NS(dbstl)
template <typename T>
class _exported DbstlElemTraits : public DbstlGlobalInnerObject
;
template<typename T>
DbstlElemTraits<T> *DbstlElemTraits<T>::inst_ = NULL;
class DbstlDbt : public Dbt
;
END_NS
