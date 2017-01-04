#define __LINUX_MTD_MAP_H__
#define map_bankwidth(map) 1
#define map_bankwidth_is_1(map) (map_bankwidth(map) == 1)
#define map_bankwidth_is_large(map) (0)
#define map_words(map) (1)
#define MAX_MAP_BANKWIDTH 1
#define map_bankwidth_is_1(map) (0)
# ifdef map_bankwidth
#  undef map_bankwidth
#  define map_bankwidth(map) ((map)->bankwidth)
# else
#  define map_bankwidth(map) 2
#  define map_bankwidth_is_large(map) (0)
#  define map_words(map) (1)
# endif
#define map_bankwidth_is_2(map) (map_bankwidth(map) == 2)
#undef MAX_MAP_BANKWIDTH
#define MAX_MAP_BANKWIDTH 2
#define map_bankwidth_is_2(map) (0)
# ifdef map_bankwidth
#  undef map_bankwidth
#  define map_bankwidth(map) ((map)->bankwidth)
# else
#  define map_bankwidth(map) 4
#  define map_bankwidth_is_large(map) (0)
#  define map_words(map) (1)
# endif
#define map_bankwidth_is_4(map) (map_bankwidth(map) == 4)
#undef MAX_MAP_BANKWIDTH
#define MAX_MAP_BANKWIDTH 4
#define map_bankwidth_is_4(map) (0)
#define map_calc_words(map) ((map_bankwidth(map) + (sizeof(unsigned long)-1))/ sizeof(unsigned long))
# ifdef map_bankwidth
#  undef map_bankwidth
#  define map_bankwidth(map) ((map)->bankwidth)
#  if BITS_PER_LONG < 64
#   undef map_bankwidth_is_large
#   define map_bankwidth_is_large(map) (map_bankwidth(map) > BITS_PER_LONG/8)
#   undef map_words
#   define map_words(map) map_calc_words(map)
#  endif
# else
#  define map_bankwidth(map) 8
#  define map_bankwidth_is_large(map) (BITS_PER_LONG < 64)
#  define map_words(map) map_calc_words(map)
# endif
#define map_bankwidth_is_8(map) (map_bankwidth(map) == 8)
#undef MAX_MAP_BANKWIDTH
#define MAX_MAP_BANKWIDTH 8
#define map_bankwidth_is_8(map) (0)
# ifdef map_bankwidth
#  undef map_bankwidth
#  define map_bankwidth(map) ((map)->bankwidth)
#  undef map_bankwidth_is_large
#  define map_bankwidth_is_large(map) (map_bankwidth(map) > BITS_PER_LONG/8)
#  undef map_words
#  define map_words(map) map_calc_words(map)
# else
#  define map_bankwidth(map) 16
#  define map_bankwidth_is_large(map) (1)
#  define map_words(map) map_calc_words(map)
# endif
#define map_bankwidth_is_16(map) (map_bankwidth(map) == 16)
#undef MAX_MAP_BANKWIDTH
#define MAX_MAP_BANKWIDTH 16
#define map_bankwidth_is_16(map) (0)
# ifdef map_bankwidth
#  undef map_bankwidth
#  define map_bankwidth(map) ((map)->bankwidth)
#  undef map_bankwidth_is_large
#  define map_bankwidth_is_large(map) (map_bankwidth(map) > BITS_PER_LONG/8)
#  undef map_words
#  define map_words(map) map_calc_words(map)
# else
#  define map_bankwidth(map) 32
#  define map_bankwidth_is_large(map) (1)
#  define map_words(map) map_calc_words(map)
# endif
#define map_bankwidth_is_32(map) (map_bankwidth(map) == 32)
#undef MAX_MAP_BANKWIDTH
#define MAX_MAP_BANKWIDTH 32
#define map_bankwidth_is_32(map) (0)
#warning "No CONFIG_MTD_MAP_BANK_WIDTH_xx selected. No NOR chip support can work"
static inline int map_bankwidth(void *map)
#define map_bankwidth_is_large(map) (0)
#define map_words(map) (0)
#define MAX_MAP_BANKWIDTH 1
static inline int map_bankwidth_supported(int w)
#define MAX_MAP_LONGS ( ((MAX_MAP_BANKWIDTH*8) + BITS_PER_LONG - 1) / BITS_PER_LONG )
typedef union  map_word;
struct map_info ;
struct mtd_chip_driver ;
void register_mtd_chip_driver(struct mtd_chip_driver *);
void unregister_mtd_chip_driver(struct mtd_chip_driver *);
struct mtd_info *do_map_probe(const char *name, struct map_info *map);
void map_destroy(struct mtd_info *mtd);
#define ENABLE_VPP(map) do  while(0)
#define DISABLE_VPP(map) do  while(0)
#define INVALIDATE_CACHED_RANGE(map, from, size) \
do  while(0)
static inline int map_word_equal(struct map_info *map, map_word val1, map_word val2)
static inline map_word map_word_and(struct map_info *map, map_word val1, map_word val2)
static inline map_word map_word_clr(struct map_info *map, map_word val1, map_word val2)
static inline map_word map_word_or(struct map_info *map, map_word val1, map_word val2)
#define map_word_andequal(m, a, b, z) map_word_equal(m, z, map_word_and(m, a, b))
static inline int map_word_bitsset(struct map_info *map, map_word val1, map_word val2)
static inline map_word map_word_load(struct map_info *map, const void *ptr)
static inline map_word map_word_load_partial(struct map_info *map, map_word orig, const unsigned char *buf, int start, int len)
#if BITS_PER_LONG < 64
#define MAP_FF_LIMIT 4
#define MAP_FF_LIMIT 8
static inline map_word map_word_ff(struct map_info *map)
static inline map_word inline_map_read(struct map_info *map, unsigned long ofs)
static inline void inline_map_write(struct map_info *map, const map_word datum, unsigned long ofs)
static inline void inline_map_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static inline void inline_map_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
#define map_read(map, ofs) (map)->read(map, ofs)
#define map_copy_from(map, to, from, len) (map)->copy_from(map, to, from, len)
#define map_write(map, datum, ofs) (map)->write(map, datum, ofs)
#define map_copy_to(map, to, from, len) (map)->copy_to(map, to, from, len)
extern void simple_map_init(struct map_info *);
#define map_is_linear(map) (map->phys != NO_XIP)
#define map_read(map, ofs) inline_map_read(map, ofs)
#define map_copy_from(map, to, from, len) inline_map_copy_from(map, to, from, len)
#define map_write(map, datum, ofs) inline_map_write(map, datum, ofs)
#define map_copy_to(map, to, from, len) inline_map_copy_to(map, to, from, len)
#define simple_map_init(map) BUG_ON(!map_bankwidth_supported((map)->bankwidth))
#define map_is_linear(map) ()
