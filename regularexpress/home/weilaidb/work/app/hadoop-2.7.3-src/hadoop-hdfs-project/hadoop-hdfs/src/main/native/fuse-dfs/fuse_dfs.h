#define __FUSE_DFS_H__
#define FUSE_USE_VERSION 26
int is_protected(const char *path);
#undef INFO
#define INFO(_fmt, ...)
#undef DEBUG
#define DEBUG(_fmt, ...)
#undef ERROR
#define ERROR(_fmt, ...)
#define TRACE(x)
#define TRACE1(x,y)
#define TRACE(x) ;
#define TRACE1(x,y) ;
