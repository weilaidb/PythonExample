static void qib_setup_7322_setextled(struct qib_pportdata *, u32);
static void qib_7322_handle_hwerrors(struct qib_devdata *, char *, size_t);
static void sendctrl_7322_mod(struct qib_pportdata *ppd, u32 op);
static irqreturn_t qib_7322intr(int irq, void *data);
static irqreturn_t qib_7322bufavail(int irq, void *data);
static irqreturn_t sdma_intr(int irq, void *data);
static irqreturn_t sdma_idle_intr(int irq, void *data);
static irqreturn_t sdma_progress_intr(int irq, void *data);
static irqreturn_t sdma_cleanup_intr(int irq, void *data);
static void qib_7322_txchk_change(struct qib_devdata *, u32, u32, u32,
struct qib_ctxtdata *rcd);
static u8 qib_7322_phys_portstate(u64);
static u32 qib_7322_iblink_state(u64);
static void qib_set_ib_7322_lstate(struct qib_pportdata *ppd, u16 linkcmd,
u16 linitcmd);
static void force_h1(struct qib_pportdata *);
static void adj_tx_serdes(struct qib_pportdata *);
static u32 qib_7322_setpbc_control(struct qib_pportdata *, u32, u8, u8);
static void qib_7322_mini_pcs_reset(struct qib_pportdata *);
static u32 ahb_mod(struct qib_devdata *, int, int, int, u32, u32);
static void ibsd_wr_allchans(struct qib_pportdata *, int, unsigned, unsigned);
static void serdes_7322_los_enable(struct qib_pportdata *, int);
static int serdes_7322_init_old(struct qib_pportdata *);
static int serdes_7322_init_new(struct qib_pportdata *);
#define BMASK(msb, lsb) (((1 << ((msb) + 1 - (lsb))) - 1) << (lsb))
#define LE2_DEFAULT 5
#define LE2_5m 4
#define LE2_QME 0
#define IBSD(hw_pidx) (hw_pidx + 2)
static const unsigned rcv_int_timeout = 375;
static const unsigned rcv_int_count = 16;
static const unsigned sdma_idle_cnt = 64;
#define RXEQ_DISABLE_MSECS 2500
ushort qib_num_cfg_vls = 2;
module_param_named(num_vls, qib_num_cfg_vls, ushort, S_IRUGO);
MODULE_PARM_DESC(num_vls, "Set number of Virtual Lanes to use (1-8)");
static ushort qib_chase = 1;
module_param_named(chase, qib_chase, ushort, S_IRUGO);
MODULE_PARM_DESC(chase, "Enable state chase handling");
static ushort qib_long_atten = 10;
module_param_named(long_attenuation, qib_long_atten, ushort, S_IRUGO);
MODULE_PARM_DESC(long_attenuation, \
"attenuation cutoff (dB) for long copper cable setup");
static ushort qib_singleport;
module_param_named(singleport, qib_singleport, ushort, S_IRUGO);
MODULE_PARM_DESC(singleport, "Use only IB port 1; more per-port buffer space");
static unsigned qib_rcvhdrcnt;
module_param_named(rcvhdrcnt, qib_rcvhdrcnt, uint, S_IRUGO);
MODULE_PARM_DESC(rcvhdrcnt, "receive header count");
static unsigned qib_rcvhdrsize;
module_param_named(rcvhdrsize, qib_rcvhdrsize, uint, S_IRUGO);
MODULE_PARM_DESC(rcvhdrsize, "receive header size in 32-bit words");
static unsigned qib_rcvhdrentsize;
module_param_named(rcvhdrentsize, qib_rcvhdrentsize, uint, S_IRUGO);
MODULE_PARM_DESC(rcvhdrentsize, "receive header entry size in 32-bit words");
#define MAX_ATTEN_LEN 64
static char txselect_list[MAX_ATTEN_LEN] = "10";
static struct kparam_string kp_txselect = ;
static int  setup_txselect(const char *, struct kernel_param *);
module_param_call(txselect, setup_txselect, param_get_string,
&kp_txselect, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(txselect, \
"Tx serdes indices (for no QSFP or invalid QSFP data)");
#define BOARD_QME7342 5
#define BOARD_QMH7342 6
#define IS_QMH(dd) (SYM_FIELD((dd)->revision, Revision, BoardID) == \
BOARD_QMH7342)
#define IS_QME(dd) (SYM_FIELD((dd)->revision, Revision, BoardID) == \
BOARD_QME7342)
#define KREG_IDX(regname)     (QIB_7322_##regname##_OFFS / sizeof(u64))
#define KREG_IBPORT_IDX(regname) ((QIB_7322_##regname##_0_OFFS / sizeof(u64)))
#define MASK_ACROSS(lsb, msb) \
(((1ULL << ((msb) + 1 - (lsb))) - 1) << (lsb))
#define SYM_RMASK(regname, fldname) ((u64)              \
QIB_7322_##regname##_##fldname##_RMASK)
#define SYM_MASK(regname, fldname) ((u64)               \
QIB_7322_##regname##_##fldname##_RMASK <<       \
QIB_7322_##regname##_##fldname##_LSB)
#define SYM_FIELD(value, regname, fldname) ((u64)	\
(((value) >> SYM_LSB(regname, fldname)) &	\
SYM_RMASK(regname, fldname)))
#define SYM_FIELD_ACROSS(value, regname, fldname, nbits) \
(((value) >> SYM_LSB(regname, fldname)) & MASK_ACROSS(0, nbits))
#define HWE_MASK(fldname) SYM_MASK(HwErrMask, fldname##Mask)
#define ERR_MASK(fldname) SYM_MASK(ErrMask, fldname##Mask)
#define ERR_MASK_N(fldname) SYM_MASK(ErrMask_0, fldname##Mask)
#define INT_MASK(fldname) SYM_MASK(IntMask, fldname##IntMask)
#define INT_MASK_P(fldname, port) SYM_MASK(IntMask, fldname##IntMask##_##port)
#define INT_MASK_PM(fldname, port) SYM_MASK(IntMask, fldname##Mask##_##port)
#define SYM_LSB(regname, fldname) (QIB_7322_##regname##_##fldname##_LSB)
#define IBA7322_TID_SZ_SHIFT QIB_7322_RcvTIDArray0_RT_BufSize_LSB
#define IBA7322_TID_SZ_2K (1UL<<IBA7322_TID_SZ_SHIFT)
#define IBA7322_TID_SZ_4K (2UL<<IBA7322_TID_SZ_SHIFT)
#define IBA7322_TID_PA_SHIFT 11U
#define SendIBSLIDAssignMask \
QIB_7322_SendIBSLIDAssign_0_SendIBSLIDAssign_15_0_RMASK
#define SendIBSLMCMask \
QIB_7322_SendIBSLIDMask_0_SendIBSLIDMask_15_0_RMASK
#define ExtLED_IB1_YEL SYM_MASK(EXTCtrl, LEDPort0YellowOn)
#define ExtLED_IB1_GRN SYM_MASK(EXTCtrl, LEDPort0GreenOn)
#define ExtLED_IB2_YEL SYM_MASK(EXTCtrl, LEDPort1YellowOn)
#define ExtLED_IB2_GRN SYM_MASK(EXTCtrl, LEDPort1GreenOn)
#define ExtLED_IB1_MASK (ExtLED_IB1_YEL | ExtLED_IB1_GRN)
#define ExtLED_IB2_MASK (ExtLED_IB2_YEL | ExtLED_IB2_GRN)
#define _QIB_GPIO_SDA_NUM 1
#define _QIB_GPIO_SCL_NUM 0
#define QIB_EEPROM_WEN_NUM 14
#define QIB_TWSI_EEPROM_DEV 0xA2
#define QIB_7322_PSXMITWAIT_CHECK_RATE 4000
#define PORT_SPD_CAP (QIB_IB_SDR | QIB_IB_DDR | QIB_IB_QDR)
#define PORT_SPD_CAP_SHIFT 3
#define DUAL_PORT_CAP (PORT_SPD_CAP | (PORT_SPD_CAP << PORT_SPD_CAP_SHIFT))
#define kr_contextcnt KREG_IDX(ContextCnt)
#define kr_control KREG_IDX(Control)
#define kr_counterregbase KREG_IDX(CntrRegBase)
#define kr_errclear KREG_IDX(ErrClear)
#define kr_errmask KREG_IDX(ErrMask)
#define kr_errstatus KREG_IDX(ErrStatus)
#define kr_extctrl KREG_IDX(EXTCtrl)
#define kr_extstatus KREG_IDX(EXTStatus)
#define kr_gpio_clear KREG_IDX(GPIOClear)
#define kr_gpio_mask KREG_IDX(GPIOMask)
#define kr_gpio_out KREG_IDX(GPIOOut)
#define kr_gpio_status KREG_IDX(GPIOStatus)
#define kr_hwdiagctrl KREG_IDX(HwDiagCtrl)
#define kr_debugportval KREG_IDX(DebugPortValueReg)
#define kr_fmask KREG_IDX(feature_mask)
#define kr_act_fmask KREG_IDX(active_feature_mask)
#define kr_hwerrclear KREG_IDX(HwErrClear)
#define kr_hwerrmask KREG_IDX(HwErrMask)
#define kr_hwerrstatus KREG_IDX(HwErrStatus)
#define kr_intclear KREG_IDX(IntClear)
#define kr_intmask KREG_IDX(IntMask)
#define kr_intredirect KREG_IDX(IntRedirect0)
#define kr_intstatus KREG_IDX(IntStatus)
#define kr_pagealign KREG_IDX(PageAlign)
#define kr_rcvavailtimeout KREG_IDX(RcvAvailTimeOut0)
#define kr_rcvctrl KREG_IDX(RcvCtrl)
#define kr_rcvegrbase KREG_IDX(RcvEgrBase)
#define kr_rcvegrcnt KREG_IDX(RcvEgrCnt)
#define kr_rcvhdrcnt KREG_IDX(RcvHdrCnt)
#define kr_rcvhdrentsize KREG_IDX(RcvHdrEntSize)
#define kr_rcvhdrsize KREG_IDX(RcvHdrSize)
#define kr_rcvtidbase KREG_IDX(RcvTIDBase)
#define kr_rcvtidcnt KREG_IDX(RcvTIDCnt)
#define kr_revision KREG_IDX(Revision)
#define kr_scratch KREG_IDX(Scratch)
#define kr_sendbuffererror KREG_IDX(SendBufErr0)
#define kr_sendcheckmask KREG_IDX(SendCheckMask0)
#define kr_sendctrl KREG_IDX(SendCtrl)
#define kr_sendgrhcheckmask KREG_IDX(SendGRHCheckMask0)
#define kr_sendibpktmask KREG_IDX(SendIBPacketMask0)
#define kr_sendpioavailaddr KREG_IDX(SendBufAvailAddr)
#define kr_sendpiobufbase KREG_IDX(SendBufBase)
#define kr_sendpiobufcnt KREG_IDX(SendBufCnt)
#define kr_sendpiosize KREG_IDX(SendBufSize)
#define kr_sendregbase KREG_IDX(SendRegBase)
#define kr_sendbufavail0 KREG_IDX(SendBufAvail0)
#define kr_userregbase KREG_IDX(UserRegBase)
#define kr_intgranted KREG_IDX(Int_Granted)
#define kr_vecclr_wo_int KREG_IDX(vec_clr_without_int)
#define kr_intblocked KREG_IDX(IntBlocked)
#define kr_r_access KREG_IDX(SPC_JTAG_ACCESS_REG)
#define krp_errclear KREG_IBPORT_IDX(ErrClear)
#define krp_errmask KREG_IBPORT_IDX(ErrMask)
#define krp_errstatus KREG_IBPORT_IDX(ErrStatus)
#define krp_highprio_0 KREG_IBPORT_IDX(HighPriority0)
#define krp_highprio_limit KREG_IBPORT_IDX(HighPriorityLimit)
#define krp_hrtbt_guid KREG_IBPORT_IDX(HRTBT_GUID)
#define krp_ib_pcsconfig KREG_IBPORT_IDX(IBPCSConfig)
#define krp_ibcctrl_a KREG_IBPORT_IDX(IBCCtrlA)
#define krp_ibcctrl_b KREG_IBPORT_IDX(IBCCtrlB)
#define krp_ibcctrl_c KREG_IBPORT_IDX(IBCCtrlC)
#define krp_ibcstatus_a KREG_IBPORT_IDX(IBCStatusA)
#define krp_ibcstatus_b KREG_IBPORT_IDX(IBCStatusB)
#define krp_txestatus KREG_IBPORT_IDX(TXEStatus)
#define krp_lowprio_0 KREG_IBPORT_IDX(LowPriority0)
#define krp_ncmodectrl KREG_IBPORT_IDX(IBNCModeCtrl)
#define krp_partitionkey KREG_IBPORT_IDX(RcvPartitionKey)
#define krp_psinterval KREG_IBPORT_IDX(PSInterval)
#define krp_psstart KREG_IBPORT_IDX(PSStart)
#define krp_psstat KREG_IBPORT_IDX(PSStat)
#define krp_rcvbthqp KREG_IBPORT_IDX(RcvBTHQP)
#define krp_rcvctrl KREG_IBPORT_IDX(RcvCtrl)
#define krp_rcvpktledcnt KREG_IBPORT_IDX(RcvPktLEDCnt)
#define krp_rcvqpmaptable KREG_IBPORT_IDX(RcvQPMapTableA)
#define krp_rxcreditvl0 KREG_IBPORT_IDX(RxCreditVL0)
#define krp_rxcreditvl15 (KREG_IBPORT_IDX(RxCreditVL0)+15)
#define krp_sendcheckcontrol KREG_IBPORT_IDX(SendCheckControl)
#define krp_sendctrl KREG_IBPORT_IDX(SendCtrl)
#define krp_senddmabase KREG_IBPORT_IDX(SendDmaBase)
#define krp_senddmabufmask0 KREG_IBPORT_IDX(SendDmaBufMask0)
#define krp_senddmabufmask1 (KREG_IBPORT_IDX(SendDmaBufMask0) + 1)
#define krp_senddmabufmask2 (KREG_IBPORT_IDX(SendDmaBufMask0) + 2)
#define krp_senddmabuf_use0 KREG_IBPORT_IDX(SendDmaBufUsed0)
#define krp_senddmabuf_use1 (KREG_IBPORT_IDX(SendDmaBufUsed0) + 1)
#define krp_senddmabuf_use2 (KREG_IBPORT_IDX(SendDmaBufUsed0) + 2)
#define krp_senddmadesccnt KREG_IBPORT_IDX(SendDmaDescCnt)
#define krp_senddmahead KREG_IBPORT_IDX(SendDmaHead)
#define krp_senddmaheadaddr KREG_IBPORT_IDX(SendDmaHeadAddr)
#define krp_senddmaidlecnt KREG_IBPORT_IDX(SendDmaIdleCnt)
#define krp_senddmalengen KREG_IBPORT_IDX(SendDmaLenGen)
#define krp_senddmaprioritythld KREG_IBPORT_IDX(SendDmaPriorityThld)
#define krp_senddmareloadcnt KREG_IBPORT_IDX(SendDmaReloadCnt)
#define krp_senddmastatus KREG_IBPORT_IDX(SendDmaStatus)
#define krp_senddmatail KREG_IBPORT_IDX(SendDmaTail)
#define krp_sendhdrsymptom KREG_IBPORT_IDX(SendHdrErrSymptom)
#define krp_sendslid KREG_IBPORT_IDX(SendIBSLIDAssign)
#define krp_sendslidmask KREG_IBPORT_IDX(SendIBSLIDMask)
#define krp_ibsdtestiftx KREG_IBPORT_IDX(IB_SDTEST_IF_TX)
#define krp_adapt_dis_timer KREG_IBPORT_IDX(ADAPT_DISABLE_TIMER_THRESHOLD)
#define krp_tx_deemph_override KREG_IBPORT_IDX(IBSD_TX_DEEMPHASIS_OVERRIDE)
#define krp_serdesctrl KREG_IBPORT_IDX(IBSerdesCtrl)
#define krc_rcvhdraddr KREG_IDX(RcvHdrAddr0)
#define krc_rcvhdrtailaddr KREG_IDX(RcvHdrTailAddr0)
#define NUM_TIDFLOWS_CTXT 0x20
#define ur_rcvflowtable (KREG_IDX(RcvTIDFlowTable0) - KREG_IDX(RcvHdrTail0))
#define TIDFLOW_ERRBITS  ( \
(SYM_MASK(RcvTIDFlowTable0, GenMismatch) << \
SYM_LSB(RcvTIDFlowTable0, GenMismatch)) | \
(SYM_MASK(RcvTIDFlowTable0, SeqMismatch) << \
SYM_LSB(RcvTIDFlowTable0, SeqMismatch)))
#define CREG_IDX(regname) \
((QIB_7322_##regname##_0_OFFS - QIB_7322_LBIntCnt_OFFS) / sizeof(u64))
#define crp_badformat CREG_IDX(RxVersionErrCnt)
#define crp_err_rlen CREG_IDX(RxLenErrCnt)
#define crp_erricrc CREG_IDX(RxICRCErrCnt)
#define crp_errlink CREG_IDX(RxLinkMalformCnt)
#define crp_errlpcrc CREG_IDX(RxLPCRCErrCnt)
#define crp_errpkey CREG_IDX(RxPKeyMismatchCnt)
#define crp_errvcrc CREG_IDX(RxVCRCErrCnt)
#define crp_excessbufferovfl CREG_IDX(ExcessBufferOvflCnt)
#define crp_iblinkdown CREG_IDX(IBLinkDownedCnt)
#define crp_iblinkerrrecov CREG_IDX(IBLinkErrRecoveryCnt)
#define crp_ibstatuschange CREG_IDX(IBStatusChangeCnt)
#define crp_ibsymbolerr CREG_IDX(IBSymbolErrCnt)
#define crp_invalidrlen CREG_IDX(RxMaxMinLenErrCnt)
#define crp_locallinkintegrityerr CREG_IDX(LocalLinkIntegrityErrCnt)
#define crp_pktrcv CREG_IDX(RxDataPktCnt)
#define crp_pktrcvflowctrl CREG_IDX(RxFlowPktCnt)
#define crp_pktsend CREG_IDX(TxDataPktCnt)
#define crp_pktsendflow CREG_IDX(TxFlowPktCnt)
#define crp_psrcvdatacount CREG_IDX(PSRcvDataCount)
#define crp_psrcvpktscount CREG_IDX(PSRcvPktsCount)
#define crp_psxmitdatacount CREG_IDX(PSXmitDataCount)
#define crp_psxmitpktscount CREG_IDX(PSXmitPktsCount)
#define crp_psxmitwaitcount CREG_IDX(PSXmitWaitCount)
#define crp_rcvebp CREG_IDX(RxEBPCnt)
#define crp_rcvflowctrlviol CREG_IDX(RxFlowCtrlViolCnt)
#define crp_rcvovfl CREG_IDX(RxBufOvflCnt)
#define crp_rxdlidfltr CREG_IDX(RxDlidFltrCnt)
#define crp_rxdroppkt CREG_IDX(RxDroppedPktCnt)
#define crp_rxotherlocalphyerr CREG_IDX(RxOtherLocalPhyErrCnt)
#define crp_rxqpinvalidctxt CREG_IDX(RxQPInvalidContextCnt)
#define crp_rxvlerr CREG_IDX(RxVlErrCnt)
#define crp_sendstall CREG_IDX(TxFlowStallCnt)
#define crp_txdroppedpkt CREG_IDX(TxDroppedPktCnt)
#define crp_txhdrerr CREG_IDX(TxHeadersErrCnt)
#define crp_txlenerr CREG_IDX(TxLenErrCnt)
#define crp_txlenerr CREG_IDX(TxLenErrCnt)
#define crp_txminmaxlenerr CREG_IDX(TxMaxMinLenErrCnt)
#define crp_txsdmadesc CREG_IDX(TxSDmaDescCnt)
#define crp_txunderrun CREG_IDX(TxUnderrunCnt)
#define crp_txunsupvl CREG_IDX(TxUnsupVLErrCnt)
#define crp_vl15droppedpkt CREG_IDX(RxVL15DroppedPktCnt)
#define crp_wordrcv CREG_IDX(RxDwordCnt)
#define crp_wordsend CREG_IDX(TxDwordCnt)
#define crp_tx_creditstalls CREG_IDX(TxCreditUpToDateTimeOut)
#define CREG_DEVIDX(regname) ((QIB_7322_##regname##_OFFS - \
QIB_7322_LBIntCnt_OFFS) / sizeof(u64))
#define cr_base_egrovfl CREG_DEVIDX(RxP0HdrEgrOvflCnt)
#define cr_lbint CREG_DEVIDX(LBIntCnt)
#define cr_lbstall CREG_DEVIDX(LBFlowStallCnt)
#define cr_pcieretrydiag CREG_DEVIDX(PcieRetryBufDiagQwordCnt)
#define cr_rxtidflowdrop CREG_DEVIDX(RxTidFlowDropCnt)
#define cr_tidfull CREG_DEVIDX(RxTIDFullErrCnt)
#define cr_tidinvalid CREG_DEVIDX(RxTIDValidErrCnt)
#define NUM_IB_PORTS 2
#define NUM_VL15_BUFS NUM_IB_PORTS
#define KCTXT0_EGRCNT 2048
#define PBC_PORT_SEL_LSB 26
#define PBC_PORT_SEL_RMASK 1
#define PBC_VL_NUM_LSB 27
#define PBC_VL_NUM_RMASK 7
#define PBC_7322_VL15_SEND (1ULL << 63)
#define PBC_7322_VL15_SEND_CTRL (1ULL << 31)
static u8 ib_rate_to_delay[IB_RATE_120_GBPS + 1] = ;
#define IBA7322_LINKSPEED_SHIFT SYM_LSB(IBCStatusA_0, LinkSpeedActive)
#define IBA7322_LINKWIDTH_SHIFT SYM_LSB(IBCStatusA_0, LinkWidthActive)
#define IB_7322_LT_STATE_DISABLED        0x00
#define IB_7322_LT_STATE_LINKUP          0x01
#define IB_7322_LT_STATE_POLLACTIVE      0x02
#define IB_7322_LT_STATE_POLLQUIET       0x03
#define IB_7322_LT_STATE_SLEEPDELAY      0x04
#define IB_7322_LT_STATE_SLEEPQUIET      0x05
#define IB_7322_LT_STATE_CFGDEBOUNCE     0x08
#define IB_7322_LT_STATE_CFGRCVFCFG      0x09
#define IB_7322_LT_STATE_CFGWAITRMT      0x0a
#define IB_7322_LT_STATE_CFGIDLE         0x0b
#define IB_7322_LT_STATE_RECOVERRETRAIN  0x0c
#define IB_7322_LT_STATE_TXREVLANES      0x0d
#define IB_7322_LT_STATE_RECOVERWAITRMT  0x0e
#define IB_7322_LT_STATE_RECOVERIDLE     0x0f
#define IB_7322_LT_STATE_CFGENH          0x10
#define IB_7322_LT_STATE_CFGTEST         0x11
#define IB_7322_LT_STATE_CFGWAITRMTTEST  0x12
#define IB_7322_LT_STATE_CFGWAITENH      0x13
#define IB_7322_L_STATE_DOWN             0x0
#define IB_7322_L_STATE_INIT             0x1
#define IB_7322_L_STATE_ARM              0x2
#define IB_7322_L_STATE_ACTIVE           0x3
#define IB_7322_L_STATE_ACT_DEFER        0x4
static const u8 qib_7322_physportstate[0x20] = ;
struct qib_chip_specific ;
struct txdds_ent ;
struct vendor_txdds_ent ;
static void write_tx_serdes_param(struct qib_pportdata *, struct txdds_ent *);
#define TXDDS_TABLE_SZ 16
#define TXDDS_EXTRA_SZ 13
#define TXDDS_MFG_SZ 2
#define SERDES_CHANS 4
#define H1_FORCE_VAL 8
#define H1_FORCE_QME 1
#define H1_FORCE_QMH 7
#define krp_static_adapt_dis(spd) (KREG_IBPORT_IDX(ADAPT_DISABLE_STATIC_SDR) \
+ ((spd) * 2))
#define QDR_DFE_DISABLE_DELAY 4000
#define QDR_STATIC_ADAPT_DOWN 0xf0f0f0f0ULL
#define QDR_STATIC_ADAPT_DOWN_R1 0ULL
#define QDR_STATIC_ADAPT_INIT 0xffffffffffULL
#define QDR_STATIC_ADAPT_INIT_R1 0xf0ffffffffULL
struct qib_chippport_specific ;
static struct  irq_table[] = ;
#define QLOGIC_IB_IBCC_LINKINITCMD_DISABLE 1
#define QLOGIC_IB_IBCC_LINKINITCMD_POLL 2
#define QLOGIC_IB_IBCC_LINKINITCMD_SLEEP 3
#define QLOGIC_IB_IBCC_LINKINITCMD_SHIFT 16
#define QLOGIC_IB_IBCC_LINKCMD_DOWN 1
#define QLOGIC_IB_IBCC_LINKCMD_ARMED 2
#define QLOGIC_IB_IBCC_LINKCMD_ACTIVE 3
#define BLOB_7322_IBCHG 0x101
static inline void qib_write_kreg(const struct qib_devdata *dd,
const u32 regno, u64 value);
static inline u32 qib_read_kreg32(const struct qib_devdata *, const u32);
static void write_7322_initregs(struct qib_devdata *);
static void write_7322_init_portregs(struct qib_pportdata *);
static void setup_7322_link_recovery(struct qib_pportdata *, u32);
static void check_7322_rxe_status(struct qib_pportdata *);
static u32 __iomem *qib_7322_getsendbuf(struct qib_pportdata *, u64, u32 *);
static inline u32 qib_read_ureg32(const struct qib_devdata *dd,
enum qib_ureg regno, int ctxt)
static inline u64 qib_read_ureg(const struct qib_devdata *dd,
enum qib_ureg regno, int ctxt)
static inline void qib_write_ureg(const struct qib_devdata *dd,
enum qib_ureg regno, u64 value, int ctxt)
static inline u32 qib_read_kreg32(const struct qib_devdata *dd,
const u32 regno)
static inline u64 qib_read_kreg64(const struct qib_devdata *dd,
const u32 regno)
static inline void qib_write_kreg(const struct qib_devdata *dd,
const u32 regno, u64 value)
static inline u64 qib_read_kreg_port(const struct qib_pportdata *ppd,
const u16 regno)
static inline void qib_write_kreg_port(const struct qib_pportdata *ppd,
const u16 regno, u64 value)
static inline void qib_write_kreg_ctxt(const struct qib_devdata *dd,
const u16 regno, unsigned ctxt,
u64 value)
static inline u64 read_7322_creg(const struct qib_devdata *dd, u16 regno)
static inline u32 read_7322_creg32(const struct qib_devdata *dd, u16 regno)
static inline void write_7322_creg_port(const struct qib_pportdata *ppd,
u16 regno, u64 value)
static inline u64 read_7322_creg_port(const struct qib_pportdata *ppd,
u16 regno)
static inline u32 read_7322_creg32_port(const struct qib_pportdata *ppd,
u16 regno)
#define QLOGIC_IB_C_RESET SYM_MASK(Control, SyncReset)
#define QLOGIC_IB_C_SDMAFETCHPRIOEN SYM_MASK(Control, SDmaDescFetchPriorityEn)
#define QIB_I_RCVURG_LSB SYM_LSB(IntMask, RcvUrg0IntMask)
#define QIB_I_RCVURG_RMASK MASK_ACROSS(0, 17)
#define QIB_I_RCVURG_MASK (QIB_I_RCVURG_RMASK << QIB_I_RCVURG_LSB)
#define QIB_I_RCVAVAIL_LSB SYM_LSB(IntMask, RcvAvail0IntMask)
#define QIB_I_RCVAVAIL_RMASK MASK_ACROSS(0, 17)
#define QIB_I_RCVAVAIL_MASK (QIB_I_RCVAVAIL_RMASK << QIB_I_RCVAVAIL_LSB)
#define QIB_I_C_ERROR INT_MASK(Err)
#define QIB_I_SPIOSENT (INT_MASK_P(SendDone, 0) | INT_MASK_P(SendDone, 1))
#define QIB_I_SPIOBUFAVAIL INT_MASK(SendBufAvail)
#define QIB_I_GPIO INT_MASK(AssertGPIO)
#define QIB_I_P_SDMAINT(pidx) \
(INT_MASK_P(SDma, pidx) | INT_MASK_P(SDmaIdle, pidx) | \
INT_MASK_P(SDmaProgress, pidx) | \
INT_MASK_PM(SDmaCleanupDone, pidx))
#define QIB_I_P_BITSEXTANT(pidx) \
(INT_MASK_P(Err, pidx) | INT_MASK_P(SendDone, pidx) | \
INT_MASK_P(SDma, pidx) | INT_MASK_P(SDmaIdle, pidx) | \
INT_MASK_P(SDmaProgress, pidx) | \
INT_MASK_PM(SDmaCleanupDone, pidx))
#define QIB_I_C_BITSEXTANT \
(QIB_I_RCVURG_MASK | QIB_I_RCVAVAIL_MASK | \
QIB_I_SPIOSENT | \
QIB_I_C_ERROR | QIB_I_SPIOBUFAVAIL | QIB_I_GPIO)
#define QIB_I_BITSEXTANT (QIB_I_C_BITSEXTANT | \
QIB_I_P_BITSEXTANT(0) | QIB_I_P_BITSEXTANT(1))
#define QIB_E_P_IBSTATUSCHANGED ERR_MASK_N(IBStatusChanged)
#define QIB_E_P_SHDR ERR_MASK_N(SHeadersErr)
#define QIB_E_P_VL15_BUF_MISUSE ERR_MASK_N(VL15BufMisuseErr)
#define QIB_E_P_SND_BUF_MISUSE ERR_MASK_N(SendBufMisuseErr)
#define QIB_E_P_SUNSUPVL ERR_MASK_N(SendUnsupportedVLErr)
#define QIB_E_P_SUNEXP_PKTNUM ERR_MASK_N(SendUnexpectedPktNumErr)
#define QIB_E_P_SDROP_DATA ERR_MASK_N(SendDroppedDataPktErr)
#define QIB_E_P_SDROP_SMP ERR_MASK_N(SendDroppedSmpPktErr)
#define QIB_E_P_SPKTLEN ERR_MASK_N(SendPktLenErr)
#define QIB_E_P_SUNDERRUN ERR_MASK_N(SendUnderRunErr)
#define QIB_E_P_SMAXPKTLEN ERR_MASK_N(SendMaxPktLenErr)
#define QIB_E_P_SMINPKTLEN ERR_MASK_N(SendMinPktLenErr)
#define QIB_E_P_RIBLOSTLINK ERR_MASK_N(RcvIBLostLinkErr)
#define QIB_E_P_RHDR ERR_MASK_N(RcvHdrErr)
#define QIB_E_P_RHDRLEN ERR_MASK_N(RcvHdrLenErr)
#define QIB_E_P_RBADTID ERR_MASK_N(RcvBadTidErr)
#define QIB_E_P_RBADVERSION ERR_MASK_N(RcvBadVersionErr)
#define QIB_E_P_RIBFLOW ERR_MASK_N(RcvIBFlowErr)
#define QIB_E_P_REBP ERR_MASK_N(RcvEBPErr)
#define QIB_E_P_RUNSUPVL ERR_MASK_N(RcvUnsupportedVLErr)
#define QIB_E_P_RUNEXPCHAR ERR_MASK_N(RcvUnexpectedCharErr)
#define QIB_E_P_RSHORTPKTLEN ERR_MASK_N(RcvShortPktLenErr)
#define QIB_E_P_RLONGPKTLEN ERR_MASK_N(RcvLongPktLenErr)
#define QIB_E_P_RMAXPKTLEN ERR_MASK_N(RcvMaxPktLenErr)
#define QIB_E_P_RMINPKTLEN ERR_MASK_N(RcvMinPktLenErr)
#define QIB_E_P_RICRC ERR_MASK_N(RcvICRCErr)
#define QIB_E_P_RVCRC ERR_MASK_N(RcvVCRCErr)
#define QIB_E_P_RFORMATERR ERR_MASK_N(RcvFormatErr)
#define QIB_E_P_SDMA1STDESC ERR_MASK_N(SDma1stDescErr)
#define QIB_E_P_SDMABASE ERR_MASK_N(SDmaBaseErr)
#define QIB_E_P_SDMADESCADDRMISALIGN ERR_MASK_N(SDmaDescAddrMisalignErr)
#define QIB_E_P_SDMADWEN ERR_MASK_N(SDmaDwEnErr)
#define QIB_E_P_SDMAGENMISMATCH ERR_MASK_N(SDmaGenMismatchErr)
#define QIB_E_P_SDMAHALT ERR_MASK_N(SDmaHaltErr)
#define QIB_E_P_SDMAMISSINGDW ERR_MASK_N(SDmaMissingDwErr)
#define QIB_E_P_SDMAOUTOFBOUND ERR_MASK_N(SDmaOutOfBoundErr)
#define QIB_E_P_SDMARPYTAG ERR_MASK_N(SDmaRpyTagErr)
#define QIB_E_P_SDMATAILOUTOFBOUND ERR_MASK_N(SDmaTailOutOfBoundErr)
#define QIB_E_P_SDMAUNEXPDATA ERR_MASK_N(SDmaUnexpDataErr)
#define QIB_E_RESET ERR_MASK(ResetNegated)
#define QIB_E_HARDWARE ERR_MASK(HardwareErr)
#define QIB_E_INVALIDADDR ERR_MASK(InvalidAddrErr)
#define QIB_E_SBUF_VL15_MISUSE ERR_MASK(SBufVL15MisUseErr)
#define QIB_E_BADEEP ERR_MASK(InvalidEEPCmd)
#define QIB_E_VLMISMATCH ERR_MASK(SendVLMismatchErr)
#define QIB_E_ARMLAUNCH ERR_MASK(SendArmLaunchErr)
#define QIB_E_SPCLTRIG ERR_MASK(SendSpecialTriggerErr)
#define QIB_E_RRCVHDRFULL ERR_MASK(RcvHdrFullErr)
#define QIB_E_RRCVEGRFULL ERR_MASK(RcvEgrFullErr)
#define QIB_E_RCVCTXTSHARE ERR_MASK(RcvContextShareErr)
#define QIB_E_SDMA_VL15 ERR_MASK(SDmaVL15Err)
#define QIB_E_SDMA_WRONG_PORT ERR_MASK(SDmaWrongPortErr)
#define QIB_E_SDMA_BUF_DUP ERR_MASK(SDmaBufMaskDuplicateErr)
#define QIB_E_P_PKTERRS (QIB_E_P_SPKTLEN |\
QIB_E_P_SDROP_DATA | QIB_E_P_RVCRC |\
QIB_E_P_RICRC | QIB_E_P_RSHORTPKTLEN |\
QIB_E_P_VL15_BUF_MISUSE | QIB_E_P_SHDR | \
QIB_E_P_REBP)
#define QIB_E_P_RPKTERRS (\
QIB_E_P_RHDRLEN | QIB_E_P_RBADTID | \
QIB_E_P_RBADVERSION | QIB_E_P_RHDR | \
QIB_E_P_RLONGPKTLEN | QIB_E_P_RSHORTPKTLEN |\
QIB_E_P_RMAXPKTLEN | QIB_E_P_RMINPKTLEN | \
QIB_E_P_RFORMATERR | QIB_E_P_RUNSUPVL | \
QIB_E_P_RUNEXPCHAR | QIB_E_P_RIBFLOW | QIB_E_P_REBP)
#define QIB_E_P_SPKTERRS (\
QIB_E_P_SUNEXP_PKTNUM |\
QIB_E_P_SDROP_DATA | QIB_E_P_SDROP_SMP |\
QIB_E_P_SMAXPKTLEN |\
QIB_E_P_VL15_BUF_MISUSE | QIB_E_P_SHDR | \
QIB_E_P_SMINPKTLEN | QIB_E_P_SPKTLEN | \
QIB_E_P_SND_BUF_MISUSE | QIB_E_P_SUNSUPVL)
#define QIB_E_SPKTERRS ( \
QIB_E_SBUF_VL15_MISUSE | QIB_E_VLMISMATCH | \
ERR_MASK_N(SendUnsupportedVLErr) |			\
QIB_E_SPCLTRIG | QIB_E_SDMA_VL15 | QIB_E_SDMA_WRONG_PORT)
#define QIB_E_P_SDMAERRS ( \
QIB_E_P_SDMAHALT | \
QIB_E_P_SDMADESCADDRMISALIGN | \
QIB_E_P_SDMAUNEXPDATA | \
QIB_E_P_SDMAMISSINGDW | \
QIB_E_P_SDMADWEN | \
QIB_E_P_SDMARPYTAG | \
QIB_E_P_SDMA1STDESC | \
QIB_E_P_SDMABASE | \
QIB_E_P_SDMATAILOUTOFBOUND | \
QIB_E_P_SDMAOUTOFBOUND | \
QIB_E_P_SDMAGENMISMATCH)
#define QIB_E_P_BITSEXTANT ( \
QIB_E_P_SPKTERRS | QIB_E_P_PKTERRS | QIB_E_P_RPKTERRS | \
QIB_E_P_RIBLOSTLINK | QIB_E_P_IBSTATUSCHANGED | \
QIB_E_P_SND_BUF_MISUSE | QIB_E_P_SUNDERRUN | \
QIB_E_P_SHDR | QIB_E_P_VL15_BUF_MISUSE | QIB_E_P_SDMAERRS \
)
#define QIB_E_P_LINK_PKTERRS (\
QIB_E_P_SDROP_DATA | QIB_E_P_SDROP_SMP |\
QIB_E_P_SMINPKTLEN | QIB_E_P_SPKTLEN |\
QIB_E_P_RSHORTPKTLEN | QIB_E_P_RMINPKTLEN |\
QIB_E_P_RUNEXPCHAR)
#define QIB_E_C_BITSEXTANT (\
QIB_E_HARDWARE | QIB_E_INVALIDADDR | QIB_E_BADEEP |\
QIB_E_ARMLAUNCH | QIB_E_VLMISMATCH | QIB_E_RRCVHDRFULL |\
QIB_E_RRCVEGRFULL | QIB_E_RESET | QIB_E_SBUF_VL15_MISUSE)
#define E_SPKT_ERRS_IGNORE 0
#define QIB_EXTS_MEMBIST_DISABLED \
SYM_MASK(EXTStatus, MemBISTDisabled)
#define QIB_EXTS_MEMBIST_ENDTEST \
SYM_MASK(EXTStatus, MemBISTEndTest)
#define QIB_E_SPIOARMLAUNCH \
ERR_MASK(SendArmLaunchErr)
#define IBA7322_IBCC_LINKINITCMD_MASK SYM_RMASK(IBCCtrlA_0, LinkInitCmd)
#define IBA7322_IBCC_LINKCMD_SHIFT SYM_LSB(IBCCtrlA_0, LinkCmd)
#define IBA7322_IBC_IBTA_1_2_MASK SYM_MASK(IBCCtrlB_0, IB_ENHANCED_MODE)
#define IBA7322_IBC_MAX_SPEED_MASK SYM_MASK(IBCCtrlB_0, SD_SPEED)
#define IBA7322_IBC_SPEED_QDR SYM_MASK(IBCCtrlB_0, SD_SPEED_QDR)
#define IBA7322_IBC_SPEED_DDR SYM_MASK(IBCCtrlB_0, SD_SPEED_DDR)
#define IBA7322_IBC_SPEED_SDR SYM_MASK(IBCCtrlB_0, SD_SPEED_SDR)
#define IBA7322_IBC_SPEED_MASK (SYM_MASK(IBCCtrlB_0, SD_SPEED_SDR) | \
SYM_MASK(IBCCtrlB_0, SD_SPEED_DDR) | SYM_MASK(IBCCtrlB_0, SD_SPEED_QDR))
#define IBA7322_IBC_SPEED_LSB SYM_LSB(IBCCtrlB_0, SD_SPEED_SDR)
#define IBA7322_LEDBLINK_OFF_SHIFT SYM_LSB(RcvPktLEDCnt_0, OFFperiod)
#define IBA7322_LEDBLINK_ON_SHIFT SYM_LSB(RcvPktLEDCnt_0, ONperiod)
#define IBA7322_IBC_WIDTH_AUTONEG SYM_MASK(IBCCtrlB_0, IB_NUM_CHANNELS)
#define IBA7322_IBC_WIDTH_4X_ONLY (1<<SYM_LSB(IBCCtrlB_0, IB_NUM_CHANNELS))
#define IBA7322_IBC_WIDTH_1X_ONLY (0<<SYM_LSB(IBCCtrlB_0, IB_NUM_CHANNELS))
#define IBA7322_IBC_RXPOL_MASK SYM_MASK(IBCCtrlB_0, IB_POLARITY_REV_SUPP)
#define IBA7322_IBC_RXPOL_LSB SYM_LSB(IBCCtrlB_0, IB_POLARITY_REV_SUPP)
#define IBA7322_IBC_HRTBT_MASK (SYM_MASK(IBCCtrlB_0, HRTBT_AUTO) | \
SYM_MASK(IBCCtrlB_0, HRTBT_ENB))
#define IBA7322_IBC_HRTBT_RMASK (IBA7322_IBC_HRTBT_MASK >> \
SYM_LSB(IBCCtrlB_0, HRTBT_ENB))
#define IBA7322_IBC_HRTBT_LSB SYM_LSB(IBCCtrlB_0, HRTBT_ENB)
#define IBA7322_REDIRECT_VEC_PER_REG 12
#define IBA7322_SENDCHK_PKEY SYM_MASK(SendCheckControl_0, PKey_En)
#define IBA7322_SENDCHK_BTHQP SYM_MASK(SendCheckControl_0, BTHQP_En)
#define IBA7322_SENDCHK_SLID SYM_MASK(SendCheckControl_0, SLID_En)
#define IBA7322_SENDCHK_RAW_IPV6 SYM_MASK(SendCheckControl_0, RawIPV6_En)
#define IBA7322_SENDCHK_MINSZ SYM_MASK(SendCheckControl_0, PacketTooSmall_En)
#define AUTONEG_TRIES 3
#define HWE_AUTO(fldname)
#define HWE_AUTO_P(fldname, port)
static const struct qib_hwerror_msgs qib_7322_hwerror_msgs[] = ;
#define E_AUTO(fldname)
#define E_P_AUTO(fldname)
static const struct qib_hwerror_msgs qib_7322error_msgs[] = ;
static const struct  qib_hwerror_msgs qib_7322p_error_msgs[] = ;
#define INTR_AUTO(fldname)
#define INTR_AUTO_P(fldname)
#define INTR_AUTO_PI(fldname)
#define INTR_AUTO_C(fldname)
static const struct  qib_hwerror_msgs qib_7322_intr_msgs[] = ;
#define TXSYMPTOM_AUTO_P(fldname) \
static const struct  qib_hwerror_msgs hdrchk_msgs[] = ;
#define IBA7322_HDRHEAD_PKTINT_SHIFT 32
static void qib_disarm_7322_senderrbufs(struct qib_pportdata *ppd)
static void err_decode(char *msg, size_t len, u64 errs,
const struct qib_hwerror_msgs *msp)
static void flush_fifo(struct qib_pportdata *ppd)
static void qib_7322_sdma_sendctrl(struct qib_pportdata *ppd, unsigned op)
static void qib_7322_sdma_hw_clean_up(struct qib_pportdata *ppd)
static void qib_sdma_7322_setlengen(struct qib_pportdata *ppd)
static void qib_sdma_update_7322_tail(struct qib_pportdata *ppd, u16 tail)
static void qib_7322_sdma_hw_start_up(struct qib_pportdata *ppd)
#define DISABLES_SDMA ( \
QIB_E_P_SDMAHALT | \
QIB_E_P_SDMADESCADDRMISALIGN | \
QIB_E_P_SDMAMISSINGDW | \
QIB_E_P_SDMADWEN | \
QIB_E_P_SDMARPYTAG | \
QIB_E_P_SDMA1STDESC | \
QIB_E_P_SDMABASE | \
QIB_E_P_SDMATAILOUTOFBOUND | \
QIB_E_P_SDMAOUTOFBOUND | \
QIB_E_P_SDMAGENMISMATCH)
static void sdma_7322_p_errors(struct qib_pportdata *ppd, u64 errs)
static noinline void handle_7322_errors(struct qib_devdata *dd)
static void reenable_chase(unsigned long opaque)
static void disable_chase(struct qib_pportdata *ppd, u64 tnow, u8 ibclt)
static void handle_serdes_issues(struct qib_pportdata *ppd, u64 ibcst)
static int qib_7322_set_ib_cfg(struct qib_pportdata *, int, u32);
static noinline void handle_7322_p_errors(struct qib_pportdata *ppd)
static void qib_7322_set_intr_state(struct qib_devdata *dd, u32 enable)
static void qib_7322_clear_freeze(struct qib_devdata *dd)
static void qib_7322_handle_hwerrors(struct qib_devdata *dd, char *msg,
size_t msgl)
static void qib_7322_init_hwerrors(struct qib_devdata *dd)
static void qib_set_7322_armlaunch(struct qib_devdata *dd, u32 enable)
static void qib_set_ib_7322_lstate(struct qib_pportdata *ppd, u16 linkcmd,
u16 linitcmd)
#define RCV_BUF_UNITSZ 64
#define NUM_RCV_BUF_UNITS(dd) ((64 * 1024) / (RCV_BUF_UNITSZ * dd->num_pports))
static void set_vls(struct qib_pportdata *ppd)
static int serdes_7322_init(struct qib_pportdata *ppd);
static int qib_7322_bringup_serdes(struct qib_pportdata *ppd)
static void qib_7322_mini_quiet_serdes(struct qib_pportdata *ppd)
static void qib_setup_7322_setextled(struct qib_pportdata *ppd, u32 on)
static void qib_7322_nomsix(struct qib_devdata *dd)
static void qib_7322_free_irq(struct qib_devdata *dd)
static void qib_setup_7322_cleanup(struct qib_devdata *dd)
static void sdma_7322_intr(struct qib_devdata *dd, u64 istat)
static void qib_wantpiobuf_7322_intr(struct qib_devdata *dd, u32 needint)
static noinline void unknown_7322_ibits(struct qib_devdata *dd, u64 istat)
static noinline void unknown_7322_gpio_intr(struct qib_devdata *dd)
static noinline void unlikely_7322_intr(struct qib_devdata *dd, u64 istat)
static void adjust_rcv_timeout(struct qib_ctxtdata *rcd, int npkts)
static irqreturn_t qib_7322intr(int irq, void *data)
static irqreturn_t qib_7322pintr(int irq, void *data)
static irqreturn_t qib_7322bufavail(int irq, void *data)
static irqreturn_t sdma_intr(int irq, void *data)
static irqreturn_t sdma_idle_intr(int irq, void *data)
static irqreturn_t sdma_progress_intr(int irq, void *data)
static irqreturn_t sdma_cleanup_intr(int irq, void *data)
static void qib_setup_7322_interrupt(struct qib_devdata *dd, int clearpend)
static unsigned qib_7322_boardname(struct qib_devdata *dd)
static int qib_do_7322_reset(struct qib_devdata *dd)
static void qib_7322_put_tid(struct qib_devdata *dd, u64 __iomem *tidptr,
u32 type, unsigned long pa)
static void qib_7322_clear_tids(struct qib_devdata *dd,
struct qib_ctxtdata *rcd)
static void qib_7322_tidtemplate(struct qib_devdata *dd)
static int qib_7322_get_base_info(struct qib_ctxtdata *rcd,
struct qib_base_info *kinfo)
static struct qib_message_header *
qib_7322_get_msgheader(struct qib_devdata *dd, __le32 *rhf_addr)
static void qib_7322_config_ctxts(struct qib_devdata *dd)
static int qib_7322_get_ib_cfg(struct qib_pportdata *ppd, int which)
#define IBA7322_IBC_DLIDLMC_SHIFT QIB_7322_IBCCtrlB_0_IB_DLID_LSB
#define IBA7322_IBC_DLIDLMC_MASK (QIB_7322_IBCCtrlB_0_IB_DLID_RMASK \
| (QIB_7322_IBCCtrlB_0_IB_DLID_MASK_RMASK << 16))
static int qib_7322_set_ib_cfg(struct qib_pportdata *ppd, int which, u32 val)
static int qib_7322_set_loopback(struct qib_pportdata *ppd, const char *what)
static void get_vl_weights(struct qib_pportdata *ppd, unsigned regno,
struct ib_vl_weight_elem *vl)
static void set_vl_weights(struct qib_pportdata *ppd, unsigned regno,
struct ib_vl_weight_elem *vl)
static int qib_7322_get_ib_table(struct qib_pportdata *ppd, int which, void *t)
static int qib_7322_set_ib_table(struct qib_pportdata *ppd, int which, void *t)
static void qib_update_7322_usrhead(struct qib_ctxtdata *rcd, u64 hd,
u32 updegr, u32 egrhd, u32 npkts)
static u32 qib_7322_hdrqempty(struct qib_ctxtdata *rcd)
#define RCVCTRL_COMMON_MODS (QIB_RCVCTRL_CTXT_ENB | \
QIB_RCVCTRL_CTXT_DIS | \
QIB_RCVCTRL_TIDFLOW_ENB | \
QIB_RCVCTRL_TIDFLOW_DIS | \
QIB_RCVCTRL_TAILUPD_ENB | \
QIB_RCVCTRL_TAILUPD_DIS | \
QIB_RCVCTRL_INTRAVAIL_ENB | \
QIB_RCVCTRL_INTRAVAIL_DIS | \
QIB_RCVCTRL_BP_ENB | \
QIB_RCVCTRL_BP_DIS)
#define RCVCTRL_PORT_MODS (QIB_RCVCTRL_CTXT_ENB | \
QIB_RCVCTRL_CTXT_DIS | \
QIB_RCVCTRL_PKEY_DIS | \
QIB_RCVCTRL_PKEY_ENB)
static void rcvctrl_7322_mod(struct qib_pportdata *ppd, unsigned int op,
int ctxt)
#define SENDCTRL_COMMON_MODS (\
QIB_SENDCTRL_CLEAR | \
QIB_SENDCTRL_AVAIL_DIS | \
QIB_SENDCTRL_AVAIL_ENB | \
QIB_SENDCTRL_AVAIL_BLIP | \
QIB_SENDCTRL_DISARM | \
QIB_SENDCTRL_DISARM_ALL | \
QIB_SENDCTRL_SEND_ENB)
#define SENDCTRL_PORT_MODS (\
QIB_SENDCTRL_CLEAR | \
QIB_SENDCTRL_SEND_ENB | \
QIB_SENDCTRL_SEND_DIS | \
QIB_SENDCTRL_FLUSH)
static void sendctrl_7322_mod(struct qib_pportdata *ppd, u32 op)
#define _PORT_VIRT_FLAG 0x8000U
#define _PORT_64BIT_FLAG 0x10000U
#define _PORT_CNTR_IDXMASK 0x7fffU
static u64 qib_portcntr_7322(struct qib_pportdata *ppd, u32 reg)
static const char cntr7322names[] =
"Interrupts\n"
"HostBusStall\n"
"E RxTIDFull\n"
"RxTIDInvalid\n"
"RxTIDFloDrop\n"
"Ctxt0EgrOvfl\n"
"Ctxt1EgrOvfl\n"
"Ctxt2EgrOvfl\n"
"Ctxt3EgrOvfl\n"
"Ctxt4EgrOvfl\n"
"Ctxt5EgrOvfl\n"
"Ctxt6EgrOvfl\n"
"Ctxt7EgrOvfl\n"
"Ctxt8EgrOvfl\n"
"Ctxt9EgrOvfl\n"
"Ctx10EgrOvfl\n"
"Ctx11EgrOvfl\n"
"Ctx12EgrOvfl\n"
"Ctx13EgrOvfl\n"
"Ctx14EgrOvfl\n"
"Ctx15EgrOvfl\n"
"Ctx16EgrOvfl\n"
"Ctx17EgrOvfl\n"
;
static const u32 cntr7322indices[] = ;
static const char portcntr7322names[] =
"TxPkt\n"
"TxFlowPkt\n"
"TxWords\n"
"RxPkt\n"
"RxFlowPkt\n"
"RxWords\n"
"TxFlowStall\n"
"TxDmaDesc\n"
"E RxDlidFltr\n"
"IBStatusChng\n"
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
"RxLclPhyErr\n"
"RxVL15Drop\n"
"RxVlErr\n"
"XcessBufOvfl\n"
"RxQPBadCtxt\n"
"TXBadHeader\n"
;
static const u32 portcntr7322indices[] = ;
static void init_7322_cntrnames(struct qib_devdata *dd)
static u32 qib_read_7322cntrs(struct qib_devdata *dd, loff_t pos, char **namep,
u64 **cntrp)
static u32 qib_read_7322portcntrs(struct qib_devdata *dd, loff_t pos, u32 port,
char **namep, u64 **cntrp)
static void qib_get_7322_faststats(unsigned long opaque)
static int qib_7322_intr_fallback(struct qib_devdata *dd)
static void qib_7322_mini_pcs_reset(struct qib_pportdata *ppd)
static void autoneg_7322_sendpkt(struct qib_pportdata *ppd, u32 *hdr,
u32 dcnt, u32 *data)
static void qib_autoneg_7322_send(struct qib_pportdata *ppd, int which)
static void set_7322_ibspeed_fast(struct qib_pportdata *ppd, u32 speed)
static void try_7322_autoneg(struct qib_pportdata *ppd)
static void autoneg_7322_work(struct work_struct *work)
static void try_7322_ipg(struct qib_pportdata *ppd)
static void ipg_7322_work(struct work_struct *work)
static u32 qib_7322_iblink_state(u64 ibcs)
static u8 qib_7322_phys_portstate(u64 ibcs)
static int qib_7322_ib_updown(struct qib_pportdata *ppd, int ibup, u64 ibcs)
static int gpio_7322_mod(struct qib_devdata *dd, u32 out, u32 dir, u32 mask)
static int qib_7322_eeprom_wen(struct qib_devdata *dd, int wen)
static void get_7322_chip_params(struct qib_devdata *dd)
static void qib_7322_set_baseaddrs(struct qib_devdata *dd)
#define SENDCTRL_SHADOWED (SYM_MASK(SendCtrl_0, SendEnable) |		\
SYM_MASK(SendCtrl_0, SDmaEnable) |		\
SYM_MASK(SendCtrl_0, SDmaIntEnable) |	\
SYM_MASK(SendCtrl_0, SDmaSingleDescriptor) | \
SYM_MASK(SendCtrl_0, SDmaHalt) |		\
SYM_MASK(SendCtrl_0, IBVLArbiterEn) |	\
SYM_MASK(SendCtrl_0, ForceCreditUpToDate))
static int sendctrl_hook(struct qib_devdata *dd,
const struct diag_observer *op, u32 offs,
u64 *data, u64 mask, int only_32)
static const struct diag_observer sendctrl_0_observer = ;
static const struct diag_observer sendctrl_1_observer = ;
static ushort sdma_fetch_prio = 8;
module_param_named(sdma_fetch_prio, sdma_fetch_prio, ushort, S_IRUGO);
MODULE_PARM_DESC(sdma_fetch_prio, "SDMA descriptor fetch priority");
static void init_txdds_table(struct qib_pportdata *ppd, int override);
static void qsfp_7322_event(struct work_struct *work)
static void qib_init_7322_qsfp(struct qib_pportdata *ppd)
static void set_no_qsfp_atten(struct qib_devdata *dd, int change)
static int setup_txselect(const char *str, struct kernel_param *kp)
static int qib_late_7322_initreg(struct qib_devdata *dd)
#define SENDCTRL_PIBP (MASK_ACROSS(0, 1) | MASK_ACROSS(3, 3) | \
MASK_ACROSS(8, 15))
#define RCVCTRL_PIBP (MASK_ACROSS(0, 17) | MASK_ACROSS(39, 41))
#define ERRS_PIBP (MASK_ACROSS(57, 58) | MASK_ACROSS(54, 54) | \
MASK_ACROSS(36, 49) | MASK_ACROSS(29, 34) | MASK_ACROSS(14, 17) | \
MASK_ACROSS(0, 11))
static void write_7322_init_portregs(struct qib_pportdata *ppd)
static void write_7322_initregs(struct qib_devdata *dd)
static int qib_init_7322_variables(struct qib_devdata *dd)
static u32 __iomem *qib_7322_getsendbuf(struct qib_pportdata *ppd, u64 pbc,
u32 *pbufnum)
static void qib_set_cntr_7322_sample(struct qib_pportdata *ppd, u32 intv,
u32 start)
static void qib_sdma_set_7322_desc_cnt(struct qib_pportdata *ppd, unsigned cnt)
static struct sdma_set_state_action sdma_7322_action_table[] = ;
static void qib_7322_sdma_init_early(struct qib_pportdata *ppd)
static int init_sdma_7322_regs(struct qib_pportdata *ppd)
static u16 qib_sdma_7322_gethead(struct qib_pportdata *ppd)
static int qib_sdma_7322_busy(struct qib_pportdata *ppd)
static u32 qib_7322_setpbc_control(struct qib_pportdata *ppd, u32 plen,
u8 srate, u8 vl)
static void qib_7322_initvl15_bufs(struct qib_devdata *dd)
static void qib_7322_init_ctxt(struct qib_ctxtdata *rcd)
#define QTXSLEEPS 5000
static void qib_7322_txchk_change(struct qib_devdata *dd, u32 start,
u32 len, u32 which, struct qib_ctxtdata *rcd)
static void writescratch(struct qib_devdata *dd, u32 val)
static int qib_7322_tempsense_rd(struct qib_devdata *dd, int regnum)
struct qib_devdata *qib_init_iba7322_funcs(struct pci_dev *pdev,
const struct pci_device_id *ent)
#define DDS_ENT_AMP_LSB 14
#define DDS_ENT_MAIN_LSB 9
#define DDS_ENT_POST_LSB 5
#define DDS_ENT_PRE_XTRA_LSB 3
#define DDS_ENT_PRE_LSB 0
static void set_txdds(struct qib_pportdata *ppd, int ridx,
const struct txdds_ent *tp)
static const struct vendor_txdds_ent vendor_txdds[] = ;
static const struct txdds_ent txdds_sdr[TXDDS_TABLE_SZ] = ;
static const struct txdds_ent txdds_ddr[TXDDS_TABLE_SZ] = ;
static const struct txdds_ent txdds_qdr[TXDDS_TABLE_SZ] = ;
static const struct txdds_ent txdds_extra_sdr[TXDDS_EXTRA_SZ] = ;
static const struct txdds_ent txdds_extra_ddr[TXDDS_EXTRA_SZ] = ;
static const struct txdds_ent txdds_extra_qdr[TXDDS_EXTRA_SZ] = ;
static const struct txdds_ent txdds_extra_mfg[TXDDS_MFG_SZ] = ;
static const struct txdds_ent *get_atten_table(const struct txdds_ent *txdds,
unsigned atten)
static void find_best_ent(struct qib_pportdata *ppd,
const struct txdds_ent **sdr_dds,
const struct txdds_ent **ddr_dds,
const struct txdds_ent **qdr_dds, int override)
static void init_txdds_table(struct qib_pportdata *ppd, int override)
#define KR_AHB_ACC KREG_IDX(ahb_access_ctrl)
#define KR_AHB_TRANS KREG_IDX(ahb_transaction_reg)
#define AHB_TRANS_RDY SYM_MASK(ahb_transaction_reg, ahb_rdy)
#define AHB_ADDR_LSB SYM_LSB(ahb_transaction_reg, ahb_address)
#define AHB_DATA_LSB SYM_LSB(ahb_transaction_reg, ahb_data)
#define AHB_WR SYM_MASK(ahb_transaction_reg, write_not_read)
#define AHB_TRANS_TRIES 10
static u32 ahb_mod(struct qib_devdata *dd, int quad, int chan, int addr,
u32 data, u32 mask)
static void ibsd_wr_allchans(struct qib_pportdata *ppd, int addr, unsigned data,
unsigned mask)
static void serdes_7322_los_enable(struct qib_pportdata *ppd, int enable)
static int serdes_7322_init(struct qib_pportdata *ppd)
static int serdes_7322_init_old(struct qib_pportdata *ppd)
static int serdes_7322_init_new(struct qib_pportdata *ppd)
static void set_man_code(struct qib_pportdata *ppd, int chan, int code)
static void set_man_mode_h1(struct qib_pportdata *ppd, int chan,
int enable, u32 tapenable)
static void clock_man(struct qib_pportdata *ppd, int chan)
static void write_tx_serdes_param(struct qib_pportdata *ppd,
struct txdds_ent *txdds)
static void adj_tx_serdes(struct qib_pportdata *ppd)
static void force_h1(struct qib_pportdata *ppd)
#define SJA_EN SYM_MASK(SPC_JTAG_ACCESS_REG, SPC_JTAG_ACCESS_EN)
#define BISTEN_LSB SYM_LSB(SPC_JTAG_ACCESS_REG, bist_en)
#define R_OPCODE_LSB 3
#define R_OP_NOP 0
#define R_OP_SHIFT 2
#define R_OP_UPDATE 3
#define R_TDI_LSB 2
#define R_TDO_LSB 1
#define R_RDY 1
static int qib_r_grab(struct qib_devdata *dd)
static int qib_r_wait_for_rdy(struct qib_devdata *dd)
static int qib_r_shift(struct qib_devdata *dd, int bisten,
int len, u8 *inp, u8 *outp)
static int qib_r_update(struct qib_devdata *dd, int bisten)
#define BISTEN_PORT_SEL 15
#define LEN_PORT_SEL 625
#define BISTEN_AT 17
#define LEN_AT 156
#define BISTEN_ETM 16
#define LEN_ETM 632
#define BIT2BYTE(x) (((x) +  BITS_PER_BYTE - 1) / BITS_PER_BYTE)
static u8 reset_at[BIT2BYTE(LEN_AT)] = ;
static u8 reset_atetm[BIT2BYTE(LEN_ETM)] = ;
static u8 at[BIT2BYTE(LEN_AT)] = ;
static u8 atetm_1port[BIT2BYTE(LEN_ETM)] = ;
static u8 atetm_2port[BIT2BYTE(LEN_ETM)] = ;
static u8 portsel_port1[BIT2BYTE(LEN_PORT_SEL)] = ;
static u8 portsel_port2[BIT2BYTE(LEN_PORT_SEL)] = ;
static u8 portsel_2port[BIT2BYTE(LEN_PORT_SEL)] = ;
static void setup_7322_link_recovery(struct qib_pportdata *ppd, u32 both)
static void check_7322_rxe_status(struct qib_pportdata *ppd)
