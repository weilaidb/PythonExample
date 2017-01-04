#define __XFS_ARCH_H__
# error XFS_BIG_INUMS must be defined true or false
#define	XFS_NATIVE_HOST	1
#undef XFS_NATIVE_HOST
#if __BYTE_ORDER == __BIG_ENDIAN
#define	XFS_NATIVE_HOST	1
#undef XFS_NATIVE_HOST
#define cpu_to_be16(val)	((__force __be16)(__u16)(val))
#define cpu_to_be32(val)	((__force __be32)(__u32)(val))
#define cpu_to_be64(val)	((__force __be64)(__u64)(val))
#define be16_to_cpu(val)	((__force __u16)(__be16)(val))
#define be32_to_cpu(val)	((__force __u32)(__be32)(val))
#define be64_to_cpu(val)	((__force __u64)(__be64)(val))
#define cpu_to_be16(val)	((__force __be16)__swab16((__u16)(val)))
#define cpu_to_be32(val)	((__force __be32)__swab32((__u32)(val)))
#define cpu_to_be64(val)	((__force __be64)__swab64((__u64)(val)))
#define be16_to_cpu(val)	(__swab16((__force __u16)(__be16)(val)))
#define be32_to_cpu(val)	(__swab32((__force __u32)(__be32)(val)))
#define be64_to_cpu(val)	(__swab64((__force __u64)(__be64)(val)))
static inline void be16_add_cpu(__be16 *a, __s16 b)
static inline void be32_add_cpu(__be32 *a, __s32 b)
static inline void be64_add_cpu(__be64 *a, __s64 b)
#define INT_GET_UNALIGNED_16_BE(pointer) \
((__u16)((((__u8*)(pointer))[0] << 8) | (((__u8*)(pointer))[1])))
#define INT_SET_UNALIGNED_16_BE(pointer,value) \
#define XFS_GET_DIR_INO4(di) \
(((__u32)(di).i[0] << 24) | ((di).i[1] << 16) | ((di).i[2] << 8) | ((di).i[3]))
#define XFS_PUT_DIR_INO4(from, di) \
do  while (0)
#define XFS_DI_HI(di) \
(((__u32)(di).i[1] << 16) | ((di).i[2] << 8) | ((di).i[3]))
#define XFS_DI_LO(di) \
(((__u32)(di).i[4] << 24) | ((di).i[5] << 16) | ((di).i[6] << 8) | ((di).i[7]))
#define XFS_GET_DIR_INO8(di)        \
(((xfs_ino_t)XFS_DI_LO(di) & 0xffffffffULL) | \
((xfs_ino_t)XFS_DI_HI(di) << 32))
#define XFS_PUT_DIR_INO8(from, di) \
do  while (0)
