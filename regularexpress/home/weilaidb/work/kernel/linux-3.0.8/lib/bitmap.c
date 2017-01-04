int __bitmap_empty(const unsigned long *bitmap, int bits)
EXPORT_SYMBOL(__bitmap_empty);
int __bitmap_full(const unsigned long *bitmap, int bits)
EXPORT_SYMBOL(__bitmap_full);
int __bitmap_equal(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_equal);
void __bitmap_complement(unsigned long *dst, const unsigned long *src, int bits)
EXPORT_SYMBOL(__bitmap_complement);
void __bitmap_shift_right(unsigned long *dst,
const unsigned long *src, int shift, int bits)
EXPORT_SYMBOL(__bitmap_shift_right);
void __bitmap_shift_left(unsigned long *dst,
const unsigned long *src, int shift, int bits)
EXPORT_SYMBOL(__bitmap_shift_left);
int __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_and);
void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_or);
void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_xor);
int __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_andnot);
int __bitmap_intersects(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_intersects);
int __bitmap_subset(const unsigned long *bitmap1,
const unsigned long *bitmap2, int bits)
EXPORT_SYMBOL(__bitmap_subset);
int __bitmap_weight(const unsigned long *bitmap, int bits)
EXPORT_SYMBOL(__bitmap_weight);
#define BITMAP_FIRST_WORD_MASK(start) (~0UL << ((start) % BITS_PER_LONG))
void bitmap_set(unsigned long *map, int start, int nr)
EXPORT_SYMBOL(bitmap_set);
void bitmap_clear(unsigned long *map, int start, int nr)
EXPORT_SYMBOL(bitmap_clear);
unsigned long bitmap_find_next_zero_area(unsigned long *map,
unsigned long size,
unsigned long start,
unsigned int nr,
unsigned long align_mask)
EXPORT_SYMBOL(bitmap_find_next_zero_area);
#define CHUNKSZ				32
#define nbits_to_hold_value(val)	fls(val)
#define BASEDEC 10
int bitmap_scnprintf(char *buf, unsigned int buflen,
const unsigned long *maskp, int nmaskbits)
EXPORT_SYMBOL(bitmap_scnprintf);
int __bitmap_parse(const char *buf, unsigned int buflen,
int is_user, unsigned long *maskp,
int nmaskbits)
EXPORT_SYMBOL(__bitmap_parse);
int bitmap_parse_user(const char __user *ubuf,
unsigned int ulen, unsigned long *maskp,
int nmaskbits)
EXPORT_SYMBOL(bitmap_parse_user);
static inline int bscnl_emit(char *buf, int buflen, int rbot, int rtop, int len)
int bitmap_scnlistprintf(char *buf, unsigned int buflen,
const unsigned long *maskp, int nmaskbits)
EXPORT_SYMBOL(bitmap_scnlistprintf);
static int __bitmap_parselist(const char *buf, unsigned int buflen,
int is_user, unsigned long *maskp,
int nmaskbits)
int bitmap_parselist(const char *bp, unsigned long *maskp, int nmaskbits)
EXPORT_SYMBOL(bitmap_parselist);
int bitmap_parselist_user(const char __user *ubuf,
unsigned int ulen, unsigned long *maskp,
int nmaskbits)
EXPORT_SYMBOL(bitmap_parselist_user);
static int bitmap_pos_to_ord(const unsigned long *buf, int pos, int bits)
static int bitmap_ord_to_pos(const unsigned long *buf, int ord, int bits)
void bitmap_remap(unsigned long *dst, const unsigned long *src,
const unsigned long *old, const unsigned long *new,
int bits)
EXPORT_SYMBOL(bitmap_remap);
int bitmap_bitremap(int oldbit, const unsigned long *old,
const unsigned long *new, int bits)
EXPORT_SYMBOL(bitmap_bitremap);
void bitmap_onto(unsigned long *dst, const unsigned long *orig,
const unsigned long *relmap, int bits)
EXPORT_SYMBOL(bitmap_onto);
void bitmap_fold(unsigned long *dst, const unsigned long *orig,
int sz, int bits)
EXPORT_SYMBOL(bitmap_fold);
enum ;
static int __reg_op(unsigned long *bitmap, int pos, int order, int reg_op)
int bitmap_find_free_region(unsigned long *bitmap, int bits, int order)
EXPORT_SYMBOL(bitmap_find_free_region);
void bitmap_release_region(unsigned long *bitmap, int pos, int order)
EXPORT_SYMBOL(bitmap_release_region);
int bitmap_allocate_region(unsigned long *bitmap, int pos, int order)
EXPORT_SYMBOL(bitmap_allocate_region);
void bitmap_copy_le(void *dst, const unsigned long *src, int nbits)
EXPORT_SYMBOL(bitmap_copy_le);
