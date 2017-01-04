#define _SPARC_OBIO_H
#define CSR_BASE_ADDR		0xe0000000
#define CSR_CPU_SHIFT		(32 - 4 - 5)
#define CSR_XDBUS_SHIFT		8
#define CSR_BASE(cpu) (((CSR_BASE_ADDR >> CSR_CPU_SHIFT) + cpu) << CSR_CPU_SHIFT)
#define ECSR_BASE_ADDR		0x00000000
#define ECSR_CPU_SHIFT		(32 - 5)
#define ECSR_DEV_SHIFT		(32 - 8)
#define ECSR_BASE(cpu) ((cpu) << ECSR_CPU_SHIFT)
#define ECSR_DEV_BASE(devid) ((devid) << ECSR_DEV_SHIFT)
#define BW_LOCAL_BASE		0xfff00000
#define BW_CID			0x00000000
#define BW_DBUS_CTRL		0x00000008
#define BW_DBUS_DATA		0x00000010
#define BW_CTRL			0x00001000
#define BW_INTR_TABLE		0x00001040
#define BW_INTR_TABLE_CLEAR	0x00001080
#define BW_PRESCALER		0x000010c0
#define BW_PTIMER_LIMIT		0x00002000
#define BW_PTIMER_COUNTER2	0x00002004
#define BW_PTIMER_NDLIMIT	0x00002008
#define BW_PTIMER_CTRL		0x0000200c
#define BW_PTIMER_COUNTER	0x00002010
#define BW_TIMER_LIMIT		0x00003000
#define BW_TIMER_COUNTER2	0x00003004
#define BW_TIMER_NDLIMIT	0x00003008
#define BW_TIMER_CTRL		0x0000300c
#define BW_TIMER_COUNTER	0x00003010
#define BW_CTRL_USER_TIMER	0x00000004
#define BB_LOCAL_BASE		0xf0000000
#define BB_STAT1		0x00100000
#define BB_STAT2		0x00120000
#define BB_STAT3		0x00140000
#define BB_LEDS			0x002e0000
#define BB_STAT2_AC_INTR	0x04
#define BB_STAT2_TMP_INTR	0x10
#define BB_STAT2_FAN_INTR	0x20
#define BB_STAT2_PWR_INTR	0x40
#define BB_STAT2_MASK		(BB_STAT2_AC_INTR|BB_STAT2_TMP_INTR|BB_STAT2_FAN_INTR|BB_STAT2_PWR_INTR)
#define CC_BASE		0x1F00000
#define CC_DATSTREAM	0x1F00000
#define CC_DATSIZE	0x1F0003F
#define CC_SRCSTREAM	0x1F00100
#define CC_DESSTREAM	0x1F00200
#define CC_RMCOUNT	0x1F00300
#define CC_IPEN		0x1F00406
#define CC_IMSK		0x1F00506
#define CC_ICLR		0x1F00606
#define CC_IGEN		0x1F00704
#define CC_STEST	0x1F00804
#define CC_CREG		0x1F00A04
#define CC_SREG		0x1F00B00
#define CC_RREG		0x1F00C04
#define CC_EREG		0x1F00E00
#define CC_CID		0x1F00F04
static inline int bw_get_intr_mask(int sbus_level)
static inline void bw_clear_intr_mask(int sbus_level, int mask)
static inline unsigned bw_get_prof_limit(int cpu)
static inline void bw_set_prof_limit(int cpu, unsigned limit)
static inline unsigned bw_get_ctrl(int cpu)
static inline void bw_set_ctrl(int cpu, unsigned ctrl)
static inline unsigned cc_get_ipen(void)
static inline void cc_set_iclr(unsigned clear)
static inline unsigned cc_get_imsk(void)
static inline void cc_set_imsk(unsigned mask)
static inline unsigned cc_get_imsk_other(int cpuid)
static inline void cc_set_imsk_other(int cpuid, unsigned mask)
static inline void cc_set_igen(unsigned gen)
#define IGEN_MESSAGE(bcast, devid, sid, levels) \
(((bcast) << 31) | ((devid) << 23) | ((sid) << 15) | (levels))
static inline void sun4d_send_ipi(int cpu, int level)
