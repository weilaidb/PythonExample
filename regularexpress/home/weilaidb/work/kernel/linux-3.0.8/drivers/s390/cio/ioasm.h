#define S390_CIO_IOASM_H
struct tpi_info  __attribute__ ((packed));
static inline int stsch_err(struct subchannel_id schid, struct schib *addr)
static inline int msch(struct subchannel_id schid, struct schib *addr)
static inline int msch_err(struct subchannel_id schid, struct schib *addr)
static inline int tsch(struct subchannel_id schid, struct irb *addr)
static inline int ssch(struct subchannel_id schid, union orb *addr)
static inline int csch(struct subchannel_id schid)
static inline int tpi(struct tpi_info *addr)
static inline int chsc(void *chsc_area)
static inline int rchp(struct chp_id chpid)
