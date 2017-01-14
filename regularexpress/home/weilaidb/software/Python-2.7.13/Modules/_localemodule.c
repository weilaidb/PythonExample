#if defined(MS_WINDOWS)
#define WIN32_LEAN_AND_MEAN
char *strdup(const char *);
PyDoc_STRVAR(locale__doc__, );
static PyObject *Error;
PyDoc_STRVAR(setlocale__doc__,
);
static PyObject*
copy_grouping(char* s)
static void
fixup_ulcase(void)
static PyObject*
PyLocale_setlocale(PyObject* self, PyObject* args)
PyDoc_STRVAR(localeconv__doc__,
);
static PyObject*
PyLocale_localeconv(PyObject* self)
PyDoc_STRVAR(strcoll__doc__,
);
static PyObject*
PyLocale_strcoll(PyObject* self, PyObject* args)
PyDoc_STRVAR(strxfrm__doc__,
);
static PyObject*
PyLocale_strxfrm(PyObject* self, PyObject* args)
#if defined(MS_WINDOWS)
static PyObject*
PyLocale_getdefaultlocale(PyObject* self)
#define LANGINFO(X)
static struct langinfo_constant langinfo_constants[] =
;
PyDoc_STRVAR(nl_langinfo__doc__,
);
static PyObject*
PyLocale_nl_langinfo(PyObject* self, PyObject* args)
PyDoc_STRVAR(gettext__doc__,
);
static PyObject*
PyIntl_gettext(PyObject* self, PyObject *args)
PyDoc_STRVAR(dgettext__doc__,
);
static PyObject*
PyIntl_dgettext(PyObject* self, PyObject *args)
PyDoc_STRVAR(dcgettext__doc__,
);
static PyObject*
PyIntl_dcgettext(PyObject *self, PyObject *args)
PyDoc_STRVAR(textdomain__doc__,
);
static PyObject*
PyIntl_textdomain(PyObject* self, PyObject* args)
PyDoc_STRVAR(bindtextdomain__doc__,
);
static PyObject*
PyIntl_bindtextdomain(PyObject* self,PyObject*args)
PyDoc_STRVAR(bind_textdomain_codeset__doc__,
);
static PyObject*
PyIntl_bind_textdomain_codeset(PyObject* self,PyObject*args)
static struct PyMethodDef PyLocale_Methods[] = ;
PyMODINIT_FUNC
init_locale(void)
