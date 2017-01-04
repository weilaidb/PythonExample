#define act2000_h
#define ACT2000_IOCTL_SETPORT    1
#define ACT2000_IOCTL_GETPORT    2
#define ACT2000_IOCTL_SETIRQ     3
#define ACT2000_IOCTL_GETIRQ     4
#define ACT2000_IOCTL_SETBUS     5
#define ACT2000_IOCTL_GETBUS     6
#define ACT2000_IOCTL_SETPROTO   7
#define ACT2000_IOCTL_GETPROTO   8
#define ACT2000_IOCTL_SETMSN     9
#define ACT2000_IOCTL_GETMSN    10
#define ACT2000_IOCTL_LOADBOOT  11
#define ACT2000_IOCTL_ADDCARD   12
#define ACT2000_IOCTL_TEST      98
#define ACT2000_IOCTL_DEBUGVAR  99
#define ACT2000_BUS_ISA          1
#define ACT2000_BUS_MCA          2
#define ACT2000_BUS_PCMCIA       3
typedef struct act2000_cdef  act2000_cdef;
typedef struct act2000_ddef  act2000_ddef;
typedef struct act2000_fwid  act2000_fwid;
#if defined(__KERNEL__) || defined(__DEBUGVAR__)
#define ACT2000_PORTLEN        8
#define ACT2000_FLAGS_RUNNING  1
#define ACT2000_FLAGS_PVALID   2
#define ACT2000_FLAGS_IVALID   4
#define ACT2000_FLAGS_LOADED   8
#define ACT2000_BCH            2
#define ACT2000_STATE_NULL     0
#define ACT2000_STATE_ICALL    1
#define ACT2000_STATE_OCALL    2
#define ACT2000_STATE_IWAIT    3
#define ACT2000_STATE_OWAIT    4
#define ACT2000_STATE_IBWAIT   5
#define ACT2000_STATE_OBWAIT   6
#define ACT2000_STATE_BWAIT    7
#define ACT2000_STATE_BHWAIT   8
#define ACT2000_STATE_BHWAIT2  9
#define ACT2000_STATE_DHWAIT  10
#define ACT2000_STATE_DHWAIT2 11
#define ACT2000_STATE_BSETUP  12
#define ACT2000_STATE_ACTIVE  13
#define ACT2000_MAX_QUEUED  8000
#define ACT2000_LOCK_TX 0
#define ACT2000_LOCK_RX 1
typedef struct act2000_chan  act2000_chan;
typedef struct msn_entry  msn_entry;
typedef struct irq_data_isa  irq_data_isa;
typedef union act2000_irq_data  act2000_irq_data;
typedef struct act2000_card  act2000_card;
static inline void act2000_schedule_tx(act2000_card *card)
static inline void act2000_schedule_rx(act2000_card *card)
static inline void act2000_schedule_poll(act2000_card *card)
extern char *act2000_find_eaz(act2000_card *, char);
