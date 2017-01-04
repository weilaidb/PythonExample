#define MODULE_NAME "_warnings"
PyDoc_STRVAR(warnings__doc__,
MODULE_NAME " provides basic warning filtering support.\n"
"It is a helper module to speed up interpreter start-up.");
static PyObject *_filters;
static PyObject *_once_registry;
static PyObject *_default_action;
static int
check_matched(PyObject *obj, PyObject *arg)
static PyObject *
get_warnings_attr(const char *attr)
static PyObject *
get_once_registry(void)
static PyObject *
get_default_action(void)
static const char *
get_filter(PyObject *category, PyObject *text, Py_ssize_t lineno,
PyObject *module, PyObject **item)
static int
already_warned(PyObject *registry, PyObject *key, int should_set)
static PyObject *
normalize_module(PyObject *filename)
static int
update_registry(PyObject *registry, PyObject *text, PyObject *category,
int add_zero)
static void
show_warning(PyObject *filename, int lineno, PyObject *text, PyObject
*category, PyObject *sourceline)
static PyObject *
warn_explicit(PyObject *category, PyObject *message,
PyObject *filename, int lineno,
PyObject *module, PyObject *registry, PyObject *sourceline)
static int
setup_context(Py_ssize_t stack_level, PyObject **filename, int *lineno,
PyObject **module, PyObject **registry)
static PyObject *
get_category(PyObject *message, PyObject *category)
static PyObject *
do_warn(PyObject *message, PyObject *category, Py_ssize_t stack_level)
static PyObject *
warnings_warn(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
warnings_warn_explicit(PyObject *self, PyObject *args, PyObject *kwds)
int
PyErr_WarnEx(PyObject *category, const char *text, Py_ssize_t stack_level)
#undef PyErr_Warn
PyAPI_FUNC(int)
PyErr_Warn(PyObject *category, char *text)
int
PyErr_WarnExplicit(PyObject *category, const char *text,
const char *filename_str, int lineno,
const char *module_str, PyObject *registry)
PyDoc_STRVAR(warn_doc,
"Issue a warning, or maybe ignore it or raise an exception.");
PyDoc_STRVAR(warn_explicit_doc,
"Low-level inferface to warnings functionality.");
static PyMethodDef warnings_functions[] = ;
static PyObject *
create_filter(PyObject *category, const char *action)
static PyObject *
init_filters(void)
PyMODINIT_FUNC
_PyWarnings_Init(void)
