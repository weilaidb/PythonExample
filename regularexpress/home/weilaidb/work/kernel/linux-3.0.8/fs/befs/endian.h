#define LINUX_BEFS_ENDIAN
static inline u64
fs64_to_cpu(const struct super_block *sb, fs64 n)
static inline fs64
cpu_to_fs64(const struct super_block *sb, u64 n)
static inline u32
fs32_to_cpu(const struct super_block *sb, fs32 n)
static inline fs32
cpu_to_fs32(const struct super_block *sb, u32 n)
static inline u16
fs16_to_cpu(const struct super_block *sb, fs16 n)
static inline fs16
cpu_to_fs16(const struct super_block *sb, u16 n)
static inline befs_block_run
fsrun_to_cpu(const struct super_block *sb, befs_disk_block_run n)
static inline befs_disk_block_run
cpu_to_fsrun(const struct super_block *sb, befs_block_run n)
static inline befs_data_stream
fsds_to_cpu(const struct super_block *sb, const befs_disk_data_stream *n)
