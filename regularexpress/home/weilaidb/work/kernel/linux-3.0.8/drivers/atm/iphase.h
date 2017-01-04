#define IPHASE_H
#define IF_IADBG_INIT_ADAPTER   0x00000001
#define IF_IADBG_TX             0x00000002
#define IF_IADBG_RX             0x00000004
#define IF_IADBG_QUERY_INFO     0x00000008
#define IF_IADBG_SHUTDOWN       0x00000010
#define IF_IADBG_INTR           0x00000020
#define IF_IADBG_TXPKT          0x00000040
#define IF_IADBG_RXPKT          0x00000080
#define IF_IADBG_ERR            0x00000100
#define IF_IADBG_EVENT          0x00000200
#define IF_IADBG_DIS_INTR       0x00001000
#define IF_IADBG_EN_INTR        0x00002000
#define IF_IADBG_LOUD           0x00004000
#define IF_IADBG_VERY_LOUD      0x00008000
#define IF_IADBG_CBR            0x00100000
#define IF_IADBG_UBR            0x00200000
#define IF_IADBG_ABR            0x00400000
#define IF_IADBG_DESC           0x01000000
#define IF_IADBG_SUNI_STAT      0x02000000
#define IF_IADBG_RESET          0x04000000
#define IF_IADBG(f) if (IADebugFlag & (f))
#define IF_LOUD(A) IF_IADBG(IF_IADBG_LOUD)
#define IF_ERR(A) IF_IADBG(IF_IADBG_ERR)
#define IF_VERY_LOUD(A) IF_IADBG( IF_IADBG_VERY_LOUD )
#define IF_INIT_ADAPTER(A) IF_IADBG( IF_IADBG_INIT_ADAPTER )
#define IF_INIT(A) IF_IADBG( IF_IADBG_INIT_ADAPTER )
#define IF_SUNI_STAT(A) IF_IADBG( IF_IADBG_SUNI_STAT )
#define IF_QUERY_INFO(A) IF_IADBG( IF_IADBG_QUERY_INFO )
#define IF_COPY_OVER(A) IF_IADBG( IF_IADBG_COPY_OVER )
#define IF_INTR(A) IF_IADBG( IF_IADBG_INTR )
#define IF_DIS_INTR(A) IF_IADBG( IF_IADBG_DIS_INTR )
#define IF_EN_INTR(A) IF_IADBG( IF_IADBG_EN_INTR )
#define IF_TX(A) IF_IADBG( IF_IADBG_TX )
#define IF_RX(A) IF_IADBG( IF_IADBG_RX )
#define IF_TXPKT(A) IF_IADBG( IF_IADBG_TXPKT )
#define IF_RXPKT(A) IF_IADBG( IF_IADBG_RXPKT )
#define IF_SHUTDOWN(A) IF_IADBG(IF_IADBG_SHUTDOWN)
#define IF_CBR(A) IF_IADBG( IF_IADBG_CBR )
#define IF_UBR(A) IF_IADBG( IF_IADBG_UBR )
#define IF_ABR(A) IF_IADBG( IF_IADBG_ABR )
#define IF_EVENT(A) IF_IADBG( IF_IADBG_EVENT)
#define IF_LOUD(A)
#define IF_VERY_LOUD(A)
#define IF_INIT_ADAPTER(A)
#define IF_INIT(A)
#define IF_SUNI_STAT(A)
#define IF_PVC_CHKPKT(A)
#define IF_QUERY_INFO(A)
#define IF_COPY_OVER(A)
#define IF_HANG(A)
#define IF_INTR(A)
#define IF_DIS_INTR(A)
#define IF_EN_INTR(A)
#define IF_TX(A)
#define IF_RX(A)
#define IF_TXDEBUG(A)
#define IF_VC(A)
#define IF_ERR(A)
#define IF_CBR(A)
#define IF_UBR(A)
#define IF_ABR(A)
#define IF_SHUTDOWN(A)
#define DbgPrint(A)
#define IF_EVENT(A)
#define IF_TXPKT(A)
#define IF_RXPKT(A)
#define isprint(a) ((a >=' ')&&(a <= '~'))
#define ATM_DESC(skb) (skb->protocol)
#define IA_SKB_STATE(skb) (skb->protocol)
#define IA_DLED   1
#define IA_TX_DONE 2
#define IA_CMD   0x7749
typedef struct  IA_CMDBUF, *PIA_CMDBUF;
#define MEMDUMP     		0x01
#define MEMDUMP_SEGREG          0x2
#define MEMDUMP_DEV  		0x1
#define MEMDUMP_REASSREG        0x3
#define MEMDUMP_FFL             0x4
#define READ_REG                0x5
#define WAKE_DBG_WAIT           0x6
#define Boolean(x)    	((x) ? 1 : 0)
#define NR_VCI 1024
#define NR_VCI_LD 10
#define NR_VCI_4K 4096
#define NR_VCI_4K_LD 12
#define MEM_VALID 0xfffffff0
#define PCI_VENDOR_ID_IPHASE 0x107e
#define PCI_DEVICE_ID_IPHASE_5575 0x0008
#define DEV_LABEL 	"ia"
#define PCR	207692
#define ICR	100000
#define MCR	0
#define TBE	1000
#define FRTT	1
#define RIF	2
#define RDF	4
#define NRMCODE 5
#define TRMCODE	3
#define CDFCODE	6
#define ATDFCODE 2
#define TX_PACKET_RAM 	0x00000
#define DFL_TX_BUF_SZ	10240
#define DFL_TX_BUFFERS     50
#define REASS_RAM_SIZE 0x10000
#define RX_PACKET_RAM 	0x80000
#define DFL_RX_BUF_SZ	10240
#define DFL_RX_BUFFERS      50
struct cpcs_trailer
;
struct cpcs_trailer_desc
;
struct ia_vcc
;
struct abr_vc_table
;
struct main_vc
;
struct ext_vc
;
#define DLE_ENTRIES 256
#define DMA_INT_ENABLE 0x0002
#define TX_DLE_PSI 0x0001
#define DLE_TOTAL_SIZE (sizeof(struct dle)*DLE_ENTRIES)
struct dle
;
struct dle_q
;
struct free_desc_q
;
struct tx_buf_desc ;
struct rx_buf_desc ;
#define EPROM_SIZE 0x40000
#define MAC1_LEN	4
#define MAC2_LEN	2
#define IPHASE5575_PCI_CONFIG_REG_BASE	0x0000
#define IPHASE5575_BUS_CONTROL_REG_BASE 0x1000
#define IPHASE5575_FRAG_CONTROL_REG_BASE 0x2000
#define IPHASE5575_REASS_CONTROL_REG_BASE 0x3000
#define IPHASE5575_DMA_CONTROL_REG_BASE	0x4000
#define IPHASE5575_FRONT_END_REG_BASE IPHASE5575_DMA_CONTROL_REG_BASE
#define IPHASE5575_FRAG_CONTROL_RAM_BASE 0x10000
#define IPHASE5575_REASS_CONTROL_RAM_BASE 0x20000
#define IPHASE5575_BUS_CONTROL_REG	0x00
#define IPHASE5575_BUS_STATUS_REG	0x01
#define IPHASE5575_MAC1			0x02
#define IPHASE5575_REV			0x03
#define IPHASE5575_MAC2			0x03
#define IPHASE5575_EXT_RESET		0x04
#define IPHASE5575_INT_RESET		0x05
#define IPHASE5575_PCI_ADDR_PAGE	0x07
#define IPHASE5575_EEPROM_ACCESS	0x0a
#define IPHASE5575_CELL_FIFO_QUEUE_SZ	0x0b
#define IPHASE5575_CELL_FIFO_MARK_STATE	0x0c
#define IPHASE5575_CELL_FIFO_READ_PTR	0x0d
#define IPHASE5575_CELL_FIFO_WRITE_PTR	0x0e
#define IPHASE5575_CELL_FIFO_CELLS_AVL	0x0f
#define CTRL_FE_RST	0x80000000
#define CTRL_LED	0x40000000
#define CTRL_25MBPHY	0x10000000
#define CTRL_ENCMBMEM	0x08000000
#define CTRL_ENOFFSEG	0x01000000
#define CTRL_ERRMASK	0x00400000
#define CTRL_DLETMASK	0x00100000
#define CTRL_DLERMASK	0x00080000
#define CTRL_FEMASK	0x00040000
#define CTRL_SEGMASK	0x00020000
#define CTRL_REASSMASK	0x00010000
#define CTRL_CSPREEMPT	0x00002000
#define CTRL_B128	0x00000200
#define CTRL_B64	0x00000100
#define CTRL_B48	0x00000080
#define CTRL_B32	0x00000040
#define CTRL_B16	0x00000020
#define CTRL_B8		0x00000010
#define STAT_CMEMSIZ	0xc0000000
#define STAT_ADPARCK	0x20000000
#define STAT_RESVD	0x1fffff80
#define STAT_ERRINT	0x00000040
#define STAT_MARKINT	0x00000020
#define STAT_DLETINT	0x00000010
#define STAT_DLERINT	0x00000008
#define STAT_FEINT	0x00000004
#define STAT_SEGINT	0x00000002
#define STAT_REASSINT	0x00000001
#define IDLEHEADHI	0x00
#define IDLEHEADLO	0x01
#define MAXRATE		0x02
#define RATE155		0x64b1
#define MAX_ATM_155     352768
#define RATE25		0x5f9d
#define STPARMS		0x03
#define STPARMS_1K	0x008c
#define STPARMS_2K	0x0049
#define STPARMS_4K	0x0026
#define COMP_EN		0x4000
#define CBR_EN		0x2000
#define ABR_EN		0x0800
#define UBR_EN		0x0400
#define ABRUBR_ARB	0x04
#define RM_TYPE		0x05
#define RM_TYPE_4_0	0x0100
#define SEG_COMMAND_REG		0x17
#define RESET_SEG 0x0055
#define RESET_SEG_STATE	0x00aa
#define RESET_TX_CELL_CTR 0x00cc
#define CBR_PTR_BASE	0x20
#define ABR_SBPTR_BASE	0x22
#define UBR_SBPTR_BASE  0x23
#define ABRWQ_BASE	0x26
#define UBRWQ_BASE	0x27
#define VCT_BASE	0x28
#define VCTE_BASE	0x29
#define CBR_TAB_BEG	0x2c
#define CBR_TAB_END	0x2d
#define PRQ_ST_ADR	0x30
#define PRQ_ED_ADR	0x31
#define PRQ_RD_PTR	0x32
#define PRQ_WR_PTR	0x33
#define TCQ_ST_ADR	0x34
#define TCQ_ED_ADR 	0x35
#define TCQ_RD_PTR	0x36
#define TCQ_WR_PTR	0x37
#define SEG_QUEUE_BASE	0x40
#define SEG_DESC_BASE	0x41
#define MODE_REG_0	0x45
#define T_ONLINE	0x0002
#define MODE_REG_1	0x46
#define MODE_REG_1_VAL	0x0400
#define SEG_INTR_STATUS_REG 0x47
#define SEG_MASK_REG	0x48
#define TRANSMIT_DONE 0x0200
#define TCQ_NOT_EMPTY 0x1000
#define CELL_CTR_HIGH_AUTO 0x49
#define CELL_CTR_HIGH_NOAUTO 0xc9
#define CELL_CTR_LO_AUTO 0x4a
#define CELL_CTR_LO_NOAUTO 0xca
#define NEXTDESC 	0x59
#define NEXTVC		0x5a
#define PSLOTCNT	0x5d
#define NEWDN		0x6a
#define NEWVC		0x6b
#define SBPTR		0x6c
#define ABRWQ_WRPTR	0x6f
#define ABRWQ_RDPTR	0x70
#define UBRWQ_WRPTR	0x71
#define UBRWQ_RDPTR	0x72
#define CBR_VC		0x73
#define ABR_SBVC	0x75
#define UBR_SBVC	0x76
#define ABRNEXTLINK	0x78
#define UBRNEXTLINK	0x79
#define MODE_REG	0x00
#define R_ONLINE	0x0002
#define IGN_RAW_FL     	0x0004
#define PROTOCOL_ID	0x01
#define REASS_MASK_REG	0x02
#define REASS_INTR_STATUS_REG	0x03
#define RX_PKT_CTR_OF	0x8000
#define RX_ERR_CTR_OF	0x4000
#define RX_CELL_CTR_OF	0x1000
#define RX_FREEQ_EMPT	0x0200
#define RX_EXCPQ_FL	0x0080
#define	RX_RAWQ_FL	0x0010
#define RX_EXCP_RCVD	0x0008
#define RX_PKT_RCVD	0x0004
#define RX_RAW_RCVD	0x0001
#define DRP_PKT_CNTR	0x04
#define ERR_CNTR	0x05
#define RAW_BASE_ADR	0x08
#define CELL_CTR0	0x0c
#define CELL_CTR1	0x0d
#define REASS_COMMAND_REG	0x0f
#define RESET_REASS	0x0055
#define RESET_REASS_STATE 0x00aa
#define RESET_DRP_PKT_CNTR 0x00f1
#define RESET_ERR_CNTR	0x00f2
#define RESET_CELL_CNTR 0x00f8
#define RESET_REASS_ALL_REGS 0x00ff
#define REASS_DESC_BASE	0x10
#define VC_LKUP_BASE	0x11
#define REASS_TABLE_BASE 0x12
#define REASS_QUEUE_BASE 0x13
#define PKT_TM_CNT	0x16
#define TMOUT_RANGE	0x17
#define INTRVL_CNTR	0x18
#define TMOUT_INDX	0x19
#define VP_LKUP_BASE	0x1c
#define VP_FILTER	0x1d
#define ABR_LKUP_BASE	0x1e
#define FREEQ_ST_ADR	0x24
#define FREEQ_ED_ADR	0x25
#define FREEQ_RD_PTR	0x26
#define FREEQ_WR_PTR	0x27
#define PCQ_ST_ADR	0x28
#define PCQ_ED_ADR	0x29
#define PCQ_RD_PTR	0x2a
#define PCQ_WR_PTR	0x2b
#define EXCP_Q_ST_ADR	0x2c
#define EXCP_Q_ED_ADR	0x2d
#define EXCP_Q_RD_PTR	0x2e
#define EXCP_Q_WR_PTR	0x2f
#define CC_FIFO_ST_ADR	0x34
#define CC_FIFO_ED_ADR	0x35
#define CC_FIFO_RD_PTR	0x36
#define CC_FIFO_WR_PTR	0x37
#define STATE_REG	0x38
#define BUF_SIZE	0x42
#define XTRA_RM_OFFSET	0x44
#define DRP_PKT_CNTR_NC	0x84
#define ERR_CNTR_NC	0x85
#define CELL_CNTR0_NC	0x8c
#define CELL_CNTR1_NC	0x8d
#define EXCPQ_EMPTY	0x0040
#define PCQ_EMPTY	0x0010
#define FREEQ_EMPTY	0x0004
#define IPHASE5575_TX_COUNTER		0x200
#define IPHASE5575_RX_COUNTER		0x280
#define IPHASE5575_TX_LIST_ADDR		0x300
#define IPHASE5575_RX_LIST_ADDR		0x380
#define TX_DESC_BASE	0x0000
#define TX_COMP_Q	0x1000
#define PKT_RDY_Q	0x1400
#define CBR_SCHED_TABLE	0x1800
#define UBR_SCHED_TABLE	0x3000
#define UBR_WAIT_Q	0x4000
#define ABR_SCHED_TABLE	0x5000
#define ABR_WAIT_Q	0x5800
#define EXT_VC_TABLE	0x6000
#define MAIN_VC_TABLE	0x8000
#define SCHEDSZ		1024
#define TX_DESC_TABLE_SZ 128
#define DESC_MODE	0x0
#define VC_INDEX	0x1
#define BYTE_CNT	0x3
#define PKT_START_HI	0x4
#define PKT_START_LO	0x5
#define EOM_EN	0x0800
#define AAL5	0x0100
#define APP_CRC32 0x0400
#define CMPL_INT  0x1000
#define TABLE_ADDRESS(db, dn, to) \
(((unsigned long)(db & 0x04)) << 16) | (dn << 5) | (to << 1)
#define RX_DESC_BASE	0x0000
#define VP_TABLE	0x5c00
#define EXCEPTION_Q	0x5e00
#define FREE_BUF_DESC_Q	0x6000
#define PKT_COMP_Q	0x6800
#define REASS_TABLE	0x7000
#define RX_VC_TABLE	0x7800
#define ABR_VC_TABLE	0x8000
#define RX_DESC_TABLE_SZ 736
#define VP_TABLE_SZ	256
#define RX_VC_TABLE_SZ 	1024
#define REASS_TABLE_SZ 	1024
#define RX_ACT	0x8000
#define RX_VPVC	0x4000
#define RX_CNG	0x0040
#define RX_CER	0x0008
#define RX_PTE	0x0004
#define RX_OFL	0x0002
#define NUM_RX_EXCP   32
#define NO_AAL5_PKT	0x0000
#define AAL5_PKT_REASSEMBLED 0x4000
#define AAL5_PKT_TERMINATED 0x8000
#define RAW_PKT		0xc000
#define REASS_ABR	0x2000
#define REG_BASE IPHASE5575_BUS_CONTROL_REG_BASE
#define RAM_BASE IPHASE5575_FRAG_CONTROL_RAM_BASE
#define PHY_BASE IPHASE5575_FRONT_END_REG_BASE
#define SEG_BASE IPHASE5575_FRAG_CONTROL_REG_BASE
#define REASS_BASE IPHASE5575_REASS_CONTROL_REG_BASE
typedef volatile u_int  freg_t;
typedef u_int   rreg_t;
typedef struct _ffredn_t  ffredn_t;
typedef struct _rfredn_t  rfredn_t;
typedef struct  ia_regs_t;
typedef struct  f_vc_abr_entry;
typedef struct  r_vc_abr_entry;
#define MRM 3
typedef struct srv_cls_param  srv_cls_param_t;
struct testTable_t ;
typedef struct  RX_ERROR_Q;
typedef struct  vcstatus_t;
struct ia_rfL_t ;
struct ia_ffL_t ;
struct desc_tbl_t ;
typedef struct ia_rtn_q  IARTN_Q;
#define SUNI_LOSV   	0x04
typedef struct  IA_SUNI;
typedef struct _SUNI_STATS_
IA_SUNI_STATS;
typedef struct iadev_t  IADEV;
#define INPH_IA_DEV(d) ((IADEV *) (d)->dev_data)
#define INPH_IA_VCC(v) ((struct ia_vcc *) (v)->dev_data)
typedef struct  ia_mb25_t;
#define	MB25_MC_UPLO	0x80
#define	MB25_MC_DREC	0x40
#define	MB25_MC_ECEIO	0x20
#define	MB25_MC_TDPC	0x10
#define	MB25_MC_DRIC	0x08
#define	MB25_MC_HALTTX	0x04
#define	MB25_MC_UMS	0x02
#define	MB25_MC_ENABLED	0x01
#define	MB25_IS_GSB	0x40
#define	MB25_IS_HECECR	0x20
#define	MB25_IS_SCR	0x10
#define	MB25_IS_TPE	0x08
#define	MB25_IS_RSCC	0x04
#define	MB25_IS_RCSE	0x02
#define	MB25_IS_RFIFOO	0x01
#define	MB25_DC_FTXCD	0x80
#define	MB25_DC_RXCOS	0x40
#define	MB25_DC_ECEIO	0x20
#define	MB25_DC_RLFLUSH	0x10
#define	MB25_DC_IXPE	0x08
#define	MB25_DC_IXHECE	0x04
#define	MB25_DC_LB_MASK	0x03
#define	MB25_DC_LL	0x03
#define	MB25_DC_PL	0x02
#define	MB25_DC_NM	0x00
#define FE_MASK 	0x00F0
#define FE_MULTI_MODE	0x0000
#define FE_SINGLE_MODE  0x0010
#define FE_UTP_OPTION  	0x0020
#define FE_25MBIT_PHY	0x0040
#define FE_DS3_PHY      0x0080
#define FE_E3_PHY       0x0090
typedef struct _suni_pm7345_t
suni_pm7345_t;
#define SUNI_PM7345_T suni_pm7345_t
#define SUNI_PM7345     0x20
#define SUNI_PM5346     0x30
#define SUNI_PM7345_CLB         0x01
#define SUNI_PM7345_PLB         0x02
#define SUNI_PM7345_DLB         0x04
#define SUNI_PM7345_LLB         0x80
#define SUNI_PM7345_E3ENBL      0x40
#define SUNI_PM7345_LOOPT       0x10
#define SUNI_PM7345_FIFOBP      0x20
#define SUNI_PM7345_FRMRBP      0x08
#define SUNI_DS3_COFAE  0x80
#define SUNI_DS3_REDE   0x40
#define SUNI_DS3_CBITE  0x20
#define SUNI_DS3_FERFE  0x10
#define SUNI_DS3_IDLE   0x08
#define SUNI_DS3_AISE   0x04
#define SUNI_DS3_OOFE   0x02
#define SUNI_DS3_LOSE   0x01
#define SUNI_DS3_ACE    0x80
#define SUNI_DS3_REDV   0x40
#define SUNI_DS3_CBITV  0x20
#define SUNI_DS3_FERFV  0x10
#define SUNI_DS3_IDLV   0x08
#define SUNI_DS3_AISV   0x04
#define SUNI_DS3_OOFV   0x02
#define SUNI_DS3_LOSV   0x01
#define SUNI_E3_CZDI    0x40
#define SUNI_E3_LOSI    0x20
#define SUNI_E3_LCVI    0x10
#define SUNI_E3_COFAI   0x08
#define SUNI_E3_OOFI    0x04
#define SUNI_E3_LOS     0x02
#define SUNI_E3_OOF     0x01
#define SUNI_E3_AISD    0x80
#define SUNI_E3_FERF_RAI        0x40
#define SUNI_E3_FEBE    0x20
#define SUNI_DS3_HCSPASS        0x80
#define SUNI_DS3_HCSDQDB        0x40
#define SUNI_DS3_HCSADD         0x20
#define SUNI_DS3_HCK            0x10
#define SUNI_DS3_BLOCK          0x08
#define SUNI_DS3_DSCR           0x04
#define SUNI_DS3_OOCDV          0x02
#define SUNI_DS3_FIFORST        0x01
#define SUNI_DS3_OOCDE  0x80
#define SUNI_DS3_HCSE   0x40
#define SUNI_DS3_FIFOE  0x20
#define SUNI_DS3_OOCDI  0x10
#define SUNI_DS3_UHCSI  0x08
#define SUNI_DS3_COCAI  0x04
#define SUNI_DS3_FOVRI  0x02
#define SUNI_DS3_FUDRI  0x01
#define MEM_SIZE_MASK   0x000F
#define MEM_SIZE_128K   0x0000
#define MEM_SIZE_512K   0x0001
#define MEM_SIZE_1M     0x0002
#define FE_MASK         0x00F0
#define FE_MULTI_MODE   0x0000
#define FE_SINGLE_MODE  0x0010
#define FE_UTP_OPTION   0x0020
#define	NOVRAM_SIZE	64
#define	CMD_LEN		10
#define	EXTEND	0x100
#define	IAWRITE	0x140
#define	IAREAD	0x180
#define	ERASE	0x1c0
#define	EWDS	0x00
#define	WRAL	0x10
#define	ERAL	0x20
#define	EWEN	0x30
#define	NVCE	0x02
#define	NVSK	0x01
#define	NVDO	0x08
#define NVDI	0x04
#define	CFG_AND(val)
#define	CFG_OR(val)
#define	NVRAM_CMD(cmd)
#define	NVRAM_CLR_CE
#define	NVRAM_CLKOUT(bitval)
#define	NVRAM_CLKIN(value)
