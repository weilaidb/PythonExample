#define _LINUX_UNALIGNED_LE_MEMMOVE_H
static inline u16 get_unaligned_le16(const void *p)
static inline u32 get_unaligned_le32(const void *p)
static inline u64 get_unaligned_le64(const void *p)
static inline void put_unaligned_le16(u16 val, void *p)
static inline void put_unaligned_le32(u32 val, void *p)
static inline void put_unaligned_le64(u64 val, void *p)
