#define isdnloop_h
#define ISDNLOOP_IOCTL_DEBUGVAR  0
#define ISDNLOOP_IOCTL_ADDCARD   1
#define ISDNLOOP_IOCTL_LEASEDCFG 2
#define ISDNLOOP_IOCTL_STARTUP   3
typedef struct isdnloop_cdef  isdnloop_cdef;
typedef struct isdnloop_sdef  isdnloop_sdef;
#if defined(__KERNEL__) || defined(__DEBUGVAR__)
#define ISDNLOOP_FLAGS_B1ACTIVE 1
#define ISDNLOOP_FLAGS_B2ACTIVE 2
#define ISDNLOOP_FLAGS_RUNNING  4
#define ISDNLOOP_FLAGS_RBTIMER  8
#define ISDNLOOP_TIMER_BCREAD 1
#define ISDNLOOP_TIMER_DCREAD (HZ/2)
#define ISDNLOOP_TIMER_ALERTWAIT (10*HZ)
#define ISDNLOOP_MAX_SQUEUE 65536
#define ISDNLOOP_BCH 2
typedef struct isdnloop_card  isdnloop_card;
static isdnloop_card *cards = (isdnloop_card *) 0;
#define CID (card->interface.id)
