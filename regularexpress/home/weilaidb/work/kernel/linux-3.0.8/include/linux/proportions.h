#define _LINUX_PROPORTIONS_H
struct prop_global ;
struct prop_descriptor ;
int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);
struct prop_local_percpu ;
int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
long *numerator, long *denominator);
static inline
void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
#define PROP_MAX_SHIFT (3*BITS_PER_LONG/4)
#define PROP_FRAC_SHIFT		(BITS_PER_LONG - PROP_MAX_SHIFT - 1)
#define PROP_FRAC_BASE		(1UL << PROP_FRAC_SHIFT)
void __prop_inc_percpu_max(struct prop_descriptor *pd,
struct prop_local_percpu *pl, long frac);
struct prop_local_single ;
#define INIT_PROP_LOCAL_SINGLE(name)			\
int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
long *numerator, long *denominator);
static inline
void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
