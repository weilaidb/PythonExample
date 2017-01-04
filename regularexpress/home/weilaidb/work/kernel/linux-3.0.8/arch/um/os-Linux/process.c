#define ARBITRARY_ADDR -1
#define FAILURE_PID    -1
#define STAT_PATH_LEN sizeof("/proc/#######/stat\0")
#define COMM_SCANF "%*[^)])"
unsigned long os_process_pc(int pid)
int os_process_parent(int pid)
void os_stop_process(int pid)
void os_kill_process(int pid, int reap_child)
long os_ptrace_ldt(long pid, long addr, long data)
void os_kill_ptraced_process(int pid, int reap_child)
int os_getpid(void)
int os_getpgrp(void)
int os_map_memory(void *virt, int fd, unsigned long long off, unsigned long len,
int r, int w, int x)
int os_protect_memory(void *addr, unsigned long len, int r, int w, int x)
int os_unmap_memory(void *addr, int len)
#define MADV_REMOVE KERNEL_MADV_REMOVE
int os_drop_memory(void *addr, int length)
int __init can_drop_memory(void)
void init_new_thread_signals(void)
int run_kernel_thread(int (*fn)(void *), void *arg, jmp_buf **jmp_ptr)
