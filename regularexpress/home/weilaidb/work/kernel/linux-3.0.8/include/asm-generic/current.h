#define __ASM_GENERIC_CURRENT_H
#define get_current() (current_thread_info()->task)
#define current get_current()
