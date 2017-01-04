#define __ASM_GENERIC_PTRACE_H__
#define GET_IP(regs) ((regs)->pc)
#define SET_IP(regs, val) (GET_IP(regs) = (val))
static inline unsigned long instruction_pointer(struct pt_regs *regs)
static inline void instruction_pointer_set(struct pt_regs *regs,
unsigned long val)
#define profile_pc(regs) instruction_pointer(regs)
#define GET_USP(regs) ((regs)->usp)
#define SET_USP(regs, val) (GET_USP(regs) = (val))
static inline unsigned long user_stack_pointer(struct pt_regs *regs)
static inline void user_stack_pointer_set(struct pt_regs *regs,
unsigned long val)
#define GET_FP(regs) ((regs)->fp)
#define SET_FP(regs, val) (GET_FP(regs) = (val))
static inline unsigned long frame_pointer(struct pt_regs *regs)
static inline void frame_pointer_set(struct pt_regs *regs,
unsigned long val)
