#define _ASM_X86_VSYSCALL_H
enum vsyscall_num ;
#define VSYSCALL_START (-10UL << 20)
#define VSYSCALL_SIZE 1024
#define VSYSCALL_END (-2UL << 20)
#define VSYSCALL_MAPPED_PAGES 1
#define VSYSCALL_ADDR(vsyscall_nr) (VSYSCALL_START+VSYSCALL_SIZE*(vsyscall_nr))
#define __vsyscall_fn \
__attribute__ ((unused, __section__(".vsyscall_fn"))) notrace
#define VGETCPU_RDTSCP	1
#define VGETCPU_LSL	2
extern int vgetcpu_mode;
extern struct timezone sys_tz;
extern void map_vsyscall(void);
