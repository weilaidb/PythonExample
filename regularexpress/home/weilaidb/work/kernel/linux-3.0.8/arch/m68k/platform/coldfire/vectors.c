asmlinkage void dbginterrupt_c(struct frame *fp)
extern e_vector	*_ramvec;
void set_evector(int vecnum, void (*handler)(void))
asmlinkage void buserr(void);
asmlinkage void trap(void);
asmlinkage void system_call(void);
asmlinkage void inthandler(void);
void __init init_vectors(void)
