#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
static void die(const char *err, ...)
static void *xmalloc(size_t size)
typedef struct _CREDENTIAL_ATTRIBUTEW  CREDENTIAL_ATTRIBUTEW, *PCREDENTIAL_ATTRIBUTEW;
typedef struct _CREDENTIALW  CREDENTIALW, *PCREDENTIALW;
#define CRED_TYPE_GENERIC 1
#define CRED_PERSIST_LOCAL_MACHINE 2
#define CRED_MAX_ATTRIBUTES 64
typedef BOOL (WINAPI *CredWriteWT)(PCREDENTIALW, DWORD);
typedef BOOL (WINAPI *CredEnumerateWT)(LPCWSTR, DWORD, DWORD *,
PCREDENTIALW **);
typedef VOID (WINAPI *CredFreeT)(PVOID);
typedef BOOL (WINAPI *CredDeleteWT)(LPCWSTR, DWORD, DWORD);
static HMODULE advapi;
static CredWriteWT CredWriteW;
static CredEnumerateWT CredEnumerateW;
static CredFreeT CredFree;
static CredDeleteWT CredDeleteW;
static void load_cred_funcs(void)
static WCHAR *wusername, *password, *protocol, *host, *path, target[1024];
static void write_item(const char *what, LPCWSTR wbuf, int wlen)
static int match_part(LPCWSTR *ptarget, LPCWSTR want, LPCWSTR delim)
static int match_cred(const CREDENTIALW *cred)
static void get_credential(void)
static void store_credential(void)
static void erase_credential(void)
static WCHAR *utf8_to_utf16_dup(const char *str)
static void read_credential(void)
int main(int argc, char *argv[])
