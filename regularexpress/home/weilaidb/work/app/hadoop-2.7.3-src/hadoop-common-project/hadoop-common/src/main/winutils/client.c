static ACCESS_MASK CLIENT_MASK = 1;
VOID ReportClientError(LPWSTR lpszLocation, DWORD dwError)
DWORD PrepareRpcBindingHandle(
__out RPC_BINDING_HANDLE* pHadoopWinutilsSvcBinding)
DWORD RpcCall_WinutilsKillTask(
__in LPCWSTR taskName)
DWORD RpcCall_WinutilsMkDir(
__in LPCWSTR filePath)
DWORD RpcCall_WinutilsChown(
__in LPCWSTR filePath,
__in_opt LPCWSTR ownerName,
__in_opt LPCWSTR groupName)
DWORD RpcCall_WinutilsChmod(
__in LPCWSTR filePath,
__in int mode)
DWORD RpcCall_WinutilsMoveFile(
__in int operation,
__in LPCWSTR sourcePath,
__in LPCWSTR destinationPath,
__in BOOL replaceExisting)
DWORD RpcCall_WinutilsCreateFile(
__in LPCWSTR path,
__in DWORD desiredAccess,
__in DWORD shareMode,
__in DWORD creationDisposition,
__in DWORD flags,
__out HANDLE* hFile)
DWORD RpcCall_WinutilsDeletePath(
__in LPCWSTR    path,
__in BOOL       isDir,
__out BOOL*     pDeleted)
DWORD RpcCall_TaskCreateAsUser(
LPCWSTR cwd, LPCWSTR jobName,
LPCWSTR user, LPCWSTR pidFile, LPCWSTR cmdLine,
HANDLE* phProcess, HANDLE* phThread, HANDLE* phStdIn, HANDLE* phStdOut, HANDLE* phStdErr)
