#if HAVE_DIRENT_H
# include <dirent.h>
# define NAMLEN(dirent) strlen((dirent)->d_name)
# define dirent direct
# define NAMLEN(dirent) (dirent)->d_namlen
# if HAVE_SYS_NDIR_H
#  include <sys/ndir.h>
# endif
# if HAVE_SYS_DIR_H
#  include <sys/dir.h>
# endif
# if HAVE_NDIR_H
#  include <ndir.h>
# endif
int
__os_dirlist(env, dir, returndir, namesp, cntp)
ENV *env;
const char *dir;
int returndir, *cntp;
char ***namesp;
{
DB_ENV *dbenv;
struct dirent *dp;
DIR *dirp;
struct stat sb;
int arraysz, cnt, ret;
char **names, buf[DB_MAXPATHLEN];
*namesp = NULL;
*cntp = 0;
dbenv = env == NULL ? NULL : env->dbenv;
if (dbenv != NULL &&
FLD_ISSET(dbenv->verbose, DB_VERB_FILEOPS | DB_VERB_FILEOPS_ALL))
__db_msg(env, DB_STR_A("0159",
"fileops: directory list %s", "%s"), dir);
if (DB_GLOBAL(j_dirlist) != NULL)
return (DB_GLOBAL(j_dirlist)(dir, namesp, cntp));
if ((dirp = opendir(CHAR_STAR_CAST dir)) == NULL)
return (__os_get_errno());
names = NULL;
for (arraysz = cnt = 0; (dp = readdir(dirp)) != NULL;)
void
__os_dirfree(env, names, cnt)
ENV *env;
char **names;
int cnt;
