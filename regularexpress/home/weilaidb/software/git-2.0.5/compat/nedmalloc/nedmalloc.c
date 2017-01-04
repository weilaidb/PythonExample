#if defined(WIN32)
#define MSPACES 1
#define ONLY_MSPACES 1
#define USE_LOCKS 1
#define FOOTERS 1
#undef DEBUG
#define DEBUG 1
#define DEBUG 0
#undef DEBUG
#define DEFAULT_GRANULARITY (1*1024*1024)
#undef DEBUG
#define MAXTHREADSINPOOL 16
#define THREADCACHEMAXCACHES 256
#define THREADCACHEMAX 8192
#define THREADCACHEMAXFREESPACE (512*1024)
#define TLSVAR			DWORD
#define TLSALLOC(k)	(*(k)=TlsAlloc(), TLS_OUT_OF_INDEXES==*(k))
#define TLSFREE(k)		(!TlsFree(k))
#define TLSGET(k)		TlsGetValue(k)
#define TLSSET(k, a)	(!TlsSetValue(k, a))
static LPVOID ChkedTlsGetValue(DWORD idx)
#undef TLSGET
#define TLSGET(k) ChkedTlsGetValue(k)
#define TLSVAR			pthread_key_t
#define TLSALLOC(k)	pthread_key_create(k, 0)
#define TLSFREE(k)		pthread_key_delete(k)
#define TLSGET(k)		pthread_getspecific(k)
#define TLSSET(k, a)	pthread_setspecific(k, a)
#if defined(__cplusplus)
#if !defined(NO_NED_NAMESPACE)
namespace nedalloc {
extern "C"
