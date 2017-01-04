#define _UFS_SWAB_H
enum ;
static inline u64
fs64_to_cpu(struct super_block *sbp, __fs64 n)
static inline __fs64
cpu_to_fs64(struct super_block *sbp, u64 n)
static inline u32
fs32_to_cpu(struct super_block *sbp, __fs32 n)
static inline __fs32
cpu_to_fs32(struct super_block *sbp, u32 n)
static inline void
fs32_add(struct super_block *sbp, __fs32 *n, int d)
static inline void
fs32_sub(struct super_block *sbp, __fs32 *n, int d)
static inline u16
fs16_to_cpu(struct super_block *sbp, __fs16 n)
static inline __fs16
cpu_to_fs16(struct super_block *sbp, u16 n)
static inline void
fs16_add(struct super_block *sbp, __fs16 *n, int d)
static inline void
fs16_sub(struct super_block *sbp, __fs16 *n, int d)
