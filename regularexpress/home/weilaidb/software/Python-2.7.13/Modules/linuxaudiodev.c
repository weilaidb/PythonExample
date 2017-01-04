#define O_RDONLY 00
#define O_WRONLY 01
#if defined(linux)
typedef unsigned long uint32_t;
#elif defined(__FreeBSD__)
#define SNDCTL_DSP_CHANNELS SOUND_PCM_WRITE_CHANNELS
typedef struct  lad_t;
static struct  audio_types[] = ;
static int n_audio_types = sizeof(audio_types) / sizeof(audio_types[0]);
static PyTypeObject Ladtype;
static PyObject *LinuxAudioError;
static lad_t *
newladobject(PyObject *arg)
static void
lad_dealloc(lad_t *xp)
static PyObject *
lad_read(lad_t *self, PyObject *args)
static PyObject *
lad_write(lad_t *self, PyObject *args)
static PyObject *
lad_close(lad_t *self, PyObject *unused)
static PyObject *
lad_fileno(lad_t *self, PyObject *unused)
static PyObject *
lad_setparameters(lad_t *self, PyObject *args)
static int
_ssize(lad_t *self, int *nchannels, int *ssize)
static PyObject *
lad_bufsize(lad_t *self, PyObject *unused)
static PyObject *
lad_obufcount(lad_t *self, PyObject *unused)
static PyObject *
lad_obuffree(lad_t *self, PyObject *unused)
static PyObject *
lad_flush(lad_t *self, PyObject *unused)
static PyObject *
lad_getptr(lad_t *self, PyObject *unused)
static PyMethodDef lad_methods[] = ;
static PyObject *
lad_getattr(lad_t *xp, char *name)
static PyTypeObject Ladtype = ;
static PyObject *
ladopen(PyObject *self, PyObject *args)
static PyMethodDef linuxaudiodev_methods[] = ;
void
initlinuxaudiodev(void)
