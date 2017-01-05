#define HEAPMODE 0
#if (defined(__x86_64__) || defined(_M_X64) || defined(_WIN64) \
|| defined(__64BIT__)  || defined(__mips64) \
|| defined(__powerpc64__) || defined(__powerpc64le__) \
|| defined(__ppc64__) || defined(__ppc64le__) \
|| defined(__PPC64__) || defined(__PPC64LE__) \
|| defined(__ia64) || defined(__itanium__) || defined(_M_IA64) \
|| defined(__s390x__) )
#  define LZ4_ARCH64 1
#  define LZ4_ARCH64 0
#define LZ4_32BITS (sizeof(void*)==4)
#define LZ4_64BITS (sizeof(void*)==8)
#if defined (__GLIBC__)
#  include <endian.h>
#  if (__BYTE_ORDER == __BIG_ENDIAN)
#     define LZ4_BIG_ENDIAN 1
#  endif
#elif (defined(__BIG_ENDIAN__) || defined(__BIG_ENDIAN) || defined(_BIG_ENDIAN)) && !(defined(__LITTLE_ENDIAN__) || defined(__LITTLE_ENDIAN) || defined(_LITTLE_ENDIAN))
#  define LZ4_BIG_ENDIAN 1
#elif defined(__sparc) || defined(__sparc__) \
|| defined(__powerpc__) || defined(__ppc__) || defined(__PPC__) \
|| defined(__hpux)  || defined(__hppa) \
|| defined(_MIPSEB) || defined(__s390__)
#  define LZ4_BIG_ENDIAN 1
#if defined(__ARM_FEATURE_UNALIGNED)
#  define LZ4_FORCE_UNALIGNED_ACCESS 1
#if defined(_MSC_VER) && defined(_WIN32_WCE)
#  define LZ4_FORCE_SW_BITCOUNT
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#  define restrict
#  define FORCE_INLINE static __forceinline
#  include <intrin.h>
#  if LZ4_ARCH64
#    pragma intrinsic(_BitScanForward64)
#    pragma intrinsic(_BitScanReverse64)
#  else
#    pragma intrinsic(_BitScanForward)
#    pragma intrinsic(_BitScanReverse)
#  endif
#  pragma warning(disable : 4127)
#  ifdef __GNUC__
#    define FORCE_INLINE static inline __attribute__((always_inline))
#  else
#    define FORCE_INLINE static inline
#  endif
#  define lz4_bswap16(x) _byteswap_ushort(x)
#  define lz4_bswap16(x) ((unsigned short int) ((((x) >> 8) & 0xffu) | (((x) & 0xffu) << 8)))
#define GCC_VERSION (__GNUC__ * 100 + __GNUC_MINOR__)
#if (GCC_VERSION >= 302) || (__INTEL_COMPILER >= 800) || defined(__clang__)
#  define expect(expr,value)    (__builtin_expect ((expr),(value)) )
#  define expect(expr,value)    (expr)
#define likely(expr)     expect((expr) != 0, 1)
#define unlikely(expr)   expect((expr) != 0, 0)
#define ALLOCATOR(n,s) calloc(n,s)
#define FREEMEM        free
#define MEM_INIT       memset
#if defined (__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
# include <stdint.h>
typedef  uint8_t BYTE;
typedef uint16_t U16;
typedef uint32_t U32;
typedef  int32_t S32;
typedef uint64_t U64;
typedef unsigned char       BYTE;
typedef unsigned short      U16;
typedef unsigned int        U32;
typedef   signed int        S32;
typedef unsigned long long  U64;
#if defined(__GNUC__)  && !defined(LZ4_FORCE_UNALIGNED_ACCESS)
#  define _PACKED __attribute__ ((packed))
#  define _PACKED
#if !defined(LZ4_FORCE_UNALIGNED_ACCESS) && !defined(__GNUC__)
#  if defined(__IBMC__) || defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#    pragma pack(1)
#  else
#    pragma pack(push, 1)
#  endif
typedef struct   _PACKED U16_S;
typedef struct   _PACKED U32_S;
typedef struct   _PACKED U64_S;
typedef struct  _PACKED size_t_S;
#if !defined(LZ4_FORCE_UNALIGNED_ACCESS) && !defined(__GNUC__)
#  if defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#    pragma pack(0)
#  else
#    pragma pack(pop)
#  endif
#define A16(x)   (((U16_S *)(x))->v)
#define A32(x)   (((U32_S *)(x))->v)
#define A64(x)   (((U64_S *)(x))->v)
#define AARCH(x) (((size_t_S *)(x))->v)
#define LZ4_HASHLOG   (LZ4_MEMORY_USAGE-2)
#define HASHTABLESIZE (1 << LZ4_MEMORY_USAGE)
#define HASH_SIZE_U32 (1 << LZ4_HASHLOG)
#define MINMATCH 4
#define COPYLENGTH 8
#define LASTLITERALS 5
#define MFLIMIT (COPYLENGTH+MINMATCH)
static const int LZ4_minLength = (MFLIMIT+1);
#define KB *(1U<<10)
#define MB *(1U<<20)
#define GB *(1U<<30)
#define LZ4_64KLIMIT ((64 KB) + (MFLIMIT-1))
#define SKIPSTRENGTH 6
#define MAXD_LOG 16
#define MAX_DISTANCE ((1 << MAXD_LOG) - 1)
#define ML_BITS  4
#define ML_MASK  ((1U<<ML_BITS)-1)
#define RUN_BITS (8-ML_BITS)
#define RUN_MASK ((1U<<RUN_BITS)-1)
typedef struct  LZ4_stream_t_internal;
typedef enum  limitedOutput_directive;
typedef enum  tableType_t;
typedef enum  dict_directive;
typedef enum  dictIssue_directive;
typedef enum  endCondition_directive;
typedef enum  earlyEnd_directive;
#define STEPSIZE                  sizeof(size_t)
#define LZ4_COPYSTEP(d,s)
#define LZ4_COPY8(d,s)
#if (defined(LZ4_BIG_ENDIAN) && !defined(BIG_ENDIAN_NATIVE_BUT_INCOMPATIBLE))
#  define LZ4_READ_LITTLEENDIAN_16(d,s,p)
#  define LZ4_WRITE_LITTLEENDIAN_16(p,i)
#  define LZ4_READ_LITTLEENDIAN_16(d,s,p)
#  define LZ4_WRITE_LITTLEENDIAN_16(p,v)
#define LZ4_STATIC_ASSERT(c)
#if LZ4_ARCH64 || !defined(__GNUC__)
#  define LZ4_WILDCOPY(d,s,e)
#  define LZ4_WILDCOPY(d,s,e)
#if LZ4_ARCH64
static int LZ4_NbCommonBytes (register U64 val)
static int LZ4_NbCommonBytes (register U32 val)
int LZ4_versionNumber (void)
int LZ4_compressBound(int isize)
static int LZ4_hashSequence(U32 sequence, tableType_t tableType)
static int LZ4_hashPosition(const BYTE* p, tableType_t tableType)
static void LZ4_putPositionOnHash(const BYTE* p, U32 h, void* tableBase, tableType_t tableType, const BYTE* srcBase)
static void LZ4_putPosition(const BYTE* p, void* tableBase, tableType_t tableType, const BYTE* srcBase)
static const BYTE* LZ4_getPositionOnHash(U32 h, void* tableBase, tableType_t tableType, const BYTE* srcBase)
static const BYTE* LZ4_getPosition(const BYTE* p, void* tableBase, tableType_t tableType, const BYTE* srcBase)
static unsigned LZ4_count(const BYTE* pIn, const BYTE* pRef, const BYTE* pInLimit)
static int LZ4_compress_generic(
void* ctx,
const char* source,
char* dest,
int inputSize,
int maxOutputSize,
limitedOutput_directive outputLimited,
tableType_t tableType,
dict_directive dict,
dictIssue_directive dictIssue)
int LZ4_compress(const char* source, char* dest, int inputSize)
int LZ4_compress_limitedOutput(const char* source, char* dest, int inputSize, int maxOutputSize)
void LZ4_resetStream (LZ4_stream_t* LZ4_stream)
LZ4_stream_t* LZ4_createStream(void)
int LZ4_freeStream (LZ4_stream_t* LZ4_stream)
int LZ4_loadDict (LZ4_stream_t* LZ4_dict, const char* dictionary, int dictSize)
static void LZ4_renormDictT(LZ4_stream_t_internal* LZ4_dict, const BYTE* src)
FORCE_INLINE int LZ4_compress_continue_generic (void* LZ4_stream, const char* source, char* dest, int inputSize,
int maxOutputSize, limitedOutput_directive limit)
int LZ4_compress_continue (LZ4_stream_t* LZ4_stream, const char* source, char* dest, int inputSize)
int LZ4_compress_limitedOutput_continue (LZ4_stream_t* LZ4_stream, const char* source, char* dest, int inputSize, int maxOutputSize)
int LZ4_compress_forceExtDict (LZ4_stream_t* LZ4_dict, const char* source, char* dest, int inputSize)
int LZ4_saveDict (LZ4_stream_t* LZ4_dict, char* safeBuffer, int dictSize)
FORCE_INLINE int LZ4_decompress_generic(
const char* source,
char* dest,
int inputSize,
int outputSize,
int endOnInput,
int partialDecoding,
int targetOutputSize,
int dict,
const char* dictStart,
int dictSize
)
int LZ4_decompress_safe(const char* source, char* dest, int compressedSize, int maxDecompressedSize)
int LZ4_decompress_safe_partial(const char* source, char* dest, int compressedSize, int targetOutputSize, int maxDecompressedSize)
int LZ4_decompress_fast(const char* source, char* dest, int originalSize)
typedef struct
LZ4_streamDecode_t_internal;
LZ4_streamDecode_t* LZ4_createStreamDecode(void)
int LZ4_freeStreamDecode (LZ4_streamDecode_t* LZ4_stream)
int LZ4_setStreamDecode (LZ4_streamDecode_t* LZ4_streamDecode, const char* dictionary, int dictSize)
int LZ4_decompress_safe_continue (LZ4_streamDecode_t* LZ4_streamDecode, const char* source, char* dest, int compressedSize, int maxOutputSize)
int LZ4_decompress_fast_continue (LZ4_streamDecode_t* LZ4_streamDecode, const char* source, char* dest, int originalSize)
FORCE_INLINE int LZ4_decompress_usingDict_generic(const char* source, char* dest, int compressedSize, int maxOutputSize, int safe, const char* dictStart, int dictSize)
int LZ4_decompress_safe_usingDict(const char* source, char* dest, int compressedSize, int maxOutputSize, const char* dictStart, int dictSize)
int LZ4_decompress_fast_usingDict(const char* source, char* dest, int originalSize, const char* dictStart, int dictSize)
int LZ4_decompress_safe_forceExtDict(const char* source, char* dest, int compressedSize, int maxOutputSize, const char* dictStart, int dictSize)
int LZ4_uncompress (const char* source, char* dest, int outputSize)
int LZ4_uncompress_unknownOutputSize (const char* source, char* dest, int isize, int maxOutputSize)
int LZ4_sizeofStreamState()
static void LZ4_init(LZ4_stream_t_internal* lz4ds, const BYTE* base)
int LZ4_resetStreamState(void* state, const char* inputBuffer)
void* LZ4_create (const char* inputBuffer)
char* LZ4_slideInputBuffer (void* LZ4_Data)
int LZ4_sizeofState()
int LZ4_compress_withState (void* state, const char* source, char* dest, int inputSize)
int LZ4_compress_limitedOutput_withState (void* state, const char* source, char* dest, int inputSize, int maxOutputSize)
int LZ4_decompress_safe_withPrefix64k(const char* source, char* dest, int compressedSize, int maxOutputSize)
int LZ4_decompress_fast_withPrefix64k(const char* source, char* dest, int originalSize)
