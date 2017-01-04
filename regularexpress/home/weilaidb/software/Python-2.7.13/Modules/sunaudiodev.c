#define SOLARIS
typedef struct  sadobject;
typedef struct  sadstatusobject;
static PyTypeObject Sadtype;
static PyTypeObject Sadstatustype;
static sadstatusobject *sads_alloc(void);
static PyObject *SunAudioError;
#define is_sadobject(v)         (Py_TYPE(v) == &Sadtype)
#define is_sadstatusobject(v)   (Py_TYPE(v) == &Sadstatustype)
static sadobject *
newsadobject(PyObject *args)
static void
sad_dealloc(sadobject *xp)
static PyObject *
sad_read(sadobject *self, PyObject *args)
static PyObject *
sad_write(sadobject *self, PyObject *args)
static PyObject *
sad_getinfo(sadobject *self)
static PyObject *
sad_setinfo(sadobject *self, sadstatusobject *arg)
static PyObject *
sad_ibufcount(sadobject *self)
static PyObject *
sad_obufcount(sadobject *self)
static PyObject *
sad_drain(sadobject *self)
static PyObject *
sad_getdev(sadobject *self)
static PyObject *
sad_flush(sadobject *self)
static PyObject *
sad_close(sadobject *self)
static PyObject *
sad_fileno(sadobject *self)
static PyMethodDef sad_methods[] = ;
static PyObject *
sad_getattr(sadobject *xp, char *name)
static sadstatusobject *
sads_alloc(void)
static void
sads_dealloc(sadstatusobject *xp)
#define OFF(x) offsetof(audio_info_t,x)
static struct memberlist sads_ml[] = ;
static PyObject *
sads_getattr(sadstatusobject *xp, char *name)
static int
sads_setattr(sadstatusobject *xp, char *name, PyObject *v)
static PyTypeObject Sadtype = ;
static PyTypeObject Sadstatustype = ;
static PyObject *
sadopen(PyObject *self, PyObject *args)
static PyMethodDef sunaudiodev_methods[] = ;
void
initsunaudiodev(void)
