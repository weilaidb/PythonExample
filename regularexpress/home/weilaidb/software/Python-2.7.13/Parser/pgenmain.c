int Py_DebugFlag;
int Py_VerboseFlag;
int Py_IgnoreEnvironmentFlag;
grammar *getgrammar(char *filename);
void
Py_Exit(int sts)
int
main(int argc, char **argv)
grammar *
getgrammar(char *filename)
PyObject*
PyErr_Occurred()
void
Py_FatalError(const char *msg)
char *
PyOS_Readline(FILE *sys_stdin, FILE *sys_stdout, char *prompt)
char *
Py_UniversalNewlineFgets(char *buf, int n, FILE *stream, PyObject *fobj)
void
PySys_WriteStderr(const char *format, ...)
