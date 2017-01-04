static void qib_setup_7220_setextled(struct qib_pportdata *, u32);
static void qib_7220_handle_hwerrors(struct qib_devdata *, char *, size_t);
static void sendctrl_7220_mod(struct qib_pportdata *ppd, u32 op);
static u32 qib_7220_iblink_state(u64);
static u8 qib_7220_phys_portstate(u64);
static void qib_sdma_update_7220_tail(struct qib_pportdata *, u16);
static void qib_set_ib_7220_lstate(struct qib_pportdata *, u16, u16);
#define KREG_IDX(regname) (QIB_7220_##regname##_OFFS / sizeof(u64))
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
#define kr_hrtbt_guid KREG_IDX(HRTBT_GUID)
#define kr_hwdiagctrl KREG_IDX(HwDiagCtrl)
#define kr_hwerrclear KREG_IDX(HwErrClear)
#define kr_hwerrmask KREG_IDX(HwErrMask)
#define kr_hwerrstatus KREG_IDX(HwErrStatus)
#define kr_ibcctrl KREG_IDX(IBCCtrl)
#define kr_ibcddrctrl KREG_IDX(IBCDDRCtrl)
#define kr_ibcddrstatus KREG_IDX(IBCDDRStatus)
#define kr_ibcstatus KREG_IDX(IBCStatus)
#define kr_ibserdesctrl KREG_IDX(IBSerDesCtrl)
#define kr_intclear KREG_IDX(IntClear)
#define kr_intmask KREG_IDX(IntMask)
#define kr_intstatus KREG_IDX(IntStatus)
#define kr_ncmodectrl KREG_IDX(IBNCModeCtrl)
#define kr_palign KREG_IDX(PageAlign)
#define kr_partitionkey KREG_IDX(RcvPartitionKey)
#define kr_portcnt KREG_IDX(PortCnt)
#define kr_rcvbthqp KREG_IDX(RcvBTHQP)
#define kr_rcvctrl KREG_IDX(RcvCtrl)
#define kr_rcvegrbase KREG_IDX(RcvEgrBase)
#define kr_rcvegrcnt KREG_IDX(RcvEgrCnt)
#define kr_rcvhdrcnt KREG_IDX(RcvHdrCnt)
#define kr_rcvhdrentsize KREG_IDX(RcvHdrEntSize)
#define kr_rcvhdrsize KREG_IDX(RcvHdrSize)
#define kr_rcvpktledcnt KREG_IDX(RcvPktLEDCnt)
#define kr_rcvtidbase KREG_IDX(RcvTIDBase)
#define kr_rcvtidcnt KREG_IDX(RcvTIDCnt)
#define kr_revision KREG_IDX(Revision)
#define kr_scratch KREG_IDX(Scratch)
#define kr_sendbuffererror KREG_IDX(SendBufErr0)
#define kr_sendctrl KREG_IDX(SendCtrl)
#define kr_senddmabase KREG_IDX(SendDmaBase)
#define kr_senddmabufmask0 KREG_IDX(SendDmaBufMask0)
#define kr_senddmabufmask1 (KREG_IDX(SendDmaBufMask0) + 1)
#define kr_senddmabufmask2 (KREG_IDX(SendDmaBufMask0) + 2)
#define kr_senddmahead KREG_IDX(SendDmaHead)
#define kr_senddmaheadaddr KREG_IDX(SendDmaHeadAddr)
#define kr_senddmalengen KREG_IDX(SendDmaLenGen)
#define kr_senddmastatus KREG_IDX(SendDmaStatus)
#define kr_senddmatail KREG_IDX(SendDmaTail)
#define kr_sendpioavailaddr KREG_IDX(SendBufAvailAddr)
#define kr_sendpiobufbase KREG_IDX(SendBufBase)
#define kr_sendpiobufcnt KREG_IDX(SendBufCnt)
#define kr_sendpiosize KREG_IDX(SendBufSize)
#define kr_sendregbase KREG_IDX(SendRegBase)
#define kr_userregbase KREG_IDX(UserRegBase)
#define kr_xgxs_cfg KREG_IDX(XGXSCfg)
#define kr_rcvhdraddr KREG_IDX(RcvHdrAddr0)
#define kr_rcvhdrtailaddr KREG_IDX(RcvHdrTailAddr0)
#define CREG_IDX(regname) ((QIB_7220_##regname##_OFFS - \
QIB_7220_LBIntCnt_OFFS) / sizeof(u64))
#define cr_badformat CREG_IDX(RxVersionErrCnt)
#define cr_erricrc CREG_IDX(RxICRCErrCnt)
#define cr_errlink CREG_IDX(RxLinkMalformCnt)
#define cr_errlpcrc CREG_IDX(RxLPCRCErrCnt)
#define cr_errpkey CREG_IDX(RxPKeyMismatchCnt)
#define cr_rcvflowctrl_err CREG_IDX(RxFlowCtrlViolCnt)
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
#define cr_vl15droppedpkt CREG_IDX(RxVL15DroppedPktCnt)
#define cr_rxotherlocalphyerr CREG_IDX(RxOtherLocalPhyErrCnt)
#define cr_excessbufferovfl CREG_IDX(ExcessBufferOvflCnt)
#define cr_locallinkintegrityerr CREG_IDX(LocalLinkIntegrityErrCnt)
#define cr_rxvlerr CREG_IDX(RxVlErrCnt)
#define cr_rxdlidfltr CREG_IDX(RxDlidFltrCnt)
#define cr_psstat CREG_IDX(PSStat)
#define cr_psstart CREG_IDX(PSStart)
#define cr_psinterval CREG_IDX(PSInterval)
#define cr_psrcvdatacount CREG_IDX(PSRcvDataCount)
#define cr_psrcvpktscount CREG_IDX(PSRcvPktsCount)
#define cr_psxmitdatacount CREG_IDX(PSXmitDataCount)
#define cr_psxmitpktscount CREG_IDX(PSXmitPktsCount)
#define cr_psxmitwaitcount CREG_IDX(PSXmitWaitCount)
#define cr_txsdmadesc CREG_IDX(TxSDmaDescCnt)
#define cr_pcieretrydiag CREG_IDX(PcieRetryBufDiagQwordCnt)
#define SYM_RMASK(regname, fldname) ((u64)              \
QIB_7220_##regname##_##fldname##_RMASK)
#define SYM_MASK(regname, fldname) ((u64)               \
QIB_7220_##regname##_##fldname##_RMASK <<       \
QIB_7220_##regname##_##fldname##_LSB)
#define SYM_LSB(regname, fldname) (QIB_7220_##regname##_##fldname##_LSB)
#define SYM_FIELD(value, regname, fldname) ((u64) \
(((value) >> SYM_LSB(regname, fldname)) & \
SYM_RMASK(regname, fldname)))
#define ERR_MASK(fldname) SYM_MASK(ErrMask, fldname##Mask)
#define HWE_MASK(fldname) SYM_MASK(HwErrMask, fldname##Mask)
#define QLOGIC_IB_IBCC_LINKINITCMD_DISABLE 1
#define QLOGIC_IB_IBCC_LINKINITCMD_POLL 2
#define QLOGIC_IB_IBCC_LINKINITCMD_SLEEP 3
#define QLOGIC_IB_IBCC_LINKINITCMD_SHIFT 16
#define QLOGIC_IB_IBCC_LINKCMD_DOWN 1
#define QLOGIC_IB_IBCC_LINKCMD_ARMED 2
#define QLOGIC_IB_IBCC_LINKCMD_ACTIVE 3
#define BLOB_7220_IBCHG 0x81
static inline u32 qib_read_ureg32(const struct qib_devdata *dd,
enum qib_ureg regno, int ctxt)
static inline void qib_write_ureg(const struct qib_devdata *dd,
enum qib_ureg regno, u64 value, int ctxt)
static inline void qib_write_kreg_ctxt(const struct qib_devdata *dd,
const u16 regno, unsigned ctxt,
u64 value)
static inline void write_7220_creg(const struct qib_devdata *dd,
u16 regno, u64 value)
static inline u64 read_7220_creg(const struct qib_devdata *dd, u16 regno)
static inline u32 read_7220_creg32(const struct qib_devdata *dd, u16 regno)
#define QLOGIC_IB_R_EMULATORREV_MASK ((1ULL << 22) - 1)
#define QLOGIC_IB_R_EMULATORREV_SHIFT 40
#define QLOGIC_IB_C_RESET (1U << 7)
#define QLOGIC_IB_I_RCVURG_MASK ((1ULL << 17) - 1)
#define QLOGIC_IB_I_RCVURG_SHIFT 32
#define QLOGIC_IB_I_RCVAVAIL_MASK ((1ULL << 17) - 1)
#define QLOGIC_IB_I_RCVAVAIL_SHIFT 0
#define QLOGIC_IB_I_SERDESTRIMDONE (1ULL << 27)
#define QLOGIC_IB_C_FREEZEMODE 0x00000002
#define QLOGIC_IB_C_LINKENABLE 0x00000004
#define QLOGIC_IB_I_SDMAINT             0x8000000000000000ULL
#define QLOGIC_IB_I_SDMADISABLED        0x4000000000000000ULL
#define QLOGIC_IB_I_ERROR               0x0000000080000000ULL
#define QLOGIC_IB_I_SPIOSENT            0x0000000040000000ULL
#define QLOGIC_IB_I_SPIOBUFAVAIL        0x0000000020000000ULL
#define QLOGIC_IB_I_GPIO                0x0000000010000000ULL
#define QLOGIC_IB_I_BITSEXTANT \
(QLOGIC_IB_I_SDMAINT | QLOGIC_IB_I_SDMADISABLED | \
(QLOGIC_IB_I_RCVURG_MASK << QLOGIC_IB_I_RCVURG_SHIFT) | \
(QLOGIC_IB_I_RCVAVAIL_MASK << \
QLOGIC_IB_I_RCVAVAIL_SHIFT) | \
QLOGIC_IB_I_ERROR | QLOGIC_IB_I_SPIOSENT | \
QLOGIC_IB_I_SPIOBUFAVAIL | QLOGIC_IB_I_GPIO | \
QLOGIC_IB_I_SERDESTRIMDONE)
#define IB_HWE_BITSEXTANT \
(HWE_MASK(RXEMemParityErr) | \
HWE_MASK(TXEMemParityErr) | \
(QLOGIC_IB_HWE_PCIEMEMPARITYERR_MASK <<	 \
QLOGIC_IB_HWE_PCIEMEMPARITYERR_SHIFT) | \
QLOGIC_IB_HWE_PCIE1PLLFAILED | \
QLOGIC_IB_HWE_PCIE0PLLFAILED | \
QLOGIC_IB_HWE_PCIEPOISONEDTLP | \
QLOGIC_IB_HWE_PCIECPLTIMEOUT | \
QLOGIC_IB_HWE_PCIEBUSPARITYXTLH | \
QLOGIC_IB_HWE_PCIEBUSPARITYXADM | \
QLOGIC_IB_HWE_PCIEBUSPARITYRADM | \
HWE_MASK(PowerOnBISTFailed) |	  \
QLOGIC_IB_HWE_COREPLL_FBSLIP | \
QLOGIC_IB_HWE_COREPLL_RFSLIP | \
QLOGIC_IB_HWE_SERDESPLLFAILED | \
HWE_MASK(IBCBusToSPCParityErr) | \
HWE_MASK(IBCBusFromSPCParityErr) | \
QLOGIC_IB_HWE_PCIECPLDATAQUEUEERR | \
QLOGIC_IB_HWE_PCIECPLHDRQUEUEERR | \
QLOGIC_IB_HWE_SDMAMEMREADERR | \
QLOGIC_IB_HWE_CLK_UC_PLLNOTLOCKED | \
QLOGIC_IB_HWE_PCIESERDESQ0PCLKNOTDETECT | \
QLOGIC_IB_HWE_PCIESERDESQ1PCLKNOTDETECT | \
QLOGIC_IB_HWE_PCIESERDESQ2PCLKNOTDETECT | \
QLOGIC_IB_HWE_PCIESERDESQ3PCLKNOTDETECT | \
QLOGIC_IB_HWE_DDSRXEQMEMORYPARITYERR | \
QLOGIC_IB_HWE_IB_UC_MEMORYPARITYERR | \
QLOGIC_IB_HWE_PCIE_UC_OCT0MEMORYPARITYERR | \
QLOGIC_IB_HWE_PCIE_UC_OCT1MEMORYPARITYERR)
#define IB_E_BITSEXTANT							\
(ERR_MASK(RcvFormatErr) | ERR_MASK(RcvVCRCErr) |		\
ERR_MASK(RcvICRCErr) | ERR_MASK(RcvMinPktLenErr) |		\
ERR_MASK(RcvMaxPktLenErr) | ERR_MASK(RcvLongPktLenErr) |	\
ERR_MASK(RcvShortPktLenErr) | ERR_MASK(RcvUnexpectedCharErr) | \
ERR_MASK(RcvUnsupportedVLErr) | ERR_MASK(RcvEBPErr) |		\
ERR_MASK(RcvIBFlowErr) | ERR_MASK(RcvBadVersionErr) |		\
ERR_MASK(RcvEgrFullErr) | ERR_MASK(RcvHdrFullErr) |		\
ERR_MASK(RcvBadTidErr) | ERR_MASK(RcvHdrLenErr) |		\
ERR_MASK(RcvHdrErr) | ERR_MASK(RcvIBLostLinkErr) |		\
ERR_MASK(SendSpecialTriggerErr) |				\
ERR_MASK(SDmaDisabledErr) | ERR_MASK(SendMinPktLenErr) |	\
ERR_MASK(SendMaxPktLenErr) | ERR_MASK(SendUnderRunErr) |	\
ERR_MASK(SendPktLenErr) | ERR_MASK(SendDroppedSmpPktErr) |	\
ERR_MASK(SendDroppedDataPktErr) |				\
ERR_MASK(SendPioArmLaunchErr) |				\
ERR_MASK(SendUnexpectedPktNumErr) |				\
ERR_MASK(SendUnsupportedVLErr) | ERR_MASK(SendBufMisuseErr) |	\
ERR_MASK(SDmaGenMismatchErr) | ERR_MASK(SDmaOutOfBoundErr) |	\
ERR_MASK(SDmaTailOutOfBoundErr) | ERR_MASK(SDmaBaseErr) |	\
ERR_MASK(SDma1stDescErr) | ERR_MASK(SDmaRpyTagErr) |		\
ERR_MASK(SDmaDwEnErr) | ERR_MASK(SDmaMissingDwErr) |		\
ERR_MASK(SDmaUnexpDataErr) |					\
ERR_MASK(IBStatusChanged) | ERR_MASK(InvalidAddrErr) |		\
ERR_MASK(ResetNegated) | ERR_MASK(HardwareErr) |		\
ERR_MASK(SDmaDescAddrMisalignErr) |				\
ERR_MASK(InvalidEEPCmd))
#define QLOGIC_IB_HWE_PCIEMEMPARITYERR_MASK  0x00000000000000ffULL
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
#define QLOGIC_IB_HWE_PCIECPLDATAQUEUEERR         0x0000000000000040ULL
#define QLOGIC_IB_HWE_PCIECPLHDRQUEUEERR          0x0000000000000080ULL
#define QLOGIC_IB_HWE_SDMAMEMREADERR              0x0000000010000000ULL
#define QLOGIC_IB_HWE_CLK_UC_PLLNOTLOCKED          0x2000000000000000ULL
#define QLOGIC_IB_HWE_PCIESERDESQ0PCLKNOTDETECT   0x0100000000000000ULL
#define QLOGIC_IB_HWE_PCIESERDESQ1PCLKNOTDETECT   0x0200000000000000ULL
#define QLOGIC_IB_HWE_PCIESERDESQ2PCLKNOTDETECT   0x0400000000000000ULL
#define QLOGIC_IB_HWE_PCIESERDESQ3PCLKNOTDETECT   0x0800000000000000ULL
#define QLOGIC_IB_HWE_DDSRXEQMEMORYPARITYERR       0x0000008000000000ULL
#define QLOGIC_IB_HWE_IB_UC_MEMORYPARITYERR        0x0000004000000000ULL
#define QLOGIC_IB_HWE_PCIE_UC_OCT0MEMORYPARITYERR 0x0000001000000000ULL
#define QLOGIC_IB_HWE_PCIE_UC_OCT1MEMORYPARITYERR 0x0000002000000000ULL
#define IBA7220_IBCC_LINKCMD_SHIFT 19
#define IBA7220_IBC_DLIDLMC_MASK        0xFFFFFFFFUL
#define IBA7220_IBC_DLIDLMC_SHIFT       32
#define IBA7220_IBC_HRTBT_MASK  (SYM_RMASK(IBCDDRCtrl, HRTBT_AUTO) | \
SYM_RMASK(IBCDDRCtrl, HRTBT_ENB))
#define IBA7220_IBC_HRTBT_SHIFT SYM_LSB(IBCDDRCtrl, HRTBT_ENB)
#define IBA7220_IBC_LANE_REV_SUPPORTED (1<<8)
#define IBA7220_IBC_LREV_MASK   1
#define IBA7220_IBC_LREV_SHIFT  8
#define IBA7220_IBC_RXPOL_MASK  1
#define IBA7220_IBC_RXPOL_SHIFT 7
#define IBA7220_IBC_WIDTH_SHIFT 5
#define IBA7220_IBC_WIDTH_MASK  0x3
#define IBA7220_IBC_WIDTH_1X_ONLY       (0 << IBA7220_IBC_WIDTH_SHIFT)
#define IBA7220_IBC_WIDTH_4X_ONLY       (1 << IBA7220_IBC_WIDTH_SHIFT)
#define IBA7220_IBC_WIDTH_AUTONEG       (2 << IBA7220_IBC_WIDTH_SHIFT)
#define IBA7220_IBC_SPEED_AUTONEG       (1 << 1)
#define IBA7220_IBC_SPEED_SDR           (1 << 2)
#define IBA7220_IBC_SPEED_DDR           (1 << 3)
#define IBA7220_IBC_SPEED_AUTONEG_MASK  (0x7 << 1)
#define IBA7220_IBC_IBTA_1_2_MASK       (1)
#define IBA7220_DDRSTAT_LINKLAT_MASK    0x3ffffff
#define QLOGIC_IB_EXTS_FREQSEL 0x2
#define QLOGIC_IB_EXTS_SERDESSEL 0x4
#define QLOGIC_IB_EXTS_MEMBIST_ENDTEST     0x0000000000004000
#define QLOGIC_IB_EXTS_MEMBIST_DISABLED    0x0000000000008000
#define QLOGIC_IB_XGXS_RESET          0x5ULL
#define QLOGIC_IB_XGXS_FC_SAFE        (1ULL << 63)
#define IBA7220_LEDBLINK_ON_SHIFT 32
#define IBA7220_LEDBLINK_OFF_SHIFT 0
#define _QIB_GPIO_SDA_NUM 1
#define _QIB_GPIO_SCL_NUM 0
#define QIB_TWSI_EEPROM_DEV 0xA2
#define QIB_TWSI_TEMP_DEV 0x98
#define QIB_7220_PSXMITWAIT_CHECK_RATE 4000
#define IBA7220_R_INTRAVAIL_SHIFT 17
#define IBA7220_R_PKEY_DIS_SHIFT 34
#define IBA7220_R_TAILUPD_SHIFT 35
#define IBA7220_R_CTXTCFG_SHIFT 36
#define IBA7220_HDRHEAD_PKTINT_SHIFT 32
#define IBA7220_TID_SZ_SHIFT 37
#define IBA7220_TID_SZ_2K (1UL << IBA7220_TID_SZ_SHIFT)
#define IBA7220_TID_SZ_4K (2UL << IBA7220_TID_SZ_SHIFT)
#define IBA7220_TID_PA_SHIFT 11U
#define PBC_7220_VL15_SEND (1ULL << 63)
#define PBC_7220_VL15_SEND_CTRL (1ULL << 31)
#define AUTONEG_TRIES 5
static u8 rate_to_delay[2][2] = ;
static u8 ib_rate_to_delay[IB_RATE_120_GBPS + 1] = ;
#define IBA7220_LINKSPEED_SHIFT SYM_LSB(IBCStatus, LinkSpeedActive)
#define IBA7220_LINKWIDTH_SHIFT SYM_LSB(IBCStatus, LinkWidthActive)
#define IB_7220_LT_STATE_DISABLED        0x00
#define IB_7220_LT_STATE_LINKUP          0x01
#define IB_7220_LT_STATE_POLLACTIVE      0x02
#define IB_7220_LT_STATE_POLLQUIET       0x03
#define IB_7220_LT_STATE_SLEEPDELAY      0x04
#define IB_7220_LT_STATE_SLEEPQUIET      0x05
#define IB_7220_LT_STATE_CFGDEBOUNCE     0x08
#define IB_7220_LT_STATE_CFGRCVFCFG      0x09
#define IB_7220_LT_STATE_CFGWAITRMT      0x0a
#define IB_7220_LT_STATE_CFGIDLE 0x0b
#define IB_7220_LT_STATE_RECOVERRETRAIN  0x0c
#define IB_7220_LT_STATE_RECOVERWAITRMT  0x0e
#define IB_7220_LT_STATE_RECOVERIDLE     0x0f
#define IB_7220_L_STATE_DOWN             0x0
#define IB_7220_L_STATE_INIT             0x1
#define IB_7220_L_STATE_ARM              0x2
#define IB_7220_L_STATE_ACTIVE           0x3
#define IB_7220_L_STATE_ACT_DEFER        0x4
static const u8 qib_7220_physportstate[0x20] = ;
int qib_special_trigger;
module_param_named(special_trigger, qib_special_trigger, int, S_IRUGO);
MODULE_PARM_DESC(special_trigger, "Enable SpecialTrigger arm/launch");
#define IBCBUSFRSPCPARITYERR HWE_MASK(IBCBusFromSPCParityErr)
#define IBCBUSTOSPCPARITYERR HWE_MASK(IBCBusToSPCParityErr)
#define SYM_MASK_BIT(regname, fldname, bit) ((u64) \
(1ULL << (SYM_LSB(regname, fldname) + (bit))))
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
static const struct qib_hwerror_msgs qib_7220_hwerror_msgs[] = ;
#define RXE_PARITY (RXEMEMPARITYERR_EAGERTID|RXEMEMPARITYERR_EXPTID)
#define QLOGIC_IB_E_PKTERRS (\
ERR_MASK(SendPktLenErr) |				\
ERR_MASK(SendDroppedDataPktErr) |			\
ERR_MASK(RcvVCRCErr) |					\
ERR_MASK(RcvICRCErr) |					\
ERR_MASK(RcvShortPktLenErr) |				\
ERR_MASK(RcvEBPErr))
#define QLOGIC_IB_E_SDMAERRS ( \
ERR_MASK(SDmaGenMismatchErr) |				\
ERR_MASK(SDmaOutOfBoundErr) |				\
ERR_MASK(SDmaTailOutOfBoundErr) | ERR_MASK(SDmaBaseErr) | \
ERR_MASK(SDma1stDescErr) | ERR_MASK(SDmaRpyTagErr) |	\
ERR_MASK(SDmaDwEnErr) | ERR_MASK(SDmaMissingDwErr) |	\
ERR_MASK(SDmaUnexpDataErr) |				\
ERR_MASK(SDmaDescAddrMisalignErr) |			\
ERR_MASK(SDmaDisabledErr) |				\
ERR_MASK(SendBufMisuseErr))
#define E_SUM_PKTERRS \
(ERR_MASK(RcvHdrLenErr) | ERR_MASK(RcvBadTidErr) |		\
ERR_MASK(RcvBadVersionErr) | ERR_MASK(RcvHdrErr) |		\
ERR_MASK(RcvLongPktLenErr) | ERR_MASK(RcvShortPktLenErr) |	\
ERR_MASK(RcvMaxPktLenErr) | ERR_MASK(RcvMinPktLenErr) |	\
ERR_MASK(RcvFormatErr) | ERR_MASK(RcvUnsupportedVLErr) |	\
ERR_MASK(RcvUnexpectedCharErr) | ERR_MASK(RcvEBPErr))
#define E_SUM_ERRS \
(ERR_MASK(SendPioArmLaunchErr) | ERR_MASK(SendUnexpectedPktNumErr) | \
ERR_MASK(SendDroppedDataPktErr) | ERR_MASK(SendDroppedSmpPktErr) | \
ERR_MASK(SendMaxPktLenErr) | ERR_MASK(SendUnsupportedVLErr) |	\
ERR_MASK(SendMinPktLenErr) | ERR_MASK(SendPktLenErr) |		\
ERR_MASK(InvalidAddrErr))
#define E_SPKT_ERRS_IGNORE \
(ERR_MASK(SendDroppedDataPktErr) | ERR_MASK(SendDroppedSmpPktErr) | \
ERR_MASK(SendMaxPktLenErr) | ERR_MASK(SendMinPktLenErr) |	\
ERR_MASK(SendPktLenErr))
#define E_SUM_LINK_PKTERRS \
(ERR_MASK(SendDroppedDataPktErr) | ERR_MASK(SendDroppedSmpPktErr) | \
ERR_MASK(SendMinPktLenErr) | ERR_MASK(SendPktLenErr) |		\
ERR_MASK(RcvShortPktLenErr) | ERR_MASK(RcvMinPktLenErr) |	\
ERR_MASK(RcvUnexpectedCharErr))
static void autoneg_7220_work(struct work_struct *);
static u32 __iomem *qib_7220_getsendbuf(struct qib_pportdata *, u64, u32 *);
static void qib_disarm_7220_senderrbufs(struct qib_pportdata *ppd)
static void qib_7220_txe_recover(struct qib_devdata *dd)
static void qib_7220_sdma_sendctrl(struct qib_pportdata *ppd, unsigned op)
static void qib_decode_7220_sdma_errs(struct qib_pportdata *ppd,
u64 err, char *buf, size_t blen)
static void qib_7220_sdma_hw_clean_up(struct qib_pportdata *ppd)
static void qib_sdma_7220_setlengen(struct qib_pportdata *ppd)
static void qib_7220_sdma_hw_start_up(struct qib_pportdata *ppd)
#define DISABLES_SDMA (							\
ERR_MASK(SDmaDisabledErr) |				\
ERR_MASK(SDmaBaseErr) |					\
ERR_MASK(SDmaTailOutOfBoundErr) |			\
ERR_MASK(SDmaOutOfBoundErr) |				\
ERR_MASK(SDma1stDescErr) |				\
ERR_MASK(SDmaRpyTagErr) |				\
ERR_MASK(SDmaGenMismatchErr) |				\
ERR_MASK(SDmaDescAddrMisalignErr) |			\
ERR_MASK(SDmaMissingDwErr) |				\
ERR_MASK(SDmaDwEnErr))
static void sdma_7220_errors(struct qib_pportdata *ppd, u64 errs)
static int qib_decode_7220_err(struct qib_devdata *dd, char *buf, size_t blen,
u64 err)
static void reenable_7220_chase(unsigned long opaque)
static void handle_7220_chase(struct qib_pportdata *ppd, u64 ibcst)
static void handle_7220_errors(struct qib_devdata *dd, u64 errs)
static void qib_7220_set_intr_state(struct qib_devdata *dd, u32 enable)
static void qib_7220_clear_freeze(struct qib_devdata *dd)
static void qib_7220_handle_hwerrors(struct qib_devdata *dd, char *msg,
size_t msgl)
static void qib_7220_init_hwerrors(struct qib_devdata *dd)
static void qib_set_7220_armlaunch(struct qib_devdata *dd, u32 enable)
static void qib_set_ib_7220_lstate(struct qib_pportdata *ppd, u16 linkcmd,
u16 linitcmd)
static int qib_7220_bringup_serdes(struct qib_pportdata *ppd)
static void qib_7220_quiet_serdes(struct qib_pportdata *ppd)
static void qib_setup_7220_setextled(struct qib_pportdata *ppd, u32 on)
static void qib_7220_free_irq(struct qib_devdata *dd)
static void qib_setup_7220_cleanup(struct qib_devdata *dd)
static void sdma_7220_intr(struct qib_pportdata *ppd, u64 istat)
static void qib_wantpiobuf_7220_intr(struct qib_devdata *dd, u32 needint)
static noinline void unlikely_7220_intr(struct qib_devdata *dd, u64 istat)
static irqreturn_t qib_7220intr(int irq, void *data)
static void qib_setup_7220_interrupt(struct qib_devdata *dd)
static void qib_7220_boardname(struct qib_devdata *dd)
static int qib_setup_7220_reset(struct qib_devdata *dd)
static void qib_7220_put_tid(struct qib_devdata *dd, u64 __iomem *tidptr,
u32 type, unsigned long pa)
static void qib_7220_clear_tids(struct qib_devdata *dd,
struct qib_ctxtdata *rcd)
static void qib_7220_tidtemplate(struct qib_devdata *dd)
static int qib_7220_get_base_info(struct qib_ctxtdata *rcd,
struct qib_base_info *kinfo)
static struct qib_message_header *
qib_7220_get_msgheader(struct qib_devdata *dd, __le32 *rhf_addr)
static void qib_7220_config_ctxts(struct qib_devdata *dd)
static int qib_7220_get_ib_cfg(struct qib_pportdata *ppd, int which)
static int qib_7220_set_ib_cfg(struct qib_pportdata *ppd, int which, u32 val)
static int qib_7220_set_loopback(struct qib_pportdata *ppd, const char *what)
static void qib_update_7220_usrhead(struct qib_ctxtdata *rcd, u64 hd,
u32 updegr, u32 egrhd, u32 npkts)
static u32 qib_7220_hdrqempty(struct qib_ctxtdata *rcd)
static void rcvctrl_7220_mod(struct qib_pportdata *ppd, unsigned int op,
int ctxt)
static void sendctrl_7220_mod(struct qib_pportdata *ppd, u32 op)
static u64 qib_portcntr_7220(struct qib_pportdata *ppd, u32 reg)
static const char cntr7220names[] =
"Interrupts\n"
"HostBusStall\n"
"E RxTIDFull\n"
"RxTIDInvalid\n"
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
"Ctx16EgrOvfl\n";
static const size_t cntr7220indices[] = ;
static const char portcntr7220names[] =
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
;
#define _PORT_VIRT_FLAG 0x8000
static const size_t portcntr7220indices[] = ;
static void init_7220_cntrnames(struct qib_devdata *dd)
static u32 qib_read_7220cntrs(struct qib_devdata *dd, loff_t pos, char **namep,
u64 **cntrp)
static u32 qib_read_7220portcntrs(struct qib_devdata *dd, loff_t pos, u32 port,
char **namep, u64 **cntrp)
static void qib_get_7220_faststats(unsigned long opaque)
static int qib_7220_intr_fallback(struct qib_devdata *dd)
static void qib_7220_xgxs_reset(struct qib_pportdata *ppd)
static u32 __iomem *get_7220_link_buf(struct qib_pportdata *ppd, u32 *bnum)
static void autoneg_7220_sendpkt(struct qib_pportdata *ppd, u32 *hdr,
u32 dcnt, u32 *data)
static void autoneg_7220_send(struct qib_pportdata *ppd, int which)
static void set_7220_ibspeed_fast(struct qib_pportdata *ppd, u32 speed)
static void try_7220_autoneg(struct qib_pportdata *ppd)
static void autoneg_7220_work(struct work_struct *work)
static u32 qib_7220_iblink_state(u64 ibcs)
static u8 qib_7220_phys_portstate(u64 ibcs)
static int qib_7220_ib_updown(struct qib_pportdata *ppd, int ibup, u64 ibcs)
static int gpio_7220_mod(struct qib_devdata *dd, u32 out, u32 dir, u32 mask)
static void get_7220_chip_params(struct qib_devdata *dd)
static void set_7220_baseaddrs(struct qib_devdata *dd)
#define SENDCTRL_SHADOWED (SYM_MASK(SendCtrl, SendIntBufAvail) |	\
SYM_MASK(SendCtrl, SPioEnable) |		\
SYM_MASK(SendCtrl, SSpecialTriggerEn) |	\
SYM_MASK(SendCtrl, SendBufAvailUpd) |	\
SYM_MASK(SendCtrl, AvailUpdThld) |		\
SYM_MASK(SendCtrl, SDmaEnable) |		\
SYM_MASK(SendCtrl, SDmaIntEnable) |		\
SYM_MASK(SendCtrl, SDmaHalt) |		\
SYM_MASK(SendCtrl, SDmaSingleDescriptor))
static int sendctrl_hook(struct qib_devdata *dd,
const struct diag_observer *op,
u32 offs, u64 *data, u64 mask, int only_32)
static const struct diag_observer sendctrl_observer = ;
static int qib_late_7220_initreg(struct qib_devdata *dd)
static int qib_init_7220_variables(struct qib_devdata *dd)
static u32 __iomem *qib_7220_getsendbuf(struct qib_pportdata *ppd, u64 pbc,
u32 *pbufnum)
static void qib_set_cntr_7220_sample(struct qib_pportdata *ppd, u32 intv,
u32 start)
static void qib_sdma_update_7220_tail(struct qib_pportdata *ppd, u16 tail)
static void qib_sdma_set_7220_desc_cnt(struct qib_pportdata *ppd, unsigned cnt)
static struct sdma_set_state_action sdma_7220_action_table[] = ;
static void qib_7220_sdma_init_early(struct qib_pportdata *ppd)
static int init_sdma_7220_regs(struct qib_pportdata *ppd)
static u16 qib_sdma_7220_gethead(struct qib_pportdata *ppd)
static int qib_sdma_7220_busy(struct qib_pportdata *ppd)
static u32 qib_7220_setpbc_control(struct qib_pportdata *ppd, u32 plen,
u8 srate, u8 vl)
static void qib_7220_initvl15_bufs(struct qib_devdata *dd)
static void qib_7220_init_ctxt(struct qib_ctxtdata *rcd)
static void qib_7220_txchk_change(struct qib_devdata *dd, u32 start,
u32 len, u32 which, struct qib_ctxtdata *rcd)
static void writescratch(struct qib_devdata *dd, u32 val)
#define VALID_TS_RD_REG_MASK 0xBF
static int qib_7220_tempsense_rd(struct qib_devdata *dd, int regnum)
static int qib_7220_eeprom_wen(struct qib_devdata *dd, int wen)
struct qib_devdata *qib_init_iba7220_funcs(struct pci_dev *pdev,
const struct pci_device_id *ent)
