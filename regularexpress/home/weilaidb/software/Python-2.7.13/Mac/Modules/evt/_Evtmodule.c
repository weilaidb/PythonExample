#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *Evt_Error;
static PyObject *Evt_GetMouse(PyObject *_self, PyObject *_args)
static PyObject *Evt_Button(PyObject *_self, PyObject *_args)
static PyObject *Evt_StillDown(PyObject *_self, PyObject *_args)
static PyObject *Evt_WaitMouseUp(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetCaretTime(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetKeys(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetDblTime(PyObject *_self, PyObject *_args)
static PyObject *Evt_SetEventMask(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetNextEvent(PyObject *_self, PyObject *_args)
static PyObject *Evt_EventAvail(PyObject *_self, PyObject *_args)
static PyObject *Evt_PostEvent(PyObject *_self, PyObject *_args)
static PyObject *Evt_FlushEvents(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetGlobalMouse(PyObject *_self, PyObject *_args)
static PyObject *Evt_GetCurrentKeyModifiers(PyObject *_self, PyObject *_args)
static PyObject *Evt_CheckEventQueueForUserCancel(PyObject *_self, PyObject *_args)
static PyObject *Evt_KeyScript(PyObject *_self, PyObject *_args)
static PyObject *Evt_IsCmdChar(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMGetKeyThresh(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMSetKeyThresh(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMGetKeyRepThresh(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMSetKeyRepThresh(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMGetKbdLast(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMSetKbdLast(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMGetKbdType(PyObject *_self, PyObject *_args)
static PyObject *Evt_LMSetKbdType(PyObject *_self, PyObject *_args)
static PyObject *Evt_TickCount(PyObject *_self, PyObject *_args)
static PyObject *Evt_WaitNextEvent(PyObject *_self, PyObject *_args)
static PyMethodDef Evt_methods[] = ;
static PyMethodDef Evt_methods[] = ;
void init_Evt(void)