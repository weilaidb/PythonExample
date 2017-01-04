#define __ARCH_ABI_H__
#define TREG_FP       52
#define TREG_TP       53
#define TREG_SP       54
#define TREG_LR       55
#define TREG_LAST_GPR 55
#define TREG_SN       56
#define TREG_IDN0     57
#define TREG_IDN1     58
#define TREG_UDN0     59
#define TREG_UDN1     60
#define TREG_UDN2     61
#define TREG_UDN3     62
#define TREG_ZERO     63
#define TREG_SYSCALL_NR      10
#define TREG_SYSCALL_NR_NAME r10
#define C_ABI_SAVE_AREA_SIZE (2 * (CHIP_WORD_SIZE() / 8))
#define INFO_OP_CANNOT_BACKTRACE 2
#if CHIP_WORD_SIZE() > 32
typedef unsigned long long uint_reg_t;
typedef long long int_reg_t;
#define INT_REG_FMT "ll"
#elif !defined(__LP64__)
typedef unsigned long uint_reg_t;
typedef long int_reg_t;
#define INT_REG_FMT "l"
