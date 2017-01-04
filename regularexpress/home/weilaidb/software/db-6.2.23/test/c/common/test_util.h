#define TEST_ENV "TESTDIR"
#define TEST_ENVx(x) "TESTDIR#x"
static int teardown_envdir(const char *dir);
static int setup_envdir(const char *dir, u_int32_t remove)
static int teardown_envdir(const char *dir)
