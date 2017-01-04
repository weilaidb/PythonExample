#if defined(HAVE_GETRANDOM) || defined(HAVE_GETENTROPY)
int _Py_HashSecret_Initialized = 0;
static int _Py_HashSecret_Initialized = 0;
typedef BOOL (WINAPI *CRYPTACQUIRECONTEXTA)(HCRYPTPROV *phProv,\
LPCSTR pszContainer, LPCSTR pszProvider, DWORD dwProvType,\
DWORD dwFlags );
typedef BOOL (WINAPI *CRYPTGENRANDOM)(HCRYPTPROV hProv, DWORD dwLen,\
BYTE *pbBuffer );
static CRYPTGENRANDOM pCryptGenRandom = NULL;
static HCRYPTPROV hCryptProv = 0;
static int
win32_urandom_init(int raise)
static int
win32_urandom(unsigned char *buffer, Py_ssize_t size, int raise)
#elif defined(HAVE_GETENTROPY) && !defined(sun)
#define PY_GETENTROPY 1
static int
py_getentropy(unsigned char *buffer, Py_ssize_t size, int fatal)
static int
vms_urandom(unsigned char *buffer, Py_ssize_t size, int raise)
#if !defined(MS_WINDOWS) && !defined(__VMS)
static struct  urandom_cache = ;
static void
dev_urandom_noraise(unsigned char *buffer, Py_ssize_t size)
static int
dev_urandom_python(char *buffer, Py_ssize_t size)
static void
dev_urandom_close(void)
static void
lcg_urandom(unsigned int x0, unsigned char *buffer, size_t size)
int
_PyOS_URandom(void *buffer, Py_ssize_t size)
void
_PyRandom_Init(void)
void
_PyRandom_Fini(void)
