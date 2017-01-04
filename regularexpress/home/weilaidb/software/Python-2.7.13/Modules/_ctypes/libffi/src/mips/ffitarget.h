#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
# include <asm/sgidefs.h>
#elif defined(__rtems__)
#define _MIPS_SIM_ABI32		1
#define _MIPS_SIM_NABI32	2
#define _MIPS_SIM_ABI64		3
#elif !defined(__OpenBSD__)
# include <sgidefs.h>
#  ifndef _ABIN32
#    define _ABIN32 _MIPS_SIM_NABI32
#  endif
#  ifndef _ABI64
#    define _ABI64 _MIPS_SIM_ABI64
#  endif
#  ifndef _ABIO32
#    define _ABIO32 _MIPS_SIM_ABI32
#  endif
#if !defined(_MIPS_SIM)
# error -- something is very wrong --
#  if (_MIPS_SIM==_ABIN32 && defined(_ABIN32)) || (_MIPS_SIM==_ABI64 && defined(_ABI64))
#    define FFI_MIPS_N32
#  else
#    if (_MIPS_SIM==_ABIO32 && defined(_ABIO32))
#      define FFI_MIPS_O32
#    else
#     error -- this is an unsupported platform --
#    endif
#  endif
#  define FFI_SIZEOF_ARG    4
#  define FFI_SIZEOF_ARG    8
#  if _MIPS_SIM == _ABIN32
#    define FFI_SIZEOF_JAVA_RAW  4
#  endif
#define FFI_FLAG_BITS 2
#define FFI_ARGS_D   FFI_TYPE_DOUBLE
#define FFI_ARGS_F   FFI_TYPE_FLOAT
#define FFI_ARGS_DD  FFI_TYPE_DOUBLE * 4 + FFI_TYPE_DOUBLE
#define FFI_ARGS_FF  FFI_TYPE_FLOAT * 4 +  FFI_TYPE_FLOAT
#define FFI_ARGS_FD  FFI_TYPE_DOUBLE * 4 + FFI_TYPE_FLOAT
#define FFI_ARGS_DF  FFI_TYPE_FLOAT * 4 + FFI_TYPE_DOUBLE
#define FFI_TYPE_SMALLSTRUCT  FFI_TYPE_UINT8
#define FFI_TYPE_SMALLSTRUCT2 FFI_TYPE_SINT8
#define v0 $2
#define v1 $3
#define a0 $4
#define a1 $5
#define a2 $6
#define a3 $7
#define a4 $8
#define a5 $9
#define a6 $10
#define a7 $11
#define t0 $8
#define t1 $9
#define t2 $10
#define t3 $11
#define t4 $12
#define t5 $13
#define t6 $14
#define t7 $15
#define t8 $24
#define t9 $25
#define ra $31
# define REG_L	lw
# define REG_S	sw
# define SUBU	subu
# define ADDU	addu
# define SRL	srl
# define LI	li
# define REG_L	ld
# define REG_S	sd
# define SUBU	dsubu
# define ADDU	daddu
# define SRL	dsrl
# define LI 	dli
# if (_MIPS_SIM==_ABI64)
#  define LA dla
#  define EH_FRAME_ALIGN 3
#  define FDE_ADDR_BYTES .8byte
# else
#  define LA la
#  define EH_FRAME_ALIGN 2
#  define FDE_ADDR_BYTES .4byte
# endif
# ifdef __GNUC__
#  ifdef FFI_MIPS_O32
typedef unsigned int     ffi_arg __attribute__((__mode__(__SI__)));
typedef signed   int     ffi_sarg __attribute__((__mode__(__SI__)));
typedef unsigned int     ffi_arg __attribute__((__mode__(__DI__)));
typedef signed   int     ffi_sarg __attribute__((__mode__(__DI__)));
#  endif
# else
#  ifdef FFI_MIPS_O32
typedef __uint32_t ffi_arg;
typedef __int32_t ffi_sarg;
#  else
typedef __uint64_t ffi_arg;
typedef __int64_t ffi_sarg;
#  endif
# endif
typedef enum ffi_abi  ffi_abi;
#define FFI_EXTRA_CIF_FIELDS unsigned rstruct_flag
#if defined(FFI_MIPS_O32)
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 20
# define FFI_CLOSURES 1
#if _MIPS_SIM==_ABI64
#define FFI_TRAMPOLINE_SIZE 52
#define FFI_TRAMPOLINE_SIZE 20
#define FFI_NATIVE_RAW_API 0
