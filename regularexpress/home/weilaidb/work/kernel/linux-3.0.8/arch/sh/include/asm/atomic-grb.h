#define __ASM_SH_ATOMIC_GRB_H
static inline void atomic_add(int i, atomic_t *v)
static inline void atomic_sub(int i, atomic_t *v)
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_sub_return(int i, atomic_t *v)
static inline void atomic_clear_mask(unsigned int mask, atomic_t *v)
static inline void atomic_set_mask(unsigned int mask, atomic_t *v)
