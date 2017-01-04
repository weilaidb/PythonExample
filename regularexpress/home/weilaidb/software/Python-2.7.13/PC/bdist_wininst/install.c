FILE *logfile;
char modulename[MAX_PATH];
HWND hwndMain;
HWND hDialog;
char *ini_file;
char info[4096];
char title[80];
char target_version[10];
char build_info[80];
char meta_name[80];
char install_script[MAX_PATH];
char *pre_install_script;
char user_access_control[10];
int py_major, py_minor;
char *arc_data;
DWORD arc_size;
int exe_size;
char python_dir[MAX_PATH];
char pythondll[MAX_PATH];
BOOL pyc_compile, pyo_compile;
HKEY hkey_root = (HKEY)-1;
BOOL success;
char *failure_reason = NULL;
HANDLE hBitmap;
char *bitmap_bytes;
#define WM_NUMFILES WM_USER+1
#define WM_NEXTFILE WM_USER+2
static BOOL notify(int code, char *fmt, ...);
SCHEME old_scheme[] = ;
SCHEME new_scheme[] = ;
static void unescape(char *dst, char *src, unsigned size)
static struct tagFile  *file_list = NULL;
static void set_failure_reason(char *reason)
static char *get_failure_reason()
static void add_to_filelist(char *path)
static int do_compile_files(int (__cdecl * PyRun_SimpleString)(char *),
int optimize)
#define DECLPROC(dll, result, name, args)\
typedef result (*__PROC__##name) args;\
result (*name)args = (__PROC__##name)GetProcAddress(dll, #name)
#define DECLVAR(dll, type, name)\
type *name = (type*)GetProcAddress(dll, #name)
typedef void PyObject;
static int compile_filelist(HINSTANCE hPython, BOOL optimize_flag)
typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
struct PyMethodDef ;
typedef struct PyMethodDef PyMethodDef;
void *(*g_Py_BuildValue)(char *, ...);
int (*g_PyArg_ParseTuple)(PyObject *, char *, ...);
PyObject * (*g_PyLong_FromVoidPtr)(void *);
PyObject *g_PyExc_ValueError;
PyObject *g_PyExc_OSError;
PyObject *(*g_PyErr_Format)(PyObject *, char *, ...);
#define DEF_CSIDL(name)
struct  csidl_names[] = ;
#define DIM(a) (sizeof(a) / sizeof((a)[0]))
static PyObject *FileCreated(PyObject *self, PyObject *args)
static PyObject *DirectoryCreated(PyObject *self, PyObject *args)
static PyObject *GetSpecialFolderPath(PyObject *self, PyObject *args)
static PyObject *CreateShortcut(PyObject *self, PyObject *args)
static PyObject *PyMessageBox(PyObject *self, PyObject *args)
static PyObject *GetRootHKey(PyObject *self)
#define METH_VARARGS 0x0001
#define METH_NOARGS   0x0004
typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
PyMethodDef meth[] = ;
static HINSTANCE LoadPythonDll(char *fname)
static int prepare_script_environment(HINSTANCE hPython)
static int
do_run_installscript(HINSTANCE hPython, char *pathname, int argc, char **argv)
static int
run_installscript(char *pathname, int argc, char **argv, char **pOutput)
static int do_run_simple_script(HINSTANCE hPython, char *script)
static int run_simple_script(char *script)
static BOOL SystemError(int error, char *msg)
static BOOL notify (int code, char *fmt, ...)
static char *MapExistingFile(char *pathname, DWORD *psize)
static void create_bitmap(HWND hwnd)
static BOOL ExtractInstallData(char *data, DWORD size, int *pexe_size,
char **out_ini_file, char **out_preinstall_script)
static void PumpMessages(void)
LRESULT CALLBACK
WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
static HWND CreateBackground(char *title)
static void CenterWindow(HWND hwnd)
BOOL CALLBACK
IntroDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
char bound_image_dll[_MAX_PATH];
int bound_image_major;
int bound_image_minor;
static BOOL __stdcall StatusRoutine(IMAGEHLP_STATUS_REASON reason,
PSTR ImageName,
PSTR DllName,
ULONG Va,
ULONG Parameter)
static LPSTR get_sys_prefix(LPSTR exe, LPSTR dll)
static BOOL
CheckPythonExe(LPSTR pathname, LPSTR version, int *pmajor, int *pminor)
static BOOL GetOtherPythonVersion(HWND hwnd, LPSTR version)
typedef struct _InstalledVersionInfo  InstalledVersionInfo;
static BOOL GetPythonVersions(HWND hwnd, HKEY hkRoot, LPSTR version)
BOOL HasLocalMachinePrivs()
void CheckRootKey(HWND hwnd)
SCHEME *GetScheme(int major, int minor)
BOOL CALLBACK
SelectPythonDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
static BOOL OpenLogfile(char *dir)
static void CloseLogfile(void)
BOOL CALLBACK
InstallFilesDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
BOOL CALLBACK
FinishedDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
void RunWizard(HWND hwnd)
static int compare(const void *p1, const void *p2)
void remove_exe(void)
void DeleteRegistryKey(char *string)
void DeleteRegistryValue(char *string)
BOOL MyDeleteFile(char *line)
BOOL MyRemoveDirectory(char *line)
BOOL Run_RemoveScript(char *line)
int DoUninstall(int argc, char **argv)
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
LPSTR lpszCmdLine, INT nCmdShow)
