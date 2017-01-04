static int __db_fullpath
__P((ENV *, const char *, const char *, int, int, char **));
#define	DB_ADDSTR(add)
static int
__db_fullpath(env, dir, file, check_file, check_dir, namep)
ENV *env;
const char *dir;
const char *file;
int check_file;
int check_dir;
char **namep;
#define	DB_CHECKFILE(file, dir, check_file, check_dir, namep, ret_dir) do  while (0)
int
__db_appname(env, appname, file, dirp, namep)
ENV *env;
APPNAME appname;
const char *file;
const char **dirp;
char **namep;
int
__db_tmp_open(env, oflags, fhpp)
ENV *env;
u_int32_t oflags;
DB_FH **fhpp;
