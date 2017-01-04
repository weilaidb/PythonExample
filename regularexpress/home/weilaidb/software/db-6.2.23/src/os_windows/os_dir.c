int
__os_dirlist(env, dir, returndir, namesp, cntp)
ENV *env;
const char *dir;
int returndir, *cntp;
char ***namesp;
void
__os_dirfree(env, names, cnt)
ENV *env;
char **names;
int cnt;
