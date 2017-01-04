#if BITS_PER_LONG == 64
# define NBYTES(x) ((x) * 0x0101010101010101UL)
# define NSIZE  8
# define NSHIFT 3
# define NSTRING "64"
typedef u64 unative_t;
# define NBYTES(x) ((x) * 0x01010101U)
# define NSIZE  4
# define NSHIFT 2
# define NSTRING "32"
typedef u32 unative_t;
#if ($# <= 8) || defined(__ia64__)
static inline __attribute_const__ unative_t SHLBYTE(unative_t v)
static inline __attribute_const__ unative_t MASK(unative_t v)
static void raid6_int$#_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_intx$# = ;
