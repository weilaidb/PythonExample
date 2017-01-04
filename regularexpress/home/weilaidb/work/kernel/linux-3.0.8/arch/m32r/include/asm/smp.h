#define _ASM_M32R_SMP_H
#define PHYSID_ARRAY_SIZE       1
struct physid_mask
;
typedef struct physid_mask physid_mask_t;
#define physid_set(physid, map)                 set_bit(physid, (map).mask)
#define physid_clear(physid, map)               clear_bit(physid, (map).mask)
#define physid_isset(physid, map)               test_bit(physid, (map).mask)
#define physid_test_and_set(physid, map)        test_and_set_bit(physid, (map).mask)
#define physids_and(dst, src1, src2)            bitmap_and((dst).mask, (src1).mask, (src2).mask, MAX_APICS)
#define physids_or(dst, src1, src2)             bitmap_or((dst).mask, (src1).mask, (src2).mask, MAX_APICS)
#define physids_clear(map)                      bitmap_zero((map).mask, MAX_APICS)
#define physids_complement(dst, src)            bitmap_complement((dst).mask,(src).mask, MAX_APICS)
#define physids_empty(map)                      bitmap_empty((map).mask, MAX_APICS)
#define physids_equal(map1, map2)               bitmap_equal((map1).mask, (map2).mask, MAX_APICS)
#define physids_weight(map)                     bitmap_weight((map).mask, MAX_APICS)
#define physids_shift_right(d, s, n)            bitmap_shift_right((d).mask, (s).mask, n, MAX_APICS)
#define physids_shift_left(d, s, n)             bitmap_shift_left((d).mask, (s).mask, n, MAX_APICS)
#define physids_coerce(map)                     ((map).mask[0])
#define physids_promote(physids)					\
()
#define physid_mask_of_physid(physid)					\
()
#define PHYSID_MASK_ALL
#define PHYSID_MASK_NONE
extern physid_mask_t phys_cpu_present_map;
extern volatile int cpu_2_physid[NR_CPUS];
#define cpu_to_physid(cpu_id)	cpu_2_physid[cpu_id]
#define raw_smp_processor_id()	(current_thread_info()->cpu)
extern cpumask_t cpu_callout_map;
static __inline__ int hard_smp_processor_id(void)
static __inline__ int cpu_logical_map(int cpu)
static __inline__ int cpu_number_map(int cpu)
static __inline__ unsigned int num_booting_cpus(void)
extern void smp_send_timer(void);
extern unsigned long send_IPI_mask_phys(const cpumask_t*, int, int);
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
#define NO_PROC_ID (0xff)
#define RESCHEDULE_IPI		(M32R_IRQ_IPI0-M32R_IRQ_IPI0)
#define INVALIDATE_TLB_IPI	(M32R_IRQ_IPI1-M32R_IRQ_IPI0)
#define CALL_FUNCTION_IPI	(M32R_IRQ_IPI2-M32R_IRQ_IPI0)
#define LOCAL_TIMER_IPI		(M32R_IRQ_IPI3-M32R_IRQ_IPI0)
#define INVALIDATE_CACHE_IPI	(M32R_IRQ_IPI4-M32R_IRQ_IPI0)
#define CPU_BOOT_IPI		(M32R_IRQ_IPI5-M32R_IRQ_IPI0)
#define CALL_FUNC_SINGLE_IPI	(M32R_IRQ_IPI6-M32R_IRQ_IPI0)
#define IPI_SHIFT	(0)
#define NR_IPIS		(8)
#define hard_smp_processor_id()		0
