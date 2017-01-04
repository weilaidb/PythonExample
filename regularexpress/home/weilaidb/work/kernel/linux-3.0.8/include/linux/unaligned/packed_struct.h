#define _LINUX_UNALIGNED_PACKED_STRUCT_H
struct __una_u16  __packed;
struct __una_u32  __packed;
struct __una_u64  __packed;
static inline u16 __get_unaligned_cpu16(const void *p)
static inline u32 __get_unaligned_cpu32(const void *p)
static inline u64 __get_unaligned_cpu64(const void *p)
static inline void __put_unaligned_cpu16(u16 val, void *p)
static inline void __put_unaligned_cpu32(u32 val, void *p)
static inline void __put_unaligned_cpu64(u64 val, void *p)
