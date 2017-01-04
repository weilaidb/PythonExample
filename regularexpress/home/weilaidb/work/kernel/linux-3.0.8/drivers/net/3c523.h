#define _3c523_INCLUDE_
#define SCP_DEFAULT_ADDRESS 0xfffff4
struct scp_struct
;
struct iscp_struct
;
struct scb_struct
;
#define RUC_MASK	0x0070
#define RUC_NOP		0x0000
#define RUC_START	0x0010
#define RUC_RESUME	0x0020
#define RUC_SUSPEND	0x0030
#define RUC_ABORT	0x0040
#define CUC_MASK	0x0700
#define CUC_NOP		0x0000
#define CUC_START	0x0100
#define CUC_RESUME	0x0200
#define CUC_SUSPEND	0x0300
#define CUC_ABORT	0x0400
#define ACK_MASK	0xf000
#define ACK_CX		0x8000
#define ACK_FR		0x4000
#define ACK_CNA		0x2000
#define ACK_RNR		0x1000
#define STAT_MASK	0xf000
#define STAT_CX		0x8000
#define STAT_FR		0x4000
#define STAT_CNA	0x2000
#define STAT_RNR	0x1000
#define CU_STATUS	0x700
#define CU_SUSPEND	0x100
#define CU_ACTIVE	0x200
#define RU_STATUS	0x70
#define RU_SUSPEND	0x10
#define RU_NOSPACE	0x20
#define RU_READY	0x40
struct rfd_struct
;
#define RFD_LAST     0x8000
#define RFD_SUSP     0x4000
#define RFD_ERRMASK  0x0fe1
#define RFD_MATCHADD 0x0002
#define RFD_RNR      0x0200
struct rbd_struct
;
#define RBD_LAST	0x8000
#define RBD_USED	0x4000
#define RBD_MASK	0x3fff
#define STAT_COMPL   0x8000
#define STAT_BUSY    0x4000
#define STAT_OK      0x2000
#define CMD_NOP		0x0000
#define CMD_IASETUP	0x0001
#define CMD_CONFIGURE	0x0002
#define CMD_MCSETUP	0x0003
#define CMD_XMIT	0x0004
#define CMD_TDR		0x0005
#define CMD_DUMP	0x0006
#define CMD_DIAGNOSE	0x0007
#define CMD_LAST	0x8000
#define CMD_SUSPEND	0x4000
#define CMD_INT		0x2000
struct nop_cmd_struct
;
struct iasetup_cmd_struct
;
struct configure_cmd_struct
;
struct mcsetup_cmd_struct
;
struct transmit_cmd_struct
;
#define TCMD_ERRMASK     0x0fa0
#define TCMD_MAXCOLLMASK 0x000f
#define TCMD_MAXCOLL     0x0020
#define TCMD_HEARTBEAT   0x0040
#define TCMD_DEFERRED    0x0080
#define TCMD_UNDERRUN    0x0100
#define TCMD_LOSTCTS     0x0200
#define TCMD_NOCARRIER   0x0400
#define TCMD_LATECOLL    0x0800
struct tdr_cmd_struct
;
#define TDR_LNK_OK	0x8000
#define TDR_XCVR_PRB	0x4000
#define TDR_ET_OPN	0x2000
#define TDR_ET_SRT	0x1000
#define TDR_TIMEMASK	0x07ff
struct tbd_struct
;
#define TBD_LAST 0x8000
#define	ELMC_SA		0
#define ELMC_CTRL	6
#define ELMC_REVISION	7
#define ELMC_IO_EXTENT  8
#define ELMC_STATUS_ENABLED	0x01
#define ELMC_STATUS_CSR_SELECT	0x06
#define ELMC_STATUS_MEMORY_SELECT	0x18
#define ELMC_STATUS_DISABLE_THIN	0x20
#define ELMC_STATUS_IRQ_SELECT	0xc0
#define ELMC_MCA_ID 0x6042
#define ELMC_CTRL_BS0	0x01
#define ELMC_CTRL_BS1	0x02
#define ELMC_CTRL_INTE	0x04
#define ELMC_CTRL_INT	0x08
#define ELMC_CTRL_LBK	0x20
#define ELMC_CTRL_CA	0x40
#define ELMC_CTRL_RST	0x80
#define ELMC_NORMAL (ELMC_CTRL_INTE|ELMC_CTRL_RST|0x3)
