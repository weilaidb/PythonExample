#define F64_NAN_FLAG	0x100
#define F64_EXCEPTION_ERROR	((u32)-1 & ~F64_NAN_FLAG)
#define f64reg(_f64_) #_f64_
#define cff(_f64_) ()
#define ctf(_f64_, _var_)		\
asm("ctf %0, " f64reg(_f64_) "@ fmxr	" #_f64_ ", %0"	\
: : "r" (_var_) : "cc")
void ucf64_raise_sigfpe(unsigned int sicode, struct pt_regs *regs)
void ucf64_exchandler(u32 inst, u32 fpexc, struct pt_regs *regs)
static int __init ucf64_init(void)
late_initcall(ucf64_init);
