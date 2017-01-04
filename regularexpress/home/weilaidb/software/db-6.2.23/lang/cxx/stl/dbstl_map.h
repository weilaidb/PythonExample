#define _DB_STL_DB_MAP_H_
START_NS(dbstl)
using std::pair;
using std::make_pair;
using std::string;
template <Typename T>
class _DB_STL_set_value;
template <Typename kdt, Typename ddt, Typename value_type_sub =
ElementRef<ddt> >
class db_map_iterator;
template <Typename kdt, Typename ddt, Typename value_type_sub =
ElementRef<ddt>, Typename iterator_t =
db_map_iterator<kdt, ddt, value_type_sub> >
class db_map;
template<Typename kdt, Typename ddt, Typename value_type_sub =
ElementRef<ddt>, Typename iterator_t =
db_map_iterator<kdt, ddt, value_type_sub> >
class db_multimap;
template <Typename kdt>
class db_set_base_iterator;
template <Typename kdt, Typename value_type_sub = ElementRef<kdt> >
class db_set_iterator;
template <Typename kdt, Typename value_type_sub = ElementRef<kdt> >
class db_set;
template <Typename kdt, Typename value_type_sub = ElementRef<kdt> >
class db_multiset;
#if NO_MEMBER_FUNCTION_PARTIAL_SPECIALIZATION
template <Typename kdt, Typename datadt, Typename value_type_sub>
void assign_second0(pair<kdt, value_type_sub>& v, const datadt& d) ;
template <Typename kdt, Typename ddt, Typename csrddt = ddt>
class _exported db_map_base_iterator : public
db_base_iterator<ddt>
;
template <Typename kdt, Typename datadt, Typename ddt>
void assign_second0(pair<kdt, ddt>& v, const datadt& d)
template<Typename kdt, Typename ddt>
void assign_second0(pair<kdt, ddt> &v,
const _DB_STL_set_value<kdt>&)
template <Typename datadt>
inline void assign_second0(value_type& v, const datadt& d) const
template<>
inline void
assign_second0(value_type &v, const _DB_STL_set_value<kdt>&) const
};
};
template <Typename kdt, Typename ddt, Typename value_type_sub>
class _exported db_map_iterator : public
db_map_base_iterator<kdt, typename value_type_sub::content_type, ddt>
;
template <Typename kdt, Typename datadt, Typename value_type_sub>
void assign_second(pair<kdt, value_type_sub>& v, const datadt& d)
template<Typename kdt, Typename value_type_sub>
void assign_second(pair<kdt, value_type_sub> &v,
const _DB_STL_set_value<kdt>&)
template <Typename datadt>
inline void assign_second(value_type_wrap& v, const datadt& d) const
template<>
inline void
assign_second(value_type_wrap &v, const _DB_STL_set_value<kdt>&) const
};
};
u_int32_t hash_default(Db *dbp, const void *key, u_int32_t len);
template <Typename kdt, Typename ddt, Typename value_type_sub,
Typename iterator_t>
class _exported db_map : public db_container
;
template<Typename kdt, Typename ddt, Typename value_type_sub,
Typename iterator_t>
class _exported db_multimap : public db_map<kdt, ddt,
value_type_sub, iterator_t>
;
END_NS
