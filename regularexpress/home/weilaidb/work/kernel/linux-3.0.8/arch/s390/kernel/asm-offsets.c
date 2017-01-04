#define ASM_OFFSETS_C
#if __GNUC__ < 3 || (__GNUC__ == 3 && __GNUC_MINOR__ < 3)
#error Your compiler is too old; please use version 3.3.3 or newer
int main(void)
