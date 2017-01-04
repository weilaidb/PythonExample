#define _ASM_GENERIC_PERCPU_H_
extern unsigned long __per_cpu_offset[NR_CPUS];
#define per_cpu_offset(x) (__per_cpu_offset[x])
#define __my_cpu_offset per_cpu_offset(raw_smp_processor_id())
#define my_cpu_offset per_cpu_offset(smp_processor_id())
#define my_cpu_offset __my_cpu_offset
#define SHIFT_PERCPU_PTR(__p, __offset)	()
#define per_cpu(var, cpu) \
(*SHIFT_PERCPU_PTR(&(var), per_cpu_offset(cpu)))
#define __this_cpu_ptr(ptr) SHIFT_PERCPU_PTR(ptr, __my_cpu_offset)
#define this_cpu_ptr(ptr) SHIFT_PERCPU_PTR(ptr, my_cpu_offset)
#define this_cpu_ptr(ptr) __this_cpu_ptr(ptr)
#define __get_cpu_var(var) (*this_cpu_ptr(&(var)))
#define __raw_get_cpu_var(var) (*__this_cpu_ptr(&(var)))
extern void setup_per_cpu_areas(void);
#define VERIFY_PERCPU_PTR(__p) ()
#define per_cpu(var, cpu)	(*((void)(cpu), VERIFY_PERCPU_PTR(&(var))))
#define __get_cpu_var(var)	(*VERIFY_PERCPU_PTR(&(var)))
#define __raw_get_cpu_var(var)	(*VERIFY_PERCPU_PTR(&(var)))
#define this_cpu_ptr(ptr)	per_cpu_ptr(ptr, 0)
#define __this_cpu_ptr(ptr)	this_cpu_ptr(ptr)
#define PER_CPU_BASE_SECTION ".data..percpu"
#define PER_CPU_BASE_SECTION ".data"
#define PER_CPU_SHARED_ALIGNED_SECTION ""
#define PER_CPU_ALIGNED_SECTION ""
#define PER_CPU_SHARED_ALIGNED_SECTION "..shared_aligned"
#define PER_CPU_ALIGNED_SECTION "..shared_aligned"
#define PER_CPU_FIRST_SECTION "..first"
#define PER_CPU_SHARED_ALIGNED_SECTION ""
#define PER_CPU_ALIGNED_SECTION "..shared_aligned"
#define PER_CPU_FIRST_SECTION ""
#define PER_CPU_ATTRIBUTES
#define PER_CPU_DEF_ATTRIBUTES
