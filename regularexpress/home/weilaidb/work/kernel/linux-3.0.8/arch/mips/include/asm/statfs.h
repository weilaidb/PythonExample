#define _ASM_STATFS_H
typedef __kernel_fsid_t        fsid_t;
struct statfs ;
#if (_MIPS_SIM == _MIPS_SIM_ABI32) || (_MIPS_SIM == _MIPS_SIM_NABI32)
struct statfs64 ;
#if _MIPS_SIM == _MIPS_SIM_ABI64
struct statfs64 ;
struct compat_statfs64 ;
