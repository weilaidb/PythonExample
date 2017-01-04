#define AVCODEC_X86_CABAC_H
#if   (defined(__i386) && defined(__clang__) && (__clang_major__<2 || (__clang_major__==2 && __clang_minor__<10)))\
|| (                  !defined(__clang__) && defined(__llvm__) && __GNUC__==4 && __GNUC_MINOR__==2 && __GNUC_PATCHLEVEL__<=1)\
|| (defined(__INTEL_COMPILER) && defined(_MSC_VER))
#       define BROKEN_COMPILER 1
#       define BROKEN_COMPILER 0
#if HAVE_INLINE_ASM
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
#if UNCHECKED_BITSTREAM_READER
#define END_CHECK(end) ""
#define END_CHECK(end) \
"cmp    "end"       , %%"FF_REG_c"                              \n\t"\
"jge    1f                                                      \n\t"
#define TABLES_ARG , "r"(tables)
#if HAVE_FAST_CMOV
#define BRANCHLESS_GET_CABAC_UPDATE(ret, retq, low, range, tmp) \
"cmp    "low"       , "tmp"                        \n\t"\
"cmova  %%ecx       , "range"                      \n\t"\
"sbb    %%rcx       , %%rcx                        \n\t"\
"and    %%ecx       , "tmp"                        \n\t"\
"xor    %%rcx       , "retq"                       \n\t"\
"sub    "tmp"       , "low"                        \n\t"
#define BRANCHLESS_GET_CABAC_UPDATE(ret, retq, low, range, tmp) \ \
"sub    "low"       , "tmp"                        \n\t"\
"sar    $31         , "tmp"                        \n\t"\
"sub    %%ecx       , "range"                      \n\t"\
"and    "tmp"       , "range"                      \n\t"\
"add    %%ecx       , "range"                      \n\t"\
"shl    $17         , %%ecx                        \n\t"\
"and    "tmp"       , %%ecx                        \n\t"\
"sub    %%ecx       , "low"                        \n\t"\
"xor    "tmp"       , "ret"                        \n\t"\
"movslq "ret"       , "retq"                       \n\t"
#define BRANCHLESS_GET_CABAC(ret, retq, statep, low, lowword, range, rangeq, tmp, tmpbyte, byte, end, norm_off, lps_off, mlps_off, tables) \
"movzbl "statep"    , "ret"                                     \n\t"\
"mov    "range"     , "tmp"                                     \n\t"\
"and    $0xC0       , "range"                                   \n\t"\
"lea    ("ret", "range", 2), %%ecx                              \n\t"\
"movzbl "lps_off"("tables", %%rcx), "range"                     \n\t"\
"sub    "range"     , "tmp"                                     \n\t"\
"mov    "tmp"       , %%ecx                                     \n\t"\
"shl    $17         , "tmp"                                     \n\t"\
BRANCHLESS_GET_CABAC_UPDATE(ret, retq, low, range, tmp)              \
"movzbl "norm_off"("tables", "rangeq"), %%ecx                   \n\t"\
"shl    %%cl        , "range"                                   \n\t"\
"movzbl "mlps_off"+128("tables", "retq"), "tmp"                 \n\t"\
"shl    %%cl        , "low"                                     \n\t"\
"mov    "tmpbyte"   , "statep"                                  \n\t"\
"test   "lowword"   , "lowword"                                 \n\t"\
"jnz    2f                                                      \n\t"\
"mov    "byte"      , %%"FF_REG_c"                              \n\t"\
END_CHECK(end)\
"add"FF_OPSIZE" $2  , "byte"                                    \n\t"\
"1:                                                             \n\t"\
"movzwl (%%"FF_REG_c") , "tmp"                                  \n\t"\
"lea    -1("low")   , %%ecx                                     \n\t"\
"xor    "low"       , %%ecx                                     \n\t"\
"shr    $15         , %%ecx                                     \n\t"\
"bswap  "tmp"                                                   \n\t"\
"shr    $15         , "tmp"                                     \n\t"\
"movzbl "norm_off"("tables", %%rcx), %%ecx                      \n\t"\
"sub    $0xFFFF     , "tmp"                                     \n\t"\
"neg    %%ecx                                                   \n\t"\
"add    $7          , %%ecx                                     \n\t"\
"shl    %%cl        , "tmp"                                     \n\t"\
"add    "tmp"       , "low"                                     \n\t"\
"2:                                                             \n\t"
#define TABLES_ARG NAMED_CONSTRAINTS_ARRAY_ADD(ff_h264_cabac_tables)
#define RIP_ARG
#if HAVE_FAST_CMOV
#define BRANCHLESS_GET_CABAC_UPDATE(ret, low, range, tmp)\
"mov    "tmp"       , %%ecx     \n\t"\
"shl    $17         , "tmp"     \n\t"\
"cmp    "low"       , "tmp"     \n\t"\
"cmova  %%ecx       , "range"   \n\t"\
"sbb    %%ecx       , %%ecx     \n\t"\
"and    %%ecx       , "tmp"     \n\t"\
"xor    %%ecx       , "ret"     \n\t"\
"sub    "tmp"       , "low"     \n\t"
#define BRANCHLESS_GET_CABAC_UPDATE(ret, low, range, tmp)\
"mov    "tmp"       , %%ecx     \n\t"\
"shl    $17         , "tmp"     \n\t"\
"sub    "low"       , "tmp"     \n\t"\
"sar    $31         , "tmp"     \n\t"\
"sub    %%ecx       , "range"   \n\t"\
"and    "tmp"       , "range"   \n\t"\
"add    %%ecx       , "range"   \n\t"\
"shl    $17         , %%ecx     \n\t"\
"and    "tmp"       , %%ecx     \n\t"\
"sub    %%ecx       , "low"     \n\t"\
"xor    "tmp"       , "ret"     \n\t"
#define BRANCHLESS_GET_CABAC(ret, retq, statep, low, lowword, range, rangeq, tmp, tmpbyte, byte, end, norm_off, lps_off, mlps_off, tables) \
"movzbl "statep"    , "ret"                                     \n\t"\
"mov    "range"     , "tmp"                                     \n\t"\
"and    $0xC0       , "range"                                   \n\t"\
"movzbl "MANGLE(ff_h264_cabac_tables)"+"lps_off"("ret", "range", 2), "range" \n\t"\
"sub    "range"     , "tmp"                                     \n\t"\
BRANCHLESS_GET_CABAC_UPDATE(ret, low, range, tmp)                    \
"movzbl "MANGLE(ff_h264_cabac_tables)"+"norm_off"("range"), %%ecx    \n\t"\
"shl    %%cl        , "range"                                   \n\t"\
"movzbl "MANGLE(ff_h264_cabac_tables)"+"mlps_off"+128("ret"), "tmp"  \n\t"\
"shl    %%cl        , "low"                                     \n\t"\
"mov    "tmpbyte"   , "statep"                                  \n\t"\
"test   "lowword"   , "lowword"                                 \n\t"\
" jnz   2f                                                      \n\t"\
"mov    "byte"      , %%"FF_REG_c"                              \n\t"\
END_CHECK(end)\
"add"FF_OPSIZE" $2  , "byte"                                    \n\t"\
"1:                                                             \n\t"\
"movzwl (%%"FF_REG_c") , "tmp"                                  \n\t"\
"lea    -1("low")   , %%ecx                                     \n\t"\
"xor    "low"       , %%ecx                                     \n\t"\
"shr    $15         , %%ecx                                     \n\t"\
"bswap  "tmp"                                                   \n\t"\
"shr    $15         , "tmp"                                     \n\t"\
"movzbl "MANGLE(ff_h264_cabac_tables)"+"norm_off"(%%ecx), %%ecx \n\t"\
"sub    $0xFFFF     , "tmp"                                     \n\t"\
"neg    %%ecx                                                   \n\t"\
"add    $7          , %%ecx                                     \n\t"\
"shl    %%cl        , "tmp"                                     \n\t"\
"add    "tmp"       , "low"                                     \n\t"\
"2:                                                             \n\t"
#if HAVE_7REGS && !BROKEN_COMPILER
#define get_cabac_inline get_cabac_inline_x86
static av_always_inline int get_cabac_inline_x86(CABACContext *c,
uint8_t *const state)
#if !BROKEN_COMPILER
#define get_cabac_bypass_sign get_cabac_bypass_sign_x86
static av_always_inline int get_cabac_bypass_sign_x86(CABACContext *c, int val)
#define get_cabac_bypass get_cabac_bypass_x86
static av_always_inline int get_cabac_bypass_x86(CABACContext *c)
