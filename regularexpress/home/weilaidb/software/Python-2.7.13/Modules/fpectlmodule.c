#if defined(__FreeBSD__)
#  include <ieeefp.h>
#elif defined(__VMS)
#define __NEW_STARLET
static jmp_buf PyFPE_jbuf;
static int PyFPE_counter = 0;
typedef void Sigfunc(int);
static Sigfunc sigfpe_handler;
static void fpe_reset(Sigfunc *);
static PyObject *fpe_error;
PyMODINIT_FUNC initfpectl(void);
static PyObject *turnon_sigfpe            (PyObject *self,PyObject *args);
static PyObject *turnoff_sigfpe           (PyObject *self,PyObject *args);
static PyMethodDef fpectl_methods[] = ;
static PyObject *turnon_sigfpe(PyObject *self,PyObject *args)
static void fpe_reset(Sigfunc *handler)
static PyObject *turnoff_sigfpe(PyObject *self,PyObject *args)
static void sigfpe_handler(int signo)
PyMODINIT_FUNC initfpectl(void)
