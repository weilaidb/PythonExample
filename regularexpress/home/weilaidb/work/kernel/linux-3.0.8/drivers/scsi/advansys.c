#define DRV_NAME "advansys"
#define ASC_VERSION "3.4"
#warning this driver is still not properly converted to the DMA API
#define ADVANSYS_STATS
#undef ADVANSYS_DEBUG
#define ASC_PADDR __u32
#define ASC_VADDR __u32
#define ASC_DCNT  __u32
#define ASC_SDCNT __s32
typedef unsigned char uchar;
#define TRUE     (1)
#define FALSE    (0)
#define ERR      (-1)
#define UW_ERR   (uint)(0xFFFF)
#define isodd_word(val)   ((((uint)val) & (uint)0x0001) != 0)
#define PCI_VENDOR_ID_ASP		0x10cd
#define PCI_DEVICE_ID_ASP_1200A		0x1100
#define PCI_DEVICE_ID_ASP_ABP940	0x1200
#define PCI_DEVICE_ID_ASP_ABP940U	0x1300
#define PCI_DEVICE_ID_ASP_ABP940UW	0x2300
#define PCI_DEVICE_ID_38C0800_REV1	0x2500
#define PCI_DEVICE_ID_38C1600_REV1	0x2700
#define CC_VERY_LONG_SG_LIST 0
#define ASC_SRB2SCSIQ(srb_ptr)  (srb_ptr)
#define PortAddr                 unsigned int
#define inp(port)                inb(port)
#define outp(port, byte)         outb((byte), (port))
#define inpw(port)               inw(port)
#define outpw(port, word)        outw((word), (port))
#define ASC_MAX_SG_QUEUE    7
#define ASC_MAX_SG_LIST     255
#define ASC_CS_TYPE  unsigned short
#define ASC_IS_ISA          (0x0001)
#define ASC_IS_ISAPNP       (0x0081)
#define ASC_IS_EISA         (0x0002)
#define ASC_IS_PCI          (0x0004)
#define ASC_IS_PCI_ULTRA    (0x0104)
#define ASC_IS_PCMCIA       (0x0008)
#define ASC_IS_MCA          (0x0020)
#define ASC_IS_VL           (0x0040)
#define ASC_IS_WIDESCSI_16  (0x0100)
#define ASC_IS_WIDESCSI_32  (0x0200)
#define ASC_IS_BIG_ENDIAN   (0x8000)
#define ASC_CHIP_MIN_VER_VL      (0x01)
#define ASC_CHIP_MAX_VER_VL      (0x07)
#define ASC_CHIP_MIN_VER_PCI     (0x09)
#define ASC_CHIP_MAX_VER_PCI     (0x0F)
#define ASC_CHIP_VER_PCI_BIT     (0x08)
#define ASC_CHIP_MIN_VER_ISA     (0x11)
#define ASC_CHIP_MIN_VER_ISA_PNP (0x21)
#define ASC_CHIP_MAX_VER_ISA     (0x27)
#define ASC_CHIP_VER_ISA_BIT     (0x30)
#define ASC_CHIP_VER_ISAPNP_BIT  (0x20)
#define ASC_CHIP_VER_ASYN_BUG    (0x21)
#define ASC_CHIP_VER_PCI             0x08
#define ASC_CHIP_VER_PCI_ULTRA_3150  (ASC_CHIP_VER_PCI | 0x02)
#define ASC_CHIP_VER_PCI_ULTRA_3050  (ASC_CHIP_VER_PCI | 0x03)
#define ASC_CHIP_MIN_VER_EISA (0x41)
#define ASC_CHIP_MAX_VER_EISA (0x47)
#define ASC_CHIP_VER_EISA_BIT (0x40)
#define ASC_CHIP_LATEST_VER_EISA   ((ASC_CHIP_MIN_VER_EISA - 1) + 3)
#define ASC_MAX_VL_DMA_COUNT    (0x07FFFFFFL)
#define ASC_MAX_PCI_DMA_COUNT   (0xFFFFFFFFL)
#define ASC_MAX_ISA_DMA_COUNT   (0x00FFFFFFL)
#define ASC_SCSI_ID_BITS  3
#define ASC_SCSI_TIX_TYPE     uchar
#define ASC_ALL_DEVICE_BIT_SET  0xFF
#define ASC_SCSI_BIT_ID_TYPE  uchar
#define ASC_MAX_TID       7
#define ASC_MAX_LUN       7
#define ASC_SCSI_WIDTH_BIT_SET  0xFF
#define ASC_MAX_SENSE_LEN   32
#define ASC_MIN_SENSE_LEN   14
#define ASC_SCSI_RESET_HOLD_TIME_US  60
#define ASC_MAX_CDB_LEN     12
#define ADV_MAX_CDB_LEN     16
#define MS_SDTR_LEN    0x03
#define MS_WDTR_LEN    0x02
#define ASC_SG_LIST_PER_Q   7
#define QS_FREE        0x00
#define QS_READY       0x01
#define QS_DISC1       0x02
#define QS_DISC2       0x04
#define QS_BUSY        0x08
#define QS_ABORTED     0x40
#define QS_DONE        0x80
#define QC_NO_CALLBACK   0x01
#define QC_SG_SWAP_QUEUE 0x02
#define QC_SG_HEAD       0x04
#define QC_DATA_IN       0x08
#define QC_DATA_OUT      0x10
#define QC_URGENT        0x20
#define QC_MSG_OUT       0x40
#define QC_REQ_SENSE     0x80
#define QCSG_SG_XFER_LIST  0x02
#define QCSG_SG_XFER_MORE  0x04
#define QCSG_SG_XFER_END   0x08
#define QD_IN_PROGRESS       0x00
#define QD_NO_ERROR          0x01
#define QD_ABORTED_BY_HOST   0x02
#define QD_WITH_ERROR        0x04
#define QD_INVALID_REQUEST   0x80
#define QD_INVALID_HOST_NUM  0x81
#define QD_INVALID_DEVICE    0x82
#define QD_ERR_INTERNAL      0xFF
#define QHSTA_NO_ERROR               0x00
#define QHSTA_M_SEL_TIMEOUT          0x11
#define QHSTA_M_DATA_OVER_RUN        0x12
#define QHSTA_M_DATA_UNDER_RUN       0x12
#define QHSTA_M_UNEXPECTED_BUS_FREE  0x13
#define QHSTA_M_BAD_BUS_PHASE_SEQ    0x14
#define QHSTA_D_QDONE_SG_LIST_CORRUPTED 0x21
#define QHSTA_D_ASC_DVC_ERROR_CODE_SET  0x22
#define QHSTA_D_HOST_ABORT_FAILED       0x23
#define QHSTA_D_EXE_SCSI_Q_FAILED       0x24
#define QHSTA_D_EXE_SCSI_Q_BUSY_TIMEOUT 0x25
#define QHSTA_D_ASPI_NO_BUF_POOL        0x26
#define QHSTA_M_WTM_TIMEOUT         0x41
#define QHSTA_M_BAD_CMPL_STATUS_IN  0x42
#define QHSTA_M_NO_AUTO_REQ_SENSE   0x43
#define QHSTA_M_AUTO_REQ_SENSE_FAIL 0x44
#define QHSTA_M_TARGET_STATUS_BUSY  0x45
#define QHSTA_M_BAD_TAG_CODE        0x46
#define QHSTA_M_BAD_QUEUE_FULL_OR_BUSY  0x47
#define QHSTA_M_HUNG_REQ_SCSI_BUS_RESET 0x48
#define QHSTA_D_LRAM_CMP_ERROR        0x81
#define QHSTA_M_MICRO_CODE_ERROR_HALT 0xA1
#define ASC_FLAG_SCSIQ_REQ        0x01
#define ASC_FLAG_BIOS_SCSIQ_REQ   0x02
#define ASC_FLAG_BIOS_ASYNC_IO    0x04
#define ASC_FLAG_SRB_LINEAR_ADDR  0x08
#define ASC_FLAG_WIN16            0x10
#define ASC_FLAG_WIN32            0x20
#define ASC_FLAG_ISA_OVER_16MB    0x40
#define ASC_FLAG_DOS_VM_CALLBACK  0x80
#define ASC_TAG_FLAG_EXTRA_BYTES               0x10
#define ASC_TAG_FLAG_DISABLE_DISCONNECT        0x04
#define ASC_TAG_FLAG_DISABLE_ASYN_USE_SYN_FIX  0x08
#define ASC_TAG_FLAG_DISABLE_CHK_COND_INT_HOST 0x40
#define ASC_SCSIQ_CPY_BEG              4
#define ASC_SCSIQ_SGHD_CPY_BEG         2
#define ASC_SCSIQ_B_FWD                0
#define ASC_SCSIQ_B_BWD                1
#define ASC_SCSIQ_B_STATUS             2
#define ASC_SCSIQ_B_QNO                3
#define ASC_SCSIQ_B_CNTL               4
#define ASC_SCSIQ_B_SG_QUEUE_CNT       5
#define ASC_SCSIQ_D_DATA_ADDR          8
#define ASC_SCSIQ_D_DATA_CNT          12
#define ASC_SCSIQ_B_SENSE_LEN         20
#define ASC_SCSIQ_DONE_INFO_BEG       22
#define ASC_SCSIQ_D_SRBPTR            22
#define ASC_SCSIQ_B_TARGET_IX         26
#define ASC_SCSIQ_B_CDB_LEN           28
#define ASC_SCSIQ_B_TAG_CODE          29
#define ASC_SCSIQ_W_VM_ID             30
#define ASC_SCSIQ_DONE_STATUS         32
#define ASC_SCSIQ_HOST_STATUS         33
#define ASC_SCSIQ_SCSI_STATUS         34
#define ASC_SCSIQ_CDB_BEG             36
#define ASC_SCSIQ_DW_REMAIN_XFER_ADDR 56
#define ASC_SCSIQ_DW_REMAIN_XFER_CNT  60
#define ASC_SCSIQ_B_FIRST_SG_WK_QP    48
#define ASC_SCSIQ_B_SG_WK_QP          49
#define ASC_SCSIQ_B_SG_WK_IX          50
#define ASC_SCSIQ_W_ALT_DC1           52
#define ASC_SCSIQ_B_LIST_CNT          6
#define ASC_SCSIQ_B_CUR_LIST_CNT      7
#define ASC_SGQ_B_SG_CNTL             4
#define ASC_SGQ_B_SG_HEAD_QP          5
#define ASC_SGQ_B_SG_LIST_CNT         6
#define ASC_SGQ_B_SG_CUR_LIST_CNT     7
#define ASC_SGQ_LIST_BEG              8
#define ASC_DEF_SCSI1_QNG    4
#define ASC_MAX_SCSI1_QNG    4
#define ASC_DEF_SCSI2_QNG    16
#define ASC_MAX_SCSI2_QNG    32
#define ASC_TAG_CODE_MASK    0x23
#define ASC_STOP_REQ_RISC_STOP      0x01
#define ASC_STOP_ACK_RISC_STOP      0x03
#define ASC_STOP_CLEAN_UP_BUSY_Q    0x10
#define ASC_STOP_CLEAN_UP_DISC_Q    0x20
#define ASC_STOP_HOST_REQ_RISC_HALT 0x40
#define ASC_TIDLUN_TO_IX(tid, lun)  (ASC_SCSI_TIX_TYPE)((tid) + ((lun)<<ASC_SCSI_ID_BITS))
#define ASC_TID_TO_TARGET_ID(tid)   (ASC_SCSI_BIT_ID_TYPE)(0x01 << (tid))
#define ASC_TIX_TO_TARGET_ID(tix)   (0x01 << ((tix) & ASC_MAX_TID))
#define ASC_TIX_TO_TID(tix)         ((tix) & ASC_MAX_TID)
#define ASC_TID_TO_TIX(tid)         ((tid) & ASC_MAX_TID)
#define ASC_TIX_TO_LUN(tix)         (((tix) >> ASC_SCSI_ID_BITS) & ASC_MAX_LUN)
#define ASC_QNO_TO_QADDR(q_no)      ((ASC_QADR_BEG)+((int)(q_no) << 6))
typedef struct asc_scsiq_1  ASC_SCSIQ_1;
typedef struct asc_scsiq_2  ASC_SCSIQ_2;
typedef struct asc_scsiq_3  ASC_SCSIQ_3;
typedef struct asc_scsiq_4  ASC_SCSIQ_4;
typedef struct asc_q_done_info  ASC_QDONE_INFO;
typedef struct asc_sg_list  ASC_SG_LIST;
typedef struct asc_sg_head  ASC_SG_HEAD;
typedef struct asc_scsi_q  ASC_SCSI_Q;
typedef struct asc_scsi_req_q  ASC_SCSI_REQ_Q;
typedef struct asc_scsi_bios_req_q  ASC_SCSI_BIOS_REQ_Q;
typedef struct asc_risc_q  ASC_RISC_Q;
typedef struct asc_sg_list_q  ASC_SG_LIST_Q;
typedef struct asc_risc_sg_list_q  ASC_RISC_SG_LIST_Q;
#define ASCQ_ERR_Q_STATUS             0x0D
#define ASCQ_ERR_CUR_QNG              0x17
#define ASCQ_ERR_SG_Q_LINKS           0x18
#define ASCQ_ERR_ISR_RE_ENTRY         0x1A
#define ASCQ_ERR_CRITICAL_RE_ENTRY    0x1B
#define ASCQ_ERR_ISR_ON_CRITICAL      0x1C
#define ASC_WARN_NO_ERROR             0x0000
#define ASC_WARN_IO_PORT_ROTATE       0x0001
#define ASC_WARN_EEPROM_CHKSUM        0x0002
#define ASC_WARN_IRQ_MODIFIED         0x0004
#define ASC_WARN_AUTO_CONFIG          0x0008
#define ASC_WARN_CMD_QNG_CONFLICT     0x0010
#define ASC_WARN_EEPROM_RECOVER       0x0020
#define ASC_WARN_CFG_MSW_RECOVER      0x0040
#define ASC_IERR_NO_CARRIER		0x0001
#define ASC_IERR_MCODE_CHKSUM		0x0002
#define ASC_IERR_SET_PC_ADDR		0x0004
#define ASC_IERR_START_STOP_CHIP	0x0008
#define ASC_IERR_ILLEGAL_CONNECTION	0x0010
#define ASC_IERR_SINGLE_END_DEVICE	0x0020
#define ASC_IERR_REVERSED_CABLE		0x0040
#define ASC_IERR_SET_SCSI_ID		0x0080
#define ASC_IERR_HVD_DEVICE		0x0100
#define ASC_IERR_BAD_SIGNATURE		0x0200
#define ASC_IERR_NO_BUS_TYPE		0x0400
#define ASC_IERR_BIST_PRE_TEST		0x0800
#define ASC_IERR_BIST_RAM_TEST		0x1000
#define ASC_IERR_BAD_CHIPTYPE		0x2000
#define ASC_DEF_MAX_TOTAL_QNG   (0xF0)
#define ASC_MIN_TAG_Q_PER_DVC   (0x04)
#define ASC_MIN_FREE_Q        (0x02)
#define ASC_MIN_TOTAL_QNG     ((ASC_MAX_SG_QUEUE)+(ASC_MIN_FREE_Q))
#define ASC_MAX_TOTAL_QNG 240
#define ASC_MAX_PCI_ULTRA_INRAM_TOTAL_QNG 16
#define ASC_MAX_PCI_ULTRA_INRAM_TAG_QNG   8
#define ASC_MAX_PCI_INRAM_TOTAL_QNG  20
#define ASC_MAX_INRAM_TAG_QNG   16
#define ASC_IOADR_GAP   0x10
#define ASC_SYN_MAX_OFFSET         0x0F
#define ASC_DEF_SDTR_OFFSET        0x0F
#define ASC_SDTR_ULTRA_PCI_10MB_INDEX  0x02
#define ASYN_SDTR_DATA_FIX_PCI_REV_AB 0x41
static const unsigned char asc_syn_xfer_period[8] = ;
static const unsigned char asc_syn_ultra_xfer_period[16] = ;
typedef struct ext_msg  EXT_MSG;
#define xfer_period     u_ext_msg.sdtr.sdtr_xfer_period
#define req_ack_offset  u_ext_msg.sdtr.sdtr_req_ack_offset
#define wdtr_width      u_ext_msg.wdtr.wdtr_width
#define mdp_b3          u_ext_msg.mdp_b3
#define mdp_b2          u_ext_msg.mdp_b2
#define mdp_b1          u_ext_msg.mdp_b1
#define mdp_b0          u_ext_msg.mdp_b0
typedef struct asc_dvc_cfg  ASC_DVC_CFG;
#define ASC_DEF_DVC_CNTL       0xFFFF
#define ASC_DEF_CHIP_SCSI_ID   7
#define ASC_DEF_ISA_DMA_SPEED  4
#define ASC_INIT_STATE_BEG_GET_CFG   0x0001
#define ASC_INIT_STATE_END_GET_CFG   0x0002
#define ASC_INIT_STATE_BEG_SET_CFG   0x0004
#define ASC_INIT_STATE_END_SET_CFG   0x0008
#define ASC_INIT_STATE_BEG_LOAD_MC   0x0010
#define ASC_INIT_STATE_END_LOAD_MC   0x0020
#define ASC_INIT_STATE_BEG_INQUIRY   0x0040
#define ASC_INIT_STATE_END_INQUIRY   0x0080
#define ASC_INIT_RESET_SCSI_DONE     0x0100
#define ASC_INIT_STATE_WITHOUT_EEP   0x8000
#define ASC_BUG_FIX_IF_NOT_DWB       0x0001
#define ASC_BUG_FIX_ASYN_USE_SYN     0x0002
#define ASC_MIN_TAGGED_CMD  7
#define ASC_MAX_SCSI_RESET_WAIT      30
#define ASC_OVERRUN_BSIZE		64
struct asc_dvc_var;
typedef struct asc_dvc_var  ASC_DVC_VAR;
typedef struct asc_dvc_inq_info  ASC_DVC_INQ_INFO;
typedef struct asc_cap_info  ASC_CAP_INFO;
typedef struct asc_cap_info_array  ASC_CAP_INFO_ARRAY;
#define ASC_MCNTL_NO_SEL_TIMEOUT  (ushort)0x0001
#define ASC_MCNTL_NULL_TARGET     (ushort)0x0002
#define ASC_CNTL_INITIATOR         (ushort)0x0001
#define ASC_CNTL_BIOS_GT_1GB       (ushort)0x0002
#define ASC_CNTL_BIOS_GT_2_DISK    (ushort)0x0004
#define ASC_CNTL_BIOS_REMOVABLE    (ushort)0x0008
#define ASC_CNTL_NO_SCAM           (ushort)0x0010
#define ASC_CNTL_INT_MULTI_Q       (ushort)0x0080
#define ASC_CNTL_NO_LUN_SUPPORT    (ushort)0x0040
#define ASC_CNTL_NO_VERIFY_COPY    (ushort)0x0100
#define ASC_CNTL_RESET_SCSI        (ushort)0x0200
#define ASC_CNTL_INIT_INQUIRY      (ushort)0x0400
#define ASC_CNTL_INIT_VERBOSE      (ushort)0x0800
#define ASC_CNTL_SCSI_PARITY       (ushort)0x1000
#define ASC_CNTL_BURST_MODE        (ushort)0x2000
#define ASC_CNTL_SDTR_ENABLE_ULTRA (ushort)0x4000
#define ASC_EEP_DVC_CFG_BEG_VL    2
#define ASC_EEP_MAX_DVC_ADDR_VL   15
#define ASC_EEP_DVC_CFG_BEG      32
#define ASC_EEP_MAX_DVC_ADDR     45
#define ASC_EEP_MAX_RETRY        20
#define ASC_EEP_GET_CHIP_ID(cfg)    ((cfg)->id_speed & 0x0f)
#define ASC_EEP_GET_DMA_SPD(cfg)    (((cfg)->id_speed & 0xf0) >> 4)
#define ASC_EEP_SET_CHIP_ID(cfg, sid) \
((cfg)->id_speed = ((cfg)->id_speed & 0xf0) | ((sid) & ASC_MAX_TID))
#define ASC_EEP_SET_DMA_SPD(cfg, spd) \
((cfg)->id_speed = ((cfg)->id_speed & 0x0f) | ((spd) & 0x0f) << 4)
typedef struct asceep_config  ASCEEP_CONFIG;
#define ASC_EEP_CMD_READ          0x80
#define ASC_EEP_CMD_WRITE         0x40
#define ASC_EEP_CMD_WRITE_ABLE    0x30
#define ASC_EEP_CMD_WRITE_DISABLE 0x00
#define ASCV_MSGOUT_BEG         0x0000
#define ASCV_MSGOUT_SDTR_PERIOD (ASCV_MSGOUT_BEG+3)
#define ASCV_MSGOUT_SDTR_OFFSET (ASCV_MSGOUT_BEG+4)
#define ASCV_BREAK_SAVED_CODE   (ushort)0x0006
#define ASCV_MSGIN_BEG          (ASCV_MSGOUT_BEG+8)
#define ASCV_MSGIN_SDTR_PERIOD  (ASCV_MSGIN_BEG+3)
#define ASCV_MSGIN_SDTR_OFFSET  (ASCV_MSGIN_BEG+4)
#define ASCV_SDTR_DATA_BEG      (ASCV_MSGIN_BEG+8)
#define ASCV_SDTR_DONE_BEG      (ASCV_SDTR_DATA_BEG+8)
#define ASCV_MAX_DVC_QNG_BEG    (ushort)0x0020
#define ASCV_BREAK_ADDR           (ushort)0x0028
#define ASCV_BREAK_NOTIFY_COUNT   (ushort)0x002A
#define ASCV_BREAK_CONTROL        (ushort)0x002C
#define ASCV_BREAK_HIT_COUNT      (ushort)0x002E
#define ASCV_ASCDVC_ERR_CODE_W  (ushort)0x0030
#define ASCV_MCODE_CHKSUM_W   (ushort)0x0032
#define ASCV_MCODE_SIZE_W     (ushort)0x0034
#define ASCV_STOP_CODE_B      (ushort)0x0036
#define ASCV_DVC_ERR_CODE_B   (ushort)0x0037
#define ASCV_OVERRUN_PADDR_D  (ushort)0x0038
#define ASCV_OVERRUN_BSIZE_D  (ushort)0x003C
#define ASCV_HALTCODE_W       (ushort)0x0040
#define ASCV_CHKSUM_W         (ushort)0x0042
#define ASCV_MC_DATE_W        (ushort)0x0044
#define ASCV_MC_VER_W         (ushort)0x0046
#define ASCV_NEXTRDY_B        (ushort)0x0048
#define ASCV_DONENEXT_B       (ushort)0x0049
#define ASCV_USE_TAGGED_QNG_B (ushort)0x004A
#define ASCV_SCSIBUSY_B       (ushort)0x004B
#define ASCV_Q_DONE_IN_PROGRESS_B  (ushort)0x004C
#define ASCV_CURCDB_B         (ushort)0x004D
#define ASCV_RCLUN_B          (ushort)0x004E
#define ASCV_BUSY_QHEAD_B     (ushort)0x004F
#define ASCV_DISC1_QHEAD_B    (ushort)0x0050
#define ASCV_DISC_ENABLE_B    (ushort)0x0052
#define ASCV_CAN_TAGGED_QNG_B (ushort)0x0053
#define ASCV_HOSTSCSI_ID_B    (ushort)0x0055
#define ASCV_MCODE_CNTL_B     (ushort)0x0056
#define ASCV_NULL_TARGET_B    (ushort)0x0057
#define ASCV_FREE_Q_HEAD_W    (ushort)0x0058
#define ASCV_DONE_Q_TAIL_W    (ushort)0x005A
#define ASCV_FREE_Q_HEAD_B    (ushort)(ASCV_FREE_Q_HEAD_W+1)
#define ASCV_DONE_Q_TAIL_B    (ushort)(ASCV_DONE_Q_TAIL_W+1)
#define ASCV_HOST_FLAG_B      (ushort)0x005D
#define ASCV_TOTAL_READY_Q_B  (ushort)0x0064
#define ASCV_VER_SERIAL_B     (ushort)0x0065
#define ASCV_HALTCODE_SAVED_W (ushort)0x0066
#define ASCV_WTM_FLAG_B       (ushort)0x0068
#define ASCV_RISC_FLAG_B      (ushort)0x006A
#define ASCV_REQ_SG_LIST_QP   (ushort)0x006B
#define ASC_HOST_FLAG_IN_ISR        0x01
#define ASC_HOST_FLAG_ACK_INT       0x02
#define ASC_RISC_FLAG_GEN_INT      0x01
#define ASC_RISC_FLAG_REQ_SG_LIST  0x02
#define IOP_CTRL         (0x0F)
#define IOP_STATUS       (0x0E)
#define IOP_INT_ACK      IOP_STATUS
#define IOP_REG_IFC      (0x0D)
#define IOP_SYN_OFFSET    (0x0B)
#define IOP_EXTRA_CONTROL (0x0D)
#define IOP_REG_PC        (0x0C)
#define IOP_RAM_ADDR      (0x0A)
#define IOP_RAM_DATA      (0x08)
#define IOP_EEP_DATA      (0x06)
#define IOP_EEP_CMD       (0x07)
#define IOP_VERSION       (0x03)
#define IOP_CONFIG_HIGH   (0x04)
#define IOP_CONFIG_LOW    (0x02)
#define IOP_SIG_BYTE      (0x01)
#define IOP_SIG_WORD      (0x00)
#define IOP_REG_DC1      (0x0E)
#define IOP_REG_DC0      (0x0C)
#define IOP_REG_SB       (0x0B)
#define IOP_REG_DA1      (0x0A)
#define IOP_REG_DA0      (0x08)
#define IOP_REG_SC       (0x09)
#define IOP_DMA_SPEED    (0x07)
#define IOP_REG_FLAG     (0x07)
#define IOP_FIFO_H       (0x06)
#define IOP_FIFO_L       (0x04)
#define IOP_REG_ID       (0x05)
#define IOP_REG_QP       (0x03)
#define IOP_REG_IH       (0x02)
#define IOP_REG_IX       (0x01)
#define IOP_REG_AX       (0x00)
#define IFC_REG_LOCK      (0x00)
#define IFC_REG_UNLOCK    (0x09)
#define IFC_WR_EN_FILTER  (0x10)
#define IFC_RD_NO_EEPROM  (0x10)
#define IFC_SLEW_RATE     (0x20)
#define IFC_ACT_NEG       (0x40)
#define IFC_INP_FILTER    (0x80)
#define IFC_INIT_DEFAULT  (IFC_ACT_NEG | IFC_REG_UNLOCK)
#define SC_SEL   (uchar)(0x80)
#define SC_BSY   (uchar)(0x40)
#define SC_ACK   (uchar)(0x20)
#define SC_REQ   (uchar)(0x10)
#define SC_ATN   (uchar)(0x08)
#define SC_IO    (uchar)(0x04)
#define SC_CD    (uchar)(0x02)
#define SC_MSG   (uchar)(0x01)
#define SEC_SCSI_CTL         (uchar)(0x80)
#define SEC_ACTIVE_NEGATE    (uchar)(0x40)
#define SEC_SLEW_RATE        (uchar)(0x20)
#define SEC_ENABLE_FILTER    (uchar)(0x10)
#define ASC_HALT_EXTMSG_IN     (ushort)0x8000
#define ASC_HALT_CHK_CONDITION (ushort)0x8100
#define ASC_HALT_SS_QUEUE_FULL (ushort)0x8200
#define ASC_HALT_DISABLE_ASYN_USE_SYN_FIX  (ushort)0x8300
#define ASC_HALT_ENABLE_ASYN_USE_SYN_FIX   (ushort)0x8400
#define ASC_HALT_SDTR_REJECTED (ushort)0x4000
#define ASC_HALT_HOST_COPY_SG_LIST_TO_RISC ( ushort )0x2000
#define ASC_MAX_QNO        0xF8
#define ASC_DATA_SEC_BEG   (ushort)0x0080
#define ASC_DATA_SEC_END   (ushort)0x0080
#define ASC_CODE_SEC_BEG   (ushort)0x0080
#define ASC_CODE_SEC_END   (ushort)0x0080
#define ASC_QADR_BEG       (0x4000)
#define ASC_QADR_USED      (ushort)(ASC_MAX_QNO * 64)
#define ASC_QADR_END       (ushort)0x7FFF
#define ASC_QLAST_ADR      (ushort)0x7FC0
#define ASC_QBLK_SIZE      0x40
#define ASC_BIOS_DATA_QBEG 0xF8
#define ASC_MIN_ACTIVE_QNO 0x01
#define ASC_QLINK_END      0xFF
#define ASC_EEPROM_WORDS   0x10
#define ASC_MAX_MGS_LEN    0x10
#define ASC_BIOS_ADDR_DEF  0xDC00
#define ASC_BIOS_SIZE      0x3800
#define ASC_BIOS_RAM_OFF   0x3800
#define ASC_BIOS_RAM_SIZE  0x800
#define ASC_BIOS_MIN_ADDR  0xC000
#define ASC_BIOS_MAX_ADDR  0xEC00
#define ASC_BIOS_BANK_SIZE 0x0400
#define ASC_MCODE_START_ADDR  0x0080
#define ASC_CFG0_HOST_INT_ON    0x0020
#define ASC_CFG0_BIOS_ON        0x0040
#define ASC_CFG0_VERA_BURST_ON  0x0080
#define ASC_CFG0_SCSI_PARITY_ON 0x0800
#define ASC_CFG1_SCSI_TARGET_ON 0x0080
#define ASC_CFG1_LRAM_8BITS_ON  0x0800
#define ASC_CFG_MSW_CLR_MASK    0x3080
#define CSW_TEST1             (ASC_CS_TYPE)0x8000
#define CSW_AUTO_CONFIG       (ASC_CS_TYPE)0x4000
#define CSW_RESERVED1         (ASC_CS_TYPE)0x2000
#define CSW_IRQ_WRITTEN       (ASC_CS_TYPE)0x1000
#define CSW_33MHZ_SELECTED    (ASC_CS_TYPE)0x0800
#define CSW_TEST2             (ASC_CS_TYPE)0x0400
#define CSW_TEST3             (ASC_CS_TYPE)0x0200
#define CSW_RESERVED2         (ASC_CS_TYPE)0x0100
#define CSW_DMA_DONE          (ASC_CS_TYPE)0x0080
#define CSW_FIFO_RDY          (ASC_CS_TYPE)0x0040
#define CSW_EEP_READ_DONE     (ASC_CS_TYPE)0x0020
#define CSW_HALTED            (ASC_CS_TYPE)0x0010
#define CSW_SCSI_RESET_ACTIVE (ASC_CS_TYPE)0x0008
#define CSW_PARITY_ERR        (ASC_CS_TYPE)0x0004
#define CSW_SCSI_RESET_LATCH  (ASC_CS_TYPE)0x0002
#define CSW_INT_PENDING       (ASC_CS_TYPE)0x0001
#define CIW_CLR_SCSI_RESET_INT (ASC_CS_TYPE)0x1000
#define CIW_INT_ACK      (ASC_CS_TYPE)0x0100
#define CIW_TEST1        (ASC_CS_TYPE)0x0200
#define CIW_TEST2        (ASC_CS_TYPE)0x0400
#define CIW_SEL_33MHZ    (ASC_CS_TYPE)0x0800
#define CIW_IRQ_ACT      (ASC_CS_TYPE)0x1000
#define CC_CHIP_RESET   (uchar)0x80
#define CC_SCSI_RESET   (uchar)0x40
#define CC_HALT         (uchar)0x20
#define CC_SINGLE_STEP  (uchar)0x10
#define CC_DMA_ABLE     (uchar)0x08
#define CC_TEST         (uchar)0x04
#define CC_BANK_ONE     (uchar)0x02
#define CC_DIAG         (uchar)0x01
#define ASC_1000_ID0W      0x04C1
#define ASC_1000_ID0W_FIX  0x00C1
#define ASC_1000_ID1B      0x25
#define ASC_EISA_REV_IOP_MASK  (0x0C83)
#define ASC_EISA_CFG_IOP_MASK  (0x0C86)
#define ASC_GET_EISA_SLOT(iop)  (PortAddr)((iop) & 0xF000)
#define INS_HALTINT        (ushort)0x6281
#define INS_HALT           (ushort)0x6280
#define INS_SINT           (ushort)0x6200
#define INS_RFLAG_WTM      (ushort)0x7380
#define ASC_MC_SAVE_CODE_WSIZE  0x500
#define ASC_MC_SAVE_DATA_WSIZE  0x40
typedef struct asc_mc_saved  ASC_MC_SAVED;
#define AscGetQDoneInProgress(port)         AscReadLramByte((port), ASCV_Q_DONE_IN_PROGRESS_B)
#define AscPutQDoneInProgress(port, val)    AscWriteLramByte((port), ASCV_Q_DONE_IN_PROGRESS_B, val)
#define AscGetVarFreeQHead(port)            AscReadLramWord((port), ASCV_FREE_Q_HEAD_W)
#define AscGetVarDoneQTail(port)            AscReadLramWord((port), ASCV_DONE_Q_TAIL_W)
#define AscPutVarFreeQHead(port, val)       AscWriteLramWord((port), ASCV_FREE_Q_HEAD_W, val)
#define AscPutVarDoneQTail(port, val)       AscWriteLramWord((port), ASCV_DONE_Q_TAIL_W, val)
#define AscGetRiscVarFreeQHead(port)        AscReadLramByte((port), ASCV_NEXTRDY_B)
#define AscGetRiscVarDoneQTail(port)        AscReadLramByte((port), ASCV_DONENEXT_B)
#define AscPutRiscVarFreeQHead(port, val)   AscWriteLramByte((port), ASCV_NEXTRDY_B, val)
#define AscPutRiscVarDoneQTail(port, val)   AscWriteLramByte((port), ASCV_DONENEXT_B, val)
#define AscPutMCodeSDTRDoneAtID(port, id, data)  AscWriteLramByte((port), (ushort)((ushort)ASCV_SDTR_DONE_BEG+(ushort)id), (data))
#define AscGetMCodeSDTRDoneAtID(port, id)        AscReadLramByte((port), (ushort)((ushort)ASCV_SDTR_DONE_BEG+(ushort)id))
#define AscPutMCodeInitSDTRAtID(port, id, data)  AscWriteLramByte((port), (ushort)((ushort)ASCV_SDTR_DATA_BEG+(ushort)id), data)
#define AscGetMCodeInitSDTRAtID(port, id)        AscReadLramByte((port), (ushort)((ushort)ASCV_SDTR_DATA_BEG+(ushort)id))
#define AscGetChipSignatureByte(port)     (uchar)inp((port)+IOP_SIG_BYTE)
#define AscGetChipSignatureWord(port)     (ushort)inpw((port)+IOP_SIG_WORD)
#define AscGetChipVerNo(port)             (uchar)inp((port)+IOP_VERSION)
#define AscGetChipCfgLsw(port)            (ushort)inpw((port)+IOP_CONFIG_LOW)
#define AscGetChipCfgMsw(port)            (ushort)inpw((port)+IOP_CONFIG_HIGH)
#define AscSetChipCfgLsw(port, data)      outpw((port)+IOP_CONFIG_LOW, data)
#define AscSetChipCfgMsw(port, data)      outpw((port)+IOP_CONFIG_HIGH, data)
#define AscGetChipEEPCmd(port)            (uchar)inp((port)+IOP_EEP_CMD)
#define AscSetChipEEPCmd(port, data)      outp((port)+IOP_EEP_CMD, data)
#define AscGetChipEEPData(port)           (ushort)inpw((port)+IOP_EEP_DATA)
#define AscSetChipEEPData(port, data)     outpw((port)+IOP_EEP_DATA, data)
#define AscGetChipLramAddr(port)          (ushort)inpw((PortAddr)((port)+IOP_RAM_ADDR))
#define AscSetChipLramAddr(port, addr)    outpw((PortAddr)((port)+IOP_RAM_ADDR), addr)
#define AscGetChipLramData(port)          (ushort)inpw((port)+IOP_RAM_DATA)
#define AscSetChipLramData(port, data)    outpw((port)+IOP_RAM_DATA, data)
#define AscGetChipIFC(port)               (uchar)inp((port)+IOP_REG_IFC)
#define AscSetChipIFC(port, data)          outp((port)+IOP_REG_IFC, data)
#define AscGetChipStatus(port)            (ASC_CS_TYPE)inpw((port)+IOP_STATUS)
#define AscSetChipStatus(port, cs_val)    outpw((port)+IOP_STATUS, cs_val)
#define AscGetChipControl(port)           (uchar)inp((port)+IOP_CTRL)
#define AscSetChipControl(port, cc_val)   outp((port)+IOP_CTRL, cc_val)
#define AscGetChipSyn(port)               (uchar)inp((port)+IOP_SYN_OFFSET)
#define AscSetChipSyn(port, data)         outp((port)+IOP_SYN_OFFSET, data)
#define AscSetPCAddr(port, data)          outpw((port)+IOP_REG_PC, data)
#define AscGetPCAddr(port)                (ushort)inpw((port)+IOP_REG_PC)
#define AscIsIntPending(port)             (AscGetChipStatus(port) & (CSW_INT_PENDING | CSW_SCSI_RESET_LATCH))
#define AscGetChipScsiID(port)            ((AscGetChipCfgLsw(port) >> 8) & ASC_MAX_TID)
#define AscGetExtraControl(port)          (uchar)inp((port)+IOP_EXTRA_CONTROL)
#define AscSetExtraControl(port, data)    outp((port)+IOP_EXTRA_CONTROL, data)
#define AscReadChipAX(port)               (ushort)inpw((port)+IOP_REG_AX)
#define AscWriteChipAX(port, data)        outpw((port)+IOP_REG_AX, data)
#define AscReadChipIX(port)               (uchar)inp((port)+IOP_REG_IX)
#define AscWriteChipIX(port, data)        outp((port)+IOP_REG_IX, data)
#define AscReadChipIH(port)               (ushort)inpw((port)+IOP_REG_IH)
#define AscWriteChipIH(port, data)        outpw((port)+IOP_REG_IH, data)
#define AscReadChipQP(port)               (uchar)inp((port)+IOP_REG_QP)
#define AscWriteChipQP(port, data)        outp((port)+IOP_REG_QP, data)
#define AscReadChipFIFO_L(port)           (ushort)inpw((port)+IOP_REG_FIFO_L)
#define AscWriteChipFIFO_L(port, data)    outpw((port)+IOP_REG_FIFO_L, data)
#define AscReadChipFIFO_H(port)           (ushort)inpw((port)+IOP_REG_FIFO_H)
#define AscWriteChipFIFO_H(port, data)    outpw((port)+IOP_REG_FIFO_H, data)
#define AscReadChipDmaSpeed(port)         (uchar)inp((port)+IOP_DMA_SPEED)
#define AscWriteChipDmaSpeed(port, data)  outp((port)+IOP_DMA_SPEED, data)
#define AscReadChipDA0(port)              (ushort)inpw((port)+IOP_REG_DA0)
#define AscWriteChipDA0(port)             outpw((port)+IOP_REG_DA0, data)
#define AscReadChipDA1(port)              (ushort)inpw((port)+IOP_REG_DA1)
#define AscWriteChipDA1(port)             outpw((port)+IOP_REG_DA1, data)
#define AscReadChipDC0(port)              (ushort)inpw((port)+IOP_REG_DC0)
#define AscWriteChipDC0(port)             outpw((port)+IOP_REG_DC0, data)
#define AscReadChipDC1(port)              (ushort)inpw((port)+IOP_REG_DC1)
#define AscWriteChipDC1(port)             outpw((port)+IOP_REG_DC1, data)
#define AscReadChipDvcID(port)            (uchar)inp((port)+IOP_REG_ID)
#define AscWriteChipDvcID(port, data)     outp((port)+IOP_REG_ID, data)
#define ADV_PADDR __u32
#define ADV_VADDR __u32
#define ADV_DCNT  __u32
#define ADV_SDCNT __s32
#define ADV_VADDR_TO_U32   virt_to_bus
#define ADV_U32_TO_VADDR   bus_to_virt
#define AdvPortAddr  void __iomem *
#define ADV_MEM_READB(addr) readb(addr)
#define ADV_MEM_READW(addr) readw(addr)
#define ADV_MEM_WRITEB(addr, byte) writeb(byte, addr)
#define ADV_MEM_WRITEW(addr, word) writew(word, addr)
#define ADV_MEM_WRITEDW(addr, dword) writel(dword, addr)
#define ADV_CARRIER_COUNT (ASC_DEF_MAX_HOST_QNG + 15)
#define ADV_TOT_SG_BLOCK        ASC_DEF_MAX_HOST_QNG
#define ADV_MAX_SG_LIST         255
#define NO_OF_SG_PER_BLOCK              15
#define ADV_EEP_DVC_CFG_BEGIN           (0x00)
#define ADV_EEP_DVC_CFG_END             (0x15)
#define ADV_EEP_DVC_CTL_BEGIN           (0x16)
#define ADV_EEP_MAX_WORD_ADDR           (0x1E)
#define ADV_EEP_DELAY_MS                100
#define ADV_EEPROM_BIG_ENDIAN          0x8000
#define ADV_EEPROM_BIOS_ENABLE         0x4000
#define ADV_EEPROM_TERM_POL            0x2000
#define ADV_EEPROM_CIS_LD              0x2000
#define ADV_EEPROM_INTAB               0x0800
typedef struct adveep_3550_config  ADVEEP_3550_CONFIG;
typedef struct adveep_38C0800_config  ADVEEP_38C0800_CONFIG;
typedef struct adveep_38C1600_config  ADVEEP_38C1600_CONFIG;
#define ASC_EEP_CMD_DONE             0x0200
#define BIOS_CTRL_BIOS               0x0001
#define BIOS_CTRL_EXTENDED_XLAT      0x0002
#define BIOS_CTRL_GT_2_DISK          0x0004
#define BIOS_CTRL_BIOS_REMOVABLE     0x0008
#define BIOS_CTRL_BOOTABLE_CD        0x0010
#define BIOS_CTRL_MULTIPLE_LUN       0x0040
#define BIOS_CTRL_DISPLAY_MSG        0x0080
#define BIOS_CTRL_NO_SCAM            0x0100
#define BIOS_CTRL_RESET_SCSI_BUS     0x0200
#define BIOS_CTRL_INIT_VERBOSE       0x0800
#define BIOS_CTRL_SCSI_PARITY        0x1000
#define BIOS_CTRL_AIPP_DIS           0x2000
#define ADV_3550_MEMSIZE   0x2000
#define ADV_38C0800_MEMSIZE  0x4000
#define ADV_38C1600_MEMSIZE  0x4000
#define IOPB_INTR_STATUS_REG    0x00
#define IOPB_CHIP_ID_1          0x01
#define IOPB_INTR_ENABLES       0x02
#define IOPB_CHIP_TYPE_REV      0x03
#define IOPB_RES_ADDR_4         0x04
#define IOPB_RES_ADDR_5         0x05
#define IOPB_RAM_DATA           0x06
#define IOPB_RES_ADDR_7         0x07
#define IOPB_FLAG_REG           0x08
#define IOPB_RES_ADDR_9         0x09
#define IOPB_RISC_CSR           0x0A
#define IOPB_RES_ADDR_B         0x0B
#define IOPB_RES_ADDR_C         0x0C
#define IOPB_RES_ADDR_D         0x0D
#define IOPB_SOFT_OVER_WR       0x0E
#define IOPB_RES_ADDR_F         0x0F
#define IOPB_MEM_CFG            0x10
#define IOPB_RES_ADDR_11        0x11
#define IOPB_GPIO_DATA          0x12
#define IOPB_RES_ADDR_13        0x13
#define IOPB_FLASH_PAGE         0x14
#define IOPB_RES_ADDR_15        0x15
#define IOPB_GPIO_CNTL          0x16
#define IOPB_RES_ADDR_17        0x17
#define IOPB_FLASH_DATA         0x18
#define IOPB_RES_ADDR_19        0x19
#define IOPB_RES_ADDR_1A        0x1A
#define IOPB_RES_ADDR_1B        0x1B
#define IOPB_RES_ADDR_1C        0x1C
#define IOPB_RES_ADDR_1D        0x1D
#define IOPB_RES_ADDR_1E        0x1E
#define IOPB_RES_ADDR_1F        0x1F
#define IOPB_DMA_CFG0           0x20
#define IOPB_DMA_CFG1           0x21
#define IOPB_TICKLE             0x22
#define IOPB_DMA_REG_WR         0x23
#define IOPB_SDMA_STATUS        0x24
#define IOPB_SCSI_BYTE_CNT      0x25
#define IOPB_HOST_BYTE_CNT      0x26
#define IOPB_BYTE_LEFT_TO_XFER  0x27
#define IOPB_BYTE_TO_XFER_0     0x28
#define IOPB_BYTE_TO_XFER_1     0x29
#define IOPB_BYTE_TO_XFER_2     0x2A
#define IOPB_BYTE_TO_XFER_3     0x2B
#define IOPB_ACC_GRP            0x2C
#define IOPB_RES_ADDR_2D        0x2D
#define IOPB_DEV_ID             0x2E
#define IOPB_RES_ADDR_2F        0x2F
#define IOPB_SCSI_DATA          0x30
#define IOPB_RES_ADDR_31        0x31
#define IOPB_RES_ADDR_32        0x32
#define IOPB_SCSI_DATA_HSHK     0x33
#define IOPB_SCSI_CTRL          0x34
#define IOPB_RES_ADDR_35        0x35
#define IOPB_RES_ADDR_36        0x36
#define IOPB_RES_ADDR_37        0x37
#define IOPB_RAM_BIST           0x38
#define IOPB_PLL_TEST           0x39
#define IOPB_PCI_INT_CFG        0x3A
#define IOPB_RES_ADDR_3B        0x3B
#define IOPB_RFIFO_CNT          0x3C
#define IOPB_RES_ADDR_3D        0x3D
#define IOPB_RES_ADDR_3E        0x3E
#define IOPB_RES_ADDR_3F        0x3F
#define IOPW_CHIP_ID_0          0x00
#define IOPW_CTRL_REG           0x02
#define IOPW_RAM_ADDR           0x04
#define IOPW_RAM_DATA           0x06
#define IOPW_RES_ADDR_08        0x08
#define IOPW_RISC_CSR           0x0A
#define IOPW_SCSI_CFG0          0x0C
#define IOPW_SCSI_CFG1          0x0E
#define IOPW_RES_ADDR_10        0x10
#define IOPW_SEL_MASK           0x12
#define IOPW_RES_ADDR_14        0x14
#define IOPW_FLASH_ADDR         0x16
#define IOPW_RES_ADDR_18        0x18
#define IOPW_EE_CMD             0x1A
#define IOPW_EE_DATA            0x1C
#define IOPW_SFIFO_CNT          0x1E
#define IOPW_RES_ADDR_20        0x20
#define IOPW_Q_BASE             0x22
#define IOPW_QP                 0x24
#define IOPW_IX                 0x26
#define IOPW_SP                 0x28
#define IOPW_PC                 0x2A
#define IOPW_RES_ADDR_2C        0x2C
#define IOPW_RES_ADDR_2E        0x2E
#define IOPW_SCSI_DATA          0x30
#define IOPW_SCSI_DATA_HSHK     0x32
#define IOPW_SCSI_CTRL          0x34
#define IOPW_HSHK_CFG           0x36
#define IOPW_SXFR_STATUS        0x36
#define IOPW_SXFR_CNTL          0x38
#define IOPW_SXFR_CNTH          0x3A
#define IOPW_RES_ADDR_3C        0x3C
#define IOPW_RFIFO_DATA         0x3E
#define IOPDW_RES_ADDR_0         0x00
#define IOPDW_RAM_DATA           0x04
#define IOPDW_RES_ADDR_8         0x08
#define IOPDW_RES_ADDR_C         0x0C
#define IOPDW_RES_ADDR_10        0x10
#define IOPDW_COMMA              0x14
#define IOPDW_COMMB              0x18
#define IOPDW_RES_ADDR_1C        0x1C
#define IOPDW_SDMA_ADDR0         0x20
#define IOPDW_SDMA_ADDR1         0x24
#define IOPDW_SDMA_COUNT         0x28
#define IOPDW_SDMA_ERROR         0x2C
#define IOPDW_RDMA_ADDR0         0x30
#define IOPDW_RDMA_ADDR1         0x34
#define IOPDW_RDMA_COUNT         0x38
#define IOPDW_RDMA_ERROR         0x3C
#define ADV_CHIP_ID_BYTE         0x25
#define ADV_CHIP_ID_WORD         0x04C1
#define ADV_INTR_ENABLE_HOST_INTR                   0x01
#define ADV_INTR_ENABLE_SEL_INTR                    0x02
#define ADV_INTR_ENABLE_DPR_INTR                    0x04
#define ADV_INTR_ENABLE_RTA_INTR                    0x08
#define ADV_INTR_ENABLE_RMA_INTR                    0x10
#define ADV_INTR_ENABLE_RST_INTR                    0x20
#define ADV_INTR_ENABLE_DPE_INTR                    0x40
#define ADV_INTR_ENABLE_GLOBAL_INTR                 0x80
#define ADV_INTR_STATUS_INTRA            0x01
#define ADV_INTR_STATUS_INTRB            0x02
#define ADV_INTR_STATUS_INTRC            0x04
#define ADV_RISC_CSR_STOP           (0x0000)
#define ADV_RISC_TEST_COND          (0x2000)
#define ADV_RISC_CSR_RUN            (0x4000)
#define ADV_RISC_CSR_SINGLE_STEP    (0x8000)
#define ADV_CTRL_REG_HOST_INTR      0x0100
#define ADV_CTRL_REG_SEL_INTR       0x0200
#define ADV_CTRL_REG_DPR_INTR       0x0400
#define ADV_CTRL_REG_RTA_INTR       0x0800
#define ADV_CTRL_REG_RMA_INTR       0x1000
#define ADV_CTRL_REG_RES_BIT14      0x2000
#define ADV_CTRL_REG_DPE_INTR       0x4000
#define ADV_CTRL_REG_POWER_DONE     0x8000
#define ADV_CTRL_REG_ANY_INTR       0xFF00
#define ADV_CTRL_REG_CMD_RESET             0x00C6
#define ADV_CTRL_REG_CMD_WR_IO_REG         0x00C5
#define ADV_CTRL_REG_CMD_RD_IO_REG         0x00C4
#define ADV_CTRL_REG_CMD_WR_PCI_CFG_SPACE  0x00C3
#define ADV_CTRL_REG_CMD_RD_PCI_CFG_SPACE  0x00C2
#define ADV_TICKLE_NOP                      0x00
#define ADV_TICKLE_A                        0x01
#define ADV_TICKLE_B                        0x02
#define ADV_TICKLE_C                        0x03
#define AdvIsIntPending(port) \
(AdvReadWordRegister(port, IOPW_CTRL_REG) & ADV_CTRL_REG_HOST_INTR)
#define TIMER_MODEAB    0xC000
#define PARITY_EN       0x2000
#define EVEN_PARITY     0x1000
#define WD_LONG         0x0800
#define QUEUE_128       0x0400
#define PRIM_MODE       0x0100
#define SCAM_EN         0x0080
#define SEL_TMO_LONG    0x0040
#define CFRM_ID         0x0020
#define OUR_ID_EN       0x0010
#define OUR_ID          0x000F
#define BIG_ENDIAN      0x8000
#define TERM_POL        0x2000
#define SLEW_RATE       0x1000
#define FILTER_SEL      0x0C00
#define  FLTR_DISABLE    0x0000
#define  FLTR_11_TO_20NS 0x0800
#define  FLTR_21_TO_39NS 0x0C00
#define ACTIVE_DBL      0x0200
#define DIFF_MODE       0x0100
#define DIFF_SENSE      0x0080
#define TERM_CTL_SEL    0x0040
#define TERM_CTL        0x0030
#define  TERM_CTL_H      0x0020
#define  TERM_CTL_L      0x0010
#define CABLE_DETECT    0x000F
#define DIS_TERM_DRV    0x4000
#define HVD_LVD_SE      0x1C00
#define  HVD             0x1000
#define  LVD             0x0800
#define  SE              0x0400
#define TERM_LVD        0x00C0
#define  TERM_LVD_HI     0x0080
#define  TERM_LVD_LO     0x0040
#define TERM_SE         0x0030
#define  TERM_SE_HI      0x0020
#define  TERM_SE_LO      0x0010
#define C_DET_LVD       0x000C
#define  C_DET3          0x0008
#define  C_DET2          0x0004
#define C_DET_SE        0x0003
#define  C_DET1          0x0002
#define  C_DET0          0x0001
#define CABLE_ILLEGAL_A 0x7
#define CABLE_ILLEGAL_B 0xB
#define BIOS_EN         0x40
#define FAST_EE_CLK     0x20
#define RAM_SZ          0x1C
#define  RAM_SZ_2KB      0x00
#define  RAM_SZ_4KB      0x04
#define  RAM_SZ_8KB      0x08
#define  RAM_SZ_16KB     0x0C
#define  RAM_SZ_32KB     0x10
#define  RAM_SZ_64KB     0x14
#define BC_THRESH_ENB   0x80
#define FIFO_THRESH     0x70
#define  FIFO_THRESH_16B  0x00
#define  FIFO_THRESH_32B  0x20
#define  FIFO_THRESH_48B  0x30
#define  FIFO_THRESH_64B  0x40
#define  FIFO_THRESH_80B  0x50
#define  FIFO_THRESH_96B  0x60
#define  FIFO_THRESH_112B 0x70
#define START_CTL       0x0C
#define  START_CTL_TH    0x00
#define  START_CTL_ID    0x04
#define  START_CTL_THID  0x08
#define  START_CTL_EMFU  0x0C
#define READ_CMD        0x03
#define  READ_CMD_MR     0x00
#define  READ_CMD_MRL    0x02
#define  READ_CMD_MRM    0x03
#define RAM_TEST_MODE         0x80
#define PRE_TEST_MODE         0x40
#define NORMAL_MODE           0x00
#define RAM_TEST_DONE         0x10
#define RAM_TEST_STATUS       0x0F
#define  RAM_TEST_HOST_ERROR   0x08
#define  RAM_TEST_INTRAM_ERROR 0x04
#define  RAM_TEST_RISC_ERROR   0x02
#define  RAM_TEST_SCSI_ERROR   0x01
#define  RAM_TEST_SUCCESS      0x00
#define PRE_TEST_VALUE        0x05
#define NORMAL_VALUE          0x00
#define INTAB_LD        0x80
#define TOTEMPOLE       0x02
#define INTAB           0x01
#define ADV_TRUE        1
#define ADV_FALSE       0
#define ADV_SUCCESS     1
#define ADV_BUSY        0
#define ADV_ERROR       (-1)
#define ASC_WARN_BUSRESET_ERROR         0x0001
#define ASC_WARN_EEPROM_CHKSUM          0x0002
#define ASC_WARN_EEPROM_TERMINATION     0x0004
#define ASC_WARN_ERROR                  0xFFFF
#define ADV_MAX_TID                     15
#define ADV_MAX_LUN                     7
#define ASC_MC_CODE_BEGIN_ADDR          0x0028
#define ASC_MC_CODE_END_ADDR            0x002A
#define ASC_MC_CODE_CHK_SUM             0x002C
#define ASC_MC_VERSION_DATE             0x0038
#define ASC_MC_VERSION_NUM              0x003A
#define ASC_MC_BIOSMEM                  0x0040
#define ASC_MC_BIOSLEN                  0x0050
#define ASC_MC_BIOS_SIGNATURE           0x0058
#define ASC_MC_BIOS_VERSION             0x005A
#define ASC_MC_SDTR_SPEED1              0x0090
#define ASC_MC_SDTR_SPEED2              0x0092
#define ASC_MC_SDTR_SPEED3              0x0094
#define ASC_MC_SDTR_SPEED4              0x0096
#define ASC_MC_CHIP_TYPE                0x009A
#define ASC_MC_INTRB_CODE               0x009B
#define ASC_MC_WDTR_ABLE                0x009C
#define ASC_MC_SDTR_ABLE                0x009E
#define ASC_MC_TAGQNG_ABLE              0x00A0
#define ASC_MC_DISC_ENABLE              0x00A2
#define ASC_MC_IDLE_CMD_STATUS          0x00A4
#define ASC_MC_IDLE_CMD                 0x00A6
#define ASC_MC_IDLE_CMD_PARAMETER       0x00A8
#define ASC_MC_DEFAULT_SCSI_CFG0        0x00AC
#define ASC_MC_DEFAULT_SCSI_CFG1        0x00AE
#define ASC_MC_DEFAULT_MEM_CFG          0x00B0
#define ASC_MC_DEFAULT_SEL_MASK         0x00B2
#define ASC_MC_SDTR_DONE                0x00B6
#define ASC_MC_NUMBER_OF_QUEUED_CMD     0x00C0
#define ASC_MC_NUMBER_OF_MAX_CMD        0x00D0
#define ASC_MC_DEVICE_HSHK_CFG_TABLE    0x0100
#define ASC_MC_CONTROL_FLAG             0x0122
#define ASC_MC_WDTR_DONE                0x0124
#define ASC_MC_CAM_MODE_MASK            0x015E
#define ASC_MC_ICQ                      0x0160
#define ASC_MC_IRQ                      0x0164
#define ASC_MC_PPR_ABLE                 0x017A
#define BIOS_CODESEG    0x54
#define BIOS_CODELEN    0x56
#define BIOS_SIGNATURE  0x58
#define BIOS_VERSION    0x5A
#define CONTROL_FLAG_IGNORE_PERR        0x0001
#define CONTROL_FLAG_ENABLE_AIPP        0x0002
#define HSHK_CFG_WIDE_XFR       0x8000
#define HSHK_CFG_RATE           0x0F00
#define HSHK_CFG_OFFSET         0x001F
#define ASC_DEF_MAX_HOST_QNG    0xFD
#define ASC_DEF_MIN_HOST_QNG    0x10
#define ASC_DEF_MAX_DVC_QNG     0x3F
#define ASC_DEF_MIN_DVC_QNG     0x04
#define ASC_QC_DATA_CHECK  0x01
#define ASC_QC_DATA_OUT    0x02
#define ASC_QC_START_MOTOR 0x04
#define ASC_QC_NO_OVERRUN  0x08
#define ASC_QC_FREEZE_TIDQ 0x10
#define ASC_QSC_NO_DISC     0x01
#define ASC_QSC_NO_TAGMSG   0x02
#define ASC_QSC_NO_SYNC     0x04
#define ASC_QSC_NO_WIDE     0x08
#define ASC_QSC_REDO_DTR    0x10
#define ASC_QSC_HEAD_TAG    0x40
#define ASC_QSC_ORDERED_TAG 0x80
typedef struct adv_carr_t  ADV_CARR_T;
#define ASC_NEXT_VPA_MASK       0xFFFFFFF0
#define ASC_RQ_DONE             0x00000001
#define ASC_RQ_GOOD             0x00000002
#define ASC_CQ_STOPPER          0x00000000
#define ASC_GET_CARRP(carrp) ((carrp) & ASC_NEXT_VPA_MASK)
#define ADV_CARRIER_NUM_PAGE_CROSSING \
(((ADV_CARRIER_COUNT * sizeof(ADV_CARR_T)) + (PAGE_SIZE - 1))/PAGE_SIZE)
#define ADV_CARRIER_BUFSIZE \
((ADV_CARRIER_COUNT + ADV_CARRIER_NUM_PAGE_CROSSING) * sizeof(ADV_CARR_T))
#define ADV_POLL_REQUEST                0x01
#define ADV_SCSIQ_DONE                  0x02
#define ADV_DONT_RETRY                  0x08
#define ADV_CHIP_ASC3550          0x01
#define ADV_CHIP_ASC38C0800       0x02
#define ADV_CHIP_ASC38C1600       0x03
typedef struct adv_dvc_cfg  ADV_DVC_CFG;
struct adv_dvc_var;
struct adv_scsi_req_q;
typedef struct asc_sg_block  ADV_SG_BLOCK;
typedef struct adv_scsi_req_q  ADV_SCSI_REQ_Q;
typedef struct adv_sgblk  adv_sgblk_t;
typedef struct adv_req  adv_req_t;
typedef struct adv_dvc_var  ADV_DVC_VAR;
#define IDLE_CMD_COMPLETED           0
#define IDLE_CMD_STOP_CHIP           0x0001
#define IDLE_CMD_STOP_CHIP_SEND_INT  0x0002
#define IDLE_CMD_SEND_INT            0x0004
#define IDLE_CMD_ABORT               0x0008
#define IDLE_CMD_DEVICE_RESET        0x0010
#define IDLE_CMD_SCSI_RESET_START    0x0020
#define IDLE_CMD_SCSI_RESET_END      0x0040
#define IDLE_CMD_SCSIREQ             0x0080
#define IDLE_CMD_STATUS_SUCCESS      0x0001
#define IDLE_CMD_STATUS_FAILURE      0x0002
#define ADV_NOWAIT     0x01
#define SCSI_WAIT_100_MSEC           100UL
#define SCSI_US_PER_MSEC             1000
#define SCSI_MAX_RETRY               10
#define ADV_ASYNC_RDMA_FAILURE          0x01
#define ADV_ASYNC_SCSI_BUS_RESET_DET    0x02
#define ADV_ASYNC_CARRIER_READY_FAILURE 0x03
#define ADV_RDMA_IN_CARR_AND_Q_INVALID  0x04
#define ADV_HOST_SCSI_BUS_RESET      0x80
#define AdvReadByteRegister(iop_base, reg_off) \
(ADV_MEM_READB((iop_base) + (reg_off)))
#define AdvWriteByteRegister(iop_base, reg_off, byte) \
(ADV_MEM_WRITEB((iop_base) + (reg_off), (byte)))
#define AdvReadWordRegister(iop_base, reg_off) \
(ADV_MEM_READW((iop_base) + (reg_off)))
#define AdvWriteWordRegister(iop_base, reg_off, word) \
(ADV_MEM_WRITEW((iop_base) + (reg_off), (word)))
#define AdvWriteDWordRegister(iop_base, reg_off, dword) \
(ADV_MEM_WRITEDW((iop_base) + (reg_off), (dword)))
#define AdvReadByteLram(iop_base, addr, byte) \
do  while (0)
#define AdvWriteByteLram(iop_base, addr, byte) \
(ADV_MEM_WRITEW((iop_base) + IOPW_RAM_ADDR, (addr)), \
ADV_MEM_WRITEB((iop_base) + IOPB_RAM_DATA, (byte)))
#define AdvReadWordLram(iop_base, addr, word) \
do  while (0)
#define AdvWriteWordLram(iop_base, addr, word) \
(ADV_MEM_WRITEW((iop_base) + IOPW_RAM_ADDR, (addr)), \
ADV_MEM_WRITEW((iop_base) + IOPW_RAM_DATA, (word)))
#define AdvWriteDWordLramNoSwap(iop_base, addr, dword) \
((ADV_MEM_WRITEW((iop_base) + IOPW_RAM_ADDR, (addr)), \
ADV_MEM_WRITEW((iop_base) + IOPW_RAM_DATA, \
cpu_to_le16((ushort) ((dword) & 0xFFFF)))), \
(ADV_MEM_WRITEW((iop_base) + IOPW_RAM_ADDR, (addr) + 2), \
ADV_MEM_WRITEW((iop_base) + IOPW_RAM_DATA, \
cpu_to_le16((ushort) ((dword >> 16) & 0xFFFF)))))
#define AdvReadWordAutoIncLram(iop_base) \
(ADV_MEM_READW((iop_base) + IOPW_RAM_DATA))
#define AdvWriteWordAutoIncLram(iop_base, word) \
(ADV_MEM_WRITEW((iop_base) + IOPW_RAM_DATA, (word)))
#define AdvFindSignature(iop_base) \
(((AdvReadByteRegister((iop_base), IOPB_CHIP_ID_1) == \
ADV_CHIP_ID_BYTE) && \
(AdvReadWordRegister((iop_base), IOPW_CHIP_ID_0) == \
ADV_CHIP_ID_WORD)) ?  ADV_TRUE : ADV_FALSE)
#define AdvGetChipVersion(iop_base, bus_type) \
AdvReadByteRegister((iop_base), IOPB_CHIP_TYPE_REV)
#define AdvAbortQueue(asc_dvc, scsiq) \
AdvSendIdleCmd((asc_dvc), (ushort) IDLE_CMD_ABORT, \
(ADV_DCNT) (scsiq))
#define AdvResetDevice(asc_dvc, target_id) \
AdvSendIdleCmd((asc_dvc), (ushort) IDLE_CMD_DEVICE_RESET, \
(ADV_DCNT) (target_id))
#define ADV_SCSI_BIT_ID_TYPE   ushort
#define ADV_SCAN_LUN           0x01
#define ADV_CAPINFO_NOLUN      0x02
#define ADV_TID_TO_TIDMASK(tid)   (0x01 << ((tid) & ADV_MAX_TID))
#define QD_NO_STATUS         0x00
#define QD_NO_ERROR          0x01
#define QD_ABORTED_BY_HOST   0x02
#define QD_WITH_ERROR        0x04
#define QHSTA_NO_ERROR              0x00
#define QHSTA_M_SEL_TIMEOUT         0x11
#define QHSTA_M_DATA_OVER_RUN       0x12
#define QHSTA_M_UNEXPECTED_BUS_FREE 0x13
#define QHSTA_M_QUEUE_ABORTED       0x15
#define QHSTA_M_SXFR_SDMA_ERR       0x16
#define QHSTA_M_SXFR_SXFR_PERR      0x17
#define QHSTA_M_RDMA_PERR           0x18
#define QHSTA_M_SXFR_OFF_UFLW       0x19
#define QHSTA_M_SXFR_OFF_OFLW       0x20
#define QHSTA_M_SXFR_WD_TMO         0x21
#define QHSTA_M_SXFR_DESELECTED     0x22
#define QHSTA_M_SXFR_XFR_OFLW       0x12
#define QHSTA_M_SXFR_XFR_PH_ERR     0x24
#define QHSTA_M_SXFR_UNKNOWN_ERROR  0x25
#define QHSTA_M_SCSI_BUS_RESET      0x30
#define QHSTA_M_SCSI_BUS_RESET_UNSOL 0x31
#define QHSTA_M_BUS_DEVICE_RESET    0x32
#define QHSTA_M_DIRECTION_ERR       0x35
#define QHSTA_M_DIRECTION_ERR_HUNG  0x36
#define QHSTA_M_WTM_TIMEOUT         0x41
#define QHSTA_M_BAD_CMPL_STATUS_IN  0x42
#define QHSTA_M_NO_AUTO_REQ_SENSE   0x43
#define QHSTA_M_AUTO_REQ_SENSE_FAIL 0x44
#define QHSTA_M_INVALID_DEVICE      0x45
#define QHSTA_M_FROZEN_TIDQ         0x46
#define QHSTA_M_SGBACKUP_ERROR      0x47
#define ADV_8BALIGN(addr)      (((ulong) (addr) + 0x7) & ~0x7)
#define ADV_16BALIGN(addr)     (((ulong) (addr) + 0xF) & ~0xF)
#define ADV_32BALIGN(addr)     (((ulong) (addr) + 0x1F) & ~0x1F)
#define ADV_SG_LIST_MAX_BYTE_SIZE \
(sizeof(ADV_SG_BLOCK) * \
((ADV_MAX_SG_LIST + (NO_OF_SG_PER_BLOCK - 1))/NO_OF_SG_PER_BLOCK))
#define ASC_IS_WIDE_BOARD       0x04
#define ASC_NARROW_BOARD(boardp) (((boardp)->flags & ASC_IS_WIDE_BOARD) == 0)
#define NO_ISA_DMA              0xff
#define ASC_INFO_SIZE           128
#define ASC_PRTBUF_SIZE         2048
#define ASC_PRTLINE_SIZE        160
#define ASC_PRT_NEXT() \
if (cp)
#define ASC_TRUE        1
#define ASC_FALSE       0
#define ASC_NOERROR     1
#define ASC_BUSY        0
#define ASC_ERROR       (-1)
#define STATUS_BYTE(byte)   (byte)
#define MSG_BYTE(byte)      ((byte) << 8)
#define HOST_BYTE(byte)     ((byte) << 16)
#define DRIVER_BYTE(byte)   ((byte) << 24)
#define ASC_STATS(shost, counter) ASC_STATS_ADD(shost, counter, 1)
#define ASC_STATS_ADD(shost, counter, count)
#define ASC_STATS_ADD(shost, counter, count) \
(((struct asc_board *) shost_priv(shost))->asc_stats.counter += (count))
#define ASC_TENTHS(num, den) \
(((10 * ((num)/(den))) > (((num) * 10)/(den))) ? \
0 : ((((num) * 10)/(den)) - (10 * ((num)/(den)))))
#define ASC_PRINT(s) \
#define ASC_PRINT1(s, a1) \
#define ASC_PRINT2(s, a1, a2) \
#define ASC_PRINT3(s, a1, a2, a3) \
#define ASC_PRINT4(s, a1, a2, a3, a4) \
#define ASC_DBG(lvl, s...)
#define ASC_DBG_PRT_SCSI_HOST(lvl, s)
#define ASC_DBG_PRT_ASC_SCSI_Q(lvl, scsiqp)
#define ASC_DBG_PRT_ADV_SCSI_REQ_Q(lvl, scsiqp)
#define ASC_DBG_PRT_ASC_QDONE_INFO(lvl, qdone)
#define ADV_DBG_PRT_ADV_SCSI_REQ_Q(lvl, scsiqp)
#define ASC_DBG_PRT_HEX(lvl, name, start, length)
#define ASC_DBG_PRT_CDB(lvl, cdb, len)
#define ASC_DBG_PRT_SENSE(lvl, sense, len)
#define ASC_DBG_PRT_INQUIRY(lvl, inq, len)
#define ASC_DBG(lvl, format, arg...)
#define ASC_DBG_PRT_SCSI_HOST(lvl, s) \
#define ASC_DBG_PRT_ASC_SCSI_Q(lvl, scsiqp) \
#define ASC_DBG_PRT_ASC_QDONE_INFO(lvl, qdone) \
#define ASC_DBG_PRT_ADV_SCSI_REQ_Q(lvl, scsiqp) \
#define ASC_DBG_PRT_HEX(lvl, name, start, length) \
#define ASC_DBG_PRT_CDB(lvl, cdb, len) \
ASC_DBG_PRT_HEX((lvl), "CDB", (uchar *) (cdb), (len));
#define ASC_DBG_PRT_SENSE(lvl, sense, len) \
ASC_DBG_PRT_HEX((lvl), "SENSE", (uchar *) (sense), (len));
#define ASC_DBG_PRT_INQUIRY(lvl, inq, len) \
ASC_DBG_PRT_HEX((lvl), "INQUIRY", (uchar *) (inq), (len));
struct asc_stats ;
struct asc_board ;
#define asc_dvc_to_board(asc_dvc) container_of(asc_dvc, struct asc_board, \
dvc_var.asc_dvc_var)
#define adv_dvc_to_board(adv_dvc) container_of(adv_dvc, struct asc_board, \
dvc_var.adv_dvc_var)
#define adv_dvc_to_pdev(adv_dvc) to_pci_dev(adv_dvc_to_board(adv_dvc)->dev)
static int asc_dbglvl = 3;
static void asc_prt_asc_dvc_var(ASC_DVC_VAR *h)
static void asc_prt_asc_dvc_cfg(ASC_DVC_CFG *h)
static void asc_prt_adv_dvc_var(ADV_DVC_VAR *h)
static void asc_prt_adv_dvc_cfg(ADV_DVC_CFG *h)
static void asc_prt_scsi_host(struct Scsi_Host *s)
static void asc_prt_hex(char *f, uchar *s, int l)
static void asc_prt_asc_scsi_q(ASC_SCSI_Q *q)
static void asc_prt_asc_qdone_info(ASC_QDONE_INFO *q)
static void asc_prt_adv_sgblock(int sgblockno, ADV_SG_BLOCK *b)
static void asc_prt_adv_scsi_req_q(ADV_SCSI_REQ_Q *q)
#define BAD_SRB 0
static u32 advansys_ptr_to_srb(struct asc_dvc_var *asc_dvc, void *ptr)
static void * advansys_srb_to_ptr(struct asc_dvc_var *asc_dvc, u32 srb)
static const char *advansys_info(struct Scsi_Host *shost)
static int asc_prt_line(char *buf, int buflen, char *fmt, ...)
static int asc_prt_board_devices(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_prt_adv_bios(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_get_eeprom_string(ushort *serialnum, uchar *cp)
static int asc_prt_asc_board_eeprom(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_prt_adv_board_eeprom(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_prt_driver_conf(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_prt_asc_board_info(struct Scsi_Host *shost, char *cp, int cplen)
static int asc_prt_adv_board_info(struct Scsi_Host *shost, char *cp, int cplen)
static int
asc_proc_copy(off_t advoffset, off_t offset, char *curbuf, int leftlen,
char *cp, int cplen)
static int asc_prt_board_stats(struct Scsi_Host *shost, char *cp, int cplen)
static int
advansys_proc_info(struct Scsi_Host *shost, char *buffer, char **start,
off_t offset, int length, int inout)
static void asc_scsi_done(struct scsi_cmnd *scp)
static void AscSetBank(PortAddr iop_base, uchar bank)
static void AscSetChipIH(PortAddr iop_base, ushort ins_code)
static int AscStartChip(PortAddr iop_base)
static int AscStopChip(PortAddr iop_base)
static int AscIsChipHalted(PortAddr iop_base)
static int AscResetChipAndScsiBus(ASC_DVC_VAR *asc_dvc)
static int AscFindSignature(PortAddr iop_base)
static void AscEnableInterrupt(PortAddr iop_base)
static void AscDisableInterrupt(PortAddr iop_base)
static uchar AscReadLramByte(PortAddr iop_base, ushort addr)
static ushort AscReadLramWord(PortAddr iop_base, ushort addr)
#if CC_VERY_LONG_SG_LIST
static ASC_DCNT AscReadLramDWord(PortAddr iop_base, ushort addr)
static void
AscMemWordSetLram(PortAddr iop_base, ushort s_addr, ushort set_wval, int words)
static void AscWriteLramWord(PortAddr iop_base, ushort addr, ushort word_val)
static void AscWriteLramByte(PortAddr iop_base, ushort addr, uchar byte_val)
static void
AscMemWordCopyPtrToLram(PortAddr iop_base, ushort s_addr,
const uchar *s_buffer, int words)
static void
AscMemDWordCopyPtrToLram(PortAddr iop_base,
ushort s_addr, uchar *s_buffer, int dwords)
static void
AscMemWordCopyPtrFromLram(PortAddr iop_base,
ushort s_addr, uchar *d_buffer, int words)
static ASC_DCNT AscMemSumLramWord(PortAddr iop_base, ushort s_addr, int words)
static ushort AscInitLram(ASC_DVC_VAR *asc_dvc)
static ASC_DCNT
AscLoadMicroCode(PortAddr iop_base, ushort s_addr,
const uchar *mcode_buf, ushort mcode_size)
static void AscInitQLinkVar(ASC_DVC_VAR *asc_dvc)
static ushort AscInitMicroCodeVar(ASC_DVC_VAR *asc_dvc)
static ushort AscInitAsc1000Driver(ASC_DVC_VAR *asc_dvc)
static int AdvLoadMicrocode(AdvPortAddr iop_base, const unsigned char *buf,
int size, int memsize, int chksum)
static void AdvBuildCarrierFreelist(struct adv_dvc_var *asc_dvc)
static int
AdvSendIdleCmd(ADV_DVC_VAR *asc_dvc,
ushort idle_cmd, ADV_DCNT idle_cmd_parameter)
static int AdvResetSB(ADV_DVC_VAR *asc_dvc)
static int AdvInitAsc3550Driver(ADV_DVC_VAR *asc_dvc)
static int AdvInitAsc38C0800Driver(ADV_DVC_VAR *asc_dvc)
static int AdvInitAsc38C1600Driver(ADV_DVC_VAR *asc_dvc)
static int AdvResetChipAndSB(ADV_DVC_VAR *asc_dvc)
static void adv_async_callback(ADV_DVC_VAR *adv_dvc_varp, uchar code)
static void adv_isr_callback(ADV_DVC_VAR *adv_dvc_varp, ADV_SCSI_REQ_Q *scsiqp)
static int AdvISR(ADV_DVC_VAR *asc_dvc)
static int AscSetLibErrorCode(ASC_DVC_VAR *asc_dvc, ushort err_code)
static void AscAckInterrupt(PortAddr iop_base)
static uchar AscGetSynPeriodIndex(ASC_DVC_VAR *asc_dvc, uchar syn_time)
static uchar
AscMsgOutSDTR(ASC_DVC_VAR *asc_dvc, uchar sdtr_period, uchar sdtr_offset)
static uchar
AscCalSDTRData(ASC_DVC_VAR *asc_dvc, uchar sdtr_period, uchar syn_offset)
static int AscSetChipSynRegAtID(PortAddr iop_base, uchar id, uchar sdtr_data)
static void AscSetChipSDTR(PortAddr iop_base, uchar sdtr_data, uchar tid_no)
static int AscIsrChipHalted(ASC_DVC_VAR *asc_dvc)
static void
DvcGetQinfo(PortAddr iop_base, ushort s_addr, uchar *inbuf, int words)
static uchar
_AscCopyLramScsiDoneQ(PortAddr iop_base,
ushort q_addr,
ASC_QDONE_INFO *scsiq, ASC_DCNT max_dma_count)
static void asc_isr_callback(ASC_DVC_VAR *asc_dvc_varp, ASC_QDONE_INFO *qdonep)
static int AscIsrQDone(ASC_DVC_VAR *asc_dvc)
static int AscISR(ASC_DVC_VAR *asc_dvc)
static int advansys_reset(struct scsi_cmnd *scp)
static int
advansys_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int ip[])
static irqreturn_t advansys_interrupt(int irq, void *dev_id)
static int AscHostReqRiscHalt(PortAddr iop_base)
static int
AscSetRunChipSynRegAtID(PortAddr iop_base, uchar tid_no, uchar sdtr_data)
static void AscAsyncFix(ASC_DVC_VAR *asc_dvc, struct scsi_device *sdev)
static void
advansys_narrow_slave_configure(struct scsi_device *sdev, ASC_DVC_VAR *asc_dvc)
static void
advansys_wide_enable_wdtr(AdvPortAddr iop_base, unsigned short tidmask)
static void
advansys_wide_enable_sdtr(AdvPortAddr iop_base, unsigned short tidmask)
static void advansys_wide_enable_ppr(ADV_DVC_VAR *adv_dvc,
AdvPortAddr iop_base, unsigned short tidmask)
static void
advansys_wide_slave_configure(struct scsi_device *sdev, ADV_DVC_VAR *adv_dvc)
static int advansys_slave_configure(struct scsi_device *sdev)
static __le32 advansys_get_sense_buffer_dma(struct scsi_cmnd *scp)
static int asc_build_req(struct asc_board *boardp, struct scsi_cmnd *scp,
struct asc_scsi_q *asc_scsi_q)
static int
adv_get_sglist(struct asc_board *boardp, adv_req_t *reqp, struct scsi_cmnd *scp,
int use_sg)
static int
adv_build_req(struct asc_board *boardp, struct scsi_cmnd *scp,
ADV_SCSI_REQ_Q **adv_scsiqpp)
static int AscSgListToQueue(int sg_list)
static uint
AscGetNumOfFreeQueue(ASC_DVC_VAR *asc_dvc, uchar target_ix, uchar n_qs)
static uchar AscAllocFreeQueue(PortAddr iop_base, uchar free_q_head)
static uchar
AscAllocMultipleFreeQueue(PortAddr iop_base, uchar free_q_head, uchar n_free_q)
static void
DvcPutScsiQ(PortAddr iop_base, ushort s_addr, uchar *outbuf, int words)
static int AscPutReadyQueue(ASC_DVC_VAR *asc_dvc, ASC_SCSI_Q *scsiq, uchar q_no)
static int
AscPutReadySgListQueue(ASC_DVC_VAR *asc_dvc, ASC_SCSI_Q *scsiq, uchar q_no)
static int
AscSendScsiQueue(ASC_DVC_VAR *asc_dvc, ASC_SCSI_Q *scsiq, uchar n_q_required)
#define ASC_SYN_OFFSET_ONE_DISABLE_LIST  16
static uchar _syn_offset_one_disable_cmd[ASC_SYN_OFFSET_ONE_DISABLE_LIST] = ;
static int AscExeScsiQueue(ASC_DVC_VAR *asc_dvc, ASC_SCSI_Q *scsiq)
static int AdvExeScsiQueue(ADV_DVC_VAR *asc_dvc, ADV_SCSI_REQ_Q *scsiq)
static int asc_execute_scsi_cmnd(struct scsi_cmnd *scp)
static int
advansys_queuecommand_lck(struct scsi_cmnd *scp, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(advansys_queuecommand)
static ushort __devinit AscGetEisaChipCfg(PortAddr iop_base)
static unsigned short __devinit
AscGetChipBiosAddress(PortAddr iop_base, unsigned short bus_type)
static uchar __devinit AscSetChipScsiID(PortAddr iop_base, uchar new_host_id)
static unsigned char __devinit AscGetChipScsiCtrl(PortAddr iop_base)
static unsigned char __devinit
AscGetChipVersion(PortAddr iop_base, unsigned short bus_type)
static void __devinit AscEnableIsaDma(uchar dma_channel)
static int AscStopQueueExe(PortAddr iop_base)
static ASC_DCNT __devinit AscGetMaxDmaCount(ushort bus_type)
static ushort __devinit AscGetIsaDmaChannel(PortAddr iop_base)
static ushort __devinit AscSetIsaDmaChannel(PortAddr iop_base, ushort dma_channel)
static uchar __devinit AscGetIsaDmaSpeed(PortAddr iop_base)
static uchar __devinit AscSetIsaDmaSpeed(PortAddr iop_base, uchar speed_value)
static ushort __devinit AscInitAscDvcVar(ASC_DVC_VAR *asc_dvc)
static int __devinit AscWriteEEPCmdReg(PortAddr iop_base, uchar cmd_reg)
static void __devinit AscWaitEEPRead(void)
static ushort __devinit AscReadEEPWord(PortAddr iop_base, uchar addr)
static ushort __devinit
AscGetEEPConfig(PortAddr iop_base, ASCEEP_CONFIG *cfg_buf, ushort bus_type)
static int __devinit AscTestExternalLram(ASC_DVC_VAR *asc_dvc)
static void __devinit AscWaitEEPWrite(void)
static int __devinit AscWriteEEPDataReg(PortAddr iop_base, ushort data_reg)
static ushort __devinit
AscWriteEEPWord(PortAddr iop_base, uchar addr, ushort word_val)
static int __devinit
AscSetEEPConfigOnce(PortAddr iop_base, ASCEEP_CONFIG *cfg_buf, ushort bus_type)
static int __devinit
AscSetEEPConfig(PortAddr iop_base, ASCEEP_CONFIG *cfg_buf, ushort bus_type)
static ushort __devinit AscInitFromEEP(ASC_DVC_VAR *asc_dvc)
static int __devinit AscInitGetConfig(struct Scsi_Host *shost)
static int __devinit AscInitSetConfig(struct pci_dev *pdev, struct Scsi_Host *shost)
static ADVEEP_3550_CONFIG Default_3550_EEPROM_Config __devinitdata = ;
static ADVEEP_3550_CONFIG ADVEEP_3550_Config_Field_IsChar __devinitdata = ;
static ADVEEP_38C0800_CONFIG Default_38C0800_EEPROM_Config __devinitdata = ;
static ADVEEP_38C0800_CONFIG ADVEEP_38C0800_Config_Field_IsChar __devinitdata = ;
static ADVEEP_38C1600_CONFIG Default_38C1600_EEPROM_Config __devinitdata = ;
static ADVEEP_38C1600_CONFIG ADVEEP_38C1600_Config_Field_IsChar __devinitdata = ;
static void __devinit AdvWaitEEPCmd(AdvPortAddr iop_base)
static ushort __devinit AdvReadEEPWord(AdvPortAddr iop_base, int eep_word_addr)
static void __devinit
AdvSet3550EEPConfig(AdvPortAddr iop_base, ADVEEP_3550_CONFIG *cfg_buf)
static void __devinit
AdvSet38C0800EEPConfig(AdvPortAddr iop_base, ADVEEP_38C0800_CONFIG *cfg_buf)
static void __devinit
AdvSet38C1600EEPConfig(AdvPortAddr iop_base, ADVEEP_38C1600_CONFIG *cfg_buf)
static ushort __devinit
AdvGet3550EEPConfig(AdvPortAddr iop_base, ADVEEP_3550_CONFIG *cfg_buf)
static ushort __devinit
AdvGet38C0800EEPConfig(AdvPortAddr iop_base, ADVEEP_38C0800_CONFIG *cfg_buf)
static ushort __devinit
AdvGet38C1600EEPConfig(AdvPortAddr iop_base, ADVEEP_38C1600_CONFIG *cfg_buf)
static int __devinit AdvInitFrom3550EEP(ADV_DVC_VAR *asc_dvc)
static int __devinit AdvInitFrom38C0800EEP(ADV_DVC_VAR *asc_dvc)
static int __devinit AdvInitFrom38C1600EEP(ADV_DVC_VAR *asc_dvc)
static int __devinit
AdvInitGetConfig(struct pci_dev *pdev, struct Scsi_Host *shost)
static struct scsi_host_template advansys_template = ;
static int __devinit advansys_wide_init_chip(struct Scsi_Host *shost)
static void advansys_wide_free_mem(struct asc_board *board)
static int __devinit advansys_board_found(struct Scsi_Host *shost,
unsigned int iop, int bus_type)
static int advansys_release(struct Scsi_Host *shost)
#define ASC_IOADR_TABLE_MAX_IX  11
static PortAddr _asc_def_iop_base[ASC_IOADR_TABLE_MAX_IX] = ;
static unsigned int __devinit advansys_isa_irq_no(PortAddr iop_base)
static int __devinit advansys_isa_probe(struct device *dev, unsigned int id)
static int __devexit advansys_isa_remove(struct device *dev, unsigned int id)
static struct isa_driver advansys_isa_driver = ;
static unsigned int __devinit advansys_vlb_irq_no(PortAddr iop_base)
static int __devinit advansys_vlb_probe(struct device *dev, unsigned int id)
static struct isa_driver advansys_vlb_driver = ;
static struct eisa_device_id advansys_eisa_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(eisa, advansys_eisa_table);
struct eisa_scsi_data ;
static unsigned int __devinit advansys_eisa_irq_no(struct eisa_device *edev)
static int __devinit advansys_eisa_probe(struct device *dev)
static __devexit int advansys_eisa_remove(struct device *dev)
static struct eisa_driver advansys_eisa_driver = ;
static struct pci_device_id advansys_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, advansys_pci_tbl);
static void __devinit advansys_set_latency(struct pci_dev *pdev)
static int __devinit
advansys_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit advansys_pci_remove(struct pci_dev *pdev)
static struct pci_driver advansys_pci_driver = ;
static int __init advansys_init(void)
static void __exit advansys_exit(void)
module_init(advansys_init);
module_exit(advansys_exit);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("advansys/mcode.bin");
MODULE_FIRMWARE("advansys/3550.bin");
MODULE_FIRMWARE("advansys/38C0800.bin");
MODULE_FIRMWARE("advansys/38C1600.bin");
