#import "msxml6.dll" exclude("ISequentialStream", "_FILETIME")
#define ERROR_CHECK_HRESULT_DONE(hr, message)                               \
if (FAILED(hr))
DWORD BuildPathRelativeToModule(
__in LPCWSTR relativePath,
__in size_t len,
__out_ecount(len) LPWSTR buffer)
DWORD GetConfigValue(
__in LPCWSTR relativePath,
__in LPCWSTR keyName,
__out size_t* len, __out_ecount(len) LPCWSTR* value)
DWORD GetConfigValueFromXmlFile(__in LPCWSTR xmlFile, __in LPCWSTR keyName,
__out size_t* outLen, __out_ecount(len) LPCWSTR* outValue)
