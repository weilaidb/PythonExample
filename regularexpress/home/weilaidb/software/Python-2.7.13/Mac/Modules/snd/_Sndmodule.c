#define PyMac_PRECHECK(rtn) do  while(0)
static int
SndCmd_Convert(PyObject *v, SndCommand *pc)
static pascal void SndCh_UserRoutine(SndChannelPtr chan, SndCommand *cmd);
static pascal void SPB_completion(SPBPtr my_spb);
static PyObject *Snd_Error;
static PyTypeObject SndChannel_Type;
#define SndCh_Check(x) ((x)->ob_type == &SndChannel_Type || PyObject_TypeCheck((x), &SndChannel_Type))
typedef struct SndChannelObject  SndChannelObject;
static PyObject *SndCh_New(SndChannelPtr itself)
static void SndCh_dealloc(SndChannelObject *self)
static PyObject *SndCh_SndDoCommand(SndChannelObject *_self, PyObject *_args)
static PyObject *SndCh_SndDoImmediate(SndChannelObject *_self, PyObject *_args)
static PyObject *SndCh_SndPlay(SndChannelObject *_self, PyObject *_args)
static PyObject *SndCh_SndChannelStatus(SndChannelObject *_self, PyObject *_args)
static PyObject *SndCh_SndGetInfo(SndChannelObject *_self, PyObject *_args)
static PyObject *SndCh_SndSetInfo(SndChannelObject *_self, PyObject *_args)
static PyMethodDef SndCh_methods[] = ;
#define SndCh_getsetlist NULL
#define SndCh_compare NULL
#define SndCh_repr NULL
#define SndCh_hash NULL
static PyTypeObject SndChannel_Type = ;
static PyTypeObject SPB_Type;
#define SPBObj_Check(x) ((x)->ob_type == &SPB_Type || PyObject_TypeCheck((x), &SPB_Type))
typedef struct SPBObject  SPBObject;
static PyObject *SPBObj_New(void)
static int SPBObj_Convert(PyObject *v, SPBPtr *p_itself)
static void SPBObj_dealloc(SPBObject *self)
static PyMethodDef SPBObj_methods[] = ;
static PyObject *SPBObj_get_inRefNum(SPBObject *self, void *closure)
static int SPBObj_set_inRefNum(SPBObject *self, PyObject *v, void *closure)
static PyObject *SPBObj_get_count(SPBObject *self, void *closure)
static int SPBObj_set_count(SPBObject *self, PyObject *v, void *closure)
static PyObject *SPBObj_get_milliseconds(SPBObject *self, void *closure)
static int SPBObj_set_milliseconds(SPBObject *self, PyObject *v, void *closure)
static PyObject *SPBObj_get_error(SPBObject *self, void *closure)
#define SPBObj_set_error NULL
#define SPBObj_get_completionRoutine NULL
static int SPBObj_set_completionRoutine(SPBObject *self, PyObject *v, void *closure)
static PyGetSetDef SPBObj_getsetlist[] = ;
#define SPBObj_compare NULL
#define SPBObj_repr NULL
#define SPBObj_hash NULL
static PyTypeObject SPB_Type = ;
static PyObject *Snd_SPB(PyObject *_self, PyObject *_args)
static PyObject *Snd_SysBeep(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndNewChannel(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndSoundManagerVersion(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndManagerStatus(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndGetSysBeepState(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndSetSysBeepState(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetSysBeepVolume(PyObject *_self, PyObject *_args)
static PyObject *Snd_SetSysBeepVolume(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetDefaultOutputVolume(PyObject *_self, PyObject *_args)
static PyObject *Snd_SetDefaultOutputVolume(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetSoundHeaderOffset(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetCompressionInfo(PyObject *_self, PyObject *_args)
static PyObject *Snd_SetSoundPreference(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetSoundPreference(PyObject *_self, PyObject *_args)
static PyObject *Snd_GetCompressionName(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBVersion(PyObject *_self, PyObject *_args)
static PyObject *Snd_SndRecord(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBSignInDevice(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBSignOutDevice(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBGetIndexedDevice(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBOpenDevice(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBCloseDevice(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBRecord(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBPauseRecording(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBResumeRecording(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBStopRecording(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBGetRecordingStatus(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBGetDeviceInfo(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBSetDeviceInfo(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBMillisecondsToBytes(PyObject *_self, PyObject *_args)
static PyObject *Snd_SPBBytesToMilliseconds(PyObject *_self, PyObject *_args)
static PyMethodDef Snd_methods[] = ;
static int
SndCh_CallCallBack(void *arg)
static pascal void
SndCh_UserRoutine(SndChannelPtr chan, SndCommand *cmd)
static int
SPB_CallCallBack(void *arg)
static pascal void
SPB_completion(SPBPtr my_spb)
void init_Snd(void)
