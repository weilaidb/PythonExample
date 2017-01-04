static int
test_boot(void)
typedef struct Val_s  Val;
Val oct_small_vals[] = ;
Val oct_large_vals[] = ;
wordptr testval;
static void
num_family_setup(void)
static void
num_family_teardown(void)
static char result_msg[1024];
static int
num_check(Val *val)
static int
test_oct_small_num(void)
static int
test_oct_large_num(void)
char failed[1000];
static int
runtest_(const char *testname, int (*testfunc)(void), void (*setup)(void),
void (*teardown)(void))
#define runtest(x,y,z)  runtest_(#x,test_##x,y,z)
int
main(void)
