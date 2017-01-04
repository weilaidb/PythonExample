#define _INC_PMCC4_DEFS_H_
#define MAX_BOARDS          8
#define MAX_CHANS_USED      128
#define MUSYCC_NPORTS       4
#define MUSYCC_NPORTS       8
#define MUSYCC_NCHANS       32
#define MUSYCC_NIQD         0x1000
#define MUSYCC_MRU          2048
#define MUSYCC_MTU          2048
#define MUSYCC_TXDESC_MIN   10
#define MUSYCC_RXDESC_MIN   18
#define MUSYCC_TXDESC_TRANS 4
#define MUSYCC_RXDESC_TRANS 12
#define MAX_DEFAULT_IFQLEN  32
#define SBE_IFACETMPL        "pmcc4-%d"
#define SBE_IFACETMPL_SIZE    IFNAMSIZ
#define SBE_IFACETMPL_SIZE    16
#define WATCHDOG_TIMEOUT      250000
#define WATCHDOG_UTIMEOUT     (WATCHDOG_TIMEOUT+300000)
#if !defined(SBE_ISR_TASKLET) && !defined(SBE_ISR_IMMEDIATE) && !defined(SBE_ISR_INLINE)
#define SBE_ISR_TASKLET
