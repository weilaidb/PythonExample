static BOOL GetMaskString(__in INT accessMask, __in_ecount(10) LPWSTR maskString)
static BOOL LsPrintLine(
const INT mask,
const DWORD hardlinkCount,
LPCWSTR ownerName,
LPCWSTR groupName,
const FILETIME *lpFileWritetime,
const LARGE_INTEGER fileSize,
LPCWSTR path,
BOOL useSeparator)
enum CmdLineOption
;
static wchar_t* CurrentDir = L".";
BOOL ParseCommandLine(
__in int argc,
__in_ecount(argc) wchar_t *argv[],
__deref_out PWSTR *path,
__out int *optionsMask)
int Ls(__in int argc, __in_ecount(argc) wchar_t *argv[])
void LsUsage(LPCWSTR program)
