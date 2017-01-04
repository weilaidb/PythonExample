#define __ASM_BLACKFIN_IPIPE_BASE_H
#define IPIPE_NR_XIRQS		NR_IRQS
#define IPIPE_SYNCDEFER_FLAG	15
#define IPIPE_SYNCDEFER_MASK	(1L << IPIPE_SYNCDEFER_MASK)
#define IPIPE_NR_FAULTS		52
#define IPIPE_FIRST_EVENT	IPIPE_NR_FAULTS
#define IPIPE_EVENT_SYSCALL	(IPIPE_FIRST_EVENT)
#define IPIPE_EVENT_SCHEDULE	(IPIPE_FIRST_EVENT + 1)
#define IPIPE_EVENT_SIGWAKE	(IPIPE_FIRST_EVENT + 2)
#define IPIPE_EVENT_SETSCHED	(IPIPE_FIRST_EVENT + 3)
#define IPIPE_EVENT_INIT	(IPIPE_FIRST_EVENT + 4)
#define IPIPE_EVENT_EXIT	(IPIPE_FIRST_EVENT + 5)
#define IPIPE_EVENT_CLEANUP	(IPIPE_FIRST_EVENT + 6)
#define IPIPE_EVENT_RETURN	(IPIPE_FIRST_EVENT + 7)
#define IPIPE_LAST_EVENT	IPIPE_EVENT_RETURN
#define IPIPE_NR_EVENTS		(IPIPE_LAST_EVENT + 1)
#define IPIPE_TIMER_IRQ		IRQ_CORETMR
#define __IPIPE_FEATURE_SYSINFO_V2	1
extern unsigned long __ipipe_root_status;
void __ipipe_stall_root(void);
unsigned long __ipipe_test_and_stall_root(void);
unsigned long __ipipe_test_root(void);
void __ipipe_lock_root(void);
void __ipipe_unlock_root(void);
#define __IPIPE_FEATURE_SYSINFO_V2	1
