typedef struct my_ffi_struct  my_ffi_struct;
my_ffi_struct callee(struct my_ffi_struct a1, struct my_ffi_struct a2)
void stub(ffi_cif* cif __UNUSED__, void* resp, void** args,
void* userdata __UNUSED__)
int main(void)
