#define WINDOWS_LEAN_AND_MEAN
typedef struct  sp_handle_object;
staticforward PyTypeObject sp_handle_type;
static PyObject*
sp_handle_new(HANDLE handle)
#if defined(MS_WIN32) && !defined(MS_WIN64)
#define HANDLE_TO_PYNUM(handle) PyInt_FromLong((long) handle)
#define PY_HANDLE_PARAM "l"
#define HANDLE_TO_PYNUM(handle) PyLong_FromLongLong((long long) handle)
#define PY_HANDLE_PARAM "L"
static PyObject*
sp_handle_detach(sp_handle_object* self, PyObject* args)
static PyObject*
sp_handle_close(sp_handle_object* self, PyObject* args)
static void
sp_handle_dealloc(sp_handle_object* self)
static PyMethodDef sp_handle_methods[] = ;
static PyObject*
sp_handle_getattr(sp_handle_object* self, char* name)
static PyObject*
sp_handle_as_int(sp_handle_object* self)
static PyNumberMethods sp_handle_as_number;
statichere PyTypeObject sp_handle_type = ;
PyDoc_STRVAR(GetStdHandle_doc,
"GetStdHandle(handle) -> integer\n\
\n\
Return a handle to the specified standard device\n\
(STD_INPUT_HANDLE, STD_OUTPUT_HANDLE, STD_ERROR_HANDLE).\n\
The integer associated with the handle object is returned.");
static PyObject *
sp_GetStdHandle(PyObject* self, PyObject* args)
PyDoc_STRVAR(GetCurrentProcess_doc,
"GetCurrentProcess() -> handle\n\
\n\
Return a handle object for the current process.");
static PyObject *
sp_GetCurrentProcess(PyObject* self, PyObject* args)
PyDoc_STRVAR(DuplicateHandle_doc,
"DuplicateHandle(source_proc_handle, source_handle,\n\
target_proc_handle, target_handle, access,\n\
inherit[, options]) -> handle\n\
\n\
Return a duplicate handle object.\n\
\n\
The duplicate handle refers to the same object as the original\n\
handle. Therefore, any changes to the object are reflected\n\
through both handles.");
static PyObject *
sp_DuplicateHandle(PyObject* self, PyObject* args)
PyDoc_STRVAR(CreatePipe_doc,
"CreatePipe(pipe_attrs, size) -> (read_handle, write_handle)\n\
\n\
Create an anonymous pipe, and return handles to the read and\n\
write ends of the pipe.\n\
\n\
pipe_attrs is ignored internally and can be None.");
static PyObject *
sp_CreatePipe(PyObject* self, PyObject* args)
static int
getint(PyObject* obj, char* name)
static HANDLE
gethandle(PyObject* obj, char* name)
static PyObject*
getenvironment(PyObject* environment)
PyDoc_STRVAR(CreateProcess_doc,
"CreateProcess(app_name, cmd_line, proc_attrs, thread_attrs,\n\
inherit, flags, env_mapping, curdir,\n\
startup_info) -> (proc_handle, thread_handle,\n\
pid, tid)\n\
\n\
Create a new process and its primary thread. The return\n\
value is a tuple of the process handle, thread handle,\n\
process ID, and thread ID.\n\
\n\
proc_attrs and thread_attrs are ignored internally and can be None.");
static PyObject *
sp_CreateProcess(PyObject* self, PyObject* args)
PyDoc_STRVAR(TerminateProcess_doc,
"TerminateProcess(handle, exit_code) -> None\n\
\n\
Terminate the specified process and all of its threads.");
static PyObject *
sp_TerminateProcess(PyObject* self, PyObject* args)
PyDoc_STRVAR(GetExitCodeProcess_doc,
"GetExitCodeProcess(handle) -> Exit code\n\
\n\
Return the termination status of the specified process.");
static PyObject *
sp_GetExitCodeProcess(PyObject* self, PyObject* args)
PyDoc_STRVAR(WaitForSingleObject_doc,
"WaitForSingleObject(handle, timeout) -> result\n\
\n\
Wait until the specified object is in the signaled state or\n\
the time-out interval elapses. The timeout value is specified\n\
in milliseconds.");
static PyObject *
sp_WaitForSingleObject(PyObject* self, PyObject* args)
PyDoc_STRVAR(GetVersion_doc,
"GetVersion() -> version\n\
\n\
Return the version number of the current operating system.");
static PyObject *
sp_GetVersion(PyObject* self, PyObject* args)
PyDoc_STRVAR(GetModuleFileName_doc,
"GetModuleFileName(module) -> path\n\
\n\
Return the fully-qualified path for the file that contains\n\
the specified module. The module must have been loaded by the\n\
current process.\n\
\n\
The module parameter should be a handle to the loaded module\n\
whose path is being requested. If this parameter is 0, \n\
GetModuleFileName retrieves the path of the executable file\n\
of the current process.");
static PyObject *
sp_GetModuleFileName(PyObject* self, PyObject* args)
static PyMethodDef sp_functions[] = ;
static void
defint(PyObject* d, const char* name, int value)
#if PY_VERSION_HEX >= 0x02030000
PyMODINIT_FUNC
DL_EXPORT(void)
init_subprocess()
