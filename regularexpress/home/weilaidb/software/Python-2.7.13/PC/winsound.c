PyDoc_STRVAR(sound_playsound_doc,
);
PyDoc_STRVAR(sound_beep_doc,
);
PyDoc_STRVAR(sound_msgbeep_doc,
);
PyDoc_STRVAR(sound_module_doc,
);
static PyObject *
sound_playsound(PyObject *s, PyObject *args)
static PyObject *
sound_beep(PyObject *self, PyObject *args)
static PyObject *
sound_msgbeep(PyObject *self, PyObject *args)
static struct PyMethodDef sound_methods[] =
;
static void
add_define(PyObject *dict, const char *key, long value)
#define ADD_DEFINE(tok) add_define(dict,#tok,tok)
PyMODINIT_FUNC
initwinsound(void)
