signed short test_func_fn(signed char a1, signed short a2,
signed char a3, signed short a4)
static void test_func_gn(ffi_cif *cif __UNUSED__, void *rval, void **avals,
void *data __UNUSED__)
typedef signed short (*test_type)(signed char, signed short,
signed char, signed short);
int main (void)
