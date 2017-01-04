#define _ASM_STAT_H
#if (_MIPS_SIM == _MIPS_SIM_ABI32) || (_MIPS_SIM == _MIPS_SIM_NABI32)
struct stat ;
struct stat64 ;
#if _MIPS_SIM == _MIPS_SIM_ABI64
struct stat ;
#define STAT_HAVE_NSEC 1
