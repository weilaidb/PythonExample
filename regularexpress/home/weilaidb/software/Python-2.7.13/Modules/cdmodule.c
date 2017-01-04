#define NCALLBACKS      8
typedef struct  cdplayerobject;
static PyObject *CdError;
static PyObject *
CD_allowremoval(cdplayerobject *self, PyObject *args)
static PyObject *
CD_preventremoval(cdplayerobject *self, PyObject *args)
static PyObject *
CD_bestreadsize(cdplayerobject *self, PyObject *args)
static PyObject *
CD_close(cdplayerobject *self, PyObject *args)
static PyObject *
CD_eject(cdplayerobject *self, PyObject *args)
static PyObject *
CD_getstatus(cdplayerobject *self, PyObject *args)
static PyObject *
CD_gettrackinfo(cdplayerobject *self, PyObject *args)
static PyObject *
CD_msftoblock(cdplayerobject *self, PyObject *args)
static PyObject *
CD_play(cdplayerobject *self, PyObject *args)
static PyObject *
CD_playabs(cdplayerobject *self, PyObject *args)
static PyObject *
CD_playtrack(cdplayerobject *self, PyObject *args)
static PyObject *
CD_playtrackabs(cdplayerobject *self, PyObject *args)
static PyObject *
CD_readda(cdplayerobject *self, PyObject *args)
static PyObject *
CD_seek(cdplayerobject *self, PyObject *args)
static PyObject *
CD_seektrack(cdplayerobject *self, PyObject *args)
static PyObject *
CD_seekblock(cdplayerobject *self, PyObject *args)
static PyObject *
CD_stop(cdplayerobject *self, PyObject *args)
static PyObject *
CD_togglepause(cdplayerobject *self, PyObject *args)
static PyMethodDef cdplayer_methods[] = ;
static void
cdplayer_dealloc(cdplayerobject *self)
static PyObject *
cdplayer_getattr(cdplayerobject *self, char *name)
PyTypeObject CdPlayertype = ;
static PyObject *
newcdplayerobject(CDPLAYER *cdp)
static PyObject *
CD_open(PyObject *self, PyObject *args)
typedef struct  cdparserobject;
static void
CD_callback(void *arg, CDDATATYPES type, void *data)
static PyObject *
CD_deleteparser(cdparserobject *self, PyObject *args)
static PyObject *
CD_parseframe(cdparserobject *self, PyObject *args)
static PyObject *
CD_removecallback(cdparserobject *self, PyObject *args)
static PyObject *
CD_resetparser(cdparserobject *self, PyObject *args)
static PyObject *
CD_addcallback(cdparserobject *self, PyObject *args)
static PyMethodDef cdparser_methods[] = ;
static void
cdparser_dealloc(cdparserobject *self)
static PyObject *
cdparser_getattr(cdparserobject *self, char *name)
PyTypeObject CdParsertype = ;
static PyObject *
newcdparserobject(CDPARSER *cdp)
static PyObject *
CD_createparser(PyObject *self, PyObject *args)
static PyObject *
CD_msftoframe(PyObject *self, PyObject *args)
static PyMethodDef CD_methods[] = ;
void
initcd(void)
