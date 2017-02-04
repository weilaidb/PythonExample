#define AVUTIL_MIPS_ASMDEFS_H
defined && _MIPS_SIM == _ABI64
# define mips_reg       int64_t
# define PTRSIZE
# define PTRLOG
# define PTR_ADDU
# define PTR_ADDIU
# define PTR_ADDI
# define PTR_SUBU
# define PTR_L
# define PTR_S
# define PTR_SRA
# define PTR_SRL
# define PTR_SLL
# define mips_reg       int32_t
# define PTRSIZE
# define PTRLOG
# define PTR_ADDU
# define PTR_ADDIU
# define PTR_ADDI
# define PTR_SUBU
# define PTR_L
# define PTR_S
# define PTR_SRA
# define PTR_SRL
# define PTR_SLL
