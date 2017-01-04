#define O_RDONLY 00
#define O_WRONLY 01
#if defined(linux)
typedef unsigned long uint32_t;
#elif defined(__FreeBSD__)
# ifndef SNDCTL_DSP_CHANNELS
#  define SNDCTL_DSP_CHANNELS SOUND_PCM_WRITE_CHANNELS
# endif
typedef struct  oss_audio_t;
typedef struct  oss_mixer_t;
static PyTypeObject OSSAudioType;
static PyTypeObject OSSMixerType;
static PyObject *OSSAudioError;
static oss_audio_t *
newossobject(PyObject *arg)
static void
oss_dealloc(oss_audio_t *self)
static oss_mixer_t *
newossmixerobject(PyObject *arg)
static void
oss_mixer_dealloc(oss_mixer_t *self)
static PyObject *
_do_ioctl_1(int fd, PyObject *args, char *fname, int cmd)
static PyObject *
_do_ioctl_1_internal(int fd, PyObject *args, char *fname, int cmd)
static PyObject *
_do_ioctl_0(int fd, PyObject *args, char *fname, int cmd)
static PyObject *
oss_nonblock(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_setfmt(oss_audio_t *self, PyObject *args)
static PyObject *
oss_getfmts(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_channels(oss_audio_t *self, PyObject *args)
static PyObject *
oss_speed(oss_audio_t *self, PyObject *args)
static PyObject *
oss_sync(oss_audio_t *self, PyObject *args)
static PyObject *
oss_reset(oss_audio_t *self, PyObject *args)
static PyObject *
oss_post(oss_audio_t *self, PyObject *args)
static PyObject *
oss_read(oss_audio_t *self, PyObject *args)
static PyObject *
oss_write(oss_audio_t *self, PyObject *args)
static PyObject *
oss_writeall(oss_audio_t *self, PyObject *args)
static PyObject *
oss_close(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_fileno(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_setparameters(oss_audio_t *self, PyObject *args)
static int
_ssize(oss_audio_t *self, int *nchannels, int *ssize)
static PyObject *
oss_bufsize(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_obufcount(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_obuffree(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_getptr(oss_audio_t *self, PyObject *unused)
static PyObject *
oss_mixer_close(oss_mixer_t *self, PyObject *unused)
static PyObject *
oss_mixer_fileno(oss_mixer_t *self, PyObject *unused)
static PyObject *
oss_mixer_controls(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_stereocontrols(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_reccontrols(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_get(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_set(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_get_recsrc(oss_mixer_t *self, PyObject *args)
static PyObject *
oss_mixer_set_recsrc(oss_mixer_t *self, PyObject *args)
static PyMethodDef oss_methods[] = ;
static PyMethodDef oss_mixer_methods[] = ;
static PyObject *
oss_getattr(oss_audio_t *self, char *name)
static PyObject *
oss_mixer_getattr(oss_mixer_t *self, char *name)
static PyTypeObject OSSAudioType = ;
static PyTypeObject OSSMixerType = ;
static PyObject *
ossopen(PyObject *self, PyObject *args)
static PyObject *
ossopenmixer(PyObject *self, PyObject *args)
static PyMethodDef ossaudiodev_methods[] = ;
#define _EXPORT_INT(mod, name) \
if (PyModule_AddIntConstant(mod, #name, (long) (name)) == -1) return;
static char *control_labels[] = SOUND_DEVICE_LABELS;
static char *control_names[] = SOUND_DEVICE_NAMES;
static int
build_namelists (PyObject *module)
void
initossaudiodev(void)
