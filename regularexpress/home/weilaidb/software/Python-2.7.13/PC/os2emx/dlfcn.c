#define INCL_DOS
#define INCL_DOSERRORS
#define INCL_DOSSESMGR
#define INCL_WINPROGRAMLIST
#define INCL_WINFRAMEMGR
typedef struct _track_rec  tDLLchain, *DLLchain;
static DLLchain dlload = NULL;
static char dlerr [256];
static void *last_id;
static DLLchain find_id(void *id)
void *dlopen(char *filename, int flags)
void *dlsym(void *handle, char *symbol)
int dlclose(void *handle)
char *dlerror()
