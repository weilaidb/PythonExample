typedef struct Test_Entry  Test_Entry;
static Test_Entry tests[] = {
,
,
,
,
,
,
,
,
,
{yasm__splitpath_unix, "foo/bar
,
,
,
,
,
{yasm__splitpath_unix, "foo/bar
,
,
,
,
,
,
,
,
{yasm__splitpath_win, "foo/bar
,
,
,
,
,
,
,
,
{yasm__splitpath_win, "i:foo/bar
,
,
,
,
,
{yasm__splitpath_win, "i:foo\\bar
,
,
,
,
,
,
,
;
static char failed[1000];
static char failmsg[100];
static int
run_test(Test_Entry *test)
int
main(void)
