#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *Help_Error;
static PyObject *Help_HMGetHelpMenu(PyObject *_self, PyObject *_args)
static PyObject *Help_HMAreHelpTagsDisplayed(PyObject *_self, PyObject *_args)
static PyObject *Help_HMSetHelpTagsDisplayed(PyObject *_self, PyObject *_args)
static PyObject *Help_HMSetTagDelay(PyObject *_self, PyObject *_args)
static PyObject *Help_HMGetTagDelay(PyObject *_self, PyObject *_args)
static PyObject *Help_HMSetMenuHelpFromBalloonRsrc(PyObject *_self, PyObject *_args)
static PyObject *Help_HMSetDialogHelpFromBalloonRsrc(PyObject *_self, PyObject *_args)
static PyObject *Help_HMHideTag(PyObject *_self, PyObject *_args)
static PyMethodDef Help_methods[] = ;
void init_Help(void)
