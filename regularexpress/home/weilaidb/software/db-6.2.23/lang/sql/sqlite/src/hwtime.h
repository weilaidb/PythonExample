#define _HWTIME_H_
#if (defined(__GNUC__) || defined(_MSC_VER)) && \
(defined(i386) || defined(__i386__) || defined(_M_IX86))
#if defined(__GNUC__)
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif defined(_MSC_VER)
__declspec(naked) __inline sqlite_uint64 __cdecl sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__x86_64__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__ppc__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#error Need implementation of sqlite3Hwtime() for your platform.
sqlite_uint64 sqlite3Hwtime(void)
