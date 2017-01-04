#define DECLARE(name)						\
extern unsigned long					\
__ia64_native_start_gate_##name##_patchlist[];	\
extern unsigned long					\
__ia64_native_end_gate_##name##_patchlist[]
DECLARE(fsyscall);
DECLARE(brl_fsys_bubble_down);
DECLARE(vtop);
DECLARE(mckinley_e9);
extern unsigned long __start_gate_section[];
#define ASSIGN(name)							    \
.start_##name##_patchlist =					    \
(unsigned long)__ia64_native_start_gate_##name##_patchlist, \
.end_##name##_patchlist =					    \
(unsigned long)__ia64_native_end_gate_##name##_patchlist
struct pv_patchdata pv_patchdata __initdata = ;
unsigned long __init
paravirt_get_gate_patchlist(enum pv_gate_patchlist type)
void * __init
paravirt_get_gate_section(void)
