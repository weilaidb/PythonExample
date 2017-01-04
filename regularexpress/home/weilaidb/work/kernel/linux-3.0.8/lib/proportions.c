int prop_descriptor_init(struct prop_descriptor *pd, int shift)
void prop_change_shift(struct prop_descriptor *pd, int shift)
static struct prop_global *prop_get_global(struct prop_descriptor *pd)
__acquires(RCU)
static void prop_put_global(struct prop_descriptor *pd, struct prop_global *pg)
__releases(RCU)
static void
prop_adjust_shift(int *pl_shift, unsigned long *pl_period, int new_shift)
#define PROP_BATCH (8*(1+ilog2(nr_cpu_ids)))
int prop_local_init_percpu(struct prop_local_percpu *pl)
void prop_local_destroy_percpu(struct prop_local_percpu *pl)
static
void prop_norm_percpu(struct prop_global *pg, struct prop_local_percpu *pl)
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
void __prop_inc_percpu_max(struct prop_descriptor *pd,
struct prop_local_percpu *pl, long frac)
void prop_fraction_percpu(struct prop_descriptor *pd,
struct prop_local_percpu *pl,
long *numerator, long *denominator)
int prop_local_init_single(struct prop_local_single *pl)
void prop_local_destroy_single(struct prop_local_single *pl)
static
void prop_norm_single(struct prop_global *pg, struct prop_local_single *pl)
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
void prop_fraction_single(struct prop_descriptor *pd,
struct prop_local_single *pl,
long *numerator, long *denominator)
