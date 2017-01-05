static BOOL PrintGroups(
LOCALGROUP_USERS_INFO_0 const *groups,
DWORD entries,
BOOL formatOutput)
static BOOL ParseCommandLine(
__in int argc,
__in_ecount(argc) wchar_t *argv[],
__out PWSTR *user,
__out BOOL *formatOutput)
int Groups(__in int argc, __in_ecount(argc) wchar_t *argv[])
void GroupsUsage(LPCWSTR program)
