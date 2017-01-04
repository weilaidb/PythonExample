static inline uint32_t default_swab32(uint32_t val)
static inline uint64_t default_bswap64(uint64_t val)
#undef bswap32
#undef bswap64
#if defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
#define bswap32 git_bswap32
static inline uint32_t git_bswap32(uint32_t x)
#define bswap64 git_bswap64
#if defined(__x86_64__)
static inline uint64_t git_bswap64(uint64_t x)
static inline uint64_t git_bswap64(uint64_t x)
#elif defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_X64))
#define bswap32(x) _byteswap_ulong(x)
#define bswap64(x) _byteswap_uint64(x)
#if defined(bswap32)
#undef ntohl
#undef htonl
#define ntohl(x) bswap32(x)
#define htonl(x) bswap32(x)
#if defined(bswap64)
#undef ntohll
#undef htonll
#define ntohll(x) bswap64(x)
#define htonll(x) bswap64(x)
#undef ntohll
#undef htonll
#if defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && defined(__BIG_ENDIAN)
# define GIT_BYTE_ORDER __BYTE_ORDER
# define GIT_LITTLE_ENDIAN __LITTLE_ENDIAN
# define GIT_BIG_ENDIAN __BIG_ENDIAN
#elif defined(BYTE_ORDER) && defined(LITTLE_ENDIAN) && defined(BIG_ENDIAN)
# define GIT_BYTE_ORDER BYTE_ORDER
# define GIT_LITTLE_ENDIAN LITTLE_ENDIAN
# define GIT_BIG_ENDIAN BIG_ENDIAN
# define GIT_BIG_ENDIAN 4321
# define GIT_LITTLE_ENDIAN 1234
# if defined(_BIG_ENDIAN) && !defined(_LITTLE_ENDIAN)
#  define GIT_BYTE_ORDER GIT_BIG_ENDIAN
# elif defined(_LITTLE_ENDIAN) && !defined(_BIG_ENDIAN)
#  define GIT_BYTE_ORDER GIT_LITTLE_ENDIAN
# else
#  error "Cannot determine endianness"
# endif
#if GIT_BYTE_ORDER == GIT_BIG_ENDIAN
# define ntohll(n) (n)
# define htonll(n) (n)
# define ntohll(n) default_bswap64(n)
# define htonll(n) default_bswap64(n)
#if defined(__i386__) || defined(__x86_64__) || \
defined(_M_IX86) || defined(_M_X64) || \
defined(__ppc__) || defined(__ppc64__) || \
defined(__powerpc__) || defined(__powerpc64__) || \
defined(__s390__) || defined(__s390x__)
#define get_be16(p)	ntohs(*(unsigned short *)(p))
#define get_be32(p)	ntohl(*(unsigned int *)(p))
#define put_be32(p, v)	do  while (0)
#define get_be16(p)	( \
(*((unsigned char *)(p) + 0) << 8) | \
(*((unsigned char *)(p) + 1) << 0) )
#define get_be32(p)	( \
(*((unsigned char *)(p) + 0) << 24) | \
(*((unsigned char *)(p) + 1) << 16) | \
(*((unsigned char *)(p) + 2) <<  8) | \
(*((unsigned char *)(p) + 3) <<  0) )
#define put_be32(p, v)	do  while (0)
