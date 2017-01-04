#define _ASM_TILE_TRAPS_H
void do_page_fault(struct pt_regs *, int fault_num,
unsigned long address, unsigned long write);
#if CHIP_HAS_TILE_DMA() || CHIP_HAS_SN_PROC()
void do_async_page_fault(struct pt_regs *);
struct intvec_state ;
struct intvec_state do_page_fault_ics(struct pt_regs *regs, int fault_num,
unsigned long address,
unsigned long info);
void do_trap(struct pt_regs *, int fault_num, unsigned long reason);
void kernel_double_fault(int dummy, ulong pc, ulong lr, ulong sp, ulong r52);
void do_timer_interrupt(struct pt_regs *, int fault_num);
void hv_message_intr(struct pt_regs *, int intnum);
void tile_dev_intr(struct pt_regs *, int intnum);
void do_hardwall_trap(struct pt_regs *, int fault_num);
void do_breakpoint(struct pt_regs *, int fault_num);
void gx_singlestep_handle(struct pt_regs *, int fault_num);
