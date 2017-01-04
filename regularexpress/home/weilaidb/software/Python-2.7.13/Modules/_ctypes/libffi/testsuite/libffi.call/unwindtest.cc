void ABI_ATTR
closure_test_fn(ffi_cif* cif __UNUSED__, void* resp __UNUSED__,
void** args __UNUSED__, void* userdata __UNUSED__)
typedef void (*closure_test_type)();
void closure_test_fn1(ffi_cif* cif __UNUSED__, void* resp,
void** args, void* userdata __UNUSED__)
typedef int (*closure_test_type1)(float, float, float, float, signed short,
float, float, int, double, int, int, float,
int, int, int, int);
int main (void)
