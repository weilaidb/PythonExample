PyDoc_STRVAR(sound_playsound_doc,
"PlaySound(sound, flags) - a wrapper around the Windows PlaySound API\n"
"\n"
"The sound argument can be a filename, data, or None.\n"
"For flag values, ored together, see module documentation.");
PyDoc_STRVAR(sound_beep_doc,
"Beep(frequency, duration) - a wrapper around the Windows Beep API\n"
"\n"
"The frequency argument specifies frequency, in hertz, of the sound.\n"
"This parameter must be in the range 37 through 32,767.\n"
"The duration argument specifies the number of milliseconds.\n");
PyDoc_STRVAR(sound_msgbeep_doc,
"MessageBeep(x) - call Windows MessageBeep(x). x defaults to MB_OK.");
PyDoc_STRVAR(sound_module_doc,
"PlaySound(sound, flags) - play a sound\n"
"SND_FILENAME - sound is a wav file name\n"
"SND_ALIAS - sound is a registry sound association name\n"
"SND_LOOP - Play the sound repeatedly; must also specify SND_ASYNC\n"
"SND_MEMORY - sound is a memory image of a wav file\n"
"SND_PURGE - stop all instances of the specified sound\n"
"SND_ASYNC - PlaySound returns immediately\n"
"SND_NODEFAULT - Do not play a default beep if the sound can not be found\n"
"SND_NOSTOP - Do not interrupt any sounds currently playing\n"
"SND_NOWAIT - Return immediately if the sound driver is busy\n"
"\n"
"Beep(frequency, duration) - Make a beep through the PC speaker.");
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
