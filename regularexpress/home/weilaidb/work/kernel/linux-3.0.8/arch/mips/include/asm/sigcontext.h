#define _ASM_SIGCONTEXT_H
#if _MIPS_SIM == _MIPS_SIM_ABI32
struct sigcontext ;
#if _MIPS_SIM == _MIPS_SIM_ABI64 || _MIPS_SIM == _MIPS_SIM_NABI32
struct sigcontext ;
struct sigcontext32 ;
