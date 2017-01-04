#define SYSCALL(func)		__NR_##func
#define COMPAT_SYS(func)	__NR_##func
#define PPC_SYS(func)		__NR_##func
#define OLDSYS(func)		-1
#define SYS32ONLY(func)		-1
#define OLDSYS(func)		__NR_old##func
#define SYS32ONLY(func)		__NR_##func
#define SYSX(f, f3264, f32)	-1
#define SYSCALL_SPU(func)	SYSCALL(func)
#define COMPAT_SYS_SPU(func)	COMPAT_SYS(func)
#define PPC_SYS_SPU(func)	PPC_SYS(func)
#define SYSX_SPU(f, f3264, f32)	SYSX(f, f3264, f32)
#define	__NR_ni_syscall		-1
#define	__NR_llseek		__NR__llseek
#undef	__NR_umount
#define	__NR_umount		__NR_umount2
#define	__NR_old_getrlimit	__NR_getrlimit
#define	__NR_newstat		__NR_stat
#define	__NR_newlstat		__NR_lstat
#define	__NR_newfstat		__NR_fstat
#define	__NR_newuname		__NR_uname
#define	__NR_sysctl		__NR__sysctl
#define __NR_olddebug_setcontext	__NR_sys_debug_setcontext
#define getrlimit		ugetrlimit
START_TABLE
END_TABLE __NR_syscalls
