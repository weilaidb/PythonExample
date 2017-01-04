typedef unsigned long T;
static void cls_ret_T_fn(ffi_cif* cif __UNUSED__, void* resp, void** args,
void* userdata __UNUSED__)
typedef T (*cls_ret_T)(T, ...);
int main (void)
