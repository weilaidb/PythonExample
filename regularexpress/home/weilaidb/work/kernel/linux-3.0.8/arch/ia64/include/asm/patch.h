#define _ASM_IA64_PATCH_H
extern void ia64_patch (u64 insn_addr, u64 mask, u64 val);
extern void ia64_patch_imm64 (u64 insn_addr, u64 val);
extern void ia64_patch_imm60 (u64 insn_addr, u64 val);
extern void ia64_patch_mckinley_e9 (unsigned long start, unsigned long end);
extern void ia64_patch_vtop (unsigned long start, unsigned long end);
extern void ia64_patch_phys_stack_reg(unsigned long val);
extern void ia64_patch_rse (unsigned long start, unsigned long end);
extern void ia64_patch_gate (void);
