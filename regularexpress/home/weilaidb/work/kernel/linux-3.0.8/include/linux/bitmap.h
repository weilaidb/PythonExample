#define __LINUX_BITMAP_H
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
int bits);
extern void __bitmap_shift_right(unsigned long *dst,
const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
const unsigned long *src, int shift, int bits);
extern int __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern int __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);
extern void bitmap_set(unsigned long *map, int i, int len);
extern void bitmap_clear(unsigned long *map, int start, int nr);
extern unsigned long bitmap_find_next_zero_area(unsigned long *map,
unsigned long size,
unsigned long start,
unsigned int nr,
unsigned long align_mask);
extern int bitmap_scnprintf(char *buf, unsigned int len,
const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char __user *ubuf, unsigned int ulen,
unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
int nmaskbits);
extern int bitmap_parselist_user(const char __user *ubuf, unsigned int ulen,
unsigned long *dst, int nbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, const unsigned long *src, int nbits);
#define BITMAP_LAST_WORD_MASK(nbits)					\
(									\
((nbits) % BITS_PER_LONG) ?					\
(1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL		\
)
#define small_const_nbits(nbits) \
(__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG)
static inline void bitmap_zero(unsigned long *dst, int nbits)
static inline void bitmap_fill(unsigned long *dst, int nbits)
static inline void bitmap_copy(unsigned long *dst, const unsigned long *src,
int nbits)
static inline int bitmap_and(unsigned long *dst, const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline void bitmap_or(unsigned long *dst, const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline void bitmap_xor(unsigned long *dst, const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline int bitmap_andnot(unsigned long *dst, const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline void bitmap_complement(unsigned long *dst, const unsigned long *src,
int nbits)
static inline int bitmap_equal(const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline int bitmap_intersects(const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline int bitmap_subset(const unsigned long *src1,
const unsigned long *src2, int nbits)
static inline int bitmap_empty(const unsigned long *src, int nbits)
static inline int bitmap_full(const unsigned long *src, int nbits)
static inline int bitmap_weight(const unsigned long *src, int nbits)
static inline void bitmap_shift_right(unsigned long *dst,
const unsigned long *src, int n, int nbits)
static inline void bitmap_shift_left(unsigned long *dst,
const unsigned long *src, int n, int nbits)
static inline int bitmap_parse(const char *buf, unsigned int buflen,
unsigned long *maskp, int nmaskbits)
