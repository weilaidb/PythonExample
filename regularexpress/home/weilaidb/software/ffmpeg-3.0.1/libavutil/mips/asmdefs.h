#define AVUTIL_MIPS_ASMDEFS_H
#if defined(_ABI64) && _MIPS_SIM == _ABI64
# define PTRSIZE        " 8 "
# define PTRLOG         " 3 "
# define PTR_ADDU       "daddu "
# define PTR_ADDIU      "daddiu "
# define PTR_SUBU       "dsubu "
# define PTR_L          "ld "
# define PTRSIZE        " 4 "
# define PTRLOG         " 2 "
# define PTR_ADDU       "addu "
# define PTR_ADDIU      "addiu "
# define PTR_SUBU       "subu "
# define PTR_L          "lw "
