#define _LINUX_UNALIGNED_GENERIC_H
extern void __bad_unaligned_access_size(void);
#define __get_unaligned_le(ptr) ((__force typeof(*(ptr)))())
#define __get_unaligned_be(ptr) ((__force typeof(*(ptr)))())
#define __put_unaligned_le(val, ptr) ()
#define __put_unaligned_be(val, ptr) ()
