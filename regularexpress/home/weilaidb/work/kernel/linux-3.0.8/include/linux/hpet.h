#define	__HPET__ 1
struct hpet ;
#define	hpet_mc		_u0._hpet_mc
#define	hpet_compare	_u1._hpet_compare
#define	HPET_MAX_TIMERS	(32)
#define	HPET_MAX_IRQ	(32)
#define	HPET_COUNTER_CLK_PERIOD_MASK	(0xffffffff00000000ULL)
#define	HPET_COUNTER_CLK_PERIOD_SHIFT	(32UL)
#define	HPET_VENDOR_ID_MASK		(0x00000000ffff0000ULL)
#define	HPET_VENDOR_ID_SHIFT		(16ULL)
#define	HPET_LEG_RT_CAP_MASK		(0x8000)
#define	HPET_COUNTER_SIZE_MASK		(0x2000)
#define	HPET_NUM_TIM_CAP_MASK		(0x1f00)
#define	HPET_NUM_TIM_CAP_SHIFT		(8ULL)
#define	HPET_LEG_RT_CNF_MASK		(2UL)
#define	HPET_ENABLE_CNF_MASK		(1UL)
#define	Tn_INT_ROUTE_CAP_MASK		(0xffffffff00000000ULL)
#define	Tn_INT_ROUTE_CAP_SHIFT		(32UL)
#define	Tn_FSB_INT_DELCAP_MASK		(0x8000UL)
#define	Tn_FSB_INT_DELCAP_SHIFT		(15)
#define	Tn_FSB_EN_CNF_MASK		(0x4000UL)
#define	Tn_FSB_EN_CNF_SHIFT		(14)
#define	Tn_INT_ROUTE_CNF_MASK		(0x3e00UL)
#define	Tn_INT_ROUTE_CNF_SHIFT		(9)
#define	Tn_32MODE_CNF_MASK		(0x0100UL)
#define	Tn_VAL_SET_CNF_MASK		(0x0040UL)
#define	Tn_SIZE_CAP_MASK		(0x0020UL)
#define	Tn_PER_INT_CAP_MASK		(0x0010UL)
#define	Tn_TYPE_CNF_MASK		(0x0008UL)
#define	Tn_INT_ENB_CNF_MASK		(0x0004UL)
#define	Tn_INT_TYPE_CNF_MASK		(0x0002UL)
#define	Tn_FSB_INT_ADDR_MASK		(0xffffffff00000000ULL)
#define	Tn_FSB_INT_ADDR_SHIFT		(32UL)
#define	Tn_FSB_INT_VAL_MASK		(0x00000000ffffffffULL)
struct hpet_data ;
static inline void hpet_reserve_timer(struct hpet_data *hd, int timer)
int hpet_alloc(struct hpet_data *);
struct hpet_info ;
#define HPET_INFO_PERIODIC	0x0010
#define	HPET_IE_ON	_IO('h', 0x01)
#define	HPET_IE_OFF	_IO('h', 0x02)
#define	HPET_INFO	_IOR('h', 0x03, struct hpet_info)
#define	HPET_EPI	_IO('h', 0x04)
#define	HPET_DPI	_IO('h', 0x05)
#define	HPET_IRQFREQ	_IOW('h', 0x6, unsigned long)
#define MAX_HPET_TBS	8
