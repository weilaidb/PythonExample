#define AVCODEC_X86_CABAC_H
defined && (__clang_major__<2 || (__clang_major__==2 && __clang_minor__<10)))\
defined && __GNUC__==4 && __GNUC_MINOR__==2 && __GNUC_PATCHLEVEL__<=1)\
defined)
#       define BROKEN_COMPILER 1
#       define BROKEN_COMPILER 0
#if HAVE_INLINE_ASM
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
#if UNCHECKED_BITSTREAM_READER
END_CHECK
END_CHECK \
\
#define TABLES_ARG , (tables)
#if HAVE_FAST_CMOV
BRANCHLESS_GET_CABAC_UPDATE \
\
\
\
\
\
BRANCHLESS_GET_CABAC_UPDATE \ \
\
\
\
\
\
\
\
\
\
BRANCHLESS_GET_CABAC \
\
\
\
\
\
\
\
\
BRANCHLESS_GET_CABAC_UPDATE(ret, retq, low, range, tmp)              \
\
\
\
\
\
\
\
\
END_CHECK(end)\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
NAMED_CONSTRAINTS_ARRAY_ADD
#define RIP_ARG
#if HAVE_FAST_CMOV
BRANCHLESS_GET_CABAC_UPDATE\
\
\
\
\
\
\
\
BRANCHLESS_GET_CABAC_UPDATE\
\
\
\
\
\
\
\
\
\
\
BRANCHLESS_GET_CABAC \
\
\
\
\
\
BRANCHLESS_GET_CABAC_UPDATE(ret, low, range, tmp)                    \
\
\
\
\
\
\
\
\
END_CHECK(end)\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
#if HAVE_7REGS && !BROKEN_COMPILER
#define get_cabac_inline get_cabac_inline_x86
get_cabac_inline_x86
#if !BROKEN_COMPILER
#define get_cabac_bypass_sign get_cabac_bypass_sign_x86
get_cabac_bypass_sign_x86
#define get_cabac_bypass get_cabac_bypass_x86
get_cabac_bypass_x86
