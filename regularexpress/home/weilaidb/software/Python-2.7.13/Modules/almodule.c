#define OLD_INTERFACE
#define OLD_INTERFACE
static PyObject *ErrorObject;
typedef struct  alpobject;
static PyTypeObject Alptype;
typedef struct  alcobject;
static PyTypeObject Alctype;
static void
ErrorHandler(long code, const char *fmt, ...)
static PyObject *
param2python(int resource, int param, ALvalue value, ALparamInfo *pinfo)
static int
python2elem(PyObject *item, void *ptr, int elementType)
static int
python2param(int resource, ALpv *param, PyObject *value, ALparamInfo *pinfo)
static int
python2params(int resource1, int resource2, PyObject *list, ALpv **pvsp, ALparamInfo **pinfop)
static PyObject *
SetConfig(alcobject *self, PyObject *args, int (*func)(ALconfig, int))
static PyObject *
GetConfig(alcobject *self, PyObject *args, int (*func)(ALconfig))
PyDoc_STRVAR(alc_SetWidth__doc__,
"alSetWidth: set the wordsize for integer audio data.");
static PyObject *
alc_SetWidth(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetWidth__doc__,
"alGetWidth: get the wordsize for integer audio data.");
static PyObject *
alc_GetWidth(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_SetSampFmt__doc__,
"alSetSampFmt: set the sample format setting in an audio ALconfig "
"structure.");
static PyObject *
alc_SetSampFmt(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetSampFmt__doc__,
"alGetSampFmt: get the sample format setting in an audio ALconfig "
"structure.");
static PyObject *
alc_GetSampFmt(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_SetChannels__doc__,
"alSetChannels: set the channel settings in an audio ALconfig.");
static PyObject *
alc_SetChannels(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetChannels__doc__,
"alGetChannels: get the channel settings in an audio ALconfig.");
static PyObject *
alc_GetChannels(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_SetFloatMax__doc__,
"alSetFloatMax: set the maximum value of floating point sample data.");
static PyObject *
alc_SetFloatMax(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetFloatMax__doc__,
"alGetFloatMax: get the maximum value of floating point sample data.");
static PyObject *
alc_GetFloatMax(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_SetDevice__doc__,
"alSetDevice: set the device setting in an audio ALconfig structure.");
static PyObject *
alc_SetDevice(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetDevice__doc__,
"alGetDevice: get the device setting in an audio ALconfig structure.");
static PyObject *
alc_GetDevice(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_SetQueueSize__doc__,
"alSetQueueSize: set audio port buffer size.");
static PyObject *
alc_SetQueueSize(alcobject *self, PyObject *args)
PyDoc_STRVAR(alc_GetQueueSize__doc__,
"alGetQueueSize: get audio port buffer size.");
static PyObject *
alc_GetQueueSize(alcobject *self, PyObject *args)
static PyObject *
setconfig(alcobject *self, PyObject *args, int (*func)(ALconfig, long))
static PyObject *
getconfig(alcobject *self, PyObject *args, long (*func)(ALconfig))
static PyObject *
alc_setqueuesize (alcobject *self, PyObject *args)
static PyObject *
alc_getqueuesize (alcobject *self, PyObject *args)
static PyObject *
alc_setwidth (alcobject *self, PyObject *args)
static PyObject *
alc_getwidth (alcobject *self, PyObject *args)
static PyObject *
alc_getchannels (alcobject *self, PyObject *args)
static PyObject *
alc_setchannels (alcobject *self, PyObject *args)
static PyObject *
alc_getsampfmt (alcobject *self, PyObject *args)
static PyObject *
alc_setsampfmt (alcobject *self, PyObject *args)
static PyObject *
alc_getfloatmax(alcobject *self, PyObject *args)
static PyObject *
alc_setfloatmax(alcobject *self, PyObject *args)
static struct PyMethodDef alc_methods[] = ;
static PyObject *
newalcobject(ALconfig config)
static void
alc_dealloc(alcobject *self)
static PyObject *
alc_getattr(alcobject *self, char *name)
PyDoc_STRVAR(Alctype__doc__, "");
static PyTypeObject Alctype = ;
PyDoc_STRVAR(alp_SetConfig__doc__,
"alSetConfig: set the ALconfig of an audio ALport.");
static PyObject *
alp_SetConfig(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetConfig__doc__,
"alGetConfig: get the ALconfig of an audio ALport.");
static PyObject *
alp_GetConfig(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetResource__doc__,
"alGetResource: get the resource associated with an audio port.");
static PyObject *
alp_GetResource(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFD__doc__,
"alGetFD: get the file descriptor for an audio port.");
static PyObject *
alp_GetFD(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFilled__doc__,
"alGetFilled: return the number of filled sample frames in "
"an audio port.");
static PyObject *
alp_GetFilled(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFillable__doc__,
"alGetFillable: report the number of unfilled sample frames "
"in an audio port.");
static PyObject *
alp_GetFillable(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_ReadFrames__doc__,
"alReadFrames: read sample frames from an audio port.");
static PyObject *
alp_ReadFrames(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_DiscardFrames__doc__,
"alDiscardFrames: discard audio from an audio port.");
static PyObject *
alp_DiscardFrames(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_ZeroFrames__doc__,
"alZeroFrames: write zero-valued sample frames to an audio port.");
static PyObject *
alp_ZeroFrames(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_SetFillPoint__doc__,
"alSetFillPoint: set low- or high-water mark for an audio port.");
static PyObject *
alp_SetFillPoint(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFillPoint__doc__,
"alGetFillPoint: get low- or high-water mark for an audio port.");
static PyObject *
alp_GetFillPoint(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFrameNumber__doc__,
"alGetFrameNumber: get the absolute sample frame number "
"associated with a port.");
static PyObject *
alp_GetFrameNumber(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_GetFrameTime__doc__,
"alGetFrameTime: get the time at which a sample frame came "
"in or will go out.");
static PyObject *
alp_GetFrameTime(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_WriteFrames__doc__,
"alWriteFrames: write sample frames to an audio port.");
static PyObject *
alp_WriteFrames(alpobject *self, PyObject *args)
PyDoc_STRVAR(alp_ClosePort__doc__, "alClosePort: close an audio port.");
static PyObject *
alp_ClosePort(alpobject *self, PyObject *args)
static PyObject *
alp_closeport(alpobject *self, PyObject *args)
static PyObject *
alp_getfd(alpobject *self, PyObject *args)
static PyObject *
alp_getfilled(alpobject *self, PyObject *args)
static PyObject *
alp_getfillable(alpobject *self, PyObject *args)
static PyObject *
alp_readsamps(alpobject *self, PyObject *args)
static PyObject *
alp_writesamps(alpobject *self, PyObject *args)
static PyObject *
alp_getfillpoint(alpobject *self, PyObject *args)
static PyObject *
alp_setfillpoint(alpobject *self, PyObject *args)
static PyObject *
alp_setconfig(alpobject *self, PyObject *args)
static PyObject *
alp_getconfig(alpobject *self, PyObject *args)
static PyObject *
alp_getstatus(alpobject *self, PyObject *args)
static struct PyMethodDef alp_methods[] = ;
static PyObject *
newalpobject(ALport port)
static void
alp_dealloc(alpobject *self)
static PyObject *
alp_getattr(alpobject *self, char *name)
PyDoc_STRVAR(Alptype__doc__, "");
static PyTypeObject Alptype = ;
PyDoc_STRVAR(al_NewConfig__doc__,
"alNewConfig: create and initialize an audio ALconfig structure.");
static PyObject *
al_NewConfig(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_OpenPort__doc__,
"alOpenPort: open an audio port.");
static PyObject *
al_OpenPort(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_Connect__doc__,
"alConnect: connect two audio I/O resources.");
static PyObject *
al_Connect(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_Disconnect__doc__,
"alDisconnect: delete a connection between two audio I/O resources.");
static PyObject *
al_Disconnect(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_GetParams__doc__,
"alGetParams: get the values of audio resource parameters.");
static PyObject *
al_GetParams(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_SetParams__doc__,
"alSetParams: set the values of audio resource parameters.");
static PyObject *
al_SetParams(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_QueryValues__doc__,
"alQueryValues: get the set of possible values for a parameter.");
static PyObject *
al_QueryValues(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_GetParamInfo__doc__,
"alGetParamInfo: get information about a parameter on "
"a particular audio resource.");
static PyObject *
al_GetParamInfo(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_GetResourceByName__doc__,
"alGetResourceByName: find an audio resource by name.");
static PyObject *
al_GetResourceByName(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_IsSubtype__doc__,
"alIsSubtype: indicate if one resource type is a subtype of another.");
static PyObject *
al_IsSubtype(PyObject *self, PyObject *args)
PyDoc_STRVAR(al_SetErrorHandler__doc__, "");
static PyObject *
al_SetErrorHandler(PyObject *self, PyObject *args)
static PyObject *
al_openport(PyObject *self, PyObject *args)
static PyObject *
al_newconfig(PyObject *self, PyObject *args)
static PyObject *
al_queryparams(PyObject *self, PyObject *args)
static PyObject *
doParams(PyObject *args, int (*func)(long, long *, long), int modified)
static PyObject *
al_getparams(PyObject *self, PyObject *args)
static PyObject *
al_setparams(PyObject *self, PyObject *args)
static PyObject *
al_getname(PyObject *self, PyObject *args)
static PyObject *
al_getdefault(PyObject *self, PyObject *args)
static PyObject *
al_getminmax(PyObject *self, PyObject *args)
static struct PyMethodDef al_methods[] = ;
PyDoc_STRVAR(al_module_documentation, "");
void
inital(void)
