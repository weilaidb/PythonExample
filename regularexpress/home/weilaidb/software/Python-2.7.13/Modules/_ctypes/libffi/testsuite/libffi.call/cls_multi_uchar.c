unsigned char test_func_fn(unsigned char a1, unsigned char a2,
unsigned char a3, unsigned char a4)
static void test_func_gn(ffi_cif *cif __UNUSED__, void *rval, void **avals,
void *data __UNUSED__)
typedef unsigned char (*test_type)(unsigned char, unsigned char,
unsigned char, unsigned char);
void test_func(ffi_cif *cif __UNUSED__, void *rval __UNUSED__, void **avals,
void *data __UNUSED__)
int main (void)
