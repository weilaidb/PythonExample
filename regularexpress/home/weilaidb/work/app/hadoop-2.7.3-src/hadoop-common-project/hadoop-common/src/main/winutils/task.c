#undef PSAPI_VERSION
#define PSAPI_VERSION 1
#define NM_WSCE_IMPERSONATE_ALLOWED L"yarn.nodemanager.windows-secure-container-executor.impersonate.allowed"
#define NM_WSCE_IMPERSONATE_DENIED  L"yarn.nodemanager.windows-secure-container-executor.impersonate.denied"
#define SERVICE_IMPERSONATE_MASK 0x00000002
static const char *LOGON_PROCESS_NAME="Hadoop Container Executor";
static const char *TOKEN_SOURCE_NAME = "HadoopEx";
typedef enum TaskCommandOptionType
TaskCommandOption;
static BOOL GetLimit(__in const wchar_t *str, __out long *value)
static BOOL ParseCommandLine(__in int argc,
__in_ecount(argc) wchar_t *argv[],
__out TaskCommandOption *command,
__out_opt long *memory,
__out_opt long *vcore)
DWORD BuildImpersonateSecurityDescriptor(__out PSECURITY_DESCRIPTOR* ppSD)
DWORD AddNodeManagerAndUserACEsToObject(
__in HANDLE hObject,
__in LPCWSTR user,
__in ACCESS_MASK accessMask)
DWORD ValidateImpersonateAccessCheck(__in HANDLE logonHandle)
DWORD CreateTaskImpl(__in_opt HANDLE logonHandle, __in PCWSTR jobObjName,__in PWSTR cmdLine,
__in LPCWSTR userName, __in long memory, __in long cpuRate)
DWORD CreateTask(__in PCWSTR jobObjName,__in PWSTR cmdLine, __in long memory, __in long cpuRate)
DWORD CreateTaskAsUser(__in PCWSTR jobObjName,
__in PCWSTR user, __in PCWSTR pidFilePath, __in PWSTR cmdLine)
DWORD IsTaskAlive(const WCHAR* jobObjName, int* isAlive, int* procsInJob)
DWORD PrintTaskProcessList(const WCHAR* jobObjName)
int Task(__in int argc, __in_ecount(argc) wchar_t *argv[])
void TaskUsage()
