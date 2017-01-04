typedef void (*syscall_t)(void);
syscall_t sys_call_table[__NR_syscall_count]= ;
asmlinkage long xtensa_shmat(int shmid, char __user *shmaddr, int shmflg)
asmlinkage long xtensa_fadvise64_64(int fd, int advice, unsigned long long offset, unsigned long long len)
