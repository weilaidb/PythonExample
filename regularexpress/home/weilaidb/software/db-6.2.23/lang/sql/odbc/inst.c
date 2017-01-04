#define SEESTR " (SEE)"
#define SEESTR2 "SEE "
#define SEEEXT ""
#define SEESTR ""
#define SEESTR2 ""
#define NUMDRVS 4
static char *DriverName[NUMDRVS] = ;
static char *DSName[NUMDRVS] = ;
static char *DriverDLL[NUMDRVS] = ;
static char *EngineDLL[NUMDRVS] = ;
static int quiet = 0;
static int nosys = 0;
static BOOL
ProcessErrorMessages(char *name)
static BOOL
CopyOrDelModules(char *dllname, char *path, BOOL del)
static BOOL
InUn(int remove, char *drivername, char *dllname, char *dll2name, char *dsname)
int APIENTRY
WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
LPSTR lpszCmdLine, int nCmdShow)
