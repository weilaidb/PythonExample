#define ASM_SCHID_H
struct subchannel_id  __attribute__ ((packed, aligned(4)));
static inline void
init_subchannel_id(struct subchannel_id *schid)
static inline int
schid_equal(struct subchannel_id *schid1, struct subchannel_id *schid2)
