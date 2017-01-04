static void qib_6120_setup_setextled(struct qib_pportdata *, u32);
static void sendctrl_6120_mod(struct qib_pportdata *ppd, u32 op);
static u8 qib_6120_phys_portstate(u64);
static u32 qib_6120_iblink_state(u64);
#define KREG_IDX(regname) (QIB_6120_##regname##_OFFS / sizeof(u64))
#define kr_extctrl KREG_IDX(EXTCtrl)
#define kr_extstatus KREG_IDX(EXTStatus)
#define kr_gpio_clear KREG_IDX(GPIOClear)
#define kr_gpio_mask KREG_IDX(GPIOMask)
#define kr_gpio_out KREG_IDX(GPIOOut)
#define kr_gpio_status KREG_IDX(GPIOStatus)
#define kr_rcvctrl KREG_IDX(RcvCtrl)
#define kr_sendctrl KREG_IDX(SendCtrl)
#define kr_partitionkey KREG_IDX(RcvPartitionKey)
#define kr_hwdiagctrl KREG_IDX(HwDiagCtrl)
#define kr_ibcstatus KREG_IDX(IBCStatus)
#define kr_ibcctrl KREG_IDX(IBCCtrl)
#define kr_sendbuffererror KREG_IDX(SendBufErr0)
#define kr_rcvbthqp KREG_IDX(RcvBTHQP)
#define kr_counterregbase KREG_IDX(CntrRegBase)
#define kr_palign KREG_IDX(PageAlign)
#define kr_rcvegrbase KREG_IDX(RcvEgrBase)
#define kr_rcvegrcnt KREG_IDX(RcvEgrCnt)
#define kr_rcvhdrcnt KREG_IDX(RcvHdrCnt)
#define kr_rcvhdrentsize KREG_IDX(RcvHdrEntSize)
#define kr_rcvhdrsize KREG_IDX(RcvHdrSize)
#define kr_rcvtidbase KREG_IDX(RcvTIDBase)
#define kr_rcvtidcnt KREG_IDX(RcvTIDCnt)
#define kr_scratch KREG_IDX(Scratch)
#define kr_sendctrl KREG_IDX(SendCtrl)
#define kr_sendpioavailaddr KREG_IDX(SendPIOAvailAddr)
#define kr_sendpiobufbase KREG_IDX(SendPIOBufBase)
#define kr_sendpiobufcnt KREG_IDX(SendPIOBufCnt)
#define kr_sendpiosize KREG_IDX(SendPIOSize)
#define kr_sendregbase KREG_IDX(SendRegBase)
#define kr_userregbase KREG_IDX(UserRegBase)
#define kr_control KREG_IDX(Control)
#define kr_intclear KREG_IDX(IntClear)
#define kr_intmask KREG_IDX(IntMask)
#define kr_intstatus KREG_IDX(IntStatus)
#define kr_errclear KREG_IDX(ErrClear)
#define kr_errmask KREG_IDX(ErrMask)
#define kr_errstatus KREG_IDX(ErrStatus)
#define kr_hwerrclear KREG_IDX(HwErrClear)
#define kr_hwerrmask KREG_IDX(HwErrMask)
#define kr_hwerrstatus KREG_IDX(HwErrStatus)
#define kr_revision KREG_IDX(Revision)
#define kr_portcnt KREG_IDX(PortCnt)
#define kr_serdes_cfg0 KREG_IDX(SerdesCfg0)
#define kr_serdes_cfg1 (kr_serdes_cfg0 + 1)
#define kr_serdes_stat KREG_IDX(SerdesStat)
#define kr_xgxs_cfg KREG_IDX(XGXSCfg)
#define kr_rcvhdraddr KREG_IDX(RcvHdrAddr0)
#define kr_rcvhdrtailaddr KREG_IDX(RcvHdrTailAddr0)
#define CREG_IDX(regname) ((QIB_6120_##regname##_OFFS - \
QIB_6120_LBIntCnt_OFFS) / sizeof(u64))
#define cr_badformat CREG_IDX(RxBadFormatCnt)
#define cr_erricrc CREG_IDX(RxICRCErrCnt)
#define cr_errlink CREG_IDX(RxLinkProblemCnt)
#define cr_errlpcrc CREG_IDX(RxLPCRCErrCnt)
#define cr_errpkey CREG_IDX(RxPKeyMismatchCnt)
#define cr_rcvflowctrl_err CREG_IDX(RxFlowCtrlErrCnt)
#define cr_err_rlen CREG_IDX(RxLenErrCnt)
#define cr_errslen CREG_IDX(TxLenErrCnt)
#define cr_errtidfull CREG_IDX(RxTIDFullErrCnt)
#define cr_errtidvalid CREG_IDX(RxTIDValidErrCnt)
#define cr_errvcrc CREG_IDX(RxVCRCErrCnt)
#define cr_ibstatuschange CREG_IDX(IBStatusChangeCnt)
#define cr_lbint CREG_IDX(LBIntCnt)
#define cr_invalidrlen CREG_IDX(RxMaxMinLenErrCnt)
#define cr_invalidslen CREG_IDX(TxMaxMinLenErrCnt)
#define cr_lbflowstall CREG_IDX(LBFlowStallCnt)
#define cr_pktrcv CREG_IDX(RxDataPktCnt)
#define cr_pktrcvflowctrl CREG_IDX(RxFlowPktCnt)
#define cr_pktsend CREG_IDX(TxDataPktCnt)
#define cr_pktsendflow CREG_IDX(TxFlowPktCnt)
#define cr_portovfl CREG_IDX(RxP0HdrEgrOvflCnt)
#define cr_rcvebp CREG_IDX(RxEBPCnt)
#define cr_rcvovfl CREG_IDX(RxBufOvflCnt)
#define cr_senddropped CREG_IDX(TxDroppedPktCnt)
#define cr_sendstall CREG_IDX(TxFlowStallCnt)
#define cr_sendunderrun CREG_IDX(TxUnderrunCnt)
#define cr_wordrcv CREG_IDX(RxDwordCnt)
#define cr_wordsend CREG_IDX(TxDwordCnt)
#define cr_txunsupvl CREG_IDX(TxUnsupVLErrCnt)
#define cr_rxdroppkt CREG_IDX(RxDroppedPktCnt)
#define cr_iblinkerrrecov CREG_IDX(IBLinkErrRecoveryCnt)
#define cr_iblinkdown CREG_IDX(IBLinkDownedCnt)
#define cr_ibsymbolerr CREG_IDX(IBSymbolErrCnt)
#define SYM_RMASK(regname, fldname) ((u64)              \
QIB_6120_##regname##_##fldname##_RMASK)
#define SYM_MASK(regname, fldname) ((u64)               \
QIB_6120_##regname##_##fldname##_RMASK <<       \
QIB_6120_##regname##_##fldname##_LSB)
#define SYM_LSB(regname, fldname) (QIB_6120_##regname##_##fldname##_LSB)
#define SYM_FIELD(value, regname, fldname) ((u64) \
(((value) >> SYM_LSB(regname, fldname)) & \
SYM_RMASK(regname, fldname)))
#define ERR_MASK(fldname) SYM_MASK(ErrMask, fldname##Mask)
#define HWE_MASK(fldname) SYM_MASK(HwErrMask, fldname##Mask)
#define IB_6120_LT_STATE_DISABLED        0x00
#define IB_6120_LT_STATE_LINKUP          0x01
#define IB_6120_LT_STATE_POLLACTIVE      0x02
#define IB_6120_LT_STATE_POLLQUIET       0x03
#define IB_6120_LT_STATE_SLEEPDELAY      0x04
#define IB_6120_LT_STATE_SLEEPQUIET      0x05
#define IB_6120_LT_STATE_CFGDEBOUNCE     0x08
#define IB_6120_LT_STATE_CFGRCVFCFG      0x09
#define IB_6120_LT_STATE_CFGWAITRMT      0x0a
#define IB_6120_LT_STATE_CFGIDLE 0x0b
#define IB_6120_LT_STATE_RECOVERRETRAIN  0x0c
#define IB_6120_LT_STATE_RECOVERWAITRMT  0x0e
#define IB_6120_LT_STATE_RECOVERIDLE     0x0f
#define IB_6120_L_STATE_DOWN             0x0
#define IB_6120_L_STATE_INIT             0x1
#define IB_6120_L_STATE_ARM              0x2
#define IB_6120_L_STATE_ACTIVE           0x3
#define IB_6120_L_STATE_ACT_DEFER        0x4
static const u8 qib_6120_physportstate[0x20] = ;
struct qib_chip_specific ;
#define QLOGIC_IB_IBCC_LINKINITCMD_DISABLE 1
#define QLOGIC_IB_IBCC_LINKINITCMD_POLL 2
#define QLOGIC_IB_IBCC_LINKINITCMD_SLEEP 3
#define QLOGIC_IB_IBCC_LINKINITCMD_SHIFT 16
#define QLOGIC_IB_IBCC_LINKCMD_DOWN 1
#define QLOGIC_IB_IBCC_LINKCMD_ARMED 2
#define QLOGIC_IB_IBCC_LINKCMD_ACTIVE 3
#define QLOGIC_IB_IBCC_LINKCMD_SHIFT 18
static inline u32 qib_read_ureg32(const struct qib_devdata *dd,
enum qib_ureg regno, int ctxt)
static inline void qib_write_ureg(const struct qib_devdata *dd,
enum qib_ureg regno, u64 value, int ctxt)
static inline u32 qib_read_kreg32(const struct qib_devdata *dd,
const u16 regno)
static inline u64 qib_read_kreg64(const struct qib_devdata *dd,
const u16 regno)
static inline void qib_write_kreg(const struct qib_devdata *dd,
const u16 regno, u64 value)
static inline void qib_write_kreg_ctxt(const struct qib_devdata *dd,
const u16 regno, unsigned ctxt,
u64 value)
static inline void write_6120_creg(const struct qib_devdata *dd,
u16 regno, u64 value)
static inline u64 read_6120_creg(const struct qib_devdata *dd, u16 regno)
static inline u32 read_6120_creg32(const struct qib_devdata *dd, u16 regno)
#define QLOGIC_IB_C_RESET 1U
#define QLOGIC_IB_I_RCVURG_MASK ((1U << 5) - 1)
#define QLOGIC_IB_I_RCVURG_SHIFT 0
#define QLOGIC_IB_I_RCVAVAIL_MASK ((1U << 5) - 1)
#define QLOGIC_IB_I_RCVAVAIL_SHIFT 12
#define QLOGIC_IB_C_FREEZEMODE 0x00000002
#define QLOGIC_IB_C_LINKENABLE 0x00000004
#define QLOGIC_IB_I_ERROR               0x0000000080000000ULL
#define QLOGIC_IB_I_SPIOSENT            0x0000000040000000ULL
#define QLOGIC_IB_I_SPIOBUFAVAIL        0x0000000020000000ULL
#define QLOGIC_IB_I_GPIO                0x0000000010000000ULL
#define QLOGIC_IB_I_BITSEXTANT \
((QLOGIC_IB_I_RCVURG_MASK << QLOGIC_IB_I_RCVURG_SHIFT) | \
(QLOGIC_IB_I_RCVAVAIL_MASK << \
QLOGIC_IB_I_RCVAVAIL_SHIFT) | \
QLOGIC_IB_I_ERROR | QLOGIC_IB_I_SPIOSENT | \
QLOGIC_IB_I_SPIOBUFAVAIL | QLOGIC_IB_I_GPIO)
#define QLOGIC_IB_HWE_PCIEMEMPARITYERR_MASK  0x000000000000003fULL
#define QLOGIC_IB_HWE_PCIEMEMPARITYERR_SHIFT 0
#define QLOGIC_IB_HWE_PCIEPOISONEDTLP      0x0000000010000000ULL
#define QLOGIC_IB_HWE_PCIECPLTIMEOUT       0x0000000020000000ULL
#define QLOGIC_IB_HWE_PCIEBUSPARITYXTLH    0x0000000040000000ULL
#define QLOGIC_IB_HWE_PCIEBUSPARITYXADM    0x0000000080000000ULL
#define QLOGIC_IB_HWE_PCIEBUSPARITYRADM    0x0000000100000000ULL
#define QLOGIC_IB_HWE_COREPLL_FBSLIP       0x0080000000000000ULL
#define QLOGIC_IB_HWE_COREPLL_RFSLIP       0x0100000000000000ULL
#define QLOGIC_IB_HWE_PCIE1PLLFAILED       0x0400000000000000ULL
#define QLOGIC_IB_HWE_PCIE0PLLFAILED       0x0800000000000000ULL
#define QLOGIC_IB_HWE_SERDESPLLFAILED      0x1000000000000000ULL
#define QLOGIC_IB_EXTS_FREQSEL 0x2
#define QLOGIC_IB_EXTS_SERDESSEL 0x4
#define QLOGIC_IB_EXTS_MEMBIST_ENDTEST     0x0000000000004000
#define QLOGIC_IB_EXTS_MEMBIST_FOUND       0x0000000000008000
#define QLOGIC_IB_XGXS_RESET          0x5ULL
#define _QIB_GPIO_SDA_NUM 1
#define _QIB_GPIO_SCL_NUM 0
#define GPIO_RXUVL_BIT 3
#define GPIO_OVRUN_BIT 4
#define GPIO_LLI_BIT 5
#define GPIO_ERRINTR_MASK 0x38
#define QLOGIC_IB_RT_BUFSIZE_MASK 0xe0000000ULL
#define QLOGIC_IB_RT_BUFSIZE_SHIFTVAL(tid) \
((((tid) & QLOGIC_IB_RT_BUFSIZE_MASK) >> 29) + 11 - 1)
#define QLOGIC_IB_RT_BUFSIZE(tid) (1 << QLOGIC_IB_RT_BUFSIZE_SHIFTVAL(tid))
#define QLOGIC_IB_RT_IS_VALID(tid) \
(((tid) & QLOGIC_IB_RT_BUFSIZE_MASK) && \
((((tid) & QLOGIC_IB_RT_BUFSIZE_MASK) != QLOGIC_IB_RT_BUFSIZE_MASK)))
#define QLOGIC_IB_RT_ADDR_MASK 0x1FFFFFFFULL
#define QLOGIC_IB_RT_ADDR_SHIFT 10
#define QLOGIC_IB_R_INTRAVAIL_SHIFT 16
#define QLOGIC_IB_R_TAILUPD_SHIFT 31
#define IBA6120_R_PKEY_DIS_SHIFT 30
#define PBC_6120_VL15_SEND_CTRL (1ULL << 31)
#define IBCBUSFRSPCPARITYERR HWE_MASK(IBCBusFromSPCParityErr)
#define IBCBUSTOSPCPARITYERR HWE_MASK(IBCBusToSPCParityErr)
#define SYM_MASK_BIT(regname, fldname, bit) ((u64) \
((1ULL << (SYM_LSB(regname, fldname) + (bit)))))
#define TXEMEMPARITYERR_PIOBUF \
SYM_MASK_BIT(HwErrMask, TXEMemParityErrMask, 0)
#define TXEMEMPARITYERR_PIOPBC \
SYM_MASK_BIT(HwErrMask, TXEMemParityErrMask, 1)
#define TXEMEMPARITYERR_PIOLAUNCHFIFO \
SYM_MASK_BIT(HwErrMask, TXEMemParityErrMask, 2)
#define RXEMEMPARITYERR_RCVBUF \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 0)
#define RXEMEMPARITYERR_LOOKUPQ \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 1)
#define RXEMEMPARITYERR_EXPTID \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 2)
#define RXEMEMPARITYERR_EAGERTID \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 3)
#define RXEMEMPARITYERR_FLAGBUF \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 4)
#define RXEMEMPARITYERR_DATAINFO \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 5)
#define RXEMEMPARITYERR_HDRINFO \
SYM_MASK_BIT(HwErrMask, RXEMemParityErrMask, 6)
static const struct qib_hwerror_msgs qib_6120_hwerror_msgs[] = ;
#define TXE_PIO_PARITY (TXEMEMPARITYERR_PIOBUF | TXEMEMPARITYERR_PIOPBC)
#define _QIB_PLL_FAIL (QLOGIC_IB_HWE_COREPLL_FBSLIP |   \
QLOGIC_IB_HWE_COREPLL_RFSLIP)
#define IB_HWE_BITSEXTANT \
(HWE_MASK(RXEMemParityErr) |					\
HWE_MASK(TXEMemParityErr) |					\
(QLOGIC_IB_HWE_PCIEMEMPARITYERR_MASK <<			\
QLOGIC_IB_HWE_PCIEMEMPARITYERR_SHIFT) |			\
QLOGIC_IB_HWE_PCIE1PLLFAILED |					\
QLOGIC_IB_HWE_PCIE0PLLFAILED |					\
QLOGIC_IB_HWE_PCIEPOISONEDTLP |				\
QLOGIC_IB_HWE_PCIECPLTIMEOUT |					\
QLOGIC_IB_HWE_PCIEBUSPARITYXTLH |				\
QLOGIC_IB_HWE_PCIEBUSPARITYXADM |				\
QLOGIC_IB_HWE_PCIEBUSPARITYRADM |				\
HWE_MASK(PowerOnBISTFailed) |					\
QLOGIC_IB_HWE_COREPLL_FBSLIP |					\
QLOGIC_IB_HWE_COREPLL_RFSLIP |					\
QLOGIC_IB_HWE_SERDESPLLFAILED |				\
HWE_MASK(IBCBusToSPCParityErr) |				\
HWE_MASK(IBCBusFromSPCParityErr))
#define IB_E_BITSEXTANT \
(ERR_MASK(RcvFormatErr) | ERR_MASK(RcvVCRCErr) |		\
ERR_MASK(RcvICRCErr) | ERR_MASK(RcvMinPktLenErr) |		\
ERR_MASK(RcvMaxPktLenErr) | ERR_MASK(RcvLongPktLenErr) |	\
ERR_MASK(RcvShortPktLenErr) | ERR_MASK(RcvUnexpectedCharErr) | \
ERR_MASK(RcvUnsupportedVLErr) | ERR_MASK(RcvEBPErr) |		\
ERR_MASK(RcvIBFlowErr) | ERR_MASK(RcvBadVersionErr) |		\
ERR_MASK(RcvEgrFullErr) | ERR_MASK(RcvHdrFullErr) |		\
ERR_MASK(RcvBadTidErr) | ERR_MASK(RcvHdrLenErr) |		\
ERR_MASK(RcvHdrErr) | ERR_MASK(RcvIBLostLinkErr) |		\
ERR_MASK(SendMinPktLenErr) | ERR_MASK(SendMaxPktLenErr) |	\
ERR_MASK(SendUnderRunErr) | ERR_MASK(SendPktLenErr) |		\
ERR_MASK(SendDroppedSmpPktErr) |				\
ERR_MASK(SendDroppedDataPktErr) |				\
ERR_MASK(SendPioArmLaunchErr) |				\
ERR_MASK(SendUnexpectedPktNumErr) |				\
ERR_MASK(SendUnsupportedVLErr) | ERR_MASK(IBStatusChanged) |	\
ERR_MASK(InvalidAddrErr) | ERR_MASK(ResetNegated) |		\
ERR_MASK(HardwareErr))
#define QLOGIC_IB_E_PKTERRS ( \
ERR_MASK(SendPktLenErr) |				\
ERR_MASK(SendDroppedDataPktErr) |			\
ERR_MASK(RcvVCRCErr) |					\
ERR_MASK(RcvICRCErr) |					\
ERR_MASK(RcvShortPktLenErr) |				\
ERR_MASK(RcvEBPErr))
#define E_SUM_PKTERRS						\
(ERR_MASK(RcvHdrLenErr) | ERR_MASK(RcvBadTidErr) |		\
ERR_MASK(RcvBadVersionErr) | ERR_MASK(RcvHdrErr) |		\
ERR_MASK(RcvLongPktLenErr) | ERR_MASK(RcvShortPktLenErr) |	\
ERR_MASK(RcvMaxPktLenErr) | ERR_MASK(RcvMinPktLenErr) |	\
ERR_MASK(RcvFormatErr) | ERR_MASK(RcvUnsupportedVLErr) |	\
ERR_MASK(RcvUnexpectedCharErr) | ERR_MASK(RcvEBPErr))
#define E_SUM_ERRS							\
(ERR_MASK(SendPioArmLaunchErr) |				\
ERR_MASK(SendUnexpectedPktNumErr) |				\
ERR_MASK(SendDroppedDataPktErr) |				\
ERR_MASK(SendDroppedSmpPktErr) |				\
ERR_MASK(SendMaxPktLenErr) | ERR_MASK(SendUnsupportedVLErr) |	\
ERR_MASK(SendMinPktLenErr) | ERR_MASK(SendPktLenErr) |		\
ERR_MASK(InvalidAddrErr))
#define E_SPKT_ERRS_IGNORE \
(ERR_MASK(SendDroppedDataPktErr) |				\
ERR_MASK(SendDroppedSmpPktErr) |				\
ERR_MASK(SendMaxPktLenErr) | ERR_MASK(SendMinPktLenErr) |	\
ERR_MASK(SendPktLenErr))
#define E_SUM_LINK_PKTERRS		\
(ERR_MASK(SendDroppedDataPktErr) |				\
ERR_MASK(SendDroppedSmpPktErr) |				\
ERR_MASK(SendMinPktLenErr) | ERR_MASK(SendPktLenErr) |		\
ERR_MASK(RcvShortPktLenErr) | ERR_MASK(RcvMinPktLenErr) |	\
ERR_MASK(RcvUnexpectedCharErr))
static void qib_6120_put_tid_2(struct qib_devdata *, u64 __iomem *,
u32, unsigned long);
static void qib_6120_txe_recover(struct qib_devdata *dd)
static void qib_6120_set_intr_state(struct qib_devdata *dd, u32 enable)
static void qib_6120_clear_freeze(struct qib_devdata *dd)
static void qib_handle_6120_hwerrors(struct qib_devdata *dd, char *msg,
size_t msgl)
static int qib_decode_6120_err(struct qib_devdata *dd, char *buf, size_t blen,
u64 err)
static void qib_disarm_6120_senderrbufs(struct qib_pportdata *ppd)
static int chk_6120_linkrecovery(struct qib_devdata *dd, u64 ibcs)
static void handle_6120_errors(struct qib_devdata *dd, u64 errs)
static void qib_6120_init_hwerrors(struct qib_devdata *dd)
static void qib_set_6120_armlaunch(struct qib_devdata *dd, u32 enable)
static void qib_set_ib_6120_lstate(struct qib_pportdata *ppd, u16 linkcmd,
u16 linitcmd)
static int qib_6120_bringup_serdes(struct qib_pportdata *ppd)
static void qib_6120_quiet_serdes(struct qib_pportdata *ppd)
static void qib_6120_setup_setextled(struct qib_pportdata *ppd, u32 on)
static void qib_6120_free_irq(struct qib_devdata *dd)
static void qib_6120_setup_cleanup(struct qib_devdata *dd)
static void qib_wantpiobuf_6120_intr(struct qib_devdata *dd, u32 needint)
static noinline void unlikely_6120_intr(struct qib_devdata *dd, u64 istat)
static irqreturn_t qib_6120intr(int irq, void *data)
static void qib_setup_6120_interrupt(struct qib_devdata *dd)
static void pe_boardname(struct qib_devdata *dd)
static int qib_6120_setup_reset(struct qib_devdata *dd)
static void qib_6120_put_tid(struct qib_devdata *dd, u64 __iomem *tidptr,
u32 type, unsigned long pa)
static void qib_6120_put_tid_2(struct qib_devdata *dd, u64 __iomem *tidptr,
u32 type, unsigned long pa)
static void qib_6120_clear_tids(struct qib_devdata *dd,
struct qib_ctxtdata *rcd)
static void qib_6120_tidtemplate(struct qib_devdata *dd)
int __attribute__((weak)) qib_unordered_wc(void)
static int qib_6120_get_base_info(struct qib_ctxtdata *rcd,
struct qib_base_info *kinfo)
static struct qib_message_header *
qib_6120_get_msgheader(struct qib_devdata *dd, __le32 *rhf_addr)
static void qib_6120_config_ctxts(struct qib_devdata *dd)
static void qib_update_6120_usrhead(struct qib_ctxtdata *rcd, u64 hd,
u32 updegr, u32 egrhd, u32 npkts)
static u32 qib_6120_hdrqempty(struct qib_ctxtdata *rcd)
static void alloc_dummy_hdrq(struct qib_devdata *dd)
static void rcvctrl_6120_mod(struct qib_pportdata *ppd, unsigned int op,
int ctxt)
static void sendctrl_6120_mod(struct qib_pportdata *ppd, u32 op)
static u64 qib_portcntr_6120(struct qib_pportdata *ppd, u32 reg)
static const char cntr6120names[] =
"Interrupts\n"
"HostBusStall\n"
"E RxTIDFull\n"
"RxTIDInvalid\n"
"Ctxt0EgrOvfl\n"
"Ctxt1EgrOvfl\n"
"Ctxt2EgrOvfl\n"
"Ctxt3EgrOvfl\n"
"Ctxt4EgrOvfl\n";
static const size_t cntr6120indices[] = ;
static const char portcntr6120names[] =
"TxPkt\n"
"TxFlowPkt\n"
"TxWords\n"
"RxPkt\n"
"RxFlowPkt\n"
"RxWords\n"
"TxFlowStall\n"
"E IBStatusChng\n"
"IBLinkDown\n"
"IBLnkRecov\n"
"IBRxLinkErr\n"
"IBSymbolErr\n"
"RxLLIErr\n"
"RxBadFormat\n"
"RxBadLen\n"
"RxBufOvrfl\n"
"RxEBP\n"
"RxFlowCtlErr\n"
"RxICRCerr\n"
"RxLPCRCerr\n"
"RxVCRCerr\n"
"RxInvalLen\n"
"RxInvalPKey\n"
"RxPktDropped\n"
"TxBadLength\n"
"TxDropped\n"
"TxInvalLen\n"
"TxUnderrun\n"
"TxUnsupVL\n"
;
#define _PORT_VIRT_FLAG 0x8000
static const size_t portcntr6120indices[] = ;
static void init_6120_cntrnames(struct qib_devdata *dd)
static u32 qib_read_6120cntrs(struct qib_devdata *dd, loff_t pos, char **namep,
u64 **cntrp)
static u32 qib_read_6120portcntrs(struct qib_devdata *dd, loff_t pos, u32 port,
char **namep, u64 **cntrp)
static void qib_chk_6120_errormask(struct qib_devdata *dd)
static void qib_get_6120_faststats(unsigned long opaque)
static int qib_6120_nointr_fallback(struct qib_devdata *dd)
static void qib_6120_xgxs_reset(struct qib_pportdata *ppd)
static int qib_6120_get_ib_cfg(struct qib_pportdata *ppd, int which)
static int qib_6120_set_ib_cfg(struct qib_pportdata *ppd, int which, u32 val)
static int qib_6120_set_loopback(struct qib_pportdata *ppd, const char *what)
static void pma_6120_timer(unsigned long data)
static void qib_set_cntr_6120_sample(struct qib_pportdata *ppd, u32 intv,
u32 start)
static u32 qib_6120_iblink_state(u64 ibcs)
static u8 qib_6120_phys_portstate(u64 ibcs)
static int qib_6120_ib_updown(struct qib_pportdata *ppd, int ibup, u64 ibcs)
static int gpio_6120_mod(struct qib_devdata *dd, u32 out, u32 dir, u32 mask)
static void get_6120_chip_params(struct qib_devdata *dd)
static void set_6120_baseaddrs(struct qib_devdata *dd)
static int qib_late_6120_initreg(struct qib_devdata *dd)
static int init_6120_variables(struct qib_devdata *dd)
static u32 __iomem *get_6120_link_buf(struct qib_pportdata *ppd, u32 *bnum)
static u32 __iomem *qib_6120_getsendbuf(struct qib_pportdata *ppd, u64 pbc,
u32 *pbufnum)
static int init_sdma_6120_regs(struct qib_pportdata *ppd)
static u16 qib_sdma_6120_gethead(struct qib_pportdata *ppd)
static int qib_sdma_6120_busy(struct qib_pportdata *ppd)
static void qib_sdma_update_6120_tail(struct qib_pportdata *ppd, u16 tail)
static void qib_6120_sdma_sendctrl(struct qib_pportdata *ppd, unsigned op)
static void qib_sdma_set_6120_desc_cnt(struct qib_pportdata *ppd, unsigned cnt)
static u32 qib_6120_setpbc_control(struct qib_pportdata *ppd, u32 plen,
u8 srate, u8 vl)
static void qib_6120_initvl15_bufs(struct qib_devdata *dd)
static void qib_6120_init_ctxt(struct qib_ctxtdata *rcd)
static void qib_6120_txchk_change(struct qib_devdata *dd, u32 start,
u32 len, u32 avail, struct qib_ctxtdata *rcd)
static void writescratch(struct qib_devdata *dd, u32 val)
static int qib_6120_tempsense_rd(struct qib_devdata *dd, int regnum)
static int qib_6120_eeprom_wen(struct qib_devdata *dd, int wen)
struct qib_devdata *qib_init_iba6120_funcs(struct pci_dev *pdev,
const struct pci_device_id *ent)
