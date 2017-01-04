#define _ASM_PARISC_UNALIGNED_H
#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be
struct pt_regs;
void handle_unaligned(struct pt_regs *regs);
int check_unaligned(struct pt_regs *regs);
