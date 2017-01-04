#define _LINUX_VMSTAT_H
extern int sysctl_stat_interval;
struct vm_event_state ;
DECLARE_PER_CPU(struct vm_event_state, vm_event_states);
static inline void __count_vm_event(enum vm_event_item item)
static inline void count_vm_event(enum vm_event_item item)
static inline void __count_vm_events(enum vm_event_item item, long delta)
static inline void count_vm_events(enum vm_event_item item, long delta)
extern void all_vm_events(unsigned long *);
extern void vm_events_fold_cpu(int cpu);
static inline void vm_events_fold_cpu(int cpu)
static inline void count_vm_event(enum vm_event_item item)
static inline void count_vm_events(enum vm_event_item item, long delta)
static inline void __count_vm_event(enum vm_event_item item)
static inline void __count_vm_events(enum vm_event_item item, long delta)
static inline void all_vm_events(unsigned long *ret)
static inline void vm_events_fold_cpu(int cpu)
#define __count_zone_vm_events(item, zone, delta) \
__count_vm_events(item##_NORMAL - ZONE_NORMAL + \
zone_idx(zone), delta)
extern atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
static inline void zone_page_state_add(long x, struct zone *zone,
enum zone_stat_item item)
static inline unsigned long global_page_state(enum zone_stat_item item)
static inline unsigned long zone_page_state(struct zone *zone,
enum zone_stat_item item)
static inline unsigned long zone_page_state_snapshot(struct zone *zone,
enum zone_stat_item item)
extern unsigned long global_reclaimable_pages(void);
extern unsigned long zone_reclaimable_pages(struct zone *zone);
static inline unsigned long node_page_state(int node,
enum zone_stat_item item)
extern void zone_statistics(struct zone *, struct zone *, gfp_t gfp);
#define node_page_state(node, item) global_page_state(item)
#define zone_statistics(_zl, _z, gfp) do  while (0)
#define add_zone_page_state(__z, __i, __d) mod_zone_page_state(__z, __i, __d)
#define sub_zone_page_state(__z, __i, __d) mod_zone_page_state(__z, __i, -(__d))
static inline void zap_zone_vm_stats(struct zone *zone)
extern void inc_zone_state(struct zone *, enum zone_stat_item);
void __mod_zone_page_state(struct zone *, enum zone_stat_item item, int);
void __inc_zone_page_state(struct page *, enum zone_stat_item);
void __dec_zone_page_state(struct page *, enum zone_stat_item);
void mod_zone_page_state(struct zone *, enum zone_stat_item, int);
void inc_zone_page_state(struct page *, enum zone_stat_item);
void dec_zone_page_state(struct page *, enum zone_stat_item);
extern void inc_zone_state(struct zone *, enum zone_stat_item);
extern void __inc_zone_state(struct zone *, enum zone_stat_item);
extern void dec_zone_state(struct zone *, enum zone_stat_item);
extern void __dec_zone_state(struct zone *, enum zone_stat_item);
void refresh_cpu_vm_stats(int);
void refresh_zone_stat_thresholds(void);
int calculate_pressure_threshold(struct zone *zone);
int calculate_normal_threshold(struct zone *zone);
void set_pgdat_percpu_threshold(pg_data_t *pgdat,
int (*calculate_pressure)(struct zone *));
static inline void __mod_zone_page_state(struct zone *zone,
enum zone_stat_item item, int delta)
static inline void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
static inline void __inc_zone_page_state(struct page *page,
enum zone_stat_item item)
static inline void __dec_zone_state(struct zone *zone, enum zone_stat_item item)
static inline void __dec_zone_page_state(struct page *page,
enum zone_stat_item item)
#define inc_zone_page_state __inc_zone_page_state
#define dec_zone_page_state __dec_zone_page_state
#define mod_zone_page_state __mod_zone_page_state
#define set_pgdat_percpu_threshold(pgdat, callback)
static inline void refresh_cpu_vm_stats(int cpu)
static inline void refresh_zone_stat_thresholds(void)
extern const char * const vmstat_text[];
