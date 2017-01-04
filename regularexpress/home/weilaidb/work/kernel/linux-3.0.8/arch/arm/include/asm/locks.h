#define __ASM_PROC_LOCKS_H
#if __LINUX_ARM_ARCH__ >= 6
#define __down_op(ptr,fail)			\
()
#define __down_op_ret(ptr,fail)			\
()
#define __up_op(ptr,wake)			\
()
#define RW_LOCK_BIAS      0x01000000
#define RW_LOCK_BIAS_STR "0x01000000"
#define __down_op_write(ptr,fail)		\
()
#define __up_op_write(ptr,wake)			\
()
#define __down_op_read(ptr,fail)		\
__down_op(ptr, fail)
#define __up_op_read(ptr,wake)			\
()
#define __down_op(ptr,fail)			\
()
#define __down_op_ret(ptr,fail)			\
()
#define __up_op(ptr,wake)			\
()
#define RW_LOCK_BIAS      0x01000000
#define RW_LOCK_BIAS_STR "0x01000000"
#define __down_op_write(ptr,fail)		\
()
#define __up_op_write(ptr,wake)			\
()
#define __down_op_read(ptr,fail)		\
__down_op(ptr, fail)
#define __up_op_read(ptr,wake)			\
()
