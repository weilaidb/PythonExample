#define _ASM_S390_CHPID_H _ASM_S390_CHPID_H
#define __MAX_CHPID 255
struct chp_id  __attribute__((packed));
static inline void chp_id_init(struct chp_id *chpid)
static inline int chp_id_is_equal(struct chp_id *a, struct chp_id *b)
static inline void chp_id_next(struct chp_id *chpid)
static inline int chp_id_is_valid(struct chp_id *chpid)
#define chp_id_for_each(c) \
for (chp_id_init(c); chp_id_is_valid(c); chp_id_next(c))
