#define _FT1000H_
#define FT1000_DRV_VER       0x01010300
#define DSPVERSZ                4
#define HWSERNUMSZ              16
#define SKUSZ                   20
#define EUISZ                   8
#define MODESZ                  2
#define CALVERSZ                2
#define CALDATESZ               6
typedef struct _PSEUDO_HDR
__attribute__ ((packed)) PSEUDO_HDR, *PPSEUDO_HDR;
#define UCHAR                u8
#define USHORT               u16
#define ULONG                u32
#define BOOLEAN              u8
#define PULONG               u32 *
#define PUSHORT              u16 *
#define PUCHAR               u8 *
#define PCHAR                u8 *
#define UINT                 u32
#define ELECTRABUZZ_ID       0
#define MAGNEMITE_ID         0x1a01
#define	FT1000_REG_DPRAM_ADDR	0x000E
#define	FT1000_REG_SUP_CTRL		0x0020
#define	FT1000_REG_SUP_STAT		0x0022
#define	FT1000_REG_RESET		0x0024
#define	FT1000_REG_SUP_ISR		0x0026
#define	FT1000_REG_SUP_IMASK	0x0028
#define	FT1000_REG_DOORBELL		0x002a
#define FT1000_REG_ASIC_ID      0x002e
#define FT1000_REG_UFIFO_STAT	0x0000
#define FT1000_REG_UFIFO_BEG	0x0002
#define	FT1000_REG_UFIFO_MID	0x0004
#define	FT1000_REG_UFIFO_END	0x0006
#define	FT1000_REG_DFIFO_STAT	0x0008
#define	FT1000_REG_DFIFO		0x000A
#define	FT1000_REG_DPRAM_DATA	0x000C
#define	FT1000_REG_WATERMARK	0x0010
#define FT1000_REG_MAG_UFDR     0x0000
#define FT1000_REG_MAG_UFDRL    0x0000
#define FT1000_REG_MAG_UFDRH    0x0002
#define FT1000_REG_MAG_UFER     0x0004
#define FT1000_REG_MAG_UFSR     0x0006
#define FT1000_REG_MAG_DFR      0x0008
#define FT1000_REG_MAG_DFRL     0x0008
#define FT1000_REG_MAG_DFRH     0x000a
#define FT1000_REG_MAG_DFSR     0x000c
#define FT1000_REG_MAG_DPDATA   0x0010
#define FT1000_REG_MAG_DPDATAL  0x0010
#define FT1000_REG_MAG_DPDATAH  0x0012
#define	FT1000_REG_MAG_WATERMARK 0x002c
#define FT1000_DPRAM_TX_BASE	0x0002
#define FT1000_DPRAM_RX_BASE	0x0800
#define FT1000_FIFO_LEN         0x7FC
#define FT1000_HI_HO            0x7FE
#define FT1000_DSP_STATUS       0xFFE
#define FT1000_DSP_LED          0xFFA
#define FT1000_DSP_CON_STATE    0xFF8
#define FT1000_DPRAM_FEFE       0x002
#define FT1000_DSP_TIMER0       0x1FF0
#define FT1000_DSP_TIMER1       0x1FF2
#define FT1000_DSP_TIMER2       0x1FF4
#define FT1000_DSP_TIMER3       0x1FF6
#define FT1000_DPRAM_MAG_TX_BASE		 0x0000
#define FT1000_DPRAM_MAG_RX_BASE		 0x0200
#define FT1000_MAG_FIFO_LEN              0x1FF
#define FT1000_MAG_FIFO_LEN_INDX         0x1
#define FT1000_MAG_HI_HO                 0x1FF
#define FT1000_MAG_HI_HO_INDX            0x0
#define FT1000_MAG_DSP_LED               0x3FE
#define FT1000_MAG_DSP_LED_INDX          0x0
#define FT1000_MAG_DSP_CON_STATE         0x3FE
#define FT1000_MAG_DSP_CON_STATE_INDX    0x1
#define FT1000_MAG_DPRAM_FEFE            0x000
#define FT1000_MAG_DPRAM_FEFE_INDX       0x0
#define FT1000_MAG_DSP_TIMER0            0x3FC
#define FT1000_MAG_DSP_TIMER0_INDX       0x1
#define FT1000_MAG_DSP_TIMER1            0x3FC
#define FT1000_MAG_DSP_TIMER1_INDX       0x0
#define FT1000_MAG_DSP_TIMER2            0x3FD
#define FT1000_MAG_DSP_TIMER2_INDX       0x1
#define FT1000_MAG_DSP_TIMER3            0x3FD
#define FT1000_MAG_DSP_TIMER3_INDX       0x0
#define FT1000_MAG_TOTAL_LEN             0x200
#define FT1000_MAG_TOTAL_LEN_INDX        0x1
#define FT1000_MAG_PH_LEN                0x200
#define FT1000_MAG_PH_LEN_INDX           0x0
#define FT1000_MAG_PORT_ID               0x201
#define FT1000_MAG_PORT_ID_INDX          0x0
#define HOST_INTF_LE                     0x0
#define HOST_INTF_BE                     0x1
#define FT1000_DB_DPRAM_RX		0x0001
#define FT1000_ASIC_RESET_REQ   0x0004
#define FT1000_DSP_ASIC_RESET   0x0008
#define FT1000_DB_COND_RESET    0x0010
#define FT1000_DB_DPRAM_TX		0x0100
#define FT1000_ASIC_RESET_DSP   0x0400
#define FT1000_DB_HB            0x1000
#define FT1000_DPRAM_BASE		0x0000
#define hi                      0x6869
#define ho                      0x686f
#define hi_mag                  0x6968
#define ho_mag                  0x6f68
#define ISR_EMPTY				0x00
#define ISR_DOORBELL_ACK		0x01
#define ISR_DOORBELL_PEND		0x02
#define ISR_RCV					0x04
#define ISR_WATERMARK			0x08
#define ISR_MASK_NONE			0x0000
#define ISR_MASK_DOORBELL_ACK	0x0001
#define ISR_MASK_DOORBELL_PEND	0x0002
#define ISR_MASK_RCV			0x0004
#define ISR_MASK_WATERMARK		0x0008
#define ISR_MASK_ALL			0xffff
#define DSP_RESET_BIT           0x0001
#define ASIC_RESET_BIT          0x0002
#define ISR_DEFAULT_MASK		0x7ff9
#define DSPID                   0x20
#define HOSTID                  0x10
#define DSPAIRID                0x90
#define DRIVERID                0x00
#define NETWORKID               0x20
#define MAX_CMD_SQSIZE          1780
#define ENET_MAX_SIZE           1514
#define ENET_HEADER_SIZE        14
#define SLOWQ_TYPE              0
#define FASTQ_TYPE              1
#define MAX_DSP_SESS_REC        1024
#define DSP_QID_OFFSET          4
#define PSEUDOSZ                16
#define PSEUDOSZWRD             8
#define MAX_PH_ERR              300
#define MEDIA_STATE             0x0010
#define TIME_UPDATE             0x0020
#define DSP_PROVISION           0x0030
#define DSP_INIT_MSG            0x0050
#define DSP_HIBERNATE           0x0060
#define DSP_STORE_INFO          0x0070
#define DSP_GET_INFO            0x0071
#define GET_DRV_ERR_RPT_MSG     0x0073
#define RSP_DRV_ERR_RPT_MSG     0x0074
#define DSP_HB_INFO             0x7ef0
#define DSP_FIFO_INFO           0x7ef1
#define DSP_CONDRESET_INFO      0x7ef2
#define DSP_CMDLEN_INFO         0x7ef3
#define DSP_CMDPHCKSUM_INFO     0x7ef4
#define DSP_PKTPHCKSUM_INFO     0x7ef5
#define DSP_PKTLEN_INFO         0x7ef6
#define DSP_USER_RESET          0x7ef7
#define FIFO_FLUSH_MAXLIMIT     0x7ef8
#define FIFO_FLUSH_BADCNT       0x7ef9
#define FIFO_ZERO_LEN           0x7efa
#define HOST_QID_OFFSET         5
#define QTYPE_OFFSET            13
#define  SUCCESS                0x00
#define  FAILURE                0x01
#define  TRUE                   0x1
#define  FALSE                  0x0
#define  MAX_NUM_APP            6
#define MAXIMUM_ASIC_HB_CNT      15
typedef struct _DRVMSG  __attribute__ ((packed)) DRVMSG, *PDRVMSG;
typedef struct _MEDIAMSG  __attribute__ ((packed)) MEDIAMSG, *PMEDIAMSG;
typedef struct _TIMEMSG  __attribute__ ((packed)) TIMEMSG, *PTIMEMSG;
typedef struct _DSPINITMSG  __attribute__ ((packed)) DSPINITMSG, *PDSPINITMSG;
typedef struct _DSPHIBERNATE  DSPHIBERNATE, *PDSPHIBERNATE;
typedef struct _APP_INFO_BLOCK
APP_INFO_BLOCK, *PAPP_INFO_BLOCK;
typedef struct _PROV_RECORD  PROV_RECORD, *PPROV_RECORD;
typedef struct _FT1000_INFO  FT1000_INFO, *PFT1000_INFO;
typedef struct _DPRAM_BLK  __attribute__ ((packed)) DPRAM_BLK, *PDPRAM_BLK;
extern u16 ft1000_read_dpram (struct net_device *dev, int offset);
extern void card_bootload(struct net_device *dev);
extern u16 ft1000_read_dpram_mag_16 (struct net_device *dev, int offset, int Index);
extern u32 ft1000_read_dpram_mag_32 (struct net_device *dev, int offset);
void ft1000_write_dpram_mag_32 (struct net_device *dev, int offset, u32 value);
