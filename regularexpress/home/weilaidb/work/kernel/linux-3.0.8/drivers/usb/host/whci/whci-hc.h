#define _WHCI_WHCI_HC_H
#define WHCI_PAGE_SIZE 4096
#define QTD_MAX_XFER_SIZE 1048575
struct whc_qtd  __attribute__((packed));
#define QTD_STS_ACTIVE     (1 << 31)
#define QTD_STS_HALTED     (1 << 30)
#define QTD_STS_DBE        (1 << 29)
#define QTD_STS_BABBLE     (1 << 28)
#define QTD_STS_RCE        (1 << 27)
#define QTD_STS_LAST_PKT   (1 << 26)
#define QTD_STS_INACTIVE   (1 << 25)
#define QTD_STS_IALT_VALID (1 << 23)
#define QTD_STS_IALT(i)    (QTD_STS_IALT_VALID | ((i) << 20))
#define QTD_STS_LEN(l)     ((l) << 0)
#define QTD_STS_TO_LEN(s)  ((s) & 0x000fffff)
#define QTD_OPT_IOC      (1 << 1)
#define QTD_OPT_SMALL    (1 << 0)
struct whc_itd  __attribute__((packed));
#define ITD_STS_ACTIVE   (1 << 7)
#define ITD_STS_DBE      (1 << 5)
#define ITD_STS_BABBLE   (1 << 4)
#define ITD_STS_INACTIVE (1 << 1)
#define ITD_OPT_IOC      (1 << 1)
#define ITD_OPT_SMALL    (1 << 0)
struct whc_page_list_entry  __attribute__((packed));
struct whc_seg_list_entry  __attribute__((packed));
struct whc_qhead  __attribute__((packed));
#define QH_LINK_PTR_MASK (~0x03Full)
#define QH_LINK_PTR(ptr) ((ptr) & QH_LINK_PTR_MASK)
#define QH_LINK_IQS      (1 << 4)
#define QH_LINK_NTDS(n)  (((n) - 1) << 1)
#define QH_LINK_T        (1 << 0)
#define QH_INFO1_EP(e)           ((e) << 0)
#define QH_INFO1_DIR_IN          (1 << 4)
#define QH_INFO1_DIR_OUT         (0 << 4)
#define QH_INFO1_TR_TYPE_CTRL    (0x0 << 5)
#define QH_INFO1_TR_TYPE_ISOC    (0x1 << 5)
#define QH_INFO1_TR_TYPE_BULK    (0x2 << 5)
#define QH_INFO1_TR_TYPE_INT     (0x3 << 5)
#define QH_INFO1_TR_TYPE_LP_INT  (0x7 << 5)
#define QH_INFO1_DEV_INFO_IDX(i) ((i) << 8)
#define QH_INFO1_SET_INACTIVE    (1 << 15)
#define QH_INFO1_MAX_PKT_LEN(l)  ((l) << 16)
#define QH_INFO2_BURST(b)        ((b) << 0)
#define QH_INFO2_DBP(p)          ((p) << 5)
#define QH_INFO2_MAX_COUNT(c)    ((c) << 8)
#define QH_INFO2_RQS             (1 << 15)
#define QH_INFO2_MAX_RETRY(r)    ((r) << 16)
#define QH_INFO2_MAX_SEQ(s)      ((s) << 20)
#define QH_INFO3_MAX_DELAY(d)    ((d) << 0)
#define QH_INFO3_INTERVAL(i)     ((i) << 16)
#define QH_INFO3_TX_RATE(r)      ((r) << 24)
#define QH_INFO3_TX_PWR(p)       ((p) << 29)
#define QH_STATUS_FLOW_CTRL      (1 << 15)
#define QH_STATUS_ICUR(i)        ((i) << 5)
#define QH_STATUS_TO_ICUR(s)     (((s) >> 5) & 0x7)
#define QH_STATUS_SEQ_MASK       0x1f
static inline unsigned usb_pipe_to_qh_type(unsigned pipe)
#define WHCI_QSET_TD_MAX 8
struct whc_qset ;
static inline void whc_qset_set_link_ptr(u64 *ptr, u64 target)
struct di_buf_entry  __attribute__((packed));
#define WHC_DI_SECURE           (1 << 31)
#define WHC_DI_DISABLE          (1 << 30)
#define WHC_DI_KEY_IDX(k)       ((k) << 8)
#define WHC_DI_KEY_IDX_MASK     0x0000ff00
#define WHC_DI_DEV_ADDR(a)      ((a) << 0)
#define WHC_DI_DEV_ADDR_MASK    0x000000ff
struct dn_buf_entry  __attribute__((packed));
#define WHC_DN_STATUS_VALID  (1 << 7)
#define WHC_DN_STATUS_SECURE (1 << 6)
#define WHC_N_DN_ENTRIES (4096 / sizeof(struct dn_buf_entry))
#define WHC_GEN_CMD_DATA_LEN 256
#define WHCIVERSION          0x00
#define WHCSPARAMS           0x04
#  define WHCSPARAMS_TO_N_MMC_IES(p) (((p) >> 16) & 0xff)
#  define WHCSPARAMS_TO_N_KEYS(p)    (((p) >> 8) & 0xff)
#  define WHCSPARAMS_TO_N_DEVICES(p) (((p) >> 0) & 0x7f)
#define WUSBCMD              0x08
#  define WUSBCMD_BCID(b)            ((b) << 16)
#  define WUSBCMD_BCID_MASK          (0xff << 16)
#  define WUSBCMD_ASYNC_QSET_RM      (1 << 12)
#  define WUSBCMD_PERIODIC_QSET_RM   (1 << 11)
#  define WUSBCMD_WUSBSI(s)          ((s) << 8)
#  define WUSBCMD_WUSBSI_MASK        (0x7 << 8)
#  define WUSBCMD_ASYNC_SYNCED_DB    (1 << 7)
#  define WUSBCMD_PERIODIC_SYNCED_DB (1 << 6)
#  define WUSBCMD_ASYNC_UPDATED      (1 << 5)
#  define WUSBCMD_PERIODIC_UPDATED   (1 << 4)
#  define WUSBCMD_ASYNC_EN           (1 << 3)
#  define WUSBCMD_PERIODIC_EN        (1 << 2)
#  define WUSBCMD_WHCRESET           (1 << 1)
#  define WUSBCMD_RUN                (1 << 0)
#define WUSBSTS              0x0c
#  define WUSBSTS_ASYNC_SCHED             (1 << 15)
#  define WUSBSTS_PERIODIC_SCHED          (1 << 14)
#  define WUSBSTS_DNTS_SCHED              (1 << 13)
#  define WUSBSTS_HCHALTED                (1 << 12)
#  define WUSBSTS_GEN_CMD_DONE            (1 << 9)
#  define WUSBSTS_CHAN_TIME_ROLLOVER      (1 << 8)
#  define WUSBSTS_DNTS_OVERFLOW           (1 << 7)
#  define WUSBSTS_BPST_ADJUSTMENT_CHANGED (1 << 6)
#  define WUSBSTS_HOST_ERR                (1 << 5)
#  define WUSBSTS_ASYNC_SCHED_SYNCED      (1 << 4)
#  define WUSBSTS_PERIODIC_SCHED_SYNCED   (1 << 3)
#  define WUSBSTS_DNTS_INT                (1 << 2)
#  define WUSBSTS_ERR_INT                 (1 << 1)
#  define WUSBSTS_INT                     (1 << 0)
#  define WUSBSTS_INT_MASK                0x3ff
#define WUSBINTR             0x10
#  define WUSBINTR_GEN_CMD_DONE             (1 << 9)
#  define WUSBINTR_CHAN_TIME_ROLLOVER       (1 << 8)
#  define WUSBINTR_DNTS_OVERFLOW            (1 << 7)
#  define WUSBINTR_BPST_ADJUSTMENT_CHANGED  (1 << 6)
#  define WUSBINTR_HOST_ERR                 (1 << 5)
#  define WUSBINTR_ASYNC_SCHED_SYNCED       (1 << 4)
#  define WUSBINTR_PERIODIC_SCHED_SYNCED    (1 << 3)
#  define WUSBINTR_DNTS_INT                 (1 << 2)
#  define WUSBINTR_ERR_INT                  (1 << 1)
#  define WUSBINTR_INT                      (1 << 0)
#  define WUSBINTR_ALL 0x3ff
#define WUSBGENCMDSTS        0x14
#  define WUSBGENCMDSTS_ACTIVE (1 << 31)
#  define WUSBGENCMDSTS_ERROR  (1 << 24)
#  define WUSBGENCMDSTS_IOC    (1 << 23)
#  define WUSBGENCMDSTS_MMCIE_ADD 0x01
#  define WUSBGENCMDSTS_MMCIE_RM  0x02
#  define WUSBGENCMDSTS_SET_MAS   0x03
#  define WUSBGENCMDSTS_CHAN_STOP 0x04
#  define WUSBGENCMDSTS_RWP_EN    0x05
#define WUSBGENCMDPARAMS     0x18
#define WUSBGENADDR          0x20
#define WUSBASYNCLISTADDR    0x28
#define WUSBDNTSBUFADDR      0x30
#define WUSBDEVICEINFOADDR   0x38
#define WUSBSETSECKEYCMD     0x40
#  define WUSBSETSECKEYCMD_SET    (1 << 31)
#  define WUSBSETSECKEYCMD_ERASE  (1 << 30)
#  define WUSBSETSECKEYCMD_GTK    (1 << 8)
#  define WUSBSETSECKEYCMD_IDX(i) ((i) << 0)
#define WUSBTKID             0x44
#define WUSBSECKEY           0x48
#define WUSBPERIODICLISTBASE 0x58
#define WUSBMASINDEX         0x60
#define WUSBDNTSCTRL         0x64
#  define WUSBDNTSCTRL_ACTIVE      (1 << 31)
#  define WUSBDNTSCTRL_INTERVAL(i) ((i) << 8)
#  define WUSBDNTSCTRL_SLOTS(s)    ((s) << 0)
#define WUSBTIME             0x68
#  define WUSBTIME_CHANNEL_TIME_MASK 0x00ffffff
#define WUSBBPST             0x6c
#define WUSBDIBUPDATED       0x70
