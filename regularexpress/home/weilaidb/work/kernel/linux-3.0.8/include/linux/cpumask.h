#define __LINUX_CPUMASK_H
typedef struct cpumask  cpumask_t;
#define cpumask_bits(maskp) ((maskp)->bits)
#if NR_CPUS == 1
#define nr_cpu_ids		1
extern int nr_cpu_ids;
#define nr_cpumask_bits	nr_cpu_ids
#define nr_cpumask_bits	NR_CPUS
extern const struct cpumask *const cpu_possible_mask;
extern const struct cpumask *const cpu_online_mask;
extern const struct cpumask *const cpu_present_mask;
extern const struct cpumask *const cpu_active_mask;
#if NR_CPUS > 1
#define num_online_cpus()	cpumask_weight(cpu_online_mask)
#define num_possible_cpus()	cpumask_weight(cpu_possible_mask)
#define num_present_cpus()	cpumask_weight(cpu_present_mask)
#define num_active_cpus()	cpumask_weight(cpu_active_mask)
#define cpu_online(cpu)		cpumask_test_cpu((cpu), cpu_online_mask)
#define cpu_possible(cpu)	cpumask_test_cpu((cpu), cpu_possible_mask)
#define cpu_present(cpu)	cpumask_test_cpu((cpu), cpu_present_mask)
#define cpu_active(cpu)		cpumask_test_cpu((cpu), cpu_active_mask)
#define num_online_cpus()	1U
#define num_possible_cpus()	1U
#define num_present_cpus()	1U
#define num_active_cpus()	1U
#define cpu_online(cpu)		((cpu) == 0)
#define cpu_possible(cpu)	((cpu) == 0)
#define cpu_present(cpu)	((cpu) == 0)
#define cpu_active(cpu)		((cpu) == 0)
static inline unsigned int cpumask_check(unsigned int cpu)
#if NR_CPUS == 1
static inline unsigned int cpumask_first(const struct cpumask *srcp)
static inline unsigned int cpumask_next(int n, const struct cpumask *srcp)
static inline unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
static inline unsigned int cpumask_next_and(int n,
const struct cpumask *srcp,
const struct cpumask *andp)
static inline unsigned int cpumask_any_but(const struct cpumask *mask,
unsigned int cpu)
#define for_each_cpu(cpu, mask)			\
for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
#define for_each_cpu_not(cpu, mask)		\
for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
#define for_each_cpu_and(cpu, mask, and)	\
for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask, (void)and)
static inline unsigned int cpumask_first(const struct cpumask *srcp)
static inline unsigned int cpumask_next(int n, const struct cpumask *srcp)
static inline unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
int cpumask_next_and(int n, const struct cpumask *, const struct cpumask *);
int cpumask_any_but(const struct cpumask *mask, unsigned int cpu);
#define for_each_cpu(cpu, mask)				\
for ((cpu) = -1;				\
(cpu) = cpumask_next((cpu), (mask)),	\
(cpu) < nr_cpu_ids;)
#define for_each_cpu_not(cpu, mask)				\
for ((cpu) = -1;					\
(cpu) = cpumask_next_zero((cpu), (mask)),	\
(cpu) < nr_cpu_ids;)
#define for_each_cpu_and(cpu, mask, and)				\
for ((cpu) = -1;						\
(cpu) = cpumask_next_and((cpu), (mask), (and)),		\
(cpu) < nr_cpu_ids;)
#define CPU_BITS_NONE						\
#define CPU_BITS_CPU0						\
static inline void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
static inline void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
#define cpumask_test_cpu(cpu, cpumask) \
test_bit(cpumask_check(cpu), cpumask_bits((cpumask)))
static inline int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
static inline int cpumask_test_and_clear_cpu(int cpu, struct cpumask *cpumask)
static inline void cpumask_setall(struct cpumask *dstp)
static inline void cpumask_clear(struct cpumask *dstp)
static inline int cpumask_and(struct cpumask *dstp,
const struct cpumask *src1p,
const struct cpumask *src2p)
static inline void cpumask_or(struct cpumask *dstp, const struct cpumask *src1p,
const struct cpumask *src2p)
static inline void cpumask_xor(struct cpumask *dstp,
const struct cpumask *src1p,
const struct cpumask *src2p)
static inline int cpumask_andnot(struct cpumask *dstp,
const struct cpumask *src1p,
const struct cpumask *src2p)
static inline void cpumask_complement(struct cpumask *dstp,
const struct cpumask *srcp)
static inline bool cpumask_equal(const struct cpumask *src1p,
const struct cpumask *src2p)
static inline bool cpumask_intersects(const struct cpumask *src1p,
const struct cpumask *src2p)
static inline int cpumask_subset(const struct cpumask *src1p,
const struct cpumask *src2p)
static inline bool cpumask_empty(const struct cpumask *srcp)
static inline bool cpumask_full(const struct cpumask *srcp)
static inline unsigned int cpumask_weight(const struct cpumask *srcp)
static inline void cpumask_shift_right(struct cpumask *dstp,
const struct cpumask *srcp, int n)
static inline void cpumask_shift_left(struct cpumask *dstp,
const struct cpumask *srcp, int n)
static inline void cpumask_copy(struct cpumask *dstp,
const struct cpumask *srcp)
#define cpumask_any(srcp) cpumask_first(srcp)
#define cpumask_first_and(src1p, src2p) cpumask_next_and(-1, (src1p), (src2p))
#define cpumask_any_and(mask1, mask2) cpumask_first_and((mask1), (mask2))
#define cpumask_of(cpu) (get_cpu_mask(cpu))
static inline int cpumask_scnprintf(char *buf, int len,
const struct cpumask *srcp)
static inline int cpumask_parse_user(const char __user *buf, int len,
struct cpumask *dstp)
static inline int cpumask_parselist_user(const char __user *buf, int len,
struct cpumask *dstp)
static inline int cpulist_scnprintf(char *buf, int len,
const struct cpumask *srcp)
static inline int cpulist_parse(const char *buf, struct cpumask *dstp)
static inline size_t cpumask_size(void)
typedef struct cpumask *cpumask_var_t;
bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node);
bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags);
bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node);
bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags);
void alloc_bootmem_cpumask_var(cpumask_var_t *mask);
void free_cpumask_var(cpumask_var_t mask);
void free_bootmem_cpumask_var(cpumask_var_t mask);
typedef struct cpumask cpumask_var_t[1];
static inline bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
static inline bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
int node)
static inline bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
static inline bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
int node)
static inline void alloc_bootmem_cpumask_var(cpumask_var_t *mask)
static inline void free_cpumask_var(cpumask_var_t mask)
static inline void free_bootmem_cpumask_var(cpumask_var_t mask)
extern const DECLARE_BITMAP(cpu_all_bits, NR_CPUS);
#define cpu_all_mask to_cpumask(cpu_all_bits)
#define cpu_none_mask to_cpumask(cpu_bit_bitmap[0])
#define for_each_possible_cpu(cpu) for_each_cpu((cpu), cpu_possible_mask)
#define for_each_online_cpu(cpu)   for_each_cpu((cpu), cpu_online_mask)
#define for_each_present_cpu(cpu)  for_each_cpu((cpu), cpu_present_mask)
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present(const struct cpumask *src);
void init_cpu_possible(const struct cpumask *src);
void init_cpu_online(const struct cpumask *src);
#define to_cpumask(bitmap)						\
((struct cpumask *)(1 ? (bitmap)				\
: (void *)sizeof(__check_is_bitmap(bitmap))))
static inline int __check_is_bitmap(const unsigned long *bitmap)
extern const unsigned long
cpu_bit_bitmap[BITS_PER_LONG+1][BITS_TO_LONGS(NR_CPUS)];
static inline const struct cpumask *get_cpu_mask(unsigned int cpu)
#define cpu_is_offline(cpu)	unlikely(!cpu_online(cpu))
#if NR_CPUS <= BITS_PER_LONG
#define CPU_BITS_ALL						\
#define CPU_BITS_ALL						\
#define cpu_possible_map	(*(cpumask_t *)cpu_possible_mask)
#define cpu_online_map		(*(cpumask_t *)cpu_online_mask)
#define cpu_present_map		(*(cpumask_t *)cpu_present_mask)
#define cpu_active_map		(*(cpumask_t *)cpu_active_mask)
#define cpumask_of_cpu(cpu) (*get_cpu_mask(cpu))
#define CPU_MASK_LAST_WORD BITMAP_LAST_WORD_MASK(NR_CPUS)
#if NR_CPUS <= BITS_PER_LONG
#define CPU_MASK_ALL							\
(cpumask_t)
#define CPU_MASK_ALL							\
(cpumask_t)
#define CPU_MASK_NONE							\
(cpumask_t)
#define CPU_MASK_CPU0							\
(cpumask_t)
#if NR_CPUS == 1
#define first_cpu(src)		()
#define next_cpu(n, src)	()
#define any_online_cpu(mask)	0
#define for_each_cpu_mask(cpu, mask)	\
for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
int __first_cpu(const cpumask_t *srcp);
int __next_cpu(int n, const cpumask_t *srcp);
int __any_online_cpu(const cpumask_t *mask);
#define first_cpu(src)		__first_cpu(&(src))
#define next_cpu(n, src)	__next_cpu((n), &(src))
#define any_online_cpu(mask) __any_online_cpu(&(mask))
#define for_each_cpu_mask(cpu, mask)			\
for ((cpu) = -1;				\
(cpu) = next_cpu((cpu), (mask)),	\
(cpu) < NR_CPUS; )
#if NR_CPUS <= 64
#define for_each_cpu_mask_nr(cpu, mask)	for_each_cpu_mask(cpu, mask)
int __next_cpu_nr(int n, const cpumask_t *srcp);
#define for_each_cpu_mask_nr(cpu, mask)			\
for ((cpu) = -1;				\
(cpu) = __next_cpu_nr((cpu), &(mask)),	\
(cpu) < nr_cpu_ids; )
#define cpus_addr(src) ((src).bits)
#define cpu_set(cpu, dst) __cpu_set((cpu), &(dst))
static inline void __cpu_set(int cpu, volatile cpumask_t *dstp)
#define cpu_clear(cpu, dst) __cpu_clear((cpu), &(dst))
static inline void __cpu_clear(int cpu, volatile cpumask_t *dstp)
#define cpus_setall(dst) __cpus_setall(&(dst), NR_CPUS)
static inline void __cpus_setall(cpumask_t *dstp, int nbits)
#define cpus_clear(dst) __cpus_clear(&(dst), NR_CPUS)
static inline void __cpus_clear(cpumask_t *dstp, int nbits)
#define cpu_isset(cpu, cpumask) test_bit((cpu), (cpumask).bits)
#define cpu_test_and_set(cpu, cpumask) __cpu_test_and_set((cpu), &(cpumask))
static inline int __cpu_test_and_set(int cpu, cpumask_t *addr)
#define cpus_and(dst, src1, src2) __cpus_and(&(dst), &(src1), &(src2), NR_CPUS)
static inline int __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_or(dst, src1, src2) __cpus_or(&(dst), &(src1), &(src2), NR_CPUS)
static inline void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_xor(dst, src1, src2) __cpus_xor(&(dst), &(src1), &(src2), NR_CPUS)
static inline void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_andnot(dst, src1, src2) \
__cpus_andnot(&(dst), &(src1), &(src2), NR_CPUS)
static inline int __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_equal(src1, src2) __cpus_equal(&(src1), &(src2), NR_CPUS)
static inline int __cpus_equal(const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_intersects(src1, src2) __cpus_intersects(&(src1), &(src2), NR_CPUS)
static inline int __cpus_intersects(const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_subset(src1, src2) __cpus_subset(&(src1), &(src2), NR_CPUS)
static inline int __cpus_subset(const cpumask_t *src1p,
const cpumask_t *src2p, int nbits)
#define cpus_empty(src) __cpus_empty(&(src), NR_CPUS)
static inline int __cpus_empty(const cpumask_t *srcp, int nbits)
#define cpus_weight(cpumask) __cpus_weight(&(cpumask), NR_CPUS)
static inline int __cpus_weight(const cpumask_t *srcp, int nbits)
#define cpus_shift_left(dst, src, n) \
__cpus_shift_left(&(dst), &(src), (n), NR_CPUS)
static inline void __cpus_shift_left(cpumask_t *dstp,
const cpumask_t *srcp, int n, int nbits)
