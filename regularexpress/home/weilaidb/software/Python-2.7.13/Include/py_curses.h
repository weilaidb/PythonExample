#define Py_CURSES_H
#define _WCHAR_T
#define NCURSES_OPAQUE 0
#if __FreeBSD_version >= 500000
#define __wchar_t
#define __wint_t
#define _WCHAR_T
#define _WINT_T
#define WINDOW_HAS_FLAGS 1
#define MVWDELCH_IS_EXPRESSION 1
#define PyCurses_API_pointers 4
typedef struct  PyCursesWindowObject;
#define PyCursesWindow_Check(v)	 (Py_TYPE(v) == &PyCursesWindow_Type)
#define PyCurses_CAPSULE_NAME
static void **PyCurses_API;
#define PyCursesWindow_Type (*(PyTypeObject *) PyCurses_API[0])
#define PyCursesSetupTermCalled
#define PyCursesInitialised
#define PyCursesInitialisedColor
#define import_curses() \
PyCurses_API = (void **)PyCapsule_Import(PyCurses_CAPSULE_NAME, 1);
static char *catchall_ERR  = ;
static char *catchall_NULL = ;
#define NoArgNoReturnFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self) \
#define NoArgOrFlagNoReturnFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self, PyObject *args) \
#define NoArgReturnIntFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self) \
#define NoArgReturnStringFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self) \
#define NoArgTrueFalseFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self) \
#define NoArgNoReturnVoidFunction(X) \
static PyObject *PyCurses_ ## X (PyObject *self) \
