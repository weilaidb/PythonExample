#if _MSC_VER >= 1500
#define	_WIN32_WINNT 0x0600
#define	NTDDI_VERSION 0x06000000
#define	_WIN32_WINNT 0x0500
#define	WIN32_LEAN_AND_MEAN
#define	fsync			_commit
#define	getcwd(buf, size)	_getcwd(buf, size)
#define	getpid			GetCurrentProcessId
#define	snprintf		_snprintf
#define	strcasecmp		_stricmp
#define	strncasecmp		_strnicmp
#define	vsnprintf		_vsnprintf
#define	h_errno			WSAGetLastError()
#define	_IOFBF			0x0000
#define	_IOLBF			0x0040
#define	_IONBF			0x0004
#define	freopen			__ce_freopen
#define	gmtime			__ce_gmtime
#define	mktime			__ce_mktime
#define	remove			__ce_remove
#define	SECSPERMIN		60
#define	MINSPERHOUR		60
#define	HOURSPERDAY		24
#define	DAYSPERWEEK		7
#define	DAYSPERNYEAR		365
#define	DAYSPERLYEAR		366
#define	SECSPERHOUR		(SECSPERMIN * MINSPERHOUR)
#define	SECSPERDAY		((long) SECSPERHOUR * HOURSPERDAY)
#define	MONSPERYEAR		12
#define	TM_YEAR_BASE		1900
#define	TM_YEAR_EPOCH		1970
#define	isleap(y) ((((y) % 4) == 0 && ((y) % 100) != 0) || ((y) % 400) == 0)
extern const __DB_IMPORT unsigned int mon_lengths[][MONSPERYEAR];
extern const __DB_IMPORT unsigned int year_lengths[];
#if defined(__cplusplus)
extern "C"
#define	__STDC__ 1
#define	TO_TSTRING(dbenv, s, ts, ret) do  while (0)
#define	FROM_TSTRING(dbenv, ts, s, ret)  while (0)
#define	FREE_STRING(dbenv, s) do  while (0)
#define	TO_TSTRING(dbenv, s, ts, ret) (ret) = 0, (ts) = (_TCHAR *)(s)
#define	FROM_TSTRING(dbenv, ts, s, ret) (ret) = 0, (s) = (char *)(ts)
#define	FREE_STRING(dbenv, ts)
#define	INVALID_HANDLE_VALUE ((HANDLE)-1)
#define	INVALID_FILE_ATTRIBUTES ((DWORD)-1)
#define	INVALID_SET_FILE_POINTER ((DWORD)-1)
