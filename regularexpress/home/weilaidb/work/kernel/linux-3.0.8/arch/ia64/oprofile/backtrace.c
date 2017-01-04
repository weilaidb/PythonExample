typedef struct
ia64_backtrace_t;
static __inline__ int in_ivt_code(unsigned long pc)
static __inline__ int next_frame(ia64_backtrace_t *bt)
static void do_ia64_backtrace(struct unw_frame_info *info, void *vdata)
void
ia64_backtrace(struct pt_regs * const regs, unsigned int depth)
