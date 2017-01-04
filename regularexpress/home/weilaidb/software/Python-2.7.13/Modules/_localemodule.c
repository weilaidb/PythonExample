#if defined(MS_WINDOWS)
#define WIN32_LEAN_AND_MEAN
char *strdup(const char *);
PyDoc_STRVAR(locale__doc__, "Support for POSIX locales.");
static PyObject *Error;
PyDoc_STRVAR(setlocale__doc__,
"(integer,string=None) -> string. Activates/queries locale processing.");
static PyObject*
copy_grouping(char* s)
static void
fixup_ulcase(void)
static PyObject*
PyLocale_setlocale(PyObject* self, PyObject* args)
PyDoc_STRVAR(localeconv__doc__,
"() -> dict. Returns numeric and monetary locale-specific parameters.");
static PyObject*
PyLocale_localeconv(PyObject* self)
PyDoc_STRVAR(strcoll__doc__,
"string,string -> int. Compares two strings according to the locale.");
static PyObject*
PyLocale_strcoll(PyObject* self, PyObject* args)
PyDoc_STRVAR(strxfrm__doc__,
"string -> string. Returns a string that behaves for cmp locale-aware.");
static PyObject*
PyLocale_strxfrm(PyObject* self, PyObject* args)
#if defined(MS_WINDOWS)
static PyObject*
PyLocale_getdefaultlocale(PyObject* self)
#define LANGINFO(X)
static struct langinfo_constant langinfo_constants[] =
;
PyDoc_STRVAR(nl_langinfo__doc__,
"nl_langinfo(key) -> string\n"
"Return the value for the locale information associated with key.");
static PyObject*
PyLocale_nl_langinfo(PyObject* self, PyObject* args)
PyDoc_STRVAR(gettext__doc__,
"gettext(msg) -> string\n"
"Return translation of msg.");
static PyObject*
PyIntl_gettext(PyObject* self, PyObject *args)
PyDoc_STRVAR(dgettext__doc__,
"dgettext(domain, msg) -> string\n"
"Return translation of msg in domain.");
static PyObject*
PyIntl_dgettext(PyObject* self, PyObject *args)
PyDoc_STRVAR(dcgettext__doc__,
"dcgettext(domain, msg, category) -> string\n"
"Return translation of msg in domain and category.");
static PyObject*
PyIntl_dcgettext(PyObject *self, PyObject *args)
PyDoc_STRVAR(textdomain__doc__,
"textdomain(domain) -> string\n"
"Set the C library's textdmain to domain, returning the new domain.");
static PyObject*
PyIntl_textdomain(PyObject* self, PyObject* args)
PyDoc_STRVAR(bindtextdomain__doc__,
"bindtextdomain(domain, dir) -> string\n"
"Bind the C library's domain to dir.");
static PyObject*
PyIntl_bindtextdomain(PyObject* self,PyObject*args)
PyDoc_STRVAR(bind_textdomain_codeset__doc__,
"bind_textdomain_codeset(domain, codeset) -> string\n"
"Bind the C library's domain to codeset.");
static PyObject*
PyIntl_bind_textdomain_codeset(PyObject* self,PyObject*args)
static struct PyMethodDef PyLocale_Methods[] = ;
PyMODINIT_FUNC
init_locale(void)
