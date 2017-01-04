#define	_H_ENDIAN24
#define __swab24(x) \
()
#if (defined(__KERNEL__) && defined(__LITTLE_ENDIAN)) || (defined(__BYTE_ORDER) && (__BYTE_ORDER == __LITTLE_ENDIAN))
#define __cpu_to_le24(x) ((__u32)(x))
#define __le24_to_cpu(x) ((__u32)(x))
#define __cpu_to_le24(x) __swab24(x)
#define __le24_to_cpu(x) __swab24(x)
#define cpu_to_le24 __cpu_to_le24
#define le24_to_cpu __le24_to_cpu
