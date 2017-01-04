#if defined(HAVE_LONG_LONG) && !defined(PY_LONG_LONG)
#define PY_LONG_LONG LONG_LONG
#if defined(MS_WIN32) || defined(__CYGWIN__)
#define EXPORT(x) __declspec(dllexport) x
#define EXPORT(x) x
EXPORT(int)
_testfunc_cbk_reg_int(int a, int b, int c, int d, int e,
int (*func)(int, int, int, int, int))
EXPORT(double)
_testfunc_cbk_reg_double(double a, double b, double c, double d, double e,
double (*func)(double, double, double, double, double))
typedef struct  Test;
EXPORT(void)
_testfunc_cbk_large_struct(Test in, void (*func)(Test))
EXPORT(void)testfunc_array(int values[4])
EXPORT(long double)testfunc_Ddd(double a, double b)
EXPORT(long double)testfunc_DDD(long double a, long double b)
EXPORT(int)testfunc_iii(int a, int b)
EXPORT(int)myprintf(char *fmt, ...)
EXPORT(char *)my_strtok(char *token, const char *delim)
EXPORT(char *)my_strchr(const char *s, int c)
EXPORT(double) my_sqrt(double a)
EXPORT(void) my_qsort(void *base, size_t num, size_t width, int(*compare)(const void*, const void*))
EXPORT(int *) _testfunc_ai8(int a[8])
EXPORT(void) _testfunc_v(int a, int b, int *presult)
EXPORT(int) _testfunc_i_bhilfd(signed char b, short h, int i, long l, float f, double d)
EXPORT(float) _testfunc_f_bhilfd(signed char b, short h, int i, long l, float f, double d)
EXPORT(double) _testfunc_d_bhilfd(signed char b, short h, int i, long l, float f, double d)
EXPORT(long double) _testfunc_D_bhilfD(signed char b, short h, int i, long l, float f, long double d)
EXPORT(char *) _testfunc_p_p(void *s)
EXPORT(void *) _testfunc_c_p_p(int *argcp, char **argv)
EXPORT(void *) get_strchr(void)
EXPORT(char *) my_strdup(char *src)
EXPORT(void)my_free(void *ptr)
EXPORT(wchar_t *) my_wcsdup(wchar_t *src)
EXPORT(size_t) my_wcslen(wchar_t *src)
# ifndef __stdcall
#  define __stdcall
# endif
typedef struct  FUNCS;
EXPORT(int) _testfunc_callfuncp(FUNCS *fp)
EXPORT(int) _testfunc_deref_pointer(int *pi)
EXPORT(int) _testfunc_piunk(IUnknown FAR *piunk)
EXPORT(int) _testfunc_callback_with_pointer(int (*func)(int *))
EXPORT(PY_LONG_LONG) _testfunc_q_bhilfdq(signed char b, short h, int i, long l, float f,
double d, PY_LONG_LONG q)
EXPORT(PY_LONG_LONG) _testfunc_q_bhilfd(signed char b, short h, int i, long l, float f, double d)
EXPORT(int) _testfunc_callback_i_if(int value, int (*func)(int))
EXPORT(PY_LONG_LONG) _testfunc_callback_q_qf(PY_LONG_LONG value,
PY_LONG_LONG (*func)(PY_LONG_LONG))
typedef struct  SPAM;
typedef struct  EGG;
SPAM my_spams[2] = ;
EGG my_eggs[1] = ;
EXPORT(int) getSPAMANDEGGS(EGG **eggs)
typedef struct tagpoint  point;
EXPORT(int) _testfunc_byval(point in, point *pout)
EXPORT (int) an_integer = 42;
EXPORT(int) get_an_integer(void)
EXPORT(double)
integrate(double a, double b, double (*f)(double), long nstep)
typedef struct  xxx_library;
static void _xxx_init(void *(*Xalloc)(int), void (*Xfree)(void *))
xxx_library _xxx_lib = ;
EXPORT(xxx_library) *library_get(void)
EXPORT(void) GetString(BSTR *pbstr)
PyObject *py_func_si(PyObject *self, PyObject *args)
EXPORT(void) _py_func_si(char *s, int i)
PyObject *py_func(PyObject *self, PyObject *args)
EXPORT(void) _py_func(void)
EXPORT(PY_LONG_LONG) last_tf_arg_s;
EXPORT(unsigned PY_LONG_LONG) last_tf_arg_u;
struct BITS ;
DL_EXPORT(void) set_bitfields(struct BITS *bits, char name, int value)
DL_EXPORT(int) unpack_bitfields(struct BITS *bits, char name)
static PyMethodDef module_methods[] = ;
#define S last_tf_arg_s = (PY_LONG_LONG)c
#define U last_tf_arg_u = (unsigned PY_LONG_LONG)c
EXPORT(signed char) tf_b(signed char c)
EXPORT(unsigned char) tf_B(unsigned char c)
EXPORT(short) tf_h(short c)
EXPORT(unsigned short) tf_H(unsigned short c)
EXPORT(int) tf_i(int c)
EXPORT(unsigned int) tf_I(unsigned int c)
EXPORT(long) tf_l(long c)
EXPORT(unsigned long) tf_L(unsigned long c)
EXPORT(PY_LONG_LONG) tf_q(PY_LONG_LONG c)
EXPORT(unsigned PY_LONG_LONG) tf_Q(unsigned PY_LONG_LONG c)
EXPORT(float) tf_f(float c)
EXPORT(double) tf_d(double c)
EXPORT(long double) tf_D(long double c)
EXPORT(signed char) __stdcall s_tf_b(signed char c)
EXPORT(unsigned char) __stdcall s_tf_B(unsigned char c)
EXPORT(short) __stdcall s_tf_h(short c)
EXPORT(unsigned short) __stdcall s_tf_H(unsigned short c)
EXPORT(int) __stdcall s_tf_i(int c)
EXPORT(unsigned int) __stdcall s_tf_I(unsigned int c)
EXPORT(long) __stdcall s_tf_l(long c)
EXPORT(unsigned long) __stdcall s_tf_L(unsigned long c)
EXPORT(PY_LONG_LONG) __stdcall s_tf_q(PY_LONG_LONG c)
EXPORT(unsigned PY_LONG_LONG) __stdcall s_tf_Q(unsigned PY_LONG_LONG c)
EXPORT(float) __stdcall s_tf_f(float c)
EXPORT(double) __stdcall s_tf_d(double c)
EXPORT(long double) __stdcall s_tf_D(long double c)
EXPORT(signed char) tf_bb(signed char x, signed char c)
EXPORT(unsigned char) tf_bB(signed char x, unsigned char c)
EXPORT(short) tf_bh(signed char x, short c)
EXPORT(unsigned short) tf_bH(signed char x, unsigned short c)
EXPORT(int) tf_bi(signed char x, int c)
EXPORT(unsigned int) tf_bI(signed char x, unsigned int c)
EXPORT(long) tf_bl(signed char x, long c)
EXPORT(unsigned long) tf_bL(signed char x, unsigned long c)
EXPORT(PY_LONG_LONG) tf_bq(signed char x, PY_LONG_LONG c)
EXPORT(unsigned PY_LONG_LONG) tf_bQ(signed char x, unsigned PY_LONG_LONG c)
EXPORT(float) tf_bf(signed char x, float c)
EXPORT(double) tf_bd(signed char x, double c)
EXPORT(long double) tf_bD(signed char x, long double c)
EXPORT(void) tv_i(int c)
EXPORT(signed char) __stdcall s_tf_bb(signed char x, signed char c)
EXPORT(unsigned char) __stdcall s_tf_bB(signed char x, unsigned char c)
EXPORT(short) __stdcall s_tf_bh(signed char x, short c)
EXPORT(unsigned short) __stdcall s_tf_bH(signed char x, unsigned short c)
EXPORT(int) __stdcall s_tf_bi(signed char x, int c)
EXPORT(unsigned int) __stdcall s_tf_bI(signed char x, unsigned int c)
EXPORT(long) __stdcall s_tf_bl(signed char x, long c)
EXPORT(unsigned long) __stdcall s_tf_bL(signed char x, unsigned long c)
EXPORT(PY_LONG_LONG) __stdcall s_tf_bq(signed char x, PY_LONG_LONG c)
EXPORT(unsigned PY_LONG_LONG) __stdcall s_tf_bQ(signed char x, unsigned PY_LONG_LONG c)
EXPORT(float) __stdcall s_tf_bf(signed char x, float c)
EXPORT(double) __stdcall s_tf_bd(signed char x, double c)
EXPORT(long double) __stdcall s_tf_bD(signed char x, long double c)
EXPORT(void) __stdcall s_tv_i(int c)
typedef struct  POINT;
typedef struct  RECT;
EXPORT(int) PointInRect(RECT *prc, POINT pt)
EXPORT(long left = 10);
EXPORT(long top = 20);
EXPORT(long right = 30);
EXPORT(long bottom = 40);
EXPORT(RECT) ReturnRect(int i, RECT ar, RECT* br, POINT cp, RECT dr,
RECT *er, POINT fp, RECT gr)
typedef struct  S2H;
EXPORT(S2H) ret_2h_func(S2H inp)
typedef struct  S8I;
EXPORT(S8I) ret_8i_func(S8I inp)
EXPORT(int) GetRectangle(int flag, RECT *prect)
EXPORT(void) TwoOutArgs(int a, int *pi, int b, int *pj)
EXPORT(S2H) __stdcall s_ret_2h_func(S2H inp)
EXPORT(S8I) __stdcall s_ret_8i_func(S8I inp)
EXPORT (HRESULT) KeepObject(IUnknown *punk)
DL_EXPORT(void)
init_ctypes_test(void)
