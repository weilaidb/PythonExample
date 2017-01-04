#define AMBASSADOR_H
#define DEBUG_AMBASSADOR
#define DEV_LABEL                          "amb"
#define PCI_VENDOR_ID_MADGE                0x10B6
#define PCI_DEVICE_ID_MADGE_AMBASSADOR     0x1001
#define PCI_DEVICE_ID_MADGE_AMBASSADOR_BAD 0x1002
#define PRINTK(severity,format,args...) \
printk(severity DEV_LABEL ": " format "\n" , ## args)
#define DBG_ERR  0x0001
#define DBG_WARN 0x0002
#define DBG_INFO 0x0004
#define DBG_INIT 0x0008
#define DBG_LOAD 0x0010
#define DBG_VCC  0x0020
#define DBG_QOS  0x0040
#define DBG_CMD  0x0080
#define DBG_TX   0x0100
#define DBG_RX   0x0200
#define DBG_SKB  0x0400
#define DBG_POOL 0x0800
#define DBG_IRQ  0x1000
#define DBG_FLOW 0x2000
#define DBG_REGS 0x4000
#define DBG_DATA 0x8000
#define DBG_MASK 0xffff
#define PRINTDB(bits,format,args...) \
( (debug & (bits)) ? printk (KERN_INFO DEV_LABEL ": " format , ## args) : 1 )
#define PRINTDM(bits,format,args...) \
( (debug & (bits)) ? printk (format , ## args) : 1 )
#define PRINTDE(bits,format,args...) \
( (debug & (bits)) ? printk (format "\n" , ## args) : 1 )
#define PRINTD(bits,format,args...) \
( (debug & (bits)) ? printk (KERN_INFO DEV_LABEL ": " format "\n" , ## args) : 1 )
#define PRINTD(bits,format,args...)
#define PRINTDB(bits,format,args...)
#define PRINTDM(bits,format,args...)
#define PRINTDE(bits,format,args...)
#define PRINTDD(bits,format,args...)
#define PRINTDDB(sec,fmt,args...)
#define PRINTDDM(sec,fmt,args...)
#define PRINTDDE(sec,fmt,args...)
#define COM_Q_ENTRIES        8
#define TX_Q_ENTRIES        32
#define RX_Q_ENTRIES        64
#define AMB_EXTENT         0x80
#define MIN_QUEUE_SIZE     2
#define NUM_RX_POOLS	   4
#define MIN_RX_BUFFERS	   1
#define MIN_PCI_LATENCY   64
#define NUM_VPI_BITS       0
#define NUM_VCI_BITS      10
#define NUM_VCS         1024
#define RX_ERR		0x8000
#define CRC_ERR		0x4000
#define LEN_ERR		0x2000
#define ABORT_ERR	0x1000
#define UNUSED_ERR	0x0800
#define SRB_OPEN_VC		0
#define	SRB_CLOSE_VC		1
#define	SRB_GET_BIA		2
#define	SRB_GET_SUNI_STATS	3
#define	SRB_SET_BITS_8		4
#define	SRB_SET_BITS_16		5
#define	SRB_SET_BITS_32		6
#define	SRB_CLEAR_BITS_8	7
#define	SRB_CLEAR_BITS_16	8
#define	SRB_CLEAR_BITS_32	9
#define	SRB_SET_8		10
#define	SRB_SET_16		11
#define	SRB_SET_32		12
#define	SRB_GET_32		13
#define SRB_GET_VERSION		14
#define SRB_FLUSH_BUFFER_Q	15
#define	SRB_GET_DMA_SPEEDS	16
#define SRB_MODIFY_VC_RATE	17
#define SRB_MODIFY_VC_FLAGS	18
#define SRB_RATE_SHIFT          16
#define SRB_POOL_SHIFT          (SRB_FLAGS_SHIFT+5)
#define SRB_FLAGS_SHIFT         16
#define	SRB_STOP_TASKING	19
#define	SRB_START_TASKING	20
#define SRB_SHUT_DOWN		21
#define MAX_SRB			21
#define SRB_COMPLETE		0xffffffff
#define TX_FRAME          	0x80000000
#define NUM_OF_SRB	32
#define MAX_RATE_BITS	6
#define TX_UBR          0x0000
#define TX_UBR_CAPPED   0x0008
#define TX_ABR          0x0018
#define TX_FRAME_NOTCAP 0x0000
#define TX_FRAME_CAPPED 0x8000
#define FP_155_RATE	0x24b1
#define FP_25_RATE	0x1f9d
#define VERSION_NUMBER 0x01050025
#define DMA_VALID 0xb728e149
#define FLASH_BASE 0xa0c00000
#define FLASH_SIZE 0x00020000
#define BIA_BASE (FLASH_BASE+0x0001c000)
#define BIA_ADDRESS ((void *)0xa0c1c000)
#define PLX_BASE 0xe0000000
typedef enum  loader_command;
#define BAD_COMMAND                     (-1)
#define COMMAND_IN_PROGRESS             1
#define COMMAND_PASSED_TEST             2
#define COMMAND_FAILED_TEST             3
#define COMMAND_READ_DATA_OK            4
#define COMMAND_READ_BAD_ADDRESS        5
#define COMMAND_WRITE_DATA_OK           6
#define COMMAND_WRITE_BAD_ADDRESS       7
#define COMMAND_WRITE_FLASH_FAILURE     8
#define COMMAND_COMPLETE                9
#define COMMAND_FLASH_ERASE_FAILURE	10
#define COMMAND_WRITE_BAD_DATA		11
#define GPINT_TST_FAILURE               0x00000001
#define SUNI_DATA_PATTERN_FAILURE       0x00000002
#define SUNI_DATA_BITS_FAILURE          0x00000004
#define SUNI_UTOPIA_FAILURE             0x00000008
#define SUNI_FIFO_FAILURE               0x00000010
#define SRAM_FAILURE                    0x00000020
#define SELF_TEST_FAILURE               0x0000003f
#define UNUSED_LOADER_MAILBOXES 6
typedef struct  amb_mem;
#define AMB_RESET_BITS	   0x40000000
#define AMB_INTERRUPT_BITS 0x00000300
#define AMB_DOORBELL_BITS  0x00030000
#define MAX_COMMAND_DATA 13
#define MAX_TRANSFER_DATA 11
typedef struct  transfer_block;
typedef struct  loader_block;
typedef	struct  command;
typedef struct  tx_frag;
typedef struct  tx_frag_end;
typedef struct  tx_simple;
typedef	struct  tx_in;
typedef	struct  tx_out;
typedef struct  rx_out;
typedef	struct  rx_in;
typedef struct  adap_talk_block;
typedef struct  suni_stats;
typedef enum  amb_flags;
#define NEXTQ(current,start,limit) \
( (current)+1 < (limit) ? (current)+1 : (start) )
typedef struct  amb_cq_ptrs;
typedef struct  amb_cq;
typedef struct  amb_txq;
typedef struct  amb_rxq;
typedef struct  amb_stats;
typedef struct  amb_tx_info;
typedef struct  amb_rx_info;
typedef struct  amb_vcc;
struct amb_dev ;
typedef struct amb_dev amb_dev;
#define AMB_DEV(atm_dev) ((amb_dev *) (atm_dev)->dev_data)
#define AMB_VCC(atm_vcc) ((amb_vcc *) (atm_vcc)->dev_data)
typedef enum  rounding;
