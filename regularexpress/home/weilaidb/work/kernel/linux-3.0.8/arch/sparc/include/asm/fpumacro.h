#define _SPARC64_FPUMACRO_H
struct fpustate ;
#define FPUSTATE (struct fpustate *)(current_thread_info()->fpregs)
static inline unsigned long fprs_read(void)
static inline void fprs_write(unsigned long val)
