#define __MSVC__HEAD
#define inline __inline
#define __inline__ __inline
#define __attribute__(x)
#define strncasecmp  _strnicmp
#define ftruncate    _chsize
#define strtoull     _strtoui64
#define strtoll      _strtoi64
static __inline int strcasecmp (const char *s1, const char *s2)
#undef ERROR
