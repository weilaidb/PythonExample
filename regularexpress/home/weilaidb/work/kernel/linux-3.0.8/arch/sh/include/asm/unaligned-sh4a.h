#define __ASM_SH_UNALIGNED_SH4A_H
static inline u16 sh4a_get_unaligned_cpu16(const u8 *p)
static __always_inline u32 sh4a_get_unaligned_cpu32(const u8 *p)
static inline u64 sh4a_get_unaligned_cpu64(const u8 *p)
static inline u16 get_unaligned_le16(const void *p)
static inline u32 get_unaligned_le32(const void *p)
static inline u64 get_unaligned_le64(const void *p)
static inline u16 get_unaligned_be16(const void *p)
static inline u32 get_unaligned_be32(const void *p)
static inline u64 get_unaligned_be64(const void *p)
static inline void nonnative_put_le16(u16 val, u8 *p)
static inline void nonnative_put_le32(u32 val, u8 *p)
static inline void nonnative_put_le64(u64 val, u8 *p)
static inline void nonnative_put_be16(u16 val, u8 *p)
static inline void nonnative_put_be32(u32 val, u8 *p)
static inline void nonnative_put_be64(u64 val, u8 *p)
static inline void put_unaligned_le16(u16 val, void *p)
static inline void put_unaligned_le32(u32 val, void *p)
static inline void put_unaligned_le64(u64 val, void *p)
static inline void put_unaligned_be16(u16 val, void *p)
static inline void put_unaligned_be32(u32 val, void *p)
static inline void put_unaligned_be64(u64 val, void *p)
# define get_unaligned __get_unaligned_le
# define put_unaligned __put_unaligned_le
# define get_unaligned __get_unaligned_be
# define put_unaligned __put_unaligned_be
