#define _DB_STL_DB_SET_H_
START_NS(dbstl)
using std::pair;
using std::make_pair;
template <Typename T>
class _DB_STL_set_value
;
template <Typename kdt>
class _exported db_set_base_iterator : public
db_map_base_iterator<kdt, kdt, _DB_STL_set_value<kdt> >
;
template <Typename kdt, Typename value_type_sub>
class _exported db_set_iterator :
public db_map_iterator<kdt, _DB_STL_set_value<kdt>, value_type_sub>
;
template <Typename kdt, Typename value_type_sub>
class _exported db_set : public db_map<kdt, _DB_STL_set_value<kdt>,
value_type_sub, db_set_iterator<kdt, value_type_sub> >
;
template <Typename kdt, Typename value_type_sub>
class _exported db_multiset : public db_multimap<kdt, _DB_STL_set_value<kdt>,
value_type_sub, db_set_iterator<kdt, value_type_sub> >
;
END_NS
