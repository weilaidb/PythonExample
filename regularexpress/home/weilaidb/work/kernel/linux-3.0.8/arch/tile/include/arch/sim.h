#define __ARCH_SIM_H__
static inline int
sim_is_simulator(void)
static __inline void
sim_checkpoint(void)
static __inline unsigned int
sim_get_tracing(void)
static __inline void
sim_set_tracing(unsigned int mask)
static __inline void
sim_dump(unsigned int mask)
static __inline void
sim_print(const char* str)
static __inline void
sim_print_string(const char* str)
static __inline void
sim_command(const char* str)
static __inline long _sim_syscall0(int val)
static __inline long _sim_syscall1(int val, long arg1)
static __inline long _sim_syscall2(int val, long arg1, long arg2)
static __inline long _sim_syscall3(int val, long arg1, long arg2, long arg3)
static __inline long _sim_syscall4(int val, long arg1, long arg2, long arg3,
long arg4)
static __inline long _sim_syscall5(int val, long arg1, long arg2, long arg3,
long arg4, long arg5)
#define _sim_syscall(syscall_num, nr, args...) \
_sim_syscall##nr( \
((syscall_num) << _SIM_CONTROL_OPERATOR_BITS) | SIM_CONTROL_SYSCALL, \
##args)
#define SIM_WATCHPOINT_READ    1
#define SIM_WATCHPOINT_WRITE   2
#define SIM_WATCHPOINT_EXECUTE 4
static __inline int
sim_add_watchpoint(unsigned int process_id,
unsigned long address,
unsigned long size,
unsigned int access_mask,
unsigned long user_data)
static __inline int
sim_remove_watchpoint(unsigned int process_id,
unsigned long address,
unsigned long size,
unsigned int access_mask,
unsigned long user_data)
struct SimQueryWatchpointStatus
;
static __inline struct SimQueryWatchpointStatus
sim_query_watchpoint(unsigned int process_id)
static __inline void
sim_validate_lines_evicted(unsigned long long pa, unsigned long length)
static __inline long
sim_query_cpu_speed(void)
static __inline int
sim_set_shaping(unsigned shim,
unsigned type,
unsigned units,
unsigned rate)
static __inline void
sim_enable_mpipe_links(unsigned mpipe, unsigned long link_mask)
static __inline void
sim_disable_mpipe_links(unsigned mpipe, unsigned long link_mask)
#define sim_enable_functional() \
__insn_mtspr(SPR_SIM_CONTROL, SIM_CONTROL_ENABLE_FUNCTIONAL)
#define sim_disable_functional() \
__insn_mtspr(SPR_SIM_CONTROL, SIM_CONTROL_DISABLE_FUNCTIONAL)
static __inline void
sim_profiler_enable(void)
static __inline void
sim_profiler_disable(void)
static __inline void
sim_profiler_set_enabled(int enabled)
static __inline int
sim_profiler_is_enabled(void)
static __inline void
sim_profiler_clear(void)
static __inline void
sim_profiler_chip_enable(unsigned int mask)
static __inline void
sim_profiler_chip_disable(unsigned int mask)
static __inline void
sim_profiler_chip_clear(unsigned int mask)
static __inline void
sim_event_begin(unsigned int x)
static __inline void
sim_event_end(unsigned int x)
