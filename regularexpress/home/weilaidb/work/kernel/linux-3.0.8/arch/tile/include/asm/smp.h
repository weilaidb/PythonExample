#define _ASM_TILE_SMP_H
void init_messaging(void);
void init_per_tile_IRQs(void);
void send_IPI_many(const struct cpumask *mask, int tag);
void send_IPI_allbutself(int tag);
void send_IPI_single(int dest, int tag);
void evaluate_message(int tag);
void online_secondary(void);
extern void on_each_cpu_mask(const struct cpumask *mask,
void (*func)(void *), void *info, bool wait);
extern HV_Topology smp_topology;
#define smp_height		(smp_topology.height)
#define smp_width		(smp_topology.width)
static inline int cpu_x(int cpu)
static inline int cpu_y(int cpu)
static inline int xy_to_cpu(int x, int y)
#define MSG_TAG_START_CPU		1
#define MSG_TAG_STOP_CPU		2
#define MSG_TAG_CALL_FUNCTION_MANY	3
#define MSG_TAG_CALL_FUNCTION_SINGLE	4
static inline void arch_send_call_function_ipi_mask(struct cpumask *mask)
static inline void arch_send_call_function_single_ipi(int cpu)
void print_disabled_cpus(void);
#define on_each_cpu_mask(mask, func, info, wait)		\
do  while (0)
#define smp_master_cpu		0
#define smp_height		1
#define smp_width		1
#define cpu_x(cpu)		0
#define cpu_y(cpu)		0
#define xy_to_cpu(x, y)		0
extern struct cpumask cpu_lotar_map;
#define cpu_is_valid_lotar(cpu) cpumask_test_cpu((cpu), &cpu_lotar_map)
#if CHIP_HAS_CBOX_HOME_MAP()
extern struct cpumask hash_for_home_map;
extern struct cpumask cpu_cacheable_map;
#define cpu_cacheable(cpu) cpumask_test_cpu((cpu), &cpu_cacheable_map)
static inline int hv_lotar_to_cpu(HV_LOTAR lotar)
int bitmap_parselist_crop(const char *bp, unsigned long *maskp, int nmaskbits);
#define cpulist_parse_crop(buf, dst) \
__cpulist_parse_crop((buf), (dst), NR_CPUS)
static inline int __cpulist_parse_crop(const char *buf, struct cpumask *dstp,
int nbits)
void ipi_init(void);
extern unsigned long start_cpu_function_addr;
