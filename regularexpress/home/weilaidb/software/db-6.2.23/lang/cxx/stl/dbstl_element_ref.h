#define _DB_STL_KDPAIR_H
START_NS(dbstl)
using std::istream;
using std::ostream;
using std::basic_ostream;
using std::basic_istream;
template <Typename ddt>
class db_base_iterator;
template <Typename ddt>
class ElementHolder;
template <Typename ddt>
class _exported ElementRef : public ddt
;
template<typename T>
class DbstlSeqWriter;
};
template <typename ptype>
class _exported ElementHolder
;
};
template<Typename _CharT, Typename _Traits, Typename ddt>
basic_istream<_CharT,_Traits>&
operator>>( basic_istream<_CharT,_Traits> & in, ElementRef<ddt>&p)
template<Typename _CharT, Typename _Traits, Typename ddt>
basic_ostream<_CharT,_Traits>&
operator<<( basic_ostream<_CharT,_Traits> & out,
const ElementRef<ddt>&p)
template<Typename _CharT, Typename _Traits, Typename ddt>
basic_istream<_CharT,_Traits>&
operator>>( basic_istream<_CharT,_Traits> & in, ElementHolder<ddt>&p)
template<Typename _CharT, Typename _Traits, Typename ddt>
basic_ostream<_CharT,_Traits>&
operator<<( basic_ostream<_CharT,_Traits> & out,
const ElementHolder<ddt>&p)
template<typename T>
class _exported DbstlSeqWriter
;
template<>
class _exported DbstlSeqWriter<char>
;
template<>
class _exported DbstlSeqWriter<wchar_t>
;
END_NS
