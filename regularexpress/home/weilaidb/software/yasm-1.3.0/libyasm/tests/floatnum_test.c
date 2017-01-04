#define MANT_BITS       80
#define MANT_BYTES      10
typedef struct Init_Entry_s  Init_Entry;
static Init_Entry normalized_vals[] = ;
static Init_Entry normalized_edgecase_vals[] = ;
static yasm_floatnum *flt;
static char ret_msg[1024], result_msg[1024];
static void
new_setup(Init_Entry *vals, int i)
static int
new_check_flt(Init_Entry *val)
static int
test_new_normalized(void)
static int
test_new_normalized_edgecase(void)
static void
get_family_setup(void)
static void
get_family_teardown(void)
static void
get_common_setup(Init_Entry *vals, int i)
static int
get_common_check_result(int len, const unsigned char *val,
const unsigned char *correct)
static int
test_get_single_normalized(void)
static int
test_get_single_normalized_edgecase(void)
static int
test_get_double_normalized(void)
static int
test_get_double_normalized_edgecase(void)
static int
test_get_extended_normalized(void)
static int
test_get_extended_normalized_edgecase(void)
char failed[1000];
static int
runtest_(const char *testname, int (*testfunc)(void), void (*setup)(void),
void (*teardown)(void))
#define runtest(x,y,z)  runtest_(#x,test_##x,y,z)
int
main(void)
