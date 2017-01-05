#define LZ4HC_DEFAULT_COMPRESSIONLEVEL 8
#define ALLOCATOR(s)  calloc(1,s)
#define FREEMEM       free
#define MEM_INIT      memset
#if (defined(__x86_64__) || defined(_M_X64) || defined(_WIN64) \
|| defined(__64BIT__)  || defined(__mips64) \
|| defined(__powerpc64__) || defined(__powerpc64le__) \
|| defined(__ppc64__) || defined(__ppc64le__) \
|| defined(__PPC64__) || defined(__PPC64LE__) \
|| defined(__ia64) || defined(__itanium__) || defined(_M_IA64) \
|| defined(__s390x__) )
#  define LZ4_ARCH64 1
#  define LZ4_ARCH64 0
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
#  pragma warning(disable : 4701)
#  ifdef __GNUC__
#    define FORCE_INLINE static inline __attribute__((always_inline))
#  else
#    define FORCE_INLINE static inline
#  endif
#  define lz4_bswap16(x) _byteswap_ushort(x)
#  define lz4_bswap16(x)  ((unsigned short int) ((((x) >> 8) & 0xffu) | (((x) & 0xffu) << 8)))
#if defined (__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
# include <stdint.h>
typedef uint8_t  BYTE;
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
#  ifdef __IBMC__
#    pragma pack(1)
#  else
#    pragma pack(push, 1)
#  endif
typedef struct _U16_S  _PACKED U16_S;
typedef struct _U32_S  _PACKED U32_S;
typedef struct _U64_S  _PACKED U64_S;
#if !defined(LZ4_FORCE_UNALIGNED_ACCESS) && !defined(__GNUC__)
#  pragma pack(pop)
#define A64(x) (((U64_S *)(x))->v)
#define A32(x) (((U32_S *)(x))->v)
#define A16(x) (((U16_S *)(x))->v)
#define MINMATCH 4
#define DICTIONARY_LOGSIZE 16
#define MAXD (1<<DICTIONARY_LOGSIZE)
#define MAXD_MASK ((U32)(MAXD - 1))
#define MAX_DISTANCE (MAXD - 1)
#define HASH_LOG (DICTIONARY_LOGSIZE-1)
#define HASHTABLESIZE (1 << HASH_LOG)
#define HASH_MASK (HASHTABLESIZE - 1)
#define ML_BITS  4
#define ML_MASK  (size_t)((1U<<ML_BITS)-1)
#define RUN_BITS (8-ML_BITS)
#define RUN_MASK ((1U<<RUN_BITS)-1)
#define COPYLENGTH 8
#define LASTLITERALS 5
#define MFLIMIT (COPYLENGTH+MINMATCH)
#define MINLENGTH (MFLIMIT+1)
#define OPTIMAL_ML (int)((ML_MASK-1)+MINMATCH)
#define KB *(1U<<10)
#define MB *(1U<<20)
#define GB *(1U<<30)
#if LZ4_ARCH64
#  define STEPSIZE 8
#  define LZ4_COPYSTEP(s,d)     A64(d) = A64(s); d+=8; s+=8;
#  define LZ4_COPYPACKET(s,d)   LZ4_COPYSTEP(s,d)
#  define AARCH A64
#  define HTYPE                 U32
#  define INITBASE(b,s)         const BYTE* const b = s
#  define STEPSIZE 4
#  define LZ4_COPYSTEP(s,d)     A32(d) = A32(s); d+=4; s+=4;
#  define LZ4_COPYPACKET(s,d)   LZ4_COPYSTEP(s,d); LZ4_COPYSTEP(s,d);
#  define AARCH A32
#  define HTYPE                 U32
#  define INITBASE(b,s)         const BYTE* const b = s
#if defined(LZ4_BIG_ENDIAN)
#  define LZ4_READ_LITTLEENDIAN_16(d,s,p)
#  define LZ4_WRITE_LITTLEENDIAN_16(p,i)
#  define LZ4_READ_LITTLEENDIAN_16(d,s,p)
#  define LZ4_WRITE_LITTLEENDIAN_16(p,v)
typedef struct
LZ4HC_Data_Structure;
#define LZ4_WILDCOPY(s,d,e)    do  while (d<e);
#define LZ4_BLINDCOPY(s,d,l)
#define HASH_FUNCTION(i)       (((i) * 2654435761U) >> ((MINMATCH*8)-HASH_LOG))
#define HASH_VALUE(p)          HASH_FUNCTION(A32(p))
#define HASH_POINTER(p)        (HashTable[HASH_VALUE(p)] + base)
#define DELTANEXT(p)           chainTable[(size_t)(p) & MAXD_MASK]
#define GETNEXT(p)             ((p) - (size_t)DELTANEXT(p))
#if LZ4_ARCH64
FORCE_INLINE int LZ4_NbCommonBytes (register U64 val)
FORCE_INLINE int LZ4_NbCommonBytes (register U32 val)
int LZ4_sizeofStreamStateHC()
FORCE_INLINE void LZ4_initHC (LZ4HC_Data_Structure* hc4, const BYTE* base)
int LZ4_resetStreamStateHC(void* state, const char* inputBuffer)
void* LZ4_createHC (const char* inputBuffer)
int LZ4_freeHC (void* LZ4HC_Data)
FORCE_INLINE void LZ4HC_Insert (LZ4HC_Data_Structure* hc4, const BYTE* ip)
char* LZ4_slideInputBufferHC(void* LZ4HC_Data)
FORCE_INLINE size_t LZ4HC_CommonLength (const BYTE* p1, const BYTE* p2, const BYTE* const matchlimit)
FORCE_INLINE int LZ4HC_InsertAndFindBestMatch (LZ4HC_Data_Structure* hc4, const BYTE* ip, const BYTE* const matchlimit, const BYTE** matchpos, const int maxNbAttempts)
FORCE_INLINE int LZ4HC_InsertAndGetWiderMatch (LZ4HC_Data_Structure* hc4, const BYTE* ip, const BYTE* startLimit, const BYTE* matchlimit, int longest, const BYTE** matchpos, const BYTE** startpos, const int maxNbAttempts)
typedef enum  limitedOutput_directive;
FORCE_INLINE int LZ4HC_encodeSequence (
const BYTE** ip,
BYTE** op,
const BYTE** anchor,
int matchLength,
const BYTE* ref,
limitedOutput_directive limitedOutputBuffer,
BYTE* oend)
#define MAX_COMPRESSION_LEVEL 16
static int LZ4HC_compress_generic (
void* ctxvoid,
const char* source,
char* dest,
int inputSize,
int maxOutputSize,
int compressionLevel,
limitedOutput_directive limit
)
int LZ4_compressHC2(const char* source, char* dest, int inputSize, int compressionLevel)
int LZ4_compressHC(const char* source, char* dest, int inputSize)
int LZ4_compressHC2_limitedOutput(const char* source, char* dest, int inputSize, int maxOutputSize, int compressionLevel)
int LZ4_compressHC_limitedOutput(const char* source, char* dest, int inputSize, int maxOutputSize)
int LZ4_sizeofStateHC()
int LZ4_compressHC2_withStateHC (void* state, const char* source, char* dest, int inputSize, int compressionLevel)
int LZ4_compressHC_withStateHC (void* state, const char* source, char* dest, int inputSize)
int LZ4_compressHC2_limitedOutput_withStateHC (void* state, const char* source, char* dest, int inputSize, int maxOutputSize, int compressionLevel)
int LZ4_compressHC_limitedOutput_withStateHC (void* state, const char* source, char* dest, int inputSize, int maxOutputSize)
int LZ4_compressHC_continue (void* LZ4HC_Data, const char* source, char* dest, int inputSize)
int LZ4_compressHC2_continue (void* LZ4HC_Data, const char* source, char* dest, int inputSize, int compressionLevel)
int LZ4_compressHC_limitedOutput_continue (void* LZ4HC_Data, const char* source, char* dest, int inputSize, int maxOutputSize)
int LZ4_compressHC2_limitedOutput_continue (void* LZ4HC_Data, const char* source, char* dest, int inputSize, int maxOutputSize, int compressionLevel)
