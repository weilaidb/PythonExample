#define Py_PYFPE_H
extern jmp_buf PyFPE_jbuf;
extern int PyFPE_counter;
extern double PyFPE_dummy(void *);
#define PyFPE_START_PROTECT(err_string, leave_stmt) \
if (!PyFPE_counter++ && setjmp(PyFPE_jbuf))
#define PyFPE_END_PROTECT(v) PyFPE_counter -= (int)PyFPE_dummy(&(v));
#define PyFPE_START_PROTECT(err_string, leave_stmt)
#define PyFPE_END_PROTECT(v)
