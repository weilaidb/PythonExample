#if defined(PATH_MAX) && PATH_MAX > 1024
#define MAXPATHLEN PATH_MAX
#define MAXPATHLEN 1024
extern char *getwd(char *);
char *
getcwd(char *buf, int size)
#define PWD_CMD "/bin/pwd"
char *
getcwd(char *buf, int size)
