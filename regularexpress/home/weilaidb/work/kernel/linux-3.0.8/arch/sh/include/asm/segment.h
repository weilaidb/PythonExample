#define __ASM_SH_SEGMENT_H
typedef struct  mm_segment_t;
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFFUL)
#define USER_DS		MAKE_MM_SEG(PAGE_OFFSET)
#define USER_DS		KERNEL_DS
#define segment_eq(a,b)	((a).seg == (b).seg)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
