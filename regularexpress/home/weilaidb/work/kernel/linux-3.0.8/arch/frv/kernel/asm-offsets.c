#define DEF_PTREG(sym, reg) \
asm volatile("\n->" #sym " %0 offsetof(struct pt_regs, " #reg ")" \
: : "i" (offsetof(struct pt_regs, reg)))
#define DEF_IREG(sym, reg) \
asm volatile("\n->" #sym " %0 offsetof(struct user_context, " #reg ")" \
: : "i" (offsetof(struct user_context, reg)))
#define DEF_FREG(sym, reg) \
asm volatile("\n->" #sym " %0 offsetof(struct user_context, " #reg ")" \
: : "i" (offsetof(struct user_context, reg)))
#define DEF_0REG(sym, reg) \
asm volatile("\n->" #sym " %0 offsetof(struct frv_frame0, " #reg ")" \
: : "i" (offsetof(struct frv_frame0, reg)))
void foo(void)
