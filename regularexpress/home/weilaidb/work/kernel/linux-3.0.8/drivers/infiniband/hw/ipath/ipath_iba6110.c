static void ipath_setup_ht_setextled(struct ipath_devdata *, u64, u64);
struct _infinipath_do_not_use_kernel_regs ;
struct _infinipath_do_not_use_counters ;
#define IPATH_KREG_OFFSET(field) (offsetof( \
struct _infinipath_do_not_use_kernel_regs, field) / sizeof(u64))
#define IPATH_CREG_OFFSET(field) (offsetof( \
struct _infinipath_do_not_use_counters, field) / sizeof(u64))
static const struct ipath_kregs ipath_ht_kregs = ;
static const struct ipath_cregs ipath_ht_cregs = ;
#define INFINIPATH_I_RCVURG_MASK ((1U<<9)-1)
#define INFINIPATH_I_RCVURG_SHIFT 0
#define INFINIPATH_I_RCVAVAIL_MASK ((1U<<9)-1)
#define INFINIPATH_I_RCVAVAIL_SHIFT 12
#define INFINIPATH_HWE_HTCMEMPARITYERR_SHIFT 0
#define INFINIPATH_HWE_HTCMEMPARITYERR_MASK 0x3FFFFFULL
#define INFINIPATH_HWE_HTCLNKABYTE0CRCERR   0x0000000000800000ULL
#define INFINIPATH_HWE_HTCLNKABYTE1CRCERR   0x0000000001000000ULL
#define INFINIPATH_HWE_HTCLNKBBYTE0CRCERR   0x0000000002000000ULL
#define INFINIPATH_HWE_HTCLNKBBYTE1CRCERR   0x0000000004000000ULL
#define INFINIPATH_HWE_HTCMISCERR4          0x0000000008000000ULL
#define INFINIPATH_HWE_HTCMISCERR5          0x0000000010000000ULL
#define INFINIPATH_HWE_HTCMISCERR6          0x0000000020000000ULL
#define INFINIPATH_HWE_HTCMISCERR7          0x0000000040000000ULL
#define INFINIPATH_HWE_HTCBUSTREQPARITYERR  0x0000000080000000ULL
#define INFINIPATH_HWE_HTCBUSTRESPPARITYERR 0x0000000100000000ULL
#define INFINIPATH_HWE_HTCBUSIREQPARITYERR  0x0000000200000000ULL
#define INFINIPATH_HWE_COREPLL_FBSLIP       0x0080000000000000ULL
#define INFINIPATH_HWE_COREPLL_RFSLIP       0x0100000000000000ULL
#define INFINIPATH_HWE_HTBPLL_FBSLIP        0x0200000000000000ULL
#define INFINIPATH_HWE_HTBPLL_RFSLIP        0x0400000000000000ULL
#define INFINIPATH_HWE_HTAPLL_FBSLIP        0x0800000000000000ULL
#define INFINIPATH_HWE_HTAPLL_RFSLIP        0x1000000000000000ULL
#define INFINIPATH_HWE_SERDESPLLFAILED      0x2000000000000000ULL
#define IBA6110_IBCS_LINKTRAININGSTATE_MASK 0xf
#define IBA6110_IBCS_LINKSTATE_SHIFT 4
#define INFINIPATH_EXTS_FREQSEL 0x2
#define INFINIPATH_EXTS_SERDESSEL 0x4
#define INFINIPATH_EXTS_MEMBIST_ENDTEST     0x0000000000004000
#define INFINIPATH_EXTS_MEMBIST_CORRECT     0x0000000000008000
#define INFINIPATH_RT_ADDR_MASK 0xFFFFFFFFFFULL
#define INFINIPATH_RT_VALID 0x8000000000000000ULL
#define INFINIPATH_RT_ADDR_SHIFT 0
#define INFINIPATH_RT_BUFSIZE_MASK 0x3FFFULL
#define INFINIPATH_RT_BUFSIZE_SHIFT 48
#define INFINIPATH_R_INTRAVAIL_SHIFT 16
#define INFINIPATH_R_TAILUPD_SHIFT 31
#define INFINIPATH_XGXS_RESET          0x7ULL
static const ipath_err_t infinipath_hwe_htcmemparityerr_mask =
INFINIPATH_HWE_HTCMEMPARITYERR_MASK;
static const ipath_err_t infinipath_hwe_htcmemparityerr_shift =
INFINIPATH_HWE_HTCMEMPARITYERR_SHIFT;
static const ipath_err_t infinipath_hwe_htclnkabyte0crcerr =
INFINIPATH_HWE_HTCLNKABYTE0CRCERR;
static const ipath_err_t infinipath_hwe_htclnkabyte1crcerr =
INFINIPATH_HWE_HTCLNKABYTE1CRCERR;
static const ipath_err_t infinipath_hwe_htclnkbbyte0crcerr =
INFINIPATH_HWE_HTCLNKBBYTE0CRCERR;
static const ipath_err_t infinipath_hwe_htclnkbbyte1crcerr =
INFINIPATH_HWE_HTCLNKBBYTE1CRCERR;
#define _IPATH_GPIO_SDA_NUM 1
#define _IPATH_GPIO_SCL_NUM 0
#define IPATH_GPIO_SDA \
(1ULL << (_IPATH_GPIO_SDA_NUM+INFINIPATH_EXTC_GPIOOE_SHIFT))
#define IPATH_GPIO_SCL \
(1ULL << (_IPATH_GPIO_SCL_NUM+INFINIPATH_EXTC_GPIOOE_SHIFT))
#define _IPATH_HTLINK0_CRCBITS (infinipath_hwe_htclnkabyte0crcerr |	\
infinipath_hwe_htclnkabyte1crcerr)
#define _IPATH_HTLINK1_CRCBITS (infinipath_hwe_htclnkbbyte0crcerr |	\
infinipath_hwe_htclnkbbyte1crcerr)
#define _IPATH_HTLANE0_CRCBITS (infinipath_hwe_htclnkabyte0crcerr |	\
infinipath_hwe_htclnkbbyte0crcerr)
#define _IPATH_HTLANE1_CRCBITS (infinipath_hwe_htclnkabyte1crcerr |	\
infinipath_hwe_htclnkbbyte1crcerr)
static void hwerr_crcbits(struct ipath_devdata *dd, ipath_err_t hwerrs,
char *msg, size_t msgl)
static const struct ipath_hwerror_msgs ipath_6110_hwerror_msgs[] = ;
#define TXE_PIO_PARITY ((INFINIPATH_HWE_TXEMEMPARITYERR_PIOBUF | \
INFINIPATH_HWE_TXEMEMPARITYERR_PIOPBC) \
<< INFINIPATH_HWE_TXEMEMPARITYERR_SHIFT)
#define RXE_EAGER_PARITY (INFINIPATH_HWE_RXEMEMPARITYERR_EAGERTID \
<< INFINIPATH_HWE_RXEMEMPARITYERR_SHIFT)
static void ipath_ht_txe_recover(struct ipath_devdata *dd)
static void ipath_ht_handle_hwerrors(struct ipath_devdata *dd, char *msg,
size_t msgl)
static int ipath_ht_boardname(struct ipath_devdata *dd, char *name,
size_t namelen)
static void ipath_check_htlink(struct ipath_devdata *dd)
static int ipath_setup_ht_reset(struct ipath_devdata *dd)
#define HT_INTR_DISC_CONFIG  0x80
#define HT_INTR_REG_INDEX    2
static void slave_or_pri_blk(struct ipath_devdata *dd, struct pci_dev *pdev,
int pos, u8 cap_type)
static int ipath_ht_intconfig(struct ipath_devdata *dd)
static void ipath_ht_irq_update(struct pci_dev *dev, int irq,
struct ht_irq_msg *msg)
static int ipath_setup_ht_config(struct ipath_devdata *dd,
struct pci_dev *pdev)
static void ipath_setup_ht_cleanup(struct ipath_devdata *dd)
static void ipath_setup_ht_setextled(struct ipath_devdata *dd,
u64 lst, u64 ltst)
static void ipath_init_ht_variables(struct ipath_devdata *dd)
static void ipath_ht_init_hwerrors(struct ipath_devdata *dd)
static int ipath_ht_bringup_serdes(struct ipath_devdata *dd)
static void ipath_ht_quiet_serdes(struct ipath_devdata *dd)
static void ipath_ht_put_tid(struct ipath_devdata *dd,
u64 __iomem *tidptr, u32 type,
unsigned long pa)
static void ipath_ht_clear_tids(struct ipath_devdata *dd, unsigned port)
static void ipath_ht_tidtemplate(struct ipath_devdata *dd)
static int ipath_ht_early_init(struct ipath_devdata *dd)
static int ipath_ht_get_base_info(struct ipath_portdata *pd, void *kbase)
static void ipath_ht_free_irq(struct ipath_devdata *dd)
static struct ipath_message_header *
ipath_ht_get_msgheader(struct ipath_devdata *dd, __le32 *rhf_addr)
static void ipath_ht_config_ports(struct ipath_devdata *dd, ushort cfgports)
static void ipath_ht_read_counters(struct ipath_devdata *dd,
struct infinipath_counters *cntrs)
static int ipath_ht_nointr_fallback(struct ipath_devdata *dd)
static void ipath_ht_xgxs_reset(struct ipath_devdata *dd)
static int ipath_ht_get_ib_cfg(struct ipath_devdata *dd, int which)
static int ipath_ht_set_ib_cfg(struct ipath_devdata *dd, int which, u32 val)
static void ipath_ht_config_jint(struct ipath_devdata *dd, u16 a, u16 b)
static int ipath_ht_ib_updown(struct ipath_devdata *dd, int ibup, u64 ibcs)
void ipath_init_iba6110_funcs(struct ipath_devdata *dd)
