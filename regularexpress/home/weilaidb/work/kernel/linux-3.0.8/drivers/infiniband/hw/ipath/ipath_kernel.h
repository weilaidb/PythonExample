#define _IPATH_KERNEL_H
#define IPATH_CHIP_VERS_MAJ 2U
#define IPATH_CHIP_VERS_MIN 0U
extern struct infinipath_stats ipath_stats;
#define IPATH_CHIP_SWVERSION IPATH_CHIP_VERS_MAJ
#define IPATH_TRAFFIC_ACTIVE_THRESHOLD (2000)
#define IPATH_EEP_LOG_CNT (4)
struct ipath_eep_log_mask ;
struct ipath_portdata ;
struct sk_buff;
struct ipath_sge_state;
struct ipath_verbs_txreq;
struct _ipath_layer ;
struct ipath_skbinfo ;
struct ipath_sdma_txreq ;
struct ipath_sdma_desc ;
#define IPATH_SDMA_TXREQ_F_USELARGEBUF  0x1
#define IPATH_SDMA_TXREQ_F_HEADTOHOST   0x2
#define IPATH_SDMA_TXREQ_F_INTREQ       0x4
#define IPATH_SDMA_TXREQ_F_FREEBUF      0x8
#define IPATH_SDMA_TXREQ_F_FREEDESC     0x10
#define IPATH_SDMA_TXREQ_F_VL15         0x20
#define IPATH_SDMA_TXREQ_S_OK        0
#define IPATH_SDMA_TXREQ_S_SENDERROR 1
#define IPATH_SDMA_TXREQ_S_ABORTED   2
#define IPATH_SDMA_TXREQ_S_SHUTDOWN  3
#define IPATH_SDMA_STATUS_SCORE_BOARD_DRAIN_IN_PROG	(1ull << 63)
#define IPATH_SDMA_STATUS_ABORT_IN_PROG			(1ull << 62)
#define IPATH_SDMA_STATUS_INTERNAL_SDMA_ENABLE		(1ull << 61)
#define IPATH_SDMA_STATUS_SCB_EMPTY			(1ull << 30)
#define IPATH_SMALLBUF_DWORDS (dd->ipath_piosize2k >> 2)
#define IPATH_IB_CFG_LIDLMC 0
#define IPATH_IB_CFG_HRTBT 1
#define IPATH_IB_HRTBT_ON 3
#define IPATH_IB_HRTBT_OFF 0
#define IPATH_IB_CFG_LWID_ENB 2
#define IPATH_IB_CFG_LWID 3
#define IPATH_IB_CFG_SPD_ENB 4
#define IPATH_IB_CFG_SPD 5
#define IPATH_IB_CFG_RXPOL_ENB 6
#define IPATH_IB_CFG_LREV_ENB 7
#define IPATH_IB_CFG_LINKLATENCY 8
struct ipath_devdata ;
#define IPATH_HOL_UP       0
#define IPATH_HOL_DOWN     1
#define IPATH_HOL_DOWNSTOP 0
#define IPATH_HOL_DOWNCONT 1
#define IPATH_SDMA_ABORTING  0
#define IPATH_SDMA_DISARMED  1
#define IPATH_SDMA_DISABLED  2
#define IPATH_SDMA_LAYERBUF  3
#define IPATH_SDMA_RUNNING  30
#define IPATH_SDMA_SHUTDOWN 31
#define IPATH_SDMA_ABORT_NONE 0
#define IPATH_SDMA_ABORT_ABORTING (1UL << IPATH_SDMA_ABORTING)
#define IPATH_SDMA_ABORT_DISARMED ((1UL << IPATH_SDMA_ABORTING) | \
(1UL << IPATH_SDMA_DISARMED))
#define IPATH_SDMA_ABORT_DISABLED ((1UL << IPATH_SDMA_ABORTING) | \
(1UL << IPATH_SDMA_DISABLED))
#define IPATH_SDMA_ABORT_ABORTED ((1UL << IPATH_SDMA_ABORTING) | \
(1UL << IPATH_SDMA_DISARMED) | (1UL << IPATH_SDMA_DISABLED))
#define IPATH_SDMA_ABORT_MASK ((1UL<<IPATH_SDMA_ABORTING) | \
(1UL << IPATH_SDMA_DISARMED) | (1UL << IPATH_SDMA_DISABLED))
#define IPATH_SDMA_BUF_NONE 0
#define IPATH_SDMA_BUF_MASK (1UL<<IPATH_SDMA_LAYERBUF)
struct ipath_filedata ;
extern struct list_head ipath_dev_list;
extern spinlock_t ipath_devs_lock;
extern struct ipath_devdata *ipath_lookup(int unit);
int ipath_init_chip(struct ipath_devdata *, int);
int ipath_enable_wc(struct ipath_devdata *dd);
void ipath_disable_wc(struct ipath_devdata *dd);
int ipath_count_units(int *npresentp, int *nupp, int *maxportsp);
void ipath_shutdown_device(struct ipath_devdata *);
void ipath_clear_freeze(struct ipath_devdata *);
struct file_operations;
int ipath_cdev_init(int minor, char *name, const struct file_operations *fops,
struct cdev **cdevp, struct device **devp);
void ipath_cdev_cleanup(struct cdev **cdevp,
struct device **devp);
int ipath_diag_add(struct ipath_devdata *);
void ipath_diag_remove(struct ipath_devdata *);
extern wait_queue_head_t ipath_state_wait;
int ipath_user_add(struct ipath_devdata *dd);
void ipath_user_remove(struct ipath_devdata *dd);
struct sk_buff *ipath_alloc_skb(struct ipath_devdata *dd, gfp_t);
extern int ipath_diag_inuse;
irqreturn_t ipath_intr(int irq, void *devid);
int ipath_decode_err(struct ipath_devdata *dd, char *buf, size_t blen,
ipath_err_t err);
#if __IPATH_INFO || __IPATH_DBG
extern const char *ipath_ibcstatus_str[];
void ipath_chip_cleanup(struct ipath_devdata *);
void ipath_chip_done(void);
int ipath_unordered_wc(void);
void ipath_disarm_piobufs(struct ipath_devdata *, unsigned first,
unsigned cnt);
void ipath_cancel_sends(struct ipath_devdata *, int);
int ipath_create_rcvhdrq(struct ipath_devdata *, struct ipath_portdata *);
void ipath_free_pddata(struct ipath_devdata *, struct ipath_portdata *);
int ipath_parse_ushort(const char *str, unsigned short *valp);
void ipath_kreceive(struct ipath_portdata *);
int ipath_setrcvhdrsize(struct ipath_devdata *, unsigned);
int ipath_reset_device(int);
void ipath_get_faststats(unsigned long);
int ipath_wait_linkstate(struct ipath_devdata *, u32, int);
int ipath_set_linkstate(struct ipath_devdata *, u8);
int ipath_set_mtu(struct ipath_devdata *, u16);
int ipath_set_lid(struct ipath_devdata *, u32, u8);
int ipath_set_rx_pol_inv(struct ipath_devdata *dd, u8 new_pol_inv);
void ipath_enable_armlaunch(struct ipath_devdata *);
void ipath_disable_armlaunch(struct ipath_devdata *);
void ipath_hol_down(struct ipath_devdata *);
void ipath_hol_up(struct ipath_devdata *);
void ipath_hol_event(unsigned long);
void ipath_toggle_rclkrls(struct ipath_devdata *);
void ipath_sd7220_clr_ibpar(struct ipath_devdata *);
void ipath_set_relock_poll(struct ipath_devdata *, int);
void ipath_shutdown_relock_poll(struct ipath_devdata *);
#define port_fp(fp) ((struct ipath_filedata *)(fp)->private_data)->pd
#define subport_fp(fp) \
((struct ipath_filedata *)(fp)->private_data)->subport
#define tidcursor_fp(fp) \
((struct ipath_filedata *)(fp)->private_data)->tidcursor
#define user_sdma_queue_fp(fp) \
((struct ipath_filedata *)(fp)->private_data)->pq
#define IPATH_HAS_LINK_LATENCY 0x1
#define IPATH_INITTED       0x2
#define IPATH_RCVHDRSZ_SET  0x4
#define IPATH_PRESENT       0x8
#define IPATH_8BIT_IN_HT0   0x10
#define IPATH_8BIT_IN_HT1   0x20
#define IPATH_LINKDOWN      0x40
#define IPATH_LINKINIT      0x80
#define IPATH_LINKARMED     0x100
#define IPATH_LINKACTIVE    0x200
#define IPATH_LINKUNK       0x400
#define IPATH_PIO_FLUSH_WC  0x1000
#define IPATH_NODMA_RTAIL   0x2000
#define IPATH_NOCABLE       0x4000
#define IPATH_GPIO_INTR     0x8000
#define IPATH_4BYTE_TID     0x10000
#define IPATH_32BITCOUNTERS 0x20000
#define IPATH_INTREG_64     0x40000
#define IPATH_DISABLED      0x80000
#define IPATH_GPIO_ERRINTRS 0x100000
#define IPATH_SWAP_PIOBUFS  0x200000
#define IPATH_HAS_SEND_DMA  0x400000
#define IPATH_HAS_PBC_CNT   0x800000
#define IPATH_NO_HRTBT      0x1000000
#define IPATH_HAS_THRESH_UPDATE 0x4000000
#define IPATH_HAS_MULT_IB_SPEED 0x8000000
#define IPATH_IB_AUTONEG_INPROG 0x10000000
#define IPATH_IB_AUTONEG_FAILED 0x20000000
#define IPATH_IB_LINK_DISABLED 0x40000000
#define IPATH_IB_FORCE_NOTIFY 0x80000000
#define IPATH_GPIO_PORT0_BIT 2
#define IPATH_GPIO_RXUVL_BIT 3
#define IPATH_GPIO_OVRUN_BIT 4
#define IPATH_GPIO_LLI_BIT 5
#define IPATH_GPIO_ERRINTR_MASK 0x38
#define IPATH_PORT_WAITING_RCV   2
#define IPATH_PORT_MASTER_UNINIT 4
#define IPATH_PORT_WAITING_URG 5
void ipath_free_data(struct ipath_portdata *dd);
u32 __iomem *ipath_getpiobuf(struct ipath_devdata *, u32, u32 *);
void ipath_chg_pioavailkernel(struct ipath_devdata *dd, unsigned start,
unsigned len, int avail);
void ipath_init_iba6110_funcs(struct ipath_devdata *);
void ipath_get_eeprom_info(struct ipath_devdata *);
int ipath_update_eeprom_log(struct ipath_devdata *dd);
void ipath_inc_eeprom_err(struct ipath_devdata *dd, u32 eidx, u32 incr);
u64 ipath_snap_cntr(struct ipath_devdata *, ipath_creg);
void ipath_disarm_senderrbufs(struct ipath_devdata *);
void ipath_force_pio_avail_update(struct ipath_devdata *);
void signal_ib_event(struct ipath_devdata *dd, enum ib_event_type ev);
#define IPATH_LED_PHYS 1
#define IPATH_LED_LOG 2
void ipath_set_led_override(struct ipath_devdata *dd, unsigned int val);
int setup_sdma(struct ipath_devdata *);
void teardown_sdma(struct ipath_devdata *);
void ipath_restart_sdma(struct ipath_devdata *);
void ipath_sdma_intr(struct ipath_devdata *);
int ipath_sdma_verbs_send(struct ipath_devdata *, struct ipath_sge_state *,
u32, struct ipath_verbs_txreq *);
int ipath_sdma_make_progress(struct ipath_devdata *dd);
static inline u16 ipath_sdma_descq_freecnt(const struct ipath_devdata *dd)
static inline void ipath_sdma_desc_reserve(struct ipath_devdata *dd, u16 cnt)
static inline void ipath_sdma_desc_unreserve(struct ipath_devdata *dd, u16 cnt)
#define IPATH_DFLT_RCVHDRSIZE 9
int ipath_get_user_pages(unsigned long, size_t, struct page **);
void ipath_release_user_pages(struct page **, size_t);
void ipath_release_user_pages_on_close(struct page **, size_t);
int ipath_eeprom_read(struct ipath_devdata *, u8, void *, int);
int ipath_eeprom_write(struct ipath_devdata *, u8, const void *, int);
int ipath_tempsense_read(struct ipath_devdata *, u8 regnum);
int ipath_tempsense_write(struct ipath_devdata *, u8 regnum, u8 data);
void ipath_write_kreg_port(const struct ipath_devdata *, ipath_kreg,
unsigned, u64);
static inline u32 ipath_read_ureg32(const struct ipath_devdata *dd,
ipath_ureg regno, int port)
static inline void ipath_write_ureg(const struct ipath_devdata *dd,
ipath_ureg regno, u64 value, int port)
static inline u32 ipath_read_kreg32(const struct ipath_devdata *dd,
ipath_kreg regno)
static inline u64 ipath_read_kreg64(const struct ipath_devdata *dd,
ipath_kreg regno)
static inline void ipath_write_kreg(const struct ipath_devdata *dd,
ipath_kreg regno, u64 value)
static inline u64 ipath_read_creg(const struct ipath_devdata *dd,
ipath_sreg regno)
static inline u32 ipath_read_creg32(const struct ipath_devdata *dd,
ipath_sreg regno)
static inline void ipath_write_creg(const struct ipath_devdata *dd,
ipath_creg regno, u64 value)
static inline void ipath_clear_rcvhdrtail(const struct ipath_portdata *pd)
static inline u32 ipath_get_rcvhdrtail(const struct ipath_portdata *pd)
static inline u32 ipath_get_hdrqtail(const struct ipath_portdata *pd)
static inline u64 ipath_read_ireg(const struct ipath_devdata *dd, ipath_kreg r)
static inline u32 ipath_ib_linkstate(struct ipath_devdata *dd, u64 ibcs)
static inline u32 ipath_ib_linktrstate(struct ipath_devdata *dd, u64 ibcs)
static inline u32 ipath_ib_state(struct ipath_devdata *dd, u64 ibcs)
struct device_driver;
extern const char ib_ipath_version[];
extern const struct attribute_group *ipath_driver_attr_groups[];
int ipath_device_create_group(struct device *, struct ipath_devdata *);
void ipath_device_remove_group(struct device *, struct ipath_devdata *);
int ipath_expose_reset(struct device *);
int ipath_init_ipathfs(void);
void ipath_exit_ipathfs(void);
int ipathfs_add_device(struct ipath_devdata *);
int ipathfs_remove_device(struct ipath_devdata *);
dma_addr_t ipath_map_page(struct pci_dev *, struct page *, unsigned long,
size_t, int);
dma_addr_t ipath_map_single(struct pci_dev *, void *, size_t, int);
const char *ipath_get_unit_name(int unit);
#if defined(CONFIG_X86_64)
#define ipath_flush_wc() asm volatile("sfence" ::: "memory")
#define ipath_flush_wc() wmb()
extern unsigned ipath_debug;
extern unsigned ipath_linkrecovery;
extern unsigned ipath_mtu4096;
extern struct mutex ipath_mutex;
#define IPATH_DRV_NAME		"ib_ipath"
#define IPATH_MAJOR		233
#define IPATH_USER_MINOR_BASE	0
#define IPATH_DIAGPKT_MINOR	127
#define IPATH_DIAG_MINOR_BASE	129
#define IPATH_NMINORS		255
#define ipath_dev_err(dd,fmt,...) \
do  while (0)
#if _IPATH_DEBUGGING
# define __IPATH_DBG_WHICH(which,fmt,...) \
do  while(0)
# define ipath_dbg(fmt,...) \
__IPATH_DBG_WHICH(__IPATH_DBG,fmt,##__VA_ARGS__)
# define ipath_cdbg(which,fmt,...) \
__IPATH_DBG_WHICH(__IPATH_##which##DBG,fmt,##__VA_ARGS__)
# define ipath_dbg(fmt,...)
# define ipath_cdbg(which,fmt,...)
struct ipath_hwerror_msgs ;
#define INFINIPATH_HWE_MSG(a, b)
void ipath_format_hwerrors(u64 hwerrs,
const struct ipath_hwerror_msgs *hwerrmsgs,
size_t nhwerrmsgs,
char *msg, size_t lmsg);
