#define _DB_STL_AFE_H__
#define DB_STL_HAVE_DB_TIMESPEC 1
using namespace std;
using namespace dbstl;
#define check_expr(expression) do  while (0)
#define ptint int
#define TOINT (int)
typedef db_vector<ptint, ElementHolder<ptint> > intvec_t;
typedef db_vector<ptint, ElementHolder<ptint> > ptint_vector;
typedef db_map<ptint, ptint, ElementHolder<ptint> > dm_int_t;
typedef db_multimap<ptint, ptint, ElementHolder<ptint> > dmm_int_t;
typedef db_set<ptint, ElementHolder<ptint> > dms_int_t;
typedef db_multiset<ptint, ElementHolder<ptint> > dmms_int_t;
typedef bool (*ptintless_ft)(const ptint& a, const ptint& b);
extern "C"
extern int g_test_start_txn;
extern DbEnv *g_env;
int get_dest_secdb_callback(Db *secondary, const Dbt *key,
const Dbt *data, Dbt *result);
void using_charstr(TCHAR*str);
class RGBB;
class SMSMsg2;
void SMSMsgRestore(SMSMsg2& dest, const void *srcdata);
u_int32_t SMSMsgSize(const SMSMsg2& elem);
void SMSMsgCopy(void *dest, const SMSMsg2&elem);
u_int32_t rgblen(const RGBB * seq);
void rgbcpy(RGBB *seq, const RGBB *, size_t);
class BaseMsg
;
class SMSMsg2 : public BaseMsg
;
class SMSMsg : public BaseMsg
;
class RGBB
;
class rand_str_dbt
;
bool rand_str_dbt::init = false;
char rand_str_dbt::buf[BUFLEN];
struct TestParam;
class sms_t
;
bool ptintless(const ptint& a, const ptint& b)
template<Typename T>
void fill(db_vector<T, ElementHolder<T> >&v,
vector<T>&sv, T start = 0, int n = 5 )
template <Typename T>
void fill(db_map<T, T, ElementHolder<T> >&m, map<T, T>&sm,
T start = 0, int n = 5)
template <Typename T>
void fill(db_set<T, ElementHolder<T> >&m, set<T>&sm,
T start = 0, int n = 5)
template <Typename T>
void fill(db_multimap<T, T, ElementHolder<T> >&m, multimap<T, T>&sm,
T start = 0, int n = 5, size_t randn = 5)
template <Typename T>
void fill(db_multiset<T, ElementHolder<T> >&m, multiset<T>&sm,
T start = 0, int n = 5 , size_t randn = 5)
template <Typename T1, Typename T2, Typename T3, Typename T4>
bool is_equal(db_map<T1, T2, ElementHolder<T2> >& dv, map<T3, T4>&v)
template <Typename T1, Typename T2, Typename T3, Typename T4>
bool is_equal(db_map<T1, T2, ElementRef<T2> >& dv, map<T3, T4>&v)
template<Typename T1, Typename T2>
bool is_equal(const db_set<T1, ElementHolder<T1> >&s1, const set<T2>&s2)
template <Typename T1, Typename T2>
bool is_equal(const db_vector<T1>& dv, const vector<T2>&v)
bool operator==(ElementHolder<const char *>s1, const char *s2);
bool operator==(ElementHolder<const wchar_t *>s1, const wchar_t *s2);
bool operator!=(ElementHolder<const char *>s1, const char *s2);
bool operator!=(ElementHolder<const wchar_t *>s1, const wchar_t *s2);
template <Typename T1>
bool is_equal(const db_vector<T1, ElementHolder<T1> >& dv, const vector<T1>&v)
template <Typename T1, Typename T2>
bool is_equal(db_vector<T1>& dv, list<T2>&v)
bool is_equal(db_vector<char *, ElementHolder<char *> >&v1,
std::list<string> &v2)
template <Typename T1>
class atom_equal ;
template<>
class atom_equal<const char *> ;
template <Typename T1>
bool is_equal(const db_vector<T1, ElementHolder<T1> >& dv, const list<T1>&v)
