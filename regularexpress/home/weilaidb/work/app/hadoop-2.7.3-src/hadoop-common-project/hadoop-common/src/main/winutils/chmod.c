enum CHMOD_WHO
;
enum CHMOD_OP
;
enum CHMOD_PERM
;
typedef struct _MODE_CHANGE_ACTION
MODE_CHANGE_ACTION, *PMODE_CHANGE_ACTION;
const MODE_CHANGE_ACTION INIT_MODE_CHANGE_ACTION = ;
static BOOL ParseOctalMode(LPCWSTR tsMask, INT *uMask);
static BOOL ParseMode(LPCWSTR modeString, PMODE_CHANGE_ACTION *actions);
static BOOL FreeActions(PMODE_CHANGE_ACTION actions);
static BOOL ParseCommandLineArguments(
__in int argc,
__in_ecount(argc) wchar_t *argv[],
__out BOOL *rec,
__out_opt INT *mask,
__out_opt PMODE_CHANGE_ACTION *actions,
__out LPCWSTR *path);
static BOOL ChangeFileModeByActions(__in LPCWSTR path,
MODE_CHANGE_ACTION const *actions);
static BOOL ChangeFileMode(__in LPCWSTR path, __in_opt INT mode,
__in_opt MODE_CHANGE_ACTION const *actions);
static BOOL ChangeFileModeRecursively(__in LPCWSTR path, __in_opt INT mode,
__in_opt MODE_CHANGE_ACTION const *actions);
int Chmod(__in int argc, __in_ecount(argc) wchar_t *argv[])
static BOOL ChangeFileMode(__in LPCWSTR path, __in_opt INT unixAccessMask,
__in_opt MODE_CHANGE_ACTION const *actions)
static BOOL ChangeFileModeRecursively(__in LPCWSTR path, __in_opt INT mode,
__in_opt MODE_CHANGE_ACTION const *actions)
static BOOL ParseCommandLineArguments(
__in int argc,
__in_ecount(argc) wchar_t *argv[],
__out BOOL *rec,
__out_opt INT *mask,
__out_opt PMODE_CHANGE_ACTION *actions,
__out LPCWSTR *path)
static BOOL FreeActions(PMODE_CHANGE_ACTION actions)
static INT ComputeNewMode(__in INT oldMode,
__in USHORT who, __in USHORT op,
__in USHORT perm, __in USHORT ref)
static BOOL ConvertActionsToMask(__in LPCWSTR path,
__in MODE_CHANGE_ACTION const *actions, __out PINT puMask)
static BOOL ChangeFileModeByActions(__in LPCWSTR path,
MODE_CHANGE_ACTION const *actions)
static BOOL ParseMode(LPCWSTR modeString, PMODE_CHANGE_ACTION *pActions)
static BOOL ParseOctalMode(LPCWSTR tsMask, INT *uMask)
void ChmodUsage(LPCWSTR program)
