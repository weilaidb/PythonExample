LPCWSTR NM_WSCE_ALLOWED     = L"yarn.nodemanager.windows-secure-container-executor.allowed";
LPCWSTR NM_WSCE_JOB_NAME    = L"yarn.nodemanager.windows-secure-container-executor.job-name";
LPCWSTR NM_WSCE_LOCAL_DIRS  = L"yarn.nodemanager.windows-secure-container-executor.local-dirs";
#define SERVICE_ACCESS_MASK 0x00000001
SERVICE_STATUS          gSvcStatus;
SERVICE_STATUS_HANDLE   gSvcStatusHandle;
HANDLE                  ghSvcStopEvent = INVALID_HANDLE_VALUE;
HANDLE                  ghWaitObject = INVALID_HANDLE_VALUE;
HANDLE                  ghEventLog = INVALID_HANDLE_VALUE;
BOOL                    isListenning = FALSE;
PSECURITY_DESCRIPTOR    pAllowedSD = NULL;
LPWSTR*                 gLocalDirs = NULL;
size_t                  gLocalDirsCount = 0;
int*                    gCchLocalDir = NULL;
LPCWSTR                 gJobName = NULL;
VOID SvcError(DWORD dwError);
VOID WINAPI SvcMain(DWORD dwArg, LPTSTR* lpszArgv);
DWORD SvcInit();
DWORD RpcInit();
DWORD AuthInit();
VOID ReportSvcStatus( DWORD dwCurrentState,
DWORD dwWin32ExitCode,
DWORD dwWaitHint);
VOID WINAPI SvcCtrlHandler( DWORD dwCtrl );
VOID CALLBACK SvcShutdown(
_In_  PVOID lpParameter,
_In_  BOOLEAN TimerOrWaitFired);
#define CHECK_ERROR_DONE(status, expected, category, message)       \
if (status != expected)  else
#define CHECK_RPC_STATUS_DONE(status, message)                      \
CHECK_ERROR_DONE(status, RPC_S_OK, SERVICE_CATEGORY, message)
#define CHECK_SVC_STATUS_DONE(status, message)                      \
CHECK_ERROR_DONE(status, ERROR_SUCCESS, SERVICE_CATEGORY, message)
#define CHECK_UNWIND_RPC(rpcCall)
void ReportSvcCheckError(WORD type, WORD category, DWORD dwError, LPCWSTR message)
VOID ReportSvcMessage(WORD type, WORD category, DWORD msgId)
BOOL IsSidInList(
__in PSID trustee,
__in size_t cAllowedSids,
__in_ecount(cAllowedSids) PSID* allowedSids)
DWORD ValidateConfigurationFile()
DWORD InitJobName()
DWORD InitLocalDirs()
DWORD ValidateLocalPath(LPCWSTR lpszPath)
DWORD RunService(__in int argc, __in_ecount(argc) wchar_t *argv[])
VOID WINAPI SvcMain(DWORD dwArg, LPTSTR* lpszArgv)
DWORD SvcInit()
RPC_STATUS CALLBACK RpcAuthorizeCallback (
RPC_IF_HANDLE  hInterface,
void* pContext)
DWORD AuthInit()
DWORD RpcInit()
VOID RpcStop()
VOID CleanupHandles()
VOID SvcError(DWORD dwError)
VOID CALLBACK SvcShutdown(
_In_  PVOID lpParameter,
_In_  BOOLEAN TimerOrWaitFired)
VOID WINAPI SvcCtrlHandler( DWORD dwCtrl )
VOID ReportSvcStatus( DWORD dwCurrentState,
DWORD dwWin32ExitCode,
DWORD dwWaitHint)
error_status_t WinutilsCreateProcessAsUser( handle_t IDL_handle, int nmPid, CREATE_PROCESS_REQUEST *request, CREATE_PROCESS_RESPONSE **response)
error_status_t WinutilsCreateFile( handle_t IDL_handle, int nm_pid, CREATEFILE_REQUEST *request, CREATEFILE_RESPONSE **response)
error_status_t WinutilsKillTask( handle_t IDL_handle, KILLTASK_REQUEST *request)
error_status_t WinutilsDeletePath( handle_t IDL_handle, DELETEPATH_REQUEST *request, DELETEPATH_RESPONSE **response)
error_status_t WinutilsMkDir( handle_t IDL_handle, MKDIR_REQUEST *request)
error_status_t WinutilsChown( handle_t IDL_handle, CHOWN_REQUEST *request)
error_status_t WinutilsChmod( handle_t IDL_handle, CHMOD_REQUEST *request)
error_status_t WinutilsMoveFile( handle_t IDL_handle, MOVEFILE_REQUEST *request)
void ServiceUsage()
