#define _ASM_HAZARDS_H
#define ASMMACRO(name, code...) .macro name; code; .endm
#define ASMMACRO(name, code...)						\
__asm__(".macro " #name "; " #code "; .endm");				\
\
static inline void name(void)						\
extern void mips_ihb(void);
ASMMACRO(_ssnop,
sll	$0, $0, 1
)
ASMMACRO(_ehb,
sll	$0, $0, 3
)
#if defined(CONFIG_CPU_MIPSR2) && !defined(CONFIG_CPU_CAVIUM_OCTEON)
ASMMACRO(mtc0_tlbw_hazard,
_ehb
)
ASMMACRO(tlbw_use_hazard,
_ehb
)
ASMMACRO(tlb_probe_hazard,
_ehb
)
ASMMACRO(irq_enable_hazard,
_ehb
)
ASMMACRO(irq_disable_hazard,
_ehb
)
ASMMACRO(back_to_back_c0_hazard,
_ehb
)
#define instruction_hazard()						\
do  while (0)
#elif defined(CONFIG_CPU_MIPSR1) && !defined(CONFIG_MIPS_ALCHEMY)
ASMMACRO(mtc0_tlbw_hazard,
_ssnop; _ssnop; _ehb
)
ASMMACRO(tlbw_use_hazard,
_ssnop; _ssnop; _ssnop; _ehb
)
ASMMACRO(tlb_probe_hazard,
_ssnop; _ssnop; _ssnop; _ehb
)
ASMMACRO(irq_enable_hazard,
_ssnop; _ssnop; _ssnop; _ehb
)
ASMMACRO(irq_disable_hazard,
_ssnop; _ssnop; _ssnop; _ehb
)
ASMMACRO(back_to_back_c0_hazard,
_ssnop; _ssnop; _ssnop; _ehb
)
#define __instruction_hazard()						\
do  while (0)
#define instruction_hazard()						\
do  while (0)
#elif defined(CONFIG_MIPS_ALCHEMY) || defined(CONFIG_CPU_CAVIUM_OCTEON) || \
defined(CONFIG_CPU_LOONGSON2) || defined(CONFIG_CPU_R10000) || \
defined(CONFIG_CPU_R5500)
ASMMACRO(mtc0_tlbw_hazard,
)
ASMMACRO(tlbw_use_hazard,
)
ASMMACRO(tlb_probe_hazard,
)
ASMMACRO(irq_enable_hazard,
)
ASMMACRO(irq_disable_hazard,
)
ASMMACRO(back_to_back_c0_hazard,
)
#define instruction_hazard() do  while (0)
#elif defined(CONFIG_CPU_RM9000)
ASMMACRO(mtc0_tlbw_hazard,
_ssnop; _ssnop; _ssnop; _ssnop
)
ASMMACRO(tlbw_use_hazard,
_ssnop; _ssnop; _ssnop; _ssnop
)
ASMMACRO(tlb_probe_hazard,
_ssnop; _ssnop; _ssnop; _ssnop
)
ASMMACRO(irq_enable_hazard,
)
ASMMACRO(irq_disable_hazard,
)
ASMMACRO(back_to_back_c0_hazard,
)
#define instruction_hazard() do  while (0)
#elif defined(CONFIG_CPU_SB1)
ASMMACRO(mtc0_tlbw_hazard,
)
ASMMACRO(tlbw_use_hazard,
)
ASMMACRO(tlb_probe_hazard,
)
ASMMACRO(irq_enable_hazard,
)
ASMMACRO(irq_disable_hazard,
_ssnop; _ssnop; _ssnop
)
ASMMACRO(back_to_back_c0_hazard,
)
#define instruction_hazard() do  while (0)
ASMMACRO(mtc0_tlbw_hazard,
nop; nop
)
ASMMACRO(tlbw_use_hazard,
nop; nop; nop
)
ASMMACRO(tlb_probe_hazard,
nop; nop; nop
)
ASMMACRO(irq_enable_hazard,
_ssnop; _ssnop; _ssnop;
)
ASMMACRO(irq_disable_hazard,
nop; nop; nop
)
ASMMACRO(back_to_back_c0_hazard,
_ssnop; _ssnop; _ssnop;
)
#define instruction_hazard() do  while (0)
#if defined(CONFIG_CPU_SB1)
ASMMACRO(enable_fpu_hazard,
.set	push;
.set	mips64;
.set	noreorder;
_ssnop;
bnezl	$0, .+4;
_ssnop;
.set	pop
)
ASMMACRO(disable_fpu_hazard,
)
#elif defined(CONFIG_CPU_MIPSR2)
ASMMACRO(enable_fpu_hazard,
_ehb
)
ASMMACRO(disable_fpu_hazard,
_ehb
)
ASMMACRO(enable_fpu_hazard,
nop; nop; nop; nop
)
ASMMACRO(disable_fpu_hazard,
_ehb
)
