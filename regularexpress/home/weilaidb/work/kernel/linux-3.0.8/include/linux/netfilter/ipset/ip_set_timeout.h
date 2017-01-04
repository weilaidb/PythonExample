#define _IP_SET_TIMEOUT_H
#define IPSET_GC_TIME			(3 * 60)
#define IPSET_GC_PERIOD(timeout) \
((timeout/3) ? min_t(u32, (timeout)/3, IPSET_GC_TIME) : 1)
#define IPSET_NO_TIMEOUT	UINT_MAX
#define with_timeout(timeout)	((timeout) != IPSET_NO_TIMEOUT)
static inline unsigned int
ip_set_timeout_uget(struct nlattr *tb)
#define IPSET_ELEM_UNSET	0
#define IPSET_ELEM_PERMANENT	(UINT_MAX/2)
static inline bool
ip_set_timeout_test(unsigned long timeout)
static inline bool
ip_set_timeout_expired(unsigned long timeout)
static inline unsigned long
ip_set_timeout_set(u32 timeout)
static inline u32
ip_set_timeout_get(unsigned long timeout)
#define IPSET_ELEM_PERMANENT	0
static inline bool
ip_set_timeout_test(unsigned long timeout)
static inline bool
ip_set_timeout_expired(unsigned long timeout)
static inline unsigned long
ip_set_timeout_set(u32 timeout)
static inline u32
ip_set_timeout_get(unsigned long timeout)
