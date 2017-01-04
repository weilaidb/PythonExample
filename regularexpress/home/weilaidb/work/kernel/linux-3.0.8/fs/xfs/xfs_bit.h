#define	__XFS_BIT_H__
static inline __uint64_t xfs_mask64hi(int n)
static inline __uint32_t xfs_mask32lo(int n)
static inline __uint64_t xfs_mask64lo(int n)
static inline int xfs_highbit32(__uint32_t v)
static inline int xfs_highbit64(__uint64_t v)
static inline int xfs_lowbit32(__uint32_t v)
static inline int xfs_lowbit64(__uint64_t v)
extern int xfs_bitmap_empty(uint *map, uint size);
extern int xfs_contig_bits(uint *map, uint size, uint start_bit);
extern int xfs_next_bit(uint *map, uint size, uint start_bit);
