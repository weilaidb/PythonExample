int _PyOS_opterr = 1;
int _PyOS_optind = 1;
char *_PyOS_optarg = NULL;
static char *opt_ptr = "";
void _PyOS_ResetGetOpt(void)
int _PyOS_GetOpt(int argc, char **argv, char *optstring)
