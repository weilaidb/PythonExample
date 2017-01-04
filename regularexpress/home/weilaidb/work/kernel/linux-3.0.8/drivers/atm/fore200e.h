#define _FORE200E_H
#define SMALL_BUFFER_SIZE    384
#define LARGE_BUFFER_SIZE    4032
#define RBD_BLK_SIZE	     32
#define MAX_PDU_SIZE	     65535
#define BUFFER_S1_SIZE       SMALL_BUFFER_SIZE
#define BUFFER_L1_SIZE       LARGE_BUFFER_SIZE
#define BUFFER_S2_SIZE       SMALL_BUFFER_SIZE
#define BUFFER_L2_SIZE       LARGE_BUFFER_SIZE
#define BUFFER_S1_NBR        (RBD_BLK_SIZE * 6)
#define BUFFER_L1_NBR        (RBD_BLK_SIZE * 4)
#define BUFFER_S2_NBR        (RBD_BLK_SIZE * 6)
#define BUFFER_L2_NBR        (RBD_BLK_SIZE * 4)
#define QUEUE_SIZE_CMD       16
#define QUEUE_SIZE_RX	     64
#define QUEUE_SIZE_TX	     256
#define QUEUE_SIZE_BS        32
#define FORE200E_VPI_BITS     0
#define FORE200E_VCI_BITS    10
#define NBR_CONNECT          (1 << (FORE200E_VPI_BITS + FORE200E_VCI_BITS))
#define TSD_FIXED            2
#define TSD_EXTENSION        0
#define TSD_NBR              (TSD_FIXED + TSD_EXTENSION)
#define RSD_REQUIRED  (((MAX_PDU_SIZE - SMALL_BUFFER_SIZE + LARGE_BUFFER_SIZE) / LARGE_BUFFER_SIZE) + 1)
#define RSD_FIXED     3
#define RSD_EXTENSION  ((RSD_REQUIRED - RSD_FIXED) + 1)
#define RSD_NBR         (RSD_FIXED + RSD_EXTENSION)
#define FORE200E_DEV(d)          ((struct fore200e*)((d)->dev_data))
#define FORE200E_VCC(d)          ((struct fore200e_vcc*)((d)->dev_data))
#if defined(__LITTLE_ENDIAN_BITFIELD)
#define BITFIELD2(b1, b2)                    b1; b2;
#define BITFIELD3(b1, b2, b3)                b1; b2; b3;
#define BITFIELD4(b1, b2, b3, b4)            b1; b2; b3; b4;
#define BITFIELD5(b1, b2, b3, b4, b5)        b1; b2; b3; b4; b5;
#define BITFIELD6(b1, b2, b3, b4, b5, b6)    b1; b2; b3; b4; b5; b6;
#elif defined(__BIG_ENDIAN_BITFIELD)
#define BITFIELD2(b1, b2)                                    b2; b1;
#define BITFIELD3(b1, b2, b3)                            b3; b2; b1;
#define BITFIELD4(b1, b2, b3, b4)                    b4; b3; b2; b1;
#define BITFIELD5(b1, b2, b3, b4, b5)            b5; b4; b3; b2; b1;
#define BITFIELD6(b1, b2, b3, b4, b5, b6)    b6; b5; b4; b3; b2; b1;
#error unknown bitfield endianess
typedef struct atm_header  atm_header_t;
typedef enum fore200e_aal  fore200e_aal_t;
typedef struct tpd_spec  tpd_spec_t;
typedef struct tpd_rate
tpd_rate_t;
typedef struct tsd  tsd_t;
typedef struct tpd  tpd_t;
typedef struct rsd  rsd_t;
typedef struct rpd  rpd_t;
typedef enum buffer_scheme  buffer_scheme_t;
typedef enum buffer_magn  buffer_magn_t;
typedef struct rbd  rbd_t;
typedef struct rbd_block  rbd_block_t;
typedef struct tpd_haddr  tpd_haddr_t;
#define TPD_HADDR_SHIFT 5
typedef struct cp_txq_entry  cp_txq_entry_t;
typedef struct cp_rxq_entry  cp_rxq_entry_t;
typedef struct cp_bsq_entry  cp_bsq_entry_t;
typedef volatile enum status  status_t;
typedef enum opcode  opcode_t;
typedef struct vpvc  vpvc_t;
typedef struct activate_opcode  activate_opcode_t;
typedef struct activate_block  activate_block_t;
typedef struct deactivate_opcode  deactivate_opcode_t;
typedef struct deactivate_block  deactivate_block_t;
typedef struct oc3_regs  oc3_regs_t;
typedef struct oc3_opcode  oc3_opcode_t;
typedef struct oc3_block  oc3_block_t;
typedef struct stats_phy  stats_phy_t;
typedef struct stats_oc3  stats_oc3_t;
typedef struct stats_atm  stats_atm_t;
typedef struct stats_aal0  stats_aal0_t;
typedef struct stats_aal34  stats_aal34_t;
typedef struct stats_aal5  stats_aal5_t;
typedef struct stats_aux  stats_aux_t;
typedef struct stats  stats_t;
typedef struct stats_opcode  stats_opcode_t;
typedef struct stats_block  stats_block_t;
typedef struct prom_data  prom_data_t;
typedef struct prom_opcode  prom_opcode_t;
typedef struct prom_block  prom_block_t;
typedef union cmd  cmd_t;
typedef struct cp_cmdq_entry  cp_cmdq_entry_t;
typedef struct host_txq_entry  host_txq_entry_t;
typedef struct host_rxq_entry  host_rxq_entry_t;
typedef struct host_bsq_entry  host_bsq_entry_t;
typedef struct host_cmdq_entry  host_cmdq_entry_t;
typedef struct chunk  chunk_t;
#define dma_size align_size
typedef struct buffer  buffer_t;
#if (BITS_PER_LONG == 32)
#define FORE200E_BUF2HDL(buffer)    ((u32)(buffer))
#define FORE200E_HDL2BUF(handle)    ((struct buffer*)(handle))
#define FORE200E_BUF2HDL(buffer)    ((u32)((u64)(buffer)))
#define FORE200E_HDL2BUF(handle)    ((struct buffer*)(((u64)(handle)) | PAGE_OFFSET))
typedef struct host_cmdq  host_cmdq_t;
typedef struct host_txq  host_txq_t;
typedef struct host_rxq  host_rxq_t;
typedef struct host_bsq  host_bsq_t;
typedef struct fw_header  fw_header_t;
#define FW_HEADER_MAGIC  0x65726f66
typedef struct bs_spec  bs_spec_t;
typedef struct init_block  init_block_t;
typedef enum media_type  media_type_t;
#define FORE200E_MEDIA_INDEX(media_type)   ((media_type)>>4)
typedef struct cp_queues  cp_queues_t;
typedef enum boot_status  boot_status_t;
typedef struct soft_uart  soft_uart_t;
#define FORE200E_CP_MONITOR_UART_FREE     0x00000000
#define FORE200E_CP_MONITOR_UART_AVAIL    0x01000000
typedef struct cp_monitor  cp_monitor_t;
typedef enum fore200e_state  fore200e_state;
typedef struct fore200e_pca_regs  fore200e_pca_regs_t;
typedef struct fore200e_sba_regs  fore200e_sba_regs_t;
typedef union fore200e_regs  fore200e_regs;
struct fore200e;
typedef struct fore200e_bus  fore200e_bus_t;
typedef struct fore200e_vc_map  fore200e_vc_map_t;
#define FORE200E_VC_MAP(fore200e, vpi, vci)  \
(& (fore200e)->vc_map[ ((vpi) << FORE200E_VCI_BITS) | (vci) ])
typedef struct fore200e  fore200e_t;
typedef struct fore200e_vcc  fore200e_vcc_t;
#define FORE200E_CP_MONITOR_OFFSET	0x00000400
#define FORE200E_CP_QUEUES_OFFSET	0x00004d40
#define PCA200E_IOSPACE_LENGTH	        0x00200000
#define PCA200E_HCR_OFFSET		0x00100000
#define PCA200E_IMR_OFFSET		0x00100004
#define PCA200E_PSR_OFFSET		0x00100008
#define PCA200E_HCR_RESET     (1<<0)
#define PCA200E_HCR_HOLD_LOCK (1<<1)
#define PCA200E_HCR_I960FAIL  (1<<2)
#define PCA200E_HCR_INTRB     (1<<2)
#define PCA200E_HCR_HOLD_ACK  (1<<3)
#define PCA200E_HCR_INTRA     (1<<3)
#define PCA200E_HCR_OUTFULL   (1<<4)
#define PCA200E_HCR_CLRINTR   (1<<4)
#define PCA200E_HCR_ESPHOLD   (1<<5)
#define PCA200E_HCR_INFULL    (1<<6)
#define PCA200E_HCR_TESTMODE  (1<<7)
#define PCA200E_PCI_LATENCY      0x40
#define PCA200E_PCI_MASTER_CTRL  0x41
#define PCA200E_PCI_THRESHOLD    0x42
#define PCA200E_CTRL_DIS_CACHE_RD      (1<<0)
#define PCA200E_CTRL_DIS_WRT_INVAL     (1<<1)
#define PCA200E_CTRL_2_CACHE_WRT_INVAL (1<<2)
#define PCA200E_CTRL_IGN_LAT_TIMER     (1<<3)
#define PCA200E_CTRL_ENA_CONT_REQ_MODE (1<<4)
#define PCA200E_CTRL_LARGE_PCI_BURSTS  (1<<5)
#define PCA200E_CTRL_CONVERT_ENDIAN    (1<<6)
#define SBA200E_PROM_NAME  "FORE,sba-200e"
#define SBA200E_HCR_LENGTH        4
#define SBA200E_BSR_LENGTH        4
#define SBA200E_ISR_LENGTH        4
#define SBA200E_RAM_LENGTH  0x40000
#define SBA200E_BSR_BURST4   0x04
#define SBA200E_BSR_BURST8   0x08
#define SBA200E_BSR_BURST16  0x10
#define SBA200E_HCR_RESET        (1<<0)
#define SBA200E_HCR_HOLD_LOCK    (1<<1)
#define SBA200E_HCR_I960FAIL     (1<<2)
#define SBA200E_HCR_I960SETINTR  (1<<2)
#define SBA200E_HCR_OUTFULL      (1<<3)
#define SBA200E_HCR_INTR_CLR     (1<<3)
#define SBA200E_HCR_INTR_ENA     (1<<4)
#define SBA200E_HCR_ESPHOLD      (1<<5)
#define SBA200E_HCR_INFULL       (1<<6)
#define SBA200E_HCR_TESTMODE     (1<<7)
#define SBA200E_HCR_INTR_REQ     (1<<8)
#define SBA200E_HCR_STICKY       (SBA200E_HCR_RESET | SBA200E_HCR_HOLD_LOCK | SBA200E_HCR_INTR_ENA)
