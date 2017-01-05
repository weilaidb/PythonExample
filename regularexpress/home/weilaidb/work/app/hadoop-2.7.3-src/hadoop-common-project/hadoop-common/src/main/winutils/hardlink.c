typedef enum HardLinkCommandOptionType
HardLinkCommandOption;
static BOOL ParseCommandLine(__in int argc,
__in_ecount(argc) wchar_t *argv[],
__out HardLinkCommandOption *command)
static DWORD HardlinkStat(__in LPCWSTR fileName, __out DWORD *puHardLinkCount)
static DWORD HardlinkCreate(__in LPCWSTR linkName, __in LPCWSTR fileName)
int Hardlink(__in int argc, __in_ecount(argc) wchar_t *argv[])
void HardlinkUsage()
