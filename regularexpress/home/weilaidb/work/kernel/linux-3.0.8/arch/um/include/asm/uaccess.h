#define __UM_UACCESS_H
typedef struct  mm_segment_t;
#define VERIFY_READ 0
#define VERIFY_WRITE 1
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFF)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define segment_eq(a, b) ((a).seg == (b).seg)
#define __copy_from_user(to, from, n) copy_from_user(to, from, n)
#define __copy_to_user(to, from, n) copy_to_user(to, from, n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define __get_user(x, ptr) \
()
#define get_user(x, ptr) \
()
#define __put_user(x, ptr) \
()
#define put_user(x, ptr) \
()
#define strlen_user(str) strnlen_user(str, ~0U >> 1)
struct exception_table_entry
;
