static int testdir_remove __P((char *));
int
b_util_have_hash()
int
b_util_have_heap()
int
b_util_have_queue()
int
b_util_dir_setup()
{
int ret;
#if DB_VERSION_MAJOR > 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR > 3
if ((ret = __os_mkdir(NULL, TESTDIR, 0755)) != 0)
#if DB_VERSION_MAJOR > 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR > 4
#define	OS_EXISTS(a, b, c)	__os_exists(a, b, c)
#define	OS_EXISTS(a, b, c)	__os_exists(b, c)
int
b_util_dir_teardown()
static int
testdir_remove(dir)
char *dir;
void
b_util_abort()
int
b_util_unlink(path)
char *path;
