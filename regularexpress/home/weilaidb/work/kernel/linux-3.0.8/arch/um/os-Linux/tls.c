#define PTRACE_GET_THREAD_AREA 25
#define PTRACE_SET_THREAD_AREA 26
int os_set_thread_area(user_desc_t *info, int pid)
int os_get_thread_area(user_desc_t *info, int pid)
