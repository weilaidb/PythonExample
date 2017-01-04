char dllVersionBuffer[16] = "";
HMODULE PyWin_DLLhModule = NULL;
const char *PyWin_DLLVersionString = dllVersionBuffer;
typedef BOOL (WINAPI * PFN_GETCURRENTACTCTX)(HANDLE *);
typedef BOOL (WINAPI * PFN_ACTIVATEACTCTX)(HANDLE, ULONG_PTR *);
typedef BOOL (WINAPI * PFN_DEACTIVATEACTCTX)(DWORD, ULONG_PTR);
typedef BOOL (WINAPI * PFN_ADDREFACTCTX)(HANDLE);
typedef BOOL (WINAPI * PFN_RELEASEACTCTX)(HANDLE);
static HANDLE PyWin_DLLhActivationContext = NULL;
static PFN_GETCURRENTACTCTX pfnGetCurrentActCtx = NULL;
static PFN_ACTIVATEACTCTX pfnActivateActCtx = NULL;
static PFN_DEACTIVATEACTCTX pfnDeactivateActCtx = NULL;
static PFN_ADDREFACTCTX pfnAddRefActCtx = NULL;
static PFN_RELEASEACTCTX pfnReleaseActCtx = NULL;
void _LoadActCtxPointers()
ULONG_PTR _Py_ActivateActCtx()
void _Py_DeactivateActCtx(ULONG_PTR cookie)
BOOL    WINAPI  DllMain (HANDLE hInst,
ULONG ul_reason_for_call,
LPVOID lpReserved)
