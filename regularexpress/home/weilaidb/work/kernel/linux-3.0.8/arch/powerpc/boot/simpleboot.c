BSS_STACK(4*1024);
extern int platform_specific_init(void) __attribute__((weak));
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7)
