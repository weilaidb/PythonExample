#define _ASM_SEGMENT_H
typedef struct  mm_segment_t;
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define USER_DS			MAKE_MM_SEG(TASK_SIZE - 1)
#define KERNEL_DS		MAKE_MM_SEG(0xdfffffffUL)
#define USER_DS			MAKE_MM_SEG(memory_end)
#define KERNEL_DS		MAKE_MM_SEG(0xe0000000UL)
#define get_ds()		(KERNEL_DS)
#define get_fs()		(__current_thread_info->addr_limit)
#define segment_eq(a,b)		((a).seg == (b).seg)
#define __kernel_ds_p()		segment_eq(get_fs(), KERNEL_DS)
#define get_addr_limit()	(get_fs().seg)
#define set_fs(_x)					\
do  while(0)
