#define WIDEN_STRING(x) WIDEN_STRING_(x)
#define WIDEN_STRING_(x) L ## x
#define STRINGIFY(x) STRINGIFY_(x)
#define STRINGIFY_(x) #x
const WCHAR* wsceConfigRelativePath = WIDEN_STRING(STRINGIFY(WSCE_CONFIG_DIR)) L"\\" WIDEN_STRING(STRINGIFY(WSCE_CONFIG_FILE));
const LPCWSTR MONTHS[] = ;
const ACCESS_MASK WinMasks[WIN_MASKS_TOTAL] =
;
DWORD GetFileInformationByName(
__in LPCWSTR pathName,
__in BOOL followLink,
__out LPBY_HANDLE_FILE_INFORMATION lpFileInformation)
static BOOL IsLongWindowsPath(__in PCWSTR path)
static BOOL IsPrefixedAlready(__in PCWSTR path)
DWORD ConvertToLongPath(__in PCWSTR path, __deref_out PWSTR *newPath)
BOOL IsDirFileInfo(const BY_HANDLE_FILE_INFORMATION *fileInformation)
static DWORD FileAttributesCheck(
__in LPCWSTR path, __in DWORD attr, __out PBOOL res)
DWORD DirectoryCheck(__in LPCWSTR pathName, __out PBOOL res)
static DWORD ReparsePointCheck(__in LPCWSTR pathName, __out PBOOL res)
static DWORD ReparseTagCheck(__in LPCWSTR path, __in DWORD tag, __out PBOOL res)
DWORD SymbolicLinkCheck(__in LPCWSTR pathName, __out PBOOL res)
DWORD JunctionPointCheck(__in LPCWSTR pathName, __out PBOOL res)
DWORD GetSidFromAcctNameW(__in PCWSTR acctName, __out PSID *ppSid)
static INT GetUnixAccessMask(ACCESS_MASK Mask)
static DWORD GetAccess(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClient,
PSECURITY_DESCRIPTOR psd, PACCESS_MASK pAccessRights)
static DWORD GetEffectiveRightsForSid(PSECURITY_DESCRIPTOR psd,
PSID pSid,
PACCESS_MASK pAccessRights)
DWORD CheckAccessForCurrentUser(
__in PCWSTR pathName,
__in ACCESS_MASK requestedAccess,
__out BOOL *allowed)
DWORD FindFileOwnerAndPermissionByHandle(
__in HANDLE fileHandle,
__out_opt LPWSTR *pOwnerName,
__out_opt LPWSTR *pGroupName,
__out_opt PINT pMask)
DWORD FindFileOwnerAndPermission(
__in LPCWSTR pathName,
__in BOOL followLink,
__out_opt LPWSTR *pOwnerName,
__out_opt LPWSTR *pGroupName,
__out_opt PINT pMask)
static void GetWindowsAccessMask(INT unixMask,
ACCESS_MASK *userAllow,
ACCESS_MASK *userDeny,
ACCESS_MASK *groupAllow,
ACCESS_MASK *groupDeny,
ACCESS_MASK *otherAllow)
static DWORD GetWindowsDACLs(__in INT unixMask,
__in PSID pOwnerSid, __in PSID pGroupSid, __out PACL *ppNewDACL)
DWORD ChangeFileModeByMask(__in LPCWSTR path, INT mode)
static DWORD GetTokenInformationByClass(__in HANDLE hToken,
__in TOKEN_INFORMATION_CLASS class, __out_opt LPVOID *ppTokenInformation)
static DWORD GetWindowsDACLsForCreate(__in INT mode, __out PACL *ppDACL)
static DWORD CreateSecurityDescriptorForCreate(__in PACL pDACL,
__out PSECURITY_DESCRIPTOR *ppSD)
DWORD CreateDirectoryWithMode(__in LPCWSTR lpPath, __in INT mode)
DWORD CreateFileWithMode(__in LPCWSTR lpPath, __in DWORD dwDesiredAccess,
__in DWORD dwShareMode, __in DWORD dwCreationDisposition, __in INT mode,
__out PHANDLE pHFile)
DWORD GetAccntNameFromSid(__in PSID pSid, __out PWSTR *ppAcctName)
DWORD GetLocalGroupsForUser(
__in LPCWSTR user,
__out LPLOCALGROUP_USERS_INFO_0 *groups,
__out LPDWORD entries)
DWORD EnablePrivilege(__in LPCWSTR privilegeName)
void ReportErrorCode(LPCWSTR func, DWORD err)
void GetLibraryName(LPCVOID lpAddress, LPWSTR *filename)
void AssignLsaString(__inout LSA_STRING * target, __in const char *strBuf)
DWORD RegisterWithLsa(__in const char *logonProcessName, __out HANDLE * lsaHandle)
void UnregisterWithLsa(__in HANDLE lsaHandle)
DWORD LookupKerberosAuthenticationPackageId(__in HANDLE lsaHandle, __out ULONG * packageId)
DWORD CreateLogonTokenForUser(__in HANDLE lsaHandle,
__in const char * tokenSourceName,
__in const char * tokenOriginName,
__in ULONG authnPkgId,
__in const wchar_t* principalName,
__out HANDLE *tokenHandle)
DWORD GetNameFromLogonToken(__in HANDLE logonToken, __out wchar_t **allocatedName)
DWORD LoadUserProfileForLogon(__in HANDLE logonHandle, __out PROFILEINFO * pi)
DWORD UnloadProfileForLogon(__in HANDLE logonHandle, __in PROFILEINFO * pi)
DWORD ChangeFileOwnerBySid(__in LPCWSTR path,
__in_opt PSID pNewOwnerSid, __in_opt PSID pNewGroupSid)
DWORD GetSecureJobObjectName(
__in LPCWSTR      jobName,
__in size_t       cchSecureJobName,
__out_ecount(cchSecureJobName) LPWSTR secureJobName)
DWORD EnableImpersonatePrivileges()
DWORD KillTask(PCWSTR jobObjName)
DWORD ChownImpl(
__in_opt LPCWSTR userName,
__in_opt LPCWSTR groupName,
__in LPCWSTR pathName)
LPCWSTR GetSystemTimeString()
VOID LogDebugMessage(LPCWSTR format, ...)
DWORD SplitStringIgnoreSpaceW(
__in size_t len,
__in_ecount(len) LPCWSTR source,
__in WCHAR deli,
__out size_t* count,
__out_ecount(count) WCHAR*** outTokens)
DWORD BuildServiceSecurityDescriptor(
__in ACCESS_MASK                    accessMask,
__in size_t                         grantSidCount,
__in_ecount(grantSidCount) PSID*    pGrantSids,
__in size_t                         denySidCount,
__in_ecount(denySidCount) PSID*     pDenySids,
__in_opt PSID                       pOwner,
__out PSECURITY_DESCRIPTOR*         pSD)
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t len)
void __RPC_USER MIDL_user_free(void __RPC_FAR * ptr)
