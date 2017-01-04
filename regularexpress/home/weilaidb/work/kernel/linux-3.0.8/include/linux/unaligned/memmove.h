#define _LINUX_UNALIGNED_MEMMOVE_H
static inline u16 __get_unaligned_memmove16(const void *p)
static inline u32 __get_unaligned_memmove32(const void *p)
static inline u64 __get_unaligned_memmove64(const void *p)
static inline void __put_unaligned_memmove16(u16 val, void *p)
static inline void __put_unaligned_memmove32(u32 val, void *p)
static inline void __put_unaligned_memmove64(u64 val, void *p)
