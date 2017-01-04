unsigned short test_func_fn(unsigned char a1, unsigned short a2,
unsigned char a3, unsigned short a4)
static void test_func_gn(ffi_cif *cif __UNUSED__, void *rval, void **avals,
void *data __UNUSED__)
typedef unsigned short (*test_type)(unsigned char, unsigned short,
unsigned char, unsigned short);
int main (void)
