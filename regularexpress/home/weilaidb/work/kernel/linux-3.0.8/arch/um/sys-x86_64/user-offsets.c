#define __FRAME_OFFSETS
#define DEFINE(sym, val) \
asm volatile("\n->" #sym " %0 " #val : : "i" (val))
#define DEFINE_LONGS(sym, val) \
asm volatile("\n->" #sym " %0 " #val : : "i" (val/sizeof(unsigned long)))
#define OFFSET(sym, str, mem) \
DEFINE(sym, offsetof(struct str, mem));
void foo(void)
