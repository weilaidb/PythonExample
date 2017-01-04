#define _LINUX_UNALIGNED_BE_MEMMOVE_H
static inline u16 get_unaligned_be16(const void *p)
static inline u32 get_unaligned_be32(const void *p)
static inline u64 get_unaligned_be64(const void *p)
static inline void put_unaligned_be16(u16 val, void *p)
static inline void put_unaligned_be32(u32 val, void *p)
static inline void put_unaligned_be64(u64 val, void *p)
