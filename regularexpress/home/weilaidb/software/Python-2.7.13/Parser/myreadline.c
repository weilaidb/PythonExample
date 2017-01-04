#define WIN32_LEAN_AND_MEAN
extern char* vms__StdioReadline(FILE *sys_stdin, FILE *sys_stdout, char *prompt);
PyThreadState* _PyOS_ReadlineTState;
static PyThread_type_lock _PyOS_ReadlineLock = NULL;
int (*PyOS_InputHook)(void) = NULL;
int Py_RISCOSWimpFlag;
static int
my_fgets(char *buf, int len, FILE *fp)
char *
PyOS_StdioReadline(FILE *sys_stdin, FILE *sys_stdout, char *prompt)
char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, char *);
char *
PyOS_Readline(FILE *sys_stdin, FILE *sys_stdout, char *prompt)
