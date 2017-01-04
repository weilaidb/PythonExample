#define Py_PYGETOPT_H
PyAPI_DATA(int) _PyOS_opterr;
PyAPI_DATA(int) _PyOS_optind;
PyAPI_DATA(char *) _PyOS_optarg;
PyAPI_FUNC(void) _PyOS_ResetGetOpt(void);
PyAPI_FUNC(int) _PyOS_GetOpt(int argc, char **argv, char *optstring);
