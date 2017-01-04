static u64
get_imm64 (u64 insn_addr)
void
ia64_patch (u64 insn_addr, u64 mask, u64 val)
void
ia64_patch_imm64 (u64 insn_addr, u64 val)
void
ia64_patch_imm60 (u64 insn_addr, u64 val)
void __init
ia64_patch_vtop (unsigned long start, unsigned long end)
void __init
ia64_patch_rse (unsigned long start, unsigned long end)
void __init
ia64_patch_mckinley_e9 (unsigned long start, unsigned long end)
extern unsigned long ia64_native_fsyscall_table[NR_syscalls];
extern char ia64_native_fsys_bubble_down[];
struct pv_fsys_data pv_fsys_data __initdata = ;
unsigned long * __init
paravirt_get_fsyscall_table(void)
char * __init
paravirt_get_fsys_bubble_down(void)
static void __init
patch_fsyscall_table (unsigned long start, unsigned long end)
static void __init
patch_brl_fsys_bubble_down (unsigned long start, unsigned long end)
void __init
ia64_patch_gate (void)
void ia64_patch_phys_stack_reg(unsigned long val)
