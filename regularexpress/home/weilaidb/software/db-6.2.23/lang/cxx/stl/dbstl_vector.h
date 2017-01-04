#define _DB_STL_DB_VECTOR_H
START_NS(dbstl)
using std::list;
using std::istream;
using std::ostream;
using std::sort;
#define TRandDbCursor RandDbCursor<T>
template <class T, Typename value_type_sub = ElementRef<T> >
class db_vector;
template <class T, Typename value_type_sub = ElementRef<T> >
class db_vector_iterator;
template<class kdt, class ddt> class DbCursor;
template<class ddt> class RandDbCursor;
template<class ddt> class ElementRef;
template <typename T, typename T2>
class DbstlListSpecialOps;
template <class T>
class _exported db_vector_base_iterator : public db_base_iterator<T>
;
template <Typename T>
db_vector_base_iterator<T> db_vector_base_iterator<T>::end_itr_;
template <class T, Typename value_type_sub>
class _exported db_vector_iterator :
public db_vector_base_iterator<T>
;
template <Typename T>
db_vector_base_iterator<T> operator+(typename db_vector_base_iterator<T>::
difference_type n, db_vector_base_iterator<T> itr)
template <Typename T, Typename value_type_sub>
db_vector_iterator<T, value_type_sub> operator+(
typename db_vector_iterator<T, value_type_sub>::
difference_type n, db_vector_iterator<T, value_type_sub> itr)
template <Typename iterator, Typename iterator2>
db_reverse_iterator<iterator, iterator2> operator+(typename
db_reverse_iterator<iterator, iterator2>::difference_type n,
db_reverse_iterator<iterator, iterator2> itr)
template <Typename T, Typename value_type_sub>
class _exported db_vector: public db_container
;
template <Typename T, Typename value_type_sub>
typename db_vector<T, value_type_sub>::iterator
db_vector<T, value_type_sub>::end_itr_;
template <Typename T, Typename value_type_sub>
void swap(db_vector<T, value_type_sub>&v1, db_vector<T, value_type_sub>&v2)
template <typename T, typename T2>
class _exported DbstlListSpecialOps
;
template <typename T, typename T2>
class _exported DbstlListSpecialOps<T*, T2>
;
END_NS
