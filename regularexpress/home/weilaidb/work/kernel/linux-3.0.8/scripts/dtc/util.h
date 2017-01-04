#define _UTIL_H
static inline void __attribute__((noreturn)) die(char * str, ...)
static inline void *xmalloc(size_t len)
static inline void *xrealloc(void *p, size_t len)
extern char *xstrdup(const char *s);
extern char *join_path(const char *path, const char *name);
