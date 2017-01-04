#define MAX_CARDS	8
#undef BUSTYPE_PCI
#define CRCMASK	0xA001
#define FAILURE         0xFFFFFFFFL
struct sccb;
typedef void (*CALL_BK_FN) (struct sccb *);
struct sccb_mgr_info ;
#define SCSI_PARITY_ENA		  0x0001
#define LOW_BYTE_TERM		  0x0010
#define HIGH_BYTE_TERM		  0x0020
#define BUSTYPE_PCI	  0x3
#define SUPPORT_16TAR_32LUN	  0x0002
#define SOFT_RESET		  0x0004
#define EXTENDED_TRANSLATION	  0x0008
#define POST_ALL_UNDERRRUNS	  0x0040
#define FLAG_SCAM_ENABLED	  0x0080
#define FLAG_SCAM_LEVEL2	  0x0100
#define HARPOON_FAMILY        0x02
struct sccb ;
#define SCATTER_GATHER_COMMAND    0x02
#define RESIDUAL_COMMAND          0x03
#define RESIDUAL_SG_COMMAND       0x04
#define RESET_COMMAND             0x81
#define F_USE_CMD_Q              0x20
#define TAG_TYPE_MASK            0xC0
#define SCCB_DATA_XFER_OUT       0x10
#define SCCB_DATA_XFER_IN        0x08
#define NO_AUTO_REQUEST_SENSE    0x01
#define BUS_FREE_ST     0
#define SELECT_ST       1
#define SELECT_BDR_ST   2
#define SELECT_SN_ST    3
#define SELECT_WN_ST    4
#define SELECT_Q_ST     5
#define COMMAND_ST      6
#define DATA_OUT_ST     7
#define DATA_IN_ST      8
#define DISCONNECT_ST   9
#define ABORT_ST        11
#define F_HOST_XFER_DIR                0x01
#define F_ALL_XFERRED                  0x02
#define F_SG_XFER                      0x04
#define F_AUTO_SENSE                   0x08
#define F_ODD_BALL_CNT                 0x10
#define F_NO_DATA_YET                  0x80
#define F_STATUSLOADED                 0x01
#define F_DEV_SELECTED                 0x04
#define SCCB_COMPLETE               0x00
#define SCCB_DATA_UNDER_RUN         0x0C
#define SCCB_SELECTION_TIMEOUT      0x11
#define SCCB_DATA_OVER_RUN          0x12
#define SCCB_PHASE_SEQUENCE_FAIL    0x14
#define SCCB_GROSS_FW_ERR           0x27
#define SCCB_BM_ERR                 0x30
#define SCCB_PARITY_ERR             0x34
#define SCCB_IN_PROCESS            0x00
#define SCCB_SUCCESS               0x01
#define SCCB_ABORT                 0x02
#define SCCB_ERROR                 0x04
#define  ORION_FW_REV      3110
#define QUEUE_DEPTH     254+1
#define	MAX_MB_CARDS	4
#define MAX_SCSI_TAR    16
#define MAX_LUN         32
#define LUN_MASK			0x1f
#define SG_BUF_CNT      16
#define SG_ELEMENT_SIZE 8
#define RD_HARPOON(ioport)          inb((u32)ioport)
#define RDW_HARPOON(ioport)         inw((u32)ioport)
#define RD_HARP32(ioport,offset,data) (data = inl((u32)(ioport + offset)))
#define WR_HARPOON(ioport,val)      outb((u8) val, (u32)ioport)
#define WRW_HARPOON(ioport,val)       outw((u16)val, (u32)ioport)
#define WR_HARP32(ioport,offset,data)  outl(data, (u32)(ioport + offset))
#define  TAR_SYNC_MASK     (BIT(7)+BIT(6))
#define  SYNC_TRYING               BIT(6)
#define  SYNC_SUPPORTED    (BIT(7)+BIT(6))
#define  TAR_WIDE_MASK     (BIT(5)+BIT(4))
#define  WIDE_ENABLED              BIT(4)
#define  WIDE_NEGOCIATED   BIT(5)
#define  TAR_TAG_Q_MASK    (BIT(3)+BIT(2))
#define  TAG_Q_TRYING              BIT(2)
#define  TAG_Q_REJECT      BIT(3)
#define  TAR_ALLOW_DISC    BIT(0)
#define  EE_SYNC_MASK      (BIT(0)+BIT(1))
#define  EE_SYNC_5MB       BIT(0)
#define  EE_SYNC_10MB      BIT(1)
#define  EE_SYNC_20MB      (BIT(0)+BIT(1))
#define  EE_WIDE_SCSI      BIT(7)
struct sccb_mgr_tar_info ;
struct nvram_info ;
#define	MODEL_LT		1
#define	MODEL_DL		2
#define	MODEL_LW		3
#define	MODEL_DW		4
struct sccb_card ;
#define F_TAG_STARTED		0x01
#define F_CONLUN_IO			0x02
#define F_DO_RENEGO			0x04
#define F_NO_FILTER			0x08
#define F_GREEN_PC			0x10
#define F_HOST_XFER_ACT		0x20
#define F_NEW_SCCB_CMD		0x40
#define F_UPDATE_EEPROM		0x80
#define  ID_STRING_LENGTH  32
#define  TYPE_CODE0        0x63
#define  SLV_TYPE_CODE0    0xA3
#define  ASSIGN_ID   0x00
#define  SET_P_FLAG  0x01
#define  CFG_CMPLT   0x03
#define  DOM_MSTR    0x0F
#define  SYNC_PTRN   0x1F
#define  ID_0_7      0x18
#define  ID_8_F      0x11
#define  MISC_CODE   0x14
#define  CLR_P_FLAG  0x18
#define  INIT_SELTD  0x01
#define  LEVEL2_TAR  0x02
enum scam_id_st ;
typedef struct SCCBscam_info  SCCBSCAM_INFO;
#define  SCSI_REQUEST_SENSE      0x03
#define  SCSI_READ               0x08
#define  SCSI_WRITE              0x0A
#define  SCSI_START_STOP_UNIT    0x1B
#define  SCSI_READ_EXTENDED      0x28
#define  SCSI_WRITE_EXTENDED     0x2A
#define  SCSI_WRITE_AND_VERIFY   0x2E
#define  SSGOOD                  0x00
#define  SSCHECK                 0x02
#define  SSQ_FULL                0x28
#define  SMCMD_COMP              0x00
#define  SMEXT                   0x01
#define  SMSAVE_DATA_PTR         0x02
#define  SMREST_DATA_PTR         0x03
#define  SMDISC                  0x04
#define  SMABORT                 0x06
#define  SMREJECT                0x07
#define  SMNO_OP                 0x08
#define  SMPARITY                0x09
#define  SMDEV_RESET             0x0C
#define	SMABORT_TAG					0x0D
#define	SMINIT_RECOVERY			0x0F
#define	SMREL_RECOVERY				0x10
#define  SMIDENT                 0x80
#define  DISC_PRIV               0x40
#define  SMSYNC                  0x01
#define  SMWDTR                  0x03
#define  SM8BIT                  0x00
#define  SM16BIT                 0x01
#define  SMIGNORWR               0x23
#define  SIX_BYTE_CMD            0x06
#define  TWELVE_BYTE_CMD         0x0C
#define  ASYNC                   0x00
#define  MAX_OFFSET              0x0F
#define  EEPROM_WD_CNT     256
#define  EEPROM_CHECK_SUM  0
#define  FW_SIGNATURE      2
#define  MODEL_NUMB_0      4
#define  MODEL_NUMB_2      6
#define  MODEL_NUMB_4      8
#define  SYSTEM_CONFIG     16
#define  SCSI_CONFIG       17
#define  BIOS_CONFIG       18
#define  SCAM_CONFIG       20
#define  ADAPTER_SCSI_ID   24
#define  IGNORE_B_SCAN     32
#define  SEND_START_ENA    34
#define  DEVICE_ENABLE     36
#define  SYNC_RATE_TBL     38
#define  SYNC_RATE_TBL01   38
#define  SYNC_RATE_TBL23   40
#define  SYNC_RATE_TBL45   42
#define  SYNC_RATE_TBL67   44
#define  SYNC_RATE_TBL89   46
#define  SYNC_RATE_TBLab   48
#define  SYNC_RATE_TBLcd   50
#define  SYNC_RATE_TBLef   52
#define  EE_SCAMBASE      256
#define  SCAM_ENABLED   BIT(2)
#define  SCAM_LEVEL2    BIT(3)
#define	RENEGO_ENA		BIT(10)
#define	CONNIO_ENA		BIT(11)
#define  GREEN_PC_ENA   BIT(12)
#define  AUTO_RATE_00   00
#define  AUTO_RATE_05   01
#define  AUTO_RATE_10   02
#define  AUTO_RATE_20   03
#define  WIDE_NEGO_BIT     BIT(7)
#define  DISC_ENABLE_BIT   BIT(6)
#define  hp_vendor_id_0       0x00
#define  ORION_VEND_0   0x4B
#define  hp_vendor_id_1       0x01
#define  ORION_VEND_1   0x10
#define  hp_device_id_0       0x02
#define  ORION_DEV_0    0x30
#define  hp_device_id_1       0x03
#define  ORION_DEV_1    0x81
#define  hp_sub_device_id_0   0x06
#define  hp_semaphore         0x0C
#define SCCB_MGR_ACTIVE    BIT(0)
#define TICKLE_ME          BIT(1)
#define SCCB_MGR_PRESENT   BIT(3)
#define BIOS_IN_USE        BIT(4)
#define  hp_sys_ctrl          0x0F
#define  STOP_CLK          BIT(0)
#define  DRVR_RST          BIT(1)
#define  HALT_MACH         BIT(3)
#define  HARD_ABORT        BIT(4)
#define  hp_host_blk_cnt      0x13
#define  XFER_BLK64        0x06
#define  BM_THRESHOLD      0x40
#define  hp_int_mask          0x17
#define  INT_CMD_COMPL     BIT(0)
#define  INT_EXT_STATUS    BIT(1)
#define  hp_xfer_cnt_lo       0x18
#define  hp_xfer_cnt_hi       0x1A
#define  hp_xfer_cmd          0x1B
#define  XFER_HOST_DMA     0x00
#define  XFER_DMA_HOST     0x01
#define  XFER_HOST_AUTO    0x00
#define  XFER_DMA_8BIT     0x20
#define  DISABLE_INT       BIT(7)
#define  HOST_WRT_CMD      ((DISABLE_INT + XFER_HOST_DMA + XFER_HOST_AUTO + XFER_DMA_8BIT))
#define  HOST_RD_CMD       ((DISABLE_INT + XFER_DMA_HOST + XFER_HOST_AUTO + XFER_DMA_8BIT))
#define  hp_host_addr_lo      0x1C
#define  hp_host_addr_hmi     0x1E
#define  hp_ee_ctrl           0x22
#define  EXT_ARB_ACK       BIT(7)
#define  SCSI_TERM_ENA_H   BIT(6)
#define  SEE_MS            BIT(5)
#define  SEE_CS            BIT(3)
#define  SEE_CLK           BIT(2)
#define  SEE_DO            BIT(1)
#define  SEE_DI            BIT(0)
#define  EE_READ           0x06
#define  EE_WRITE          0x05
#define  EWEN              0x04
#define  EWEN_ADDR         0x03C0
#define  EWDS              0x04
#define  EWDS_ADDR         0x0000
#define  hp_bm_ctrl           0x26
#define  SCSI_TERM_ENA_L   BIT(0)
#define  FLUSH_XFER_CNTR   BIT(1)
#define  FORCE1_XFER       BIT(5)
#define  FAST_SINGLE       BIT(6)
#define  BMCTRL_DEFAULT    (FORCE1_XFER|FAST_SINGLE|SCSI_TERM_ENA_L)
#define  hp_sg_addr           0x28
#define  hp_page_ctrl         0x29
#define  SCATTER_EN        BIT(0)
#define  SGRAM_ARAM        BIT(1)
#define  G_INT_DISABLE     BIT(3)
#define  NARROW_SCSI_CARD  BIT(4)
#define  hp_pci_stat_cfg      0x2D
#define  REC_MASTER_ABORT  BIT(5)
#define  hp_rev_num           0x33
#define  hp_stack_data        0x34
#define  hp_stack_addr        0x35
#define  hp_ext_status        0x36
#define  BM_FORCE_OFF      BIT(0)
#define  PCI_TGT_ABORT     BIT(0)
#define  PCI_DEV_TMOUT     BIT(1)
#define  CMD_ABORTED       BIT(4)
#define  BM_PARITY_ERR     BIT(5)
#define  PIO_OVERRUN       BIT(6)
#define  BM_CMD_BUSY       BIT(7)
#define  BAD_EXT_STATUS    (BM_FORCE_OFF | PCI_DEV_TMOUT | CMD_ABORTED | \
BM_PARITY_ERR | PIO_OVERRUN)
#define  hp_int_status        0x37
#define  EXT_STATUS_ON     BIT(1)
#define  SCSI_INTERRUPT    BIT(2)
#define  INT_ASSERTED      BIT(5)
#define  hp_fifo_cnt          0x38
#define  hp_intena		 0x40
#define  RESET		 BIT(7)
#define  PROG_HLT		 BIT(6)
#define  PARITY		 BIT(5)
#define  FIFO		 BIT(4)
#define  SEL		 BIT(3)
#define  SCAM_SEL		 BIT(2)
#define  RSEL		 BIT(1)
#define  TIMEOUT		 BIT(0)
#define  BUS_FREE		 BIT(15)
#define  XFER_CNT_0	 BIT(14)
#define  PHASE		 BIT(13)
#define  IUNKWN		 BIT(12)
#define  ICMD_COMP	 BIT(11)
#define  ITICKLE		 BIT(10)
#define  IDO_STRT		 BIT(9)
#define  ITAR_DISC	 BIT(8)
#define  AUTO_INT		 (BIT(12)+BIT(11)+BIT(10)+BIT(9)+BIT(8))
#define  CLR_ALL_INT	 0xFFFF
#define  CLR_ALL_INT_1	 0xFF00
#define  hp_intstat		 0x42
#define  hp_scsisig           0x44
#define  SCSI_SEL          BIT(7)
#define  SCSI_BSY          BIT(6)
#define  SCSI_REQ          BIT(5)
#define  SCSI_ACK          BIT(4)
#define  SCSI_ATN          BIT(3)
#define  SCSI_CD           BIT(2)
#define  SCSI_MSG          BIT(1)
#define  SCSI_IOBIT        BIT(0)
#define  S_SCSI_PHZ        (BIT(2)+BIT(1)+BIT(0))
#define  S_MSGO_PH         (BIT(2)+BIT(1)       )
#define  S_MSGI_PH         (BIT(2)+BIT(1)+BIT(0))
#define  S_DATAI_PH        (              BIT(0))
#define  S_DATAO_PH        0x00
#define  S_ILL_PH          (       BIT(1)       )
#define  hp_scsictrl_0        0x45
#define  SEL_TAR           BIT(6)
#define  ENA_ATN           BIT(4)
#define  ENA_RESEL         BIT(2)
#define  SCSI_RST          BIT(1)
#define  ENA_SCAM_SEL      BIT(0)
#define  hp_portctrl_0        0x46
#define  SCSI_PORT         BIT(7)
#define  SCSI_INBIT        BIT(6)
#define  DMA_PORT          BIT(5)
#define  DMA_RD            BIT(4)
#define  HOST_PORT         BIT(3)
#define  HOST_WRT          BIT(2)
#define  SCSI_BUS_EN       BIT(1)
#define  START_TO          BIT(0)
#define  hp_scsireset         0x47
#define  SCSI_INI          BIT(6)
#define  SCAM_EN           BIT(5)
#define  DMA_RESET         BIT(3)
#define  HPSCSI_RESET      BIT(2)
#define  PROG_RESET        BIT(1)
#define  FIFO_CLR          BIT(0)
#define  hp_xfercnt_0         0x48
#define  hp_xfercnt_2         0x4A
#define  hp_fifodata_0        0x4C
#define  hp_addstat           0x4E
#define  SCAM_TIMER        BIT(7)
#define  SCSI_MODE8        BIT(3)
#define  SCSI_PAR_ERR      BIT(0)
#define  hp_prgmcnt_0         0x4F
#define  hp_selfid_0          0x50
#define  hp_selfid_1          0x51
#define  hp_arb_id            0x52
#define  hp_select_id         0x53
#define  hp_synctarg_base     0x54
#define  hp_synctarg_12       0x54
#define  hp_synctarg_13       0x55
#define  hp_synctarg_14       0x56
#define  hp_synctarg_15       0x57
#define  hp_synctarg_8        0x58
#define  hp_synctarg_9        0x59
#define  hp_synctarg_10       0x5A
#define  hp_synctarg_11       0x5B
#define  hp_synctarg_4        0x5C
#define  hp_synctarg_5        0x5D
#define  hp_synctarg_6        0x5E
#define  hp_synctarg_7        0x5F
#define  hp_synctarg_0        0x60
#define  hp_synctarg_1        0x61
#define  hp_synctarg_2        0x62
#define  hp_synctarg_3        0x63
#define  NARROW_SCSI       BIT(4)
#define  DEFAULT_OFFSET    0x0F
#define  hp_autostart_0       0x64
#define  hp_autostart_1       0x65
#define  hp_autostart_3       0x67
#define  AUTO_IMMED    BIT(5)
#define  SELECT   BIT(6)
#define  END_DATA (BIT(7)+BIT(6))
#define  hp_gp_reg_0          0x68
#define  hp_gp_reg_1          0x69
#define  hp_gp_reg_3          0x6B
#define  hp_seltimeout        0x6C
#define  TO_4ms            0x67
#define  TO_5ms            0x03
#define  TO_10ms           0x07
#define  TO_250ms          0x99
#define  TO_290ms          0xB1
#define  hp_clkctrl_0         0x6D
#define  PWR_DWN           BIT(6)
#define  ACTdeassert       BIT(4)
#define  CLK_40MHZ         (BIT(1) + BIT(0))
#define  CLKCTRL_DEFAULT   (ACTdeassert | CLK_40MHZ)
#define  hp_fiforead          0x6E
#define  hp_fifowrite         0x6F
#define  hp_offsetctr         0x70
#define  hp_xferstat          0x71
#define  FIFO_EMPTY        BIT(6)
#define  hp_portctrl_1        0x72
#define  CHK_SCSI_P        BIT(3)
#define  HOST_MODE8        BIT(0)
#define  hp_xfer_pad          0x73
#define  ID_UNLOCK         BIT(3)
#define  hp_scsidata_0        0x74
#define  hp_scsidata_1        0x75
#define  hp_aramBase          0x80
#define  BIOS_DATA_OFFSET     0x60
#define  BIOS_RELATIVE_CARD   0x64
#define  AR3      (BIT(9) + BIT(8))
#define  SDATA    BIT(10)
#define  CRD_OP   BIT(11)
#define  CRR_OP   BIT(12)
#define  CPE_OP   (BIT(14)+BIT(11))
#define  CPN_OP   (BIT(14)+BIT(12))
#define  ADATA_OUT   0x00
#define  ADATA_IN    BIT(8)
#define  ACOMMAND    BIT(10)
#define  ASTATUS     (BIT(10)+BIT(8))
#define  AMSG_OUT    (BIT(10)+BIT(9))
#define  AMSG_IN     (BIT(10)+BIT(9)+BIT(8))
#define  BRH_OP   BIT(13)
#define  ALWAYS   0x00
#define  EQUAL    BIT(8)
#define  NOT_EQ   BIT(9)
#define  TCB_OP   (BIT(13)+BIT(11))
#define  FIFO_0      BIT(10)
#define  MPM_OP   BIT(15)
#define  MRR_OP   BIT(14)
#define  S_IDREG  (BIT(2)+BIT(1)+BIT(0))
#define  D_AR0    0x00
#define  D_AR1    BIT(0)
#define  D_BUCKET (BIT(2) + BIT(1) + BIT(0))
#define  RAT_OP      (BIT(14)+BIT(13)+BIT(11))
#define  SSI_OP      (BIT(15)+BIT(11))
#define  SSI_ITAR_DISC	(ITAR_DISC >> 8)
#define  SSI_IDO_STRT	(IDO_STRT >> 8)
#define  SSI_ICMD_COMP	(ICMD_COMP >> 8)
#define  SSI_ITICKLE	(ITICKLE >> 8)
#define  SSI_IUNKWN	(IUNKWN >> 8)
#define  SSI_INO_CC	(IUNKWN >> 8)
#define  SSI_IRFAIL	(IUNKWN >> 8)
#define  NP    0x10
#define  NTCMD 0x02
#define  CMDPZ 0x04
#define  DINT  0x12
#define  DI    0x13
#define  DC    0x19
#define  ST    0x1D
#define  UNKNWN 0x24
#define  CC    0x25
#define  TICK  0x26
#define  SELCHK 0x28
#define  ID_MSG_STRT    hp_aramBase + 0x00
#define  NON_TAG_ID_MSG hp_aramBase + 0x06
#define  CMD_STRT       hp_aramBase + 0x08
#define  SYNC_MSGS      hp_aramBase + 0x08
#define  TAG_STRT          0x00
#define  DISCONNECT_START  0x10/2
#define  END_DATA_START    0x14/2
#define  CMD_ONLY_STRT     CMDPZ/2
#define  SELCHK_STRT     SELCHK/2
#define GET_XFER_CNT(port, xfercnt)
#define HP_SETUP_ADDR_CNT(port,addr,count) (WRW_HARPOON((port+hp_host_addr_lo), (unsigned short)(addr & 0x0000FFFFL)),\
addr >>= 16,\
WRW_HARPOON((port+hp_host_addr_hmi), (unsigned short)(addr & 0x0000FFFFL)),\
WR_HARP32(port,hp_xfercnt_0,count),\
WRW_HARPOON((port+hp_xfer_cnt_lo), (unsigned short)(count & 0x0000FFFFL)),\
count >>= 16,\
WR_HARPOON(port+hp_xfer_cnt_hi, (count & 0xFF)))
#define ACCEPT_MSG(port)
#define ACCEPT_MSG_ATN(port)
#define DISABLE_AUTO(port) (WR_HARPOON(port+hp_scsireset, PROG_RESET),\
WR_HARPOON(port+hp_scsireset, 0x00))
#define ARAM_ACCESS(p_port) (WR_HARPOON(p_port+hp_page_ctrl, \
(RD_HARPOON(p_port+hp_page_ctrl) | SGRAM_ARAM)))
#define SGRAM_ACCESS(p_port) (WR_HARPOON(p_port+hp_page_ctrl, \
(RD_HARPOON(p_port+hp_page_ctrl) & ~SGRAM_ARAM)))
#define MDISABLE_INT(p_port) (WR_HARPOON(p_port+hp_page_ctrl, \
(RD_HARPOON(p_port+hp_page_ctrl) | G_INT_DISABLE)))
#define MENABLE_INT(p_port) (WR_HARPOON(p_port+hp_page_ctrl, \
(RD_HARPOON(p_port+hp_page_ctrl) & ~G_INT_DISABLE)))
static unsigned char FPT_sisyncn(unsigned long port, unsigned char p_card,
unsigned char syncFlag);
static void FPT_ssel(unsigned long port, unsigned char p_card);
static void FPT_sres(unsigned long port, unsigned char p_card,
struct sccb_card *pCurrCard);
static void FPT_shandem(unsigned long port, unsigned char p_card,
struct sccb *pCurrSCCB);
static void FPT_stsyncn(unsigned long port, unsigned char p_card);
static void FPT_sisyncr(unsigned long port, unsigned char sync_pulse,
unsigned char offset);
static void FPT_sssyncv(unsigned long p_port, unsigned char p_id,
unsigned char p_sync_value,
struct sccb_mgr_tar_info *currTar_Info);
static void FPT_sresb(unsigned long port, unsigned char p_card);
static void FPT_sxfrp(unsigned long p_port, unsigned char p_card);
static void FPT_schkdd(unsigned long port, unsigned char p_card);
static unsigned char FPT_RdStack(unsigned long port, unsigned char index);
static void FPT_WrStack(unsigned long portBase, unsigned char index,
unsigned char data);
static unsigned char FPT_ChkIfChipInitialized(unsigned long ioPort);
static void FPT_SendMsg(unsigned long port, unsigned char message);
static void FPT_queueFlushTargSccb(unsigned char p_card, unsigned char thisTarg,
unsigned char error_code);
static void FPT_sinits(struct sccb *p_sccb, unsigned char p_card);
static void FPT_RNVRamData(struct nvram_info *pNvRamInfo);
static unsigned char FPT_siwidn(unsigned long port, unsigned char p_card);
static void FPT_stwidn(unsigned long port, unsigned char p_card);
static void FPT_siwidr(unsigned long port, unsigned char width);
static void FPT_queueSelectFail(struct sccb_card *pCurrCard,
unsigned char p_card);
static void FPT_queueDisconnect(struct sccb *p_SCCB, unsigned char p_card);
static void FPT_queueCmdComplete(struct sccb_card *pCurrCard,
struct sccb *p_SCCB, unsigned char p_card);
static void FPT_queueSearchSelect(struct sccb_card *pCurrCard,
unsigned char p_card);
static void FPT_queueFlushSccb(unsigned char p_card, unsigned char error_code);
static void FPT_queueAddSccb(struct sccb *p_SCCB, unsigned char card);
static unsigned char FPT_queueFindSccb(struct sccb *p_SCCB,
unsigned char p_card);
static void FPT_utilUpdateResidual(struct sccb *p_SCCB);
static unsigned short FPT_CalcCrc16(unsigned char buffer[]);
static unsigned char FPT_CalcLrc(unsigned char buffer[]);
static void FPT_Wait1Second(unsigned long p_port);
static void FPT_Wait(unsigned long p_port, unsigned char p_delay);
static void FPT_utilEEWriteOnOff(unsigned long p_port, unsigned char p_mode);
static void FPT_utilEEWrite(unsigned long p_port, unsigned short ee_data,
unsigned short ee_addr);
static unsigned short FPT_utilEERead(unsigned long p_port,
unsigned short ee_addr);
static unsigned short FPT_utilEEReadOrg(unsigned long p_port,
unsigned short ee_addr);
static void FPT_utilEESendCmdAddr(unsigned long p_port, unsigned char ee_cmd,
unsigned short ee_addr);
static void FPT_phaseDataOut(unsigned long port, unsigned char p_card);
static void FPT_phaseDataIn(unsigned long port, unsigned char p_card);
static void FPT_phaseCommand(unsigned long port, unsigned char p_card);
static void FPT_phaseStatus(unsigned long port, unsigned char p_card);
static void FPT_phaseMsgOut(unsigned long port, unsigned char p_card);
static void FPT_phaseMsgIn(unsigned long port, unsigned char p_card);
static void FPT_phaseIllegal(unsigned long port, unsigned char p_card);
static void FPT_phaseDecode(unsigned long port, unsigned char p_card);
static void FPT_phaseChkFifo(unsigned long port, unsigned char p_card);
static void FPT_phaseBusFree(unsigned long p_port, unsigned char p_card);
static void FPT_XbowInit(unsigned long port, unsigned char scamFlg);
static void FPT_BusMasterInit(unsigned long p_port);
static void FPT_DiagEEPROM(unsigned long p_port);
static void FPT_dataXferProcessor(unsigned long port,
struct sccb_card *pCurrCard);
static void FPT_busMstrSGDataXferStart(unsigned long port,
struct sccb *pCurrSCCB);
static void FPT_busMstrDataXferStart(unsigned long port,
struct sccb *pCurrSCCB);
static void FPT_hostDataXferAbort(unsigned long port, unsigned char p_card,
struct sccb *pCurrSCCB);
static void FPT_hostDataXferRestart(struct sccb *currSCCB);
static unsigned char FPT_SccbMgr_bad_isr(unsigned long p_port,
unsigned char p_card,
struct sccb_card *pCurrCard,
unsigned short p_int);
static void FPT_SccbMgrTableInitAll(void);
static void FPT_SccbMgrTableInitCard(struct sccb_card *pCurrCard,
unsigned char p_card);
static void FPT_SccbMgrTableInitTarget(unsigned char p_card,
unsigned char target);
static void FPT_scini(unsigned char p_card, unsigned char p_our_id,
unsigned char p_power_up);
static int FPT_scarb(unsigned long p_port, unsigned char p_sel_type);
static void FPT_scbusf(unsigned long p_port);
static void FPT_scsel(unsigned long p_port);
static void FPT_scasid(unsigned char p_card, unsigned long p_port);
static unsigned char FPT_scxferc(unsigned long p_port, unsigned char p_data);
static unsigned char FPT_scsendi(unsigned long p_port,
unsigned char p_id_string[]);
static unsigned char FPT_sciso(unsigned long p_port,
unsigned char p_id_string[]);
static void FPT_scwirod(unsigned long p_port, unsigned char p_data_bit);
static void FPT_scwiros(unsigned long p_port, unsigned char p_data_bit);
static unsigned char FPT_scvalq(unsigned char p_quintet);
static unsigned char FPT_scsell(unsigned long p_port, unsigned char targ_id);
static void FPT_scwtsel(unsigned long p_port);
static void FPT_inisci(unsigned char p_card, unsigned long p_port,
unsigned char p_our_id);
static void FPT_scsavdi(unsigned char p_card, unsigned long p_port);
static unsigned char FPT_scmachid(unsigned char p_card,
unsigned char p_id_string[]);
static void FPT_autoCmdCmplt(unsigned long p_port, unsigned char p_card);
static void FPT_autoLoadDefaultMap(unsigned long p_port);
static struct sccb_mgr_tar_info FPT_sccbMgrTbl[MAX_CARDS][MAX_SCSI_TAR] =
;
static struct sccb_card FPT_BL_Card[MAX_CARDS] = ;
static SCCBSCAM_INFO FPT_scamInfo[MAX_SCSI_TAR] = ;
static struct nvram_info FPT_nvRamInfo[MAX_MB_CARDS] = ;
static unsigned char FPT_mbCards = 0;
static unsigned char FPT_scamHAString[] =
;
static unsigned short FPT_default_intena = 0;
static void (*FPT_s_PhaseTbl[8]) (unsigned long, unsigned char) = ;
static int FlashPoint_ProbeHostAdapter(struct sccb_mgr_info *pCardInfo)
static unsigned long FlashPoint_HardwareResetHostAdapter(struct sccb_mgr_info
*pCardInfo)
static void FlashPoint_ReleaseHostAdapter(unsigned long pCurrCard)
static void FPT_RNVRamData(struct nvram_info *pNvRamInfo)
static unsigned char FPT_RdStack(unsigned long portBase, unsigned char index)
static void FPT_WrStack(unsigned long portBase, unsigned char index,
unsigned char data)
static unsigned char FPT_ChkIfChipInitialized(unsigned long ioPort)
static void FlashPoint_StartCCB(unsigned long pCurrCard, struct sccb *p_Sccb)
static int FlashPoint_AbortCCB(unsigned long pCurrCard, struct sccb *p_Sccb)
static unsigned char FlashPoint_InterruptPending(unsigned long pCurrCard)
static int FlashPoint_HandleInterrupt(unsigned long pCurrCard)
static unsigned char FPT_SccbMgr_bad_isr(unsigned long p_port,
unsigned char p_card,
struct sccb_card *pCurrCard,
unsigned short p_int)
static void FPT_SccbMgrTableInitAll()
static void FPT_SccbMgrTableInitCard(struct sccb_card *pCurrCard,
unsigned char p_card)
static void FPT_SccbMgrTableInitTarget(unsigned char p_card,
unsigned char target)
static unsigned char FPT_sfm(unsigned long port, struct sccb *pCurrSCCB)
static void FPT_ssel(unsigned long port, unsigned char p_card)
static void FPT_sres(unsigned long port, unsigned char p_card,
struct sccb_card *pCurrCard)
static void FPT_SendMsg(unsigned long port, unsigned char message)
static void FPT_sdecm(unsigned char message, unsigned long port,
unsigned char p_card)
static void FPT_shandem(unsigned long port, unsigned char p_card,
struct sccb *pCurrSCCB)
static unsigned char FPT_sisyncn(unsigned long port, unsigned char p_card,
unsigned char syncFlag)
static void FPT_stsyncn(unsigned long port, unsigned char p_card)
static void FPT_sisyncr(unsigned long port, unsigned char sync_pulse,
unsigned char offset)
static unsigned char FPT_siwidn(unsigned long port, unsigned char p_card)
static void FPT_stwidn(unsigned long port, unsigned char p_card)
static void FPT_siwidr(unsigned long port, unsigned char width)
static void FPT_sssyncv(unsigned long p_port, unsigned char p_id,
unsigned char p_sync_value,
struct sccb_mgr_tar_info *currTar_Info)
static void FPT_sresb(unsigned long port, unsigned char p_card)
static void FPT_ssenss(struct sccb_card *pCurrCard)
static void FPT_sxfrp(unsigned long p_port, unsigned char p_card)
static void FPT_schkdd(unsigned long port, unsigned char p_card)
static void FPT_sinits(struct sccb *p_sccb, unsigned char p_card)
static void FPT_phaseDecode(unsigned long p_port, unsigned char p_card)
static void FPT_phaseDataOut(unsigned long port, unsigned char p_card)
static void FPT_phaseDataIn(unsigned long port, unsigned char p_card)
static void FPT_phaseCommand(unsigned long p_port, unsigned char p_card)
static void FPT_phaseStatus(unsigned long port, unsigned char p_card)
static void FPT_phaseMsgOut(unsigned long port, unsigned char p_card)
static void FPT_phaseMsgIn(unsigned long port, unsigned char p_card)
static void FPT_phaseIllegal(unsigned long port, unsigned char p_card)
static void FPT_phaseChkFifo(unsigned long port, unsigned char p_card)
static void FPT_phaseBusFree(unsigned long port, unsigned char p_card)
static void FPT_autoLoadDefaultMap(unsigned long p_port)
static void FPT_autoCmdCmplt(unsigned long p_port, unsigned char p_card)
#define SHORT_WAIT   0x0000000F
#define LONG_WAIT    0x0000FFFFL
static void FPT_dataXferProcessor(unsigned long port,
struct sccb_card *pCurrCard)
static void FPT_busMstrSGDataXferStart(unsigned long p_port,
struct sccb *pcurrSCCB)
static void FPT_busMstrDataXferStart(unsigned long p_port,
struct sccb *pcurrSCCB)
static unsigned char FPT_busMstrTimeOut(unsigned long p_port)
static void FPT_hostDataXferAbort(unsigned long port, unsigned char p_card,
struct sccb *pCurrSCCB)
static void FPT_hostDataXferRestart(struct sccb *currSCCB)
static void FPT_scini(unsigned char p_card, unsigned char p_our_id,
unsigned char p_power_up)
static int FPT_scarb(unsigned long p_port, unsigned char p_sel_type)
static void FPT_scbusf(unsigned long p_port)
static void FPT_scasid(unsigned char p_card, unsigned long p_port)
static void FPT_scsel(unsigned long p_port)
static unsigned char FPT_scxferc(unsigned long p_port, unsigned char p_data)
static unsigned char FPT_scsendi(unsigned long p_port,
unsigned char p_id_string[])
static unsigned char FPT_sciso(unsigned long p_port,
unsigned char p_id_string[])
static void FPT_scwirod(unsigned long p_port, unsigned char p_data_bit)
static void FPT_scwiros(unsigned long p_port, unsigned char p_data_bit)
static unsigned char FPT_scvalq(unsigned char p_quintet)
static unsigned char FPT_scsell(unsigned long p_port, unsigned char targ_id)
static void FPT_scwtsel(unsigned long p_port)
static void FPT_inisci(unsigned char p_card, unsigned long p_port,
unsigned char p_our_id)
static unsigned char FPT_scmachid(unsigned char p_card,
unsigned char p_id_string[])
static void FPT_scsavdi(unsigned char p_card, unsigned long p_port)
static void FPT_XbowInit(unsigned long port, unsigned char ScamFlg)
static void FPT_BusMasterInit(unsigned long p_port)
static void FPT_DiagEEPROM(unsigned long p_port)
static void FPT_queueSearchSelect(struct sccb_card *pCurrCard,
unsigned char p_card)
static void FPT_queueSelectFail(struct sccb_card *pCurrCard,
unsigned char p_card)
static void FPT_queueCmdComplete(struct sccb_card *pCurrCard,
struct sccb *p_sccb, unsigned char p_card)
static void FPT_queueDisconnect(struct sccb *p_sccb, unsigned char p_card)
static void FPT_queueFlushSccb(unsigned char p_card, unsigned char error_code)
static void FPT_queueFlushTargSccb(unsigned char p_card, unsigned char thisTarg,
unsigned char error_code)
static void FPT_queueAddSccb(struct sccb *p_SCCB, unsigned char p_card)
static unsigned char FPT_queueFindSccb(struct sccb *p_SCCB,
unsigned char p_card)
static void FPT_utilUpdateResidual(struct sccb *p_SCCB)
static void FPT_Wait1Second(unsigned long p_port)
static void FPT_Wait(unsigned long p_port, unsigned char p_delay)
static void FPT_utilEEWriteOnOff(unsigned long p_port, unsigned char p_mode)
static void FPT_utilEEWrite(unsigned long p_port, unsigned short ee_data,
unsigned short ee_addr)
static unsigned short FPT_utilEERead(unsigned long p_port,
unsigned short ee_addr)
static unsigned short FPT_utilEEReadOrg(unsigned long p_port,
unsigned short ee_addr)
static void FPT_utilEESendCmdAddr(unsigned long p_port, unsigned char ee_cmd,
unsigned short ee_addr)
static unsigned short FPT_CalcCrc16(unsigned char buffer[])
static unsigned char FPT_CalcLrc(unsigned char buffer[])
static inline unsigned char
FlashPoint__ProbeHostAdapter(struct FlashPoint_Info *FlashPointInfo)
static inline FlashPoint_CardHandle_T
FlashPoint__HardwareResetHostAdapter(struct FlashPoint_Info *FlashPointInfo)
static inline void
FlashPoint__ReleaseHostAdapter(FlashPoint_CardHandle_T CardHandle)
static inline void
FlashPoint__StartCCB(FlashPoint_CardHandle_T CardHandle,
struct BusLogic_CCB *CCB)
static inline void
FlashPoint__AbortCCB(FlashPoint_CardHandle_T CardHandle,
struct BusLogic_CCB *CCB)
static inline bool
FlashPoint__InterruptPending(FlashPoint_CardHandle_T CardHandle)
static inline int
FlashPoint__HandleInterrupt(FlashPoint_CardHandle_T CardHandle)
#define FlashPoint_ProbeHostAdapter	    FlashPoint__ProbeHostAdapter
#define FlashPoint_HardwareResetHostAdapter FlashPoint__HardwareResetHostAdapter
#define FlashPoint_ReleaseHostAdapter	    FlashPoint__ReleaseHostAdapter
#define FlashPoint_StartCCB		    FlashPoint__StartCCB
#define FlashPoint_AbortCCB		    FlashPoint__AbortCCB
#define FlashPoint_InterruptPending	    FlashPoint__InterruptPending
#define FlashPoint_HandleInterrupt	    FlashPoint__HandleInterrupt
extern unsigned char FlashPoint_ProbeHostAdapter(struct FlashPoint_Info *);
extern FlashPoint_CardHandle_T
FlashPoint_HardwareResetHostAdapter(struct FlashPoint_Info *);
extern void FlashPoint_StartCCB(FlashPoint_CardHandle_T, struct BusLogic_CCB *);
extern int FlashPoint_AbortCCB(FlashPoint_CardHandle_T, struct BusLogic_CCB *);
extern bool FlashPoint_InterruptPending(FlashPoint_CardHandle_T);
extern int FlashPoint_HandleInterrupt(FlashPoint_CardHandle_T);
extern void FlashPoint_ReleaseHostAdapter(FlashPoint_CardHandle_T);
