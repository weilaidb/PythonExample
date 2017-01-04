#if !defined(_ASM_TILE_UNISTD_H) || defined(__SYSCALL)
#define _ASM_TILE_UNISTD_H
#if !defined(__LP64__) || defined(__SYSCALL_COMPAT)
#define __ARCH_WANT_SYNC_FILE_RANGE2
#define __NR_flush_cache	(__NR_arch_specific_syscall + 1)
__SYSCALL(__NR_flush_cache, sys_flush_cache)
#define __NR_FAST_cmpxchg	-1
#define __NR_FAST_atomic_update	-2
#define __NR_FAST_cmpxchg64	-3
#define __NR_cmpxchg_badaddr	(__NR_arch_specific_syscall + 0)
__SYSCALL(__NR_cmpxchg_badaddr, sys_cmpxchg_badaddr)
#define __ARCH_WANT_SYS_LLSEEK
#define __ARCH_WANT_SYS_NEWFSTATAT
