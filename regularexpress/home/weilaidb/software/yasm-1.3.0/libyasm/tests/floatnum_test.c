#define MANT_BITS       80
#define MANT_BYTES      10
typedef struct Init_Entry_s  Init_Entry;
static Init_Entry normalized_vals[] = ;
static Init_Entry normalized_edgecase_vals[] = ;
static yasm_floatnum *flt;
static char ret_msg[1024], result_msg[1024];
new_setup
new_check_flt
test_new_normalized
test_new_normalized_edgecase
get_family_setup
get_family_teardown
get_common_setup
get_common_check_result
test_get_single_normalized
test_get_single_normalized_edgecase
test_get_double_normalized
test_get_double_normalized_edgecase
test_get_extended_normalized
test_get_extended_normalized_edgecase
char failed[1000];
runtest_(void), void (*setup)(void),
void (*teardown)(void))
runtest  runtest_(#x,test_##x,y,z)
main
