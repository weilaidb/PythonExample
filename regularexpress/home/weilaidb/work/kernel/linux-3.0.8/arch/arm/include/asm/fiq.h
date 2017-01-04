#define __ASM_FIQ_H
struct fiq_handler ;
extern int claim_fiq(struct fiq_handler *f);
extern void release_fiq(struct fiq_handler *f);
extern void set_fiq_handler(void *start, unsigned int length);
extern void enable_fiq(int fiq);
extern void disable_fiq(int fiq);
extern void __set_fiq_regs(unsigned long const *regs);
extern void __get_fiq_regs(unsigned long *regs);
static inline void set_fiq_regs(struct pt_regs const *regs)
static inline void get_fiq_regs(struct pt_regs *regs)
