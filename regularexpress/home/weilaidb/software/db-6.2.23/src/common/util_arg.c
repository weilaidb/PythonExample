#if DB_VERSION_MAJOR < 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR < 5
char *strsep();
int
__db_util_arg(arg0, str, argcp, argvp)
char *arg0, *str, ***argvp;
int *argcp;
