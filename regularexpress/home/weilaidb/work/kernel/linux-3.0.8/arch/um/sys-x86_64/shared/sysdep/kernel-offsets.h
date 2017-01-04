#define DEFINE(sym, val) \
asm volatile("\n->" #sym " %0 " #val : : "i" (val))
#define DEFINE_STR1(x) #x
#define DEFINE_STR(sym, val) asm volatile("\n->" #sym " " DEFINE_STR1(val) " " #val: : )
#define BLANK() asm volatile("\n->" : : )
#define OFFSET(sym, str, mem) \
DEFINE(sym, offsetof(struct str, mem));
void foo(void)
