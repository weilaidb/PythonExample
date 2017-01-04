#define _QIB_KERNEL_H
#define QIB_CHIP_VERS_MAJ 2U
#define QIB_CHIP_VERS_MIN 0U
#define QIB_OUI 0x001175
#define QIB_OUI_LSB 40
struct qlogic_ib_stats ;
extern struct qlogic_ib_stats qib_stats;
extern struct pci_error_handlers qib_pci_err_handler;
extern struct pci_driver qib_driver;
#define QIB_CHIP_SWVERSION QIB_CHIP_VERS_MAJ
#define QIB_TRAFFIC_ACTIVE_THRESHOLD (2000)
#define QIB_EEP_LOG_CNT (4)
struct qib_eep_log_mask ;
struct qib_ctxtdata ;
struct qib_sge_state;
struct qib_sdma_txreq ;
struct qib_sdma_desc ;
struct qib_verbs_txreq ;
#define QIB_SDMA_TXREQ_F_USELARGEBUF  0x1
#define QIB_SDMA_TXREQ_F_HEADTOHOST   0x2
#define QIB_SDMA_TXREQ_F_INTREQ       0x4
#define QIB_SDMA_TXREQ_F_FREEBUF      0x8
#define QIB_SDMA_TXREQ_F_FREEDESC     0x10
#define QIB_SDMA_TXREQ_S_OK        0
#define QIB_SDMA_TXREQ_S_SENDERROR 1
#define QIB_SDMA_TXREQ_S_ABORTED   2
#define QIB_SDMA_TXREQ_S_SHUTDOWN  3
#define QIB_IB_CFG_LIDLMC 0
#define QIB_IB_CFG_LWID_ENB 2
#define QIB_IB_CFG_LWID 3
#define QIB_IB_CFG_SPD_ENB 4
#define QIB_IB_CFG_SPD 5
#define QIB_IB_CFG_RXPOL_ENB 6
#define QIB_IB_CFG_LREV_ENB 7
#define QIB_IB_CFG_LINKLATENCY 8
#define QIB_IB_CFG_HRTBT 9
#define QIB_IB_CFG_OP_VLS 10
#define QIB_IB_CFG_VL_HIGH_CAP 11
#define QIB_IB_CFG_VL_LOW_CAP 12
#define QIB_IB_CFG_OVERRUN_THRESH 13
#define QIB_IB_CFG_PHYERR_THRESH 14
#define QIB_IB_CFG_LINKDEFAULT 15
#define QIB_IB_CFG_PKEYS 16
#define QIB_IB_CFG_MTU 17
#define QIB_IB_CFG_LSTATE 18
#define QIB_IB_CFG_VL_HIGH_LIMIT 19
#define QIB_IB_CFG_PMA_TICKS 20
#define QIB_IB_CFG_PORT 21
#define   IB_LINKCMD_DOWN   (0 << 16)
#define   IB_LINKCMD_ARMED  (1 << 16)
#define   IB_LINKCMD_ACTIVE (2 << 16)
#define   IB_LINKINITCMD_NOP     0
#define   IB_LINKINITCMD_POLL    1
#define   IB_LINKINITCMD_SLEEP   2
#define   IB_LINKINITCMD_DISABLE 3
#define QIB_IB_LINKDOWN         0
#define QIB_IB_LINKARM          1
#define QIB_IB_LINKACTIVE       2
#define QIB_IB_LINKDOWN_ONLY    3
#define QIB_IB_LINKDOWN_SLEEP   4
#define QIB_IB_LINKDOWN_DISABLE 5
#define QIB_IB_SDR 1
#define QIB_IB_DDR 2
#define QIB_IB_QDR 4
#define QIB_DEFAULT_MTU 4096
#define QIB_MAX_IB_PORTS 2
#define QIB_IB_TBL_VL_HIGH_ARB 1
#define QIB_IB_TBL_VL_LOW_ARB 2
#define QIB_RCVCTRL_TAILUPD_ENB 0x01
#define QIB_RCVCTRL_TAILUPD_DIS 0x02
#define QIB_RCVCTRL_CTXT_ENB 0x04
#define QIB_RCVCTRL_CTXT_DIS 0x08
#define QIB_RCVCTRL_INTRAVAIL_ENB 0x10
#define QIB_RCVCTRL_INTRAVAIL_DIS 0x20
#define QIB_RCVCTRL_PKEY_ENB 0x40
#define QIB_RCVCTRL_PKEY_DIS 0x80
#define QIB_RCVCTRL_BP_ENB 0x0100
#define QIB_RCVCTRL_BP_DIS 0x0200
#define QIB_RCVCTRL_TIDFLOW_ENB 0x0400
#define QIB_RCVCTRL_TIDFLOW_DIS 0x0800
#define QIB_SENDCTRL_DISARM       (0x1000)
#define QIB_SENDCTRL_DISARM_BUF(bufn) ((bufn) | QIB_SENDCTRL_DISARM)
#define QIB_SENDCTRL_AVAIL_DIS    (0x4000)
#define QIB_SENDCTRL_AVAIL_ENB    (0x8000)
#define QIB_SENDCTRL_AVAIL_BLIP  (0x10000)
#define QIB_SENDCTRL_SEND_DIS    (0x20000)
#define QIB_SENDCTRL_SEND_ENB    (0x40000)
#define QIB_SENDCTRL_FLUSH       (0x80000)
#define QIB_SENDCTRL_CLEAR      (0x100000)
#define QIB_SENDCTRL_DISARM_ALL (0x200000)
#define QIBPORTCNTR_PKTSEND         0U
#define QIBPORTCNTR_WORDSEND        1U
#define QIBPORTCNTR_PSXMITDATA      2U
#define QIBPORTCNTR_PSXMITPKTS      3U
#define QIBPORTCNTR_PSXMITWAIT      4U
#define QIBPORTCNTR_SENDSTALL       5U
#define QIBPORTCNTR_PKTRCV          6U
#define QIBPORTCNTR_PSRCVDATA       7U
#define QIBPORTCNTR_PSRCVPKTS       8U
#define QIBPORTCNTR_RCVEBP          9U
#define QIBPORTCNTR_RCVOVFL         10U
#define QIBPORTCNTR_WORDRCV         11U
#define QIBPORTCNTR_RXLOCALPHYERR   12U
#define QIBPORTCNTR_RXVLERR         13U
#define QIBPORTCNTR_ERRICRC         14U
#define QIBPORTCNTR_ERRVCRC         15U
#define QIBPORTCNTR_ERRLPCRC        16U
#define QIBPORTCNTR_BADFORMAT       17U
#define QIBPORTCNTR_ERR_RLEN        18U
#define QIBPORTCNTR_IBSYMBOLERR     19U
#define QIBPORTCNTR_INVALIDRLEN     20U
#define QIBPORTCNTR_UNSUPVL         21U
#define QIBPORTCNTR_EXCESSBUFOVFL   22U
#define QIBPORTCNTR_ERRLINK         23U
#define QIBPORTCNTR_IBLINKDOWN      24U
#define QIBPORTCNTR_IBLINKERRRECOV  25U
#define QIBPORTCNTR_LLI             26U
#define QIBPORTCNTR_RXDROPPKT       27U
#define QIBPORTCNTR_VL15PKTDROP     28U
#define QIBPORTCNTR_ERRPKEY         29U
#define QIBPORTCNTR_KHDROVFL        30U
#define QIBPORTCNTR_PSINTERVAL      31U
#define QIBPORTCNTR_PSSTART         32U
#define QIBPORTCNTR_PSSTAT          33U
#define ACTIVITY_TIMER 5
struct qib_chip_specific;
struct qib_chipport_specific;
enum qib_sdma_states ;
enum qib_sdma_events ;
extern char *qib_sdma_state_names[];
extern char *qib_sdma_event_names[];
struct sdma_set_state_action ;
struct qib_sdma_state ;
struct xmit_wait ;
struct qib_pportdata ;
struct diag_observer;
typedef int (*diag_hook) (struct qib_devdata *dd,
const struct diag_observer *op,
u32 offs, u64 *data, u64 mask, int only_32);
struct diag_observer ;
extern int qib_register_observer(struct qib_devdata *dd,
const struct diag_observer *op);
struct diag_observer_list_elt;
struct qib_devdata ;
#define QIB_HOL_UP       0
#define QIB_HOL_INIT     1
#define QIB_SDMA_SENDCTRL_OP_ENABLE    (1U << 0)
#define QIB_SDMA_SENDCTRL_OP_INTENABLE (1U << 1)
#define QIB_SDMA_SENDCTRL_OP_HALT      (1U << 2)
#define QIB_SDMA_SENDCTRL_OP_CLEANUP   (1U << 3)
#define QIB_SDMA_SENDCTRL_OP_DRAIN     (1U << 4)
#define TXCHK_CHG_TYPE_DIS1  3
#define TXCHK_CHG_TYPE_ENAB1 2
#define TXCHK_CHG_TYPE_KERN  1
#define TXCHK_CHG_TYPE_USER  0
#define QIB_CHASE_TIME msecs_to_jiffies(145)
#define QIB_CHASE_DIS_TIME msecs_to_jiffies(160)
struct qib_filedata ;
extern struct list_head qib_dev_list;
extern spinlock_t qib_devs_lock;
extern struct qib_devdata *qib_lookup(int unit);
extern u32 qib_cpulist_count;
extern unsigned long *qib_cpulist;
extern unsigned qib_wc_pat;
int qib_init(struct qib_devdata *, int);
int init_chip_wc_pat(struct qib_devdata *dd, u32);
int qib_enable_wc(struct qib_devdata *dd);
void qib_disable_wc(struct qib_devdata *dd);
int qib_count_units(int *npresentp, int *nupp);
int qib_count_active_units(void);
int qib_cdev_init(int minor, const char *name,
const struct file_operations *fops,
struct cdev **cdevp, struct device **devp);
void qib_cdev_cleanup(struct cdev **cdevp, struct device **devp);
int qib_dev_init(void);
void qib_dev_cleanup(void);
int qib_diag_add(struct qib_devdata *);
void qib_diag_remove(struct qib_devdata *);
void qib_handle_e_ibstatuschanged(struct qib_pportdata *, u64);
void qib_sdma_update_tail(struct qib_pportdata *, u16);
int qib_decode_err(struct qib_devdata *dd, char *buf, size_t blen, u64 err);
void qib_bad_intrstatus(struct qib_devdata *);
void qib_handle_urcv(struct qib_devdata *, u64);
void qib_chip_cleanup(struct qib_devdata *);
void qib_chip_done(void);
int qib_unordered_wc(void);
void qib_pio_copy(void __iomem *to, const void *from, size_t count);
void qib_disarm_piobufs(struct qib_devdata *, unsigned, unsigned);
int qib_disarm_piobufs_ifneeded(struct qib_ctxtdata *);
void qib_disarm_piobufs_set(struct qib_devdata *, unsigned long *, unsigned);
void qib_cancel_sends(struct qib_pportdata *);
int qib_create_rcvhdrq(struct qib_devdata *, struct qib_ctxtdata *);
int qib_setup_eagerbufs(struct qib_ctxtdata *);
void qib_set_ctxtcnt(struct qib_devdata *);
int qib_create_ctxts(struct qib_devdata *dd);
struct qib_ctxtdata *qib_create_ctxtdata(struct qib_pportdata *, u32);
void qib_init_pportdata(struct qib_pportdata *, struct qib_devdata *, u8, u8);
void qib_free_ctxtdata(struct qib_devdata *, struct qib_ctxtdata *);
u32 qib_kreceive(struct qib_ctxtdata *, u32 *, u32 *);
int qib_reset_device(int);
int qib_wait_linkstate(struct qib_pportdata *, u32, int);
int qib_set_linkstate(struct qib_pportdata *, u8);
int qib_set_mtu(struct qib_pportdata *, u16);
int qib_set_lid(struct qib_pportdata *, u32, u8);
void qib_hol_down(struct qib_pportdata *);
void qib_hol_init(struct qib_pportdata *);
void qib_hol_up(struct qib_pportdata *);
void qib_hol_event(unsigned long);
void qib_disable_after_error(struct qib_devdata *);
int qib_set_uevent_bits(struct qib_pportdata *, const int);
#define ctxt_fp(fp) \
(((struct qib_filedata *)(fp)->private_data)->rcd)
#define subctxt_fp(fp) \
(((struct qib_filedata *)(fp)->private_data)->subctxt)
#define tidcursor_fp(fp) \
(((struct qib_filedata *)(fp)->private_data)->tidcursor)
#define user_sdma_queue_fp(fp) \
(((struct qib_filedata *)(fp)->private_data)->pq)
static inline struct qib_devdata *dd_from_ppd(struct qib_pportdata *ppd)
static inline struct qib_devdata *dd_from_dev(struct qib_ibdev *dev)
static inline struct qib_devdata *dd_from_ibdev(struct ib_device *ibdev)
static inline struct qib_pportdata *ppd_from_ibp(struct qib_ibport *ibp)
static inline struct qib_ibport *to_iport(struct ib_device *ibdev, u8 port)
#define QIB_HAS_LINK_LATENCY  0x1
#define QIB_INITTED           0x2
#define QIB_DOING_RESET       0x4
#define QIB_PRESENT           0x8
#define QIB_PIO_FLUSH_WC      0x10
#define QIB_HAS_THRESH_UPDATE 0x40
#define QIB_HAS_SDMA_TIMEOUT  0x80
#define QIB_USE_SPCL_TRIG     0x100
#define QIB_NODMA_RTAIL       0x200
#define QIB_HAS_INTX          0x800
#define QIB_HAS_SEND_DMA      0x1000
#define QIB_HAS_VLSUPP        0x2000
#define QIB_HAS_HDRSUPP       0x4000
#define QIB_BADINTR           0x8000
#define QIB_DCA_ENABLED       0x10000
#define QIB_HAS_QSFP          0x20000
#define QIBL_LINKV             0x1
#define QIBL_LINKDOWN          0x8
#define QIBL_LINKINIT          0x10
#define QIBL_LINKARMED         0x20
#define QIBL_LINKACTIVE        0x40
#define QIBL_IB_AUTONEG_INPROG 0x1000
#define QIBL_IB_AUTONEG_FAILED 0x2000
#define QIBL_IB_LINK_DISABLED  0x4000
#define QIBL_IB_FORCE_NOTIFY   0x8000
#define QIB_PBC_LENGTH_MASK                     ((1 << 11) - 1)
#define QIB_CTXT_WAITING_RCV   2
#define QIB_CTXT_MASTER_UNINIT 4
#define QIB_CTXT_WAITING_URG 5
void qib_free_data(struct qib_ctxtdata *dd);
void qib_chg_pioavailkernel(struct qib_devdata *, unsigned, unsigned,
u32, struct qib_ctxtdata *);
struct qib_devdata *qib_init_iba7322_funcs(struct pci_dev *,
const struct pci_device_id *);
struct qib_devdata *qib_init_iba7220_funcs(struct pci_dev *,
const struct pci_device_id *);
struct qib_devdata *qib_init_iba6120_funcs(struct pci_dev *,
const struct pci_device_id *);
void qib_free_devdata(struct qib_devdata *);
struct qib_devdata *qib_alloc_devdata(struct pci_dev *pdev, size_t extra);
#define QIB_TWSI_NO_DEV 0xFF
int qib_twsi_reset(struct qib_devdata *dd);
int qib_twsi_blk_rd(struct qib_devdata *dd, int dev, int addr, void *buffer,
int len);
int qib_twsi_blk_wr(struct qib_devdata *dd, int dev, int addr,
const void *buffer, int len);
void qib_get_eeprom_info(struct qib_devdata *);
int qib_update_eeprom_log(struct qib_devdata *dd);
void qib_inc_eeprom_err(struct qib_devdata *dd, u32 eidx, u32 incr);
void qib_dump_lookup_output_queue(struct qib_devdata *);
void qib_force_pio_avail_update(struct qib_devdata *);
void qib_clear_symerror_on_linkup(unsigned long opaque);
#define QIB_LED_PHYS 1
#define QIB_LED_LOG 2
void qib_set_led_override(struct qib_pportdata *ppd, unsigned int val);
int qib_setup_sdma(struct qib_pportdata *);
void qib_teardown_sdma(struct qib_pportdata *);
void __qib_sdma_intr(struct qib_pportdata *);
void qib_sdma_intr(struct qib_pportdata *);
int qib_sdma_verbs_send(struct qib_pportdata *, struct qib_sge_state *,
u32, struct qib_verbs_txreq *);
int qib_sdma_make_progress(struct qib_pportdata *dd);
static inline u16 qib_sdma_descq_freecnt(const struct qib_pportdata *ppd)
static inline int __qib_sdma_running(struct qib_pportdata *ppd)
int qib_sdma_running(struct qib_pportdata *);
void __qib_sdma_process_event(struct qib_pportdata *, enum qib_sdma_events);
void qib_sdma_process_event(struct qib_pportdata *, enum qib_sdma_events);
#define QIB_DFLT_RCVHDRSIZE 9
#define QIB_RCVHDR_ENTSIZE 32
int qib_get_user_pages(unsigned long, size_t, struct page **);
void qib_release_user_pages(struct page **, size_t);
int qib_eeprom_read(struct qib_devdata *, u8, void *, int);
int qib_eeprom_write(struct qib_devdata *, u8, const void *, int);
u32 __iomem *qib_getsendbuf_range(struct qib_devdata *, u32 *, u32, u32);
void qib_sendbuf_done(struct qib_devdata *, unsigned);
static inline void qib_clear_rcvhdrtail(const struct qib_ctxtdata *rcd)
static inline u32 qib_get_rcvhdrtail(const struct qib_ctxtdata *rcd)
static inline u32 qib_get_hdrqtail(const struct qib_ctxtdata *rcd)
extern const char ib_qib_version[];
int qib_device_create(struct qib_devdata *);
void qib_device_remove(struct qib_devdata *);
int qib_create_port_files(struct ib_device *ibdev, u8 port_num,
struct kobject *kobj);
int qib_verbs_register_sysfs(struct qib_devdata *);
void qib_verbs_unregister_sysfs(struct qib_devdata *);
extern int qib_qsfp_dump(struct qib_pportdata *ppd, char *buf, int len);
int __init qib_init_qibfs(void);
int __exit qib_exit_qibfs(void);
int qibfs_add(struct qib_devdata *);
int qibfs_remove(struct qib_devdata *);
int qib_pcie_init(struct pci_dev *, const struct pci_device_id *);
int qib_pcie_ddinit(struct qib_devdata *, struct pci_dev *,
const struct pci_device_id *);
void qib_pcie_ddcleanup(struct qib_devdata *);
int qib_pcie_params(struct qib_devdata *, u32, u32 *, struct msix_entry *);
int qib_reinit_intr(struct qib_devdata *);
void qib_enable_intx(struct pci_dev *);
void qib_nomsi(struct qib_devdata *);
void qib_nomsix(struct qib_devdata *);
void qib_pcie_getcmd(struct qib_devdata *, u16 *, u8 *, u8 *);
void qib_pcie_reenable(struct qib_devdata *, u16, u8, u8);
dma_addr_t qib_map_page(struct pci_dev *, struct page *, unsigned long,
size_t, int);
const char *qib_get_unit_name(int unit);
#if defined(CONFIG_X86_64)
#define qib_flush_wc() asm volatile("sfence" : : : "memory")
#define qib_flush_wc() wmb()
extern unsigned qib_ibmtu;
extern ushort qib_cfgctxts;
extern ushort qib_num_cfg_vls;
extern ushort qib_mini_init;
extern unsigned qib_n_krcv_queues;
extern unsigned qib_sdma_fetch_arb;
extern unsigned qib_compat_ddr_negotiate;
extern int qib_special_trigger;
extern struct mutex qib_mutex;
#define STATUS_TIMEOUT 60
#define QIB_DRV_NAME            "ib_qib"
#define QIB_USER_MINOR_BASE     0
#define QIB_TRACE_MINOR         127
#define QIB_DIAGPKT_MINOR       128
#define QIB_DIAG_MINOR_BASE     129
#define QIB_NMINORS             255
#define PCI_VENDOR_ID_PATHSCALE 0x1fc1
#define PCI_VENDOR_ID_QLOGIC 0x1077
#define PCI_DEVICE_ID_QLOGIC_IB_6120 0x10
#define PCI_DEVICE_ID_QLOGIC_IB_7220 0x7220
#define PCI_DEVICE_ID_QLOGIC_IB_7322 0x7322
#define qib_early_err(dev, fmt, ...) \
do  while (0)
#define qib_dev_err(dd, fmt, ...) \
do  while (0)
#define qib_dev_porterr(dd, port, fmt, ...) \
do  while (0)
#define qib_devinfo(pcidev, fmt, ...) \
do  while (0)
struct qib_hwerror_msgs ;
#define QLOGIC_IB_HWE_MSG(a, b)
void qib_format_hwerrors(u64 hwerrs,
const struct qib_hwerror_msgs *hwerrmsgs,
size_t nhwerrmsgs, char *msg, size_t lmsg);
