#define DEFINE(sym, val) \
asm volatile("\n->" #sym " %0 " #val : : "i" (val))
#define BLANK() asm volatile("\n->" : : )
#if !defined(CONFIG_ETRAX_ARCH_V10) && !defined(CONFIG_ETRAX_ARCH_V32)
#error One of ARCH v10 and ARCH v32 must be true!
int main(void)
