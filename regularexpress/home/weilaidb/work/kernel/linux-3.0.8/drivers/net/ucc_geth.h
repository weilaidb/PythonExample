#define __UCC_GETH_H__
#define DRV_DESC "QE UCC Gigabit Ethernet Controller"
#define DRV_NAME "ucc_geth"
#define DRV_VERSION "1.1"
#define NUM_TX_QUEUES                   8
#define NUM_RX_QUEUES                   8
#define NUM_BDS_IN_PREFETCHED_BDS       4
#define TX_IP_OFFSET_ENTRY_MAX          8
#define NUM_OF_PADDRS                   4
#define ENET_INIT_PARAM_MAX_ENTRIES_RX  9
#define ENET_INIT_PARAM_MAX_ENTRIES_TX  8
struct ucc_geth  __packed;
#define TEMODER_TX_RMON_STATISTICS_ENABLE       0x0100
#define TEMODER_SCHEDULER_ENABLE                0x2000
#define TEMODER_IP_CHECKSUM_GENERATE            0x0400
#define TEMODER_PERFORMANCE_OPTIMIZATION_MODE1  0x0200
#define TEMODER_RMON_STATISTICS                 0x0100
#define TEMODER_NUM_OF_QUEUES_SHIFT             (15-15)
#define REMODER_RX_RMON_STATISTICS_ENABLE       0x00001000
#define REMODER_RX_EXTENDED_FEATURES            0x80000000
#define REMODER_VLAN_OPERATION_TAGGED_SHIFT     (31-9 )
#define REMODER_VLAN_OPERATION_NON_TAGGED_SHIFT (31-10)
#define REMODER_RX_QOS_MODE_SHIFT               (31-15)
#define REMODER_RMON_STATISTICS                 0x00001000
#define REMODER_RX_EXTENDED_FILTERING           0x00000800
#define REMODER_NUM_OF_QUEUES_SHIFT             (31-23)
#define REMODER_DYNAMIC_MAX_FRAME_LENGTH        0x00000008
#define REMODER_DYNAMIC_MIN_FRAME_LENGTH        0x00000004
#define REMODER_IP_CHECKSUM_CHECK               0x00000002
#define REMODER_IP_ADDRESS_ALIGNMENT            0x00000001
#define UCCE_TXB   (UCC_GETH_UCCE_TXB7 | UCC_GETH_UCCE_TXB6 | \
UCC_GETH_UCCE_TXB5 | UCC_GETH_UCCE_TXB4 | \
UCC_GETH_UCCE_TXB3 | UCC_GETH_UCCE_TXB2 | \
UCC_GETH_UCCE_TXB1 | UCC_GETH_UCCE_TXB0)
#define UCCE_RXB   (UCC_GETH_UCCE_RXB7 | UCC_GETH_UCCE_RXB6 | \
UCC_GETH_UCCE_RXB5 | UCC_GETH_UCCE_RXB4 | \
UCC_GETH_UCCE_RXB3 | UCC_GETH_UCCE_RXB2 | \
UCC_GETH_UCCE_RXB1 | UCC_GETH_UCCE_RXB0)
#define UCCE_RXF   (UCC_GETH_UCCE_RXF7 | UCC_GETH_UCCE_RXF6 | \
UCC_GETH_UCCE_RXF5 | UCC_GETH_UCCE_RXF4 | \
UCC_GETH_UCCE_RXF3 | UCC_GETH_UCCE_RXF2 | \
UCC_GETH_UCCE_RXF1 | UCC_GETH_UCCE_RXF0)
#define UCCE_OTHER (UCC_GETH_UCCE_SCAR | UCC_GETH_UCCE_GRA | \
UCC_GETH_UCCE_CBPR | UCC_GETH_UCCE_BSY | \
UCC_GETH_UCCE_RXC  | UCC_GETH_UCCE_TXC | UCC_GETH_UCCE_TXE)
#define UCCE_RX_EVENTS  (UCCE_RXF | UCC_GETH_UCCE_BSY)
#define UCCE_TX_EVENTS	(UCCE_TXB | UCC_GETH_UCCE_TXE)
#define	ENET_TBI_MII_CR		0x00
#define	ENET_TBI_MII_SR		0x01
#define	ENET_TBI_MII_ANA	0x04
#define	ENET_TBI_MII_ANLPBPA	0x05
#define	ENET_TBI_MII_ANEX	0x06
#define	ENET_TBI_MII_ANNPT	0x07
#define	ENET_TBI_MII_ANLPANP	0x08
#define	ENET_TBI_MII_EXST	0x0F
#define	ENET_TBI_MII_JD		0x10
#define	ENET_TBI_MII_TBICON	0x11
#define TBISR_LSTATUS          0x0004
#define TBICON_CLK_SELECT       0x0020
#define TBIANA_ASYMMETRIC_PAUSE 0x0100
#define TBIANA_SYMMETRIC_PAUSE  0x0080
#define TBIANA_HALF_DUPLEX      0x0040
#define TBIANA_FULL_DUPLEX      0x0020
#define TBICR_PHY_RESET         0x8000
#define TBICR_ANEG_ENABLE       0x1000
#define TBICR_RESTART_ANEG      0x0200
#define TBICR_FULL_DUPLEX       0x0100
#define TBICR_SPEED1_SET        0x0040
#define TBIANA_SETTINGS ( \
TBIANA_ASYMMETRIC_PAUSE \
| TBIANA_SYMMETRIC_PAUSE \
| TBIANA_FULL_DUPLEX \
)
#define TBICR_SETTINGS ( \
TBICR_PHY_RESET \
| TBICR_ANEG_ENABLE \
| TBICR_FULL_DUPLEX \
| TBICR_SPEED1_SET \
)
#define MACCFG1_FLOW_RX                         0x00000020
#define MACCFG1_FLOW_TX                         0x00000010
#define MACCFG1_ENABLE_SYNCHED_RX               0x00000008
#define MACCFG1_ENABLE_RX                       0x00000004
#define MACCFG1_ENABLE_SYNCHED_TX               0x00000002
#define MACCFG1_ENABLE_TX                       0x00000001
#define MACCFG2_PREL_SHIFT                      (31 - 19)
#define MACCFG2_PREL_MASK                       0x0000f000
#define MACCFG2_SRP                             0x00000080
#define MACCFG2_STP                             0x00000040
#define MACCFG2_RESERVED_1                      0x00000020
#define MACCFG2_LC                              0x00000010
#define MACCFG2_MPE                             0x00000008
#define MACCFG2_FDX                             0x00000001
#define MACCFG2_FDX_MASK                        0x00000001
#define MACCFG2_PAD_CRC                         0x00000004
#define MACCFG2_CRC_EN                          0x00000002
#define MACCFG2_PAD_AND_CRC_MODE_NONE           0x00000000
#define MACCFG2_PAD_AND_CRC_MODE_CRC_ONLY       0x00000002
#define MACCFG2_PAD_AND_CRC_MODE_PAD_AND_CRC    0x00000004
#define MACCFG2_INTERFACE_MODE_NIBBLE           0x00000100
#define MACCFG2_INTERFACE_MODE_BYTE             0x00000200
#define MACCFG2_INTERFACE_MODE_MASK             0x00000300
#define IPGIFG_NON_BACK_TO_BACK_IFG_PART1_SHIFT (31 -  7)
#define IPGIFG_NON_BACK_TO_BACK_IFG_PART2_SHIFT (31 - 15)
#define IPGIFG_MINIMUM_IFG_ENFORCEMENT_SHIFT    (31 - 23)
#define IPGIFG_BACK_TO_BACK_IFG_SHIFT           (31 - 31)
#define IPGIFG_NON_BACK_TO_BACK_IFG_PART1_MAX   127
#define IPGIFG_NON_BACK_TO_BACK_IFG_PART2_MAX   127
#define IPGIFG_MINIMUM_IFG_ENFORCEMENT_MAX      255
#define IPGIFG_BACK_TO_BACK_IFG_MAX             127
#define IPGIFG_NBTB_CS_IPG_MASK                 0x7F000000
#define IPGIFG_NBTB_IPG_MASK                    0x007F0000
#define IPGIFG_MIN_IFG_MASK                     0x0000FF00
#define IPGIFG_BTB_IPG_MASK                     0x0000007F
#define HALFDUP_ALT_BEB_TRUNCATION_SHIFT        (31 - 11)
#define HALFDUP_ALT_BEB_TRUNCATION_MAX          0xf
#define HALFDUP_ALT_BEB                         0x00080000
#define HALFDUP_BACK_PRESSURE_NO_BACKOFF        0x00040000
#define HALFDUP_NO_BACKOFF                      0x00020000
#define HALFDUP_EXCESSIVE_DEFER                 0x00010000
#define HALFDUP_MAX_RETRANSMISSION_SHIFT        (31 - 19)
#define HALFDUP_MAX_RETRANSMISSION_MAX          0xf
#define HALFDUP_COLLISION_WINDOW_SHIFT          (31 - 31)
#define HALFDUP_COLLISION_WINDOW_MAX            0x3f
#define HALFDUP_ALT_BEB_TR_MASK                 0x00F00000
#define HALFDUP_RETRANS_MASK                    0x0000F000
#define HALFDUP_COL_WINDOW_MASK                 0x0000003F
#define UCCS_BPR                                0x02
#define UCCS_PAU                                0x02
#define UCCS_MPD                                0x01
#define IFSTAT_EXCESS_DEFER                     0x00000200
#define MACSTNADDR1_OCTET_6_SHIFT               (31 -  7)
#define MACSTNADDR1_OCTET_5_SHIFT               (31 - 15)
#define MACSTNADDR1_OCTET_4_SHIFT               (31 - 23)
#define MACSTNADDR1_OCTET_3_SHIFT               (31 - 31)
#define MACSTNADDR2_OCTET_2_SHIFT               (31 -  7)
#define MACSTNADDR2_OCTET_1_SHIFT               (31 - 15)
#define UEMPR_PAUSE_TIME_VALUE_SHIFT            (31 - 15)
#define UEMPR_EXTENDED_PAUSE_TIME_VALUE_SHIFT   (31 - 31)
#define UTBIPAR_PHY_ADDRESS_SHIFT               (31 - 31)
#define UTBIPAR_PHY_ADDRESS_MASK                0x0000001f
#define UESCR_AUTOZ                             0x8000
#define UESCR_CLRCNT                            0x4000
#define UESCR_MAXCOV_SHIFT                      (15 -  7)
#define UESCR_SCOV_SHIFT                        (15 - 15)
#define UDSR_MAGIC                              0x067E
struct ucc_geth_thread_data_tx  __packed;
struct ucc_geth_thread_data_rx  __packed;
struct ucc_geth_send_queue_qd  __packed;
struct ucc_geth_send_queue_mem_region  __packed;
struct ucc_geth_thread_tx_pram  __packed;
struct ucc_geth_thread_rx_pram  __packed;
#define THREAD_RX_PRAM_ADDITIONAL_FOR_EXTENDED_FILTERING        64
#define THREAD_RX_PRAM_ADDITIONAL_FOR_EXTENDED_FILTERING_8      64
#define THREAD_RX_PRAM_ADDITIONAL_FOR_EXTENDED_FILTERING_16     96
struct ucc_geth_scheduler  __packed;
struct ucc_geth_tx_firmware_statistics_pram  __packed;
struct ucc_geth_rx_firmware_statistics_pram  __packed;
struct ucc_geth_rx_interrupt_coalescing_entry  __packed;
struct ucc_geth_rx_interrupt_coalescing_table  __packed;
struct ucc_geth_rx_prefetched_bds  __packed;
struct ucc_geth_rx_bd_queues_entry  __packed;
struct ucc_geth_tx_global_pram  __packed;
struct ucc_geth_exf_global_pram  __packed;
struct ucc_geth_rx_global_pram  __packed;
#define GRACEFUL_STOP_ACKNOWLEDGE_RX            0x01
struct ucc_geth_init_pram  __packed;
#define ENET_INIT_PARAM_RGF_SHIFT               (32 - 4)
#define ENET_INIT_PARAM_TGF_SHIFT               (32 - 8)
#define ENET_INIT_PARAM_RISC_MASK               0x0000003f
#define ENET_INIT_PARAM_PTR_MASK                0x00ffffc0
#define ENET_INIT_PARAM_SNUM_MASK               0xff000000
#define ENET_INIT_PARAM_SNUM_SHIFT              24
#define ENET_INIT_PARAM_MAGIC_RES_INIT1         0x06
#define ENET_INIT_PARAM_MAGIC_RES_INIT2         0x30
#define ENET_INIT_PARAM_MAGIC_RES_INIT3         0xff
#define ENET_INIT_PARAM_MAGIC_RES_INIT4         0x00
#define ENET_INIT_PARAM_MAGIC_RES_INIT5         0x0400
struct ucc_geth_82xx_enet_address  __packed;
struct ucc_geth_82xx_address_filtering_pram  __packed;
struct ucc_geth_tx_firmware_statistics  __packed;
struct ucc_geth_rx_firmware_statistics  __packed;
struct ucc_geth_hardware_statistics  __packed;
#define TX_ERRORS_DEF      0x0200
#define TX_ERRORS_EXDEF    0x0100
#define TX_ERRORS_LC       0x0080
#define TX_ERRORS_RL       0x0040
#define TX_ERRORS_RC_MASK  0x003C
#define TX_ERRORS_RC_SHIFT 2
#define TX_ERRORS_UN       0x0002
#define TX_ERRORS_CSL      0x0001
#define RX_ERRORS_CMR      0x0200
#define RX_ERRORS_M        0x0100
#define RX_ERRORS_BC       0x0080
#define RX_ERRORS_MC       0x0040
#define T_VID      0x003c0000
#define T_DEF      (((u32) TX_ERRORS_DEF     ) << 16)
#define T_EXDEF    (((u32) TX_ERRORS_EXDEF   ) << 16)
#define T_LC       (((u32) TX_ERRORS_LC      ) << 16)
#define T_RL       (((u32) TX_ERRORS_RL      ) << 16)
#define T_RC_MASK  (((u32) TX_ERRORS_RC_MASK ) << 16)
#define T_UN       (((u32) TX_ERRORS_UN      ) << 16)
#define T_CSL      (((u32) TX_ERRORS_CSL     ) << 16)
#define T_ERRORS_REPORT  (T_DEF | T_EXDEF | T_LC | T_RL | T_RC_MASK \
| T_UN | T_CSL)
#define R_LG    0x00200000
#define R_NO    0x00100000
#define R_SH    0x00080000
#define R_CR    0x00040000
#define R_OV    0x00020000
#define R_IPCH  0x00010000
#define R_CMR   (((u32) RX_ERRORS_CMR  ) << 16)
#define R_M     (((u32) RX_ERRORS_M    ) << 16)
#define R_BC    (((u32) RX_ERRORS_BC   ) << 16)
#define R_MC    (((u32) RX_ERRORS_MC   ) << 16)
#define R_ERRORS_REPORT (R_CMR | R_M | R_BC | R_MC)
#define R_ERRORS_FATAL  (R_LG  | R_NO | R_SH | R_CR | \
R_OV | R_IPCH)
#define UCC_GETH_RX_GLOBAL_PRAM_ALIGNMENT	256
#define UCC_GETH_TX_GLOBAL_PRAM_ALIGNMENT       128
#define UCC_GETH_THREAD_RX_PRAM_ALIGNMENT       128
#define UCC_GETH_THREAD_TX_PRAM_ALIGNMENT       64
#define UCC_GETH_THREAD_DATA_ALIGNMENT          256
#define UCC_GETH_SEND_QUEUE_QUEUE_DESCRIPTOR_ALIGNMENT	32
#define UCC_GETH_SCHEDULER_ALIGNMENT		8
#define UCC_GETH_TX_STATISTICS_ALIGNMENT	4
#define UCC_GETH_RX_STATISTICS_ALIGNMENT	4
#define UCC_GETH_RX_INTERRUPT_COALESCING_ALIGNMENT	64
#define UCC_GETH_RX_BD_QUEUES_ALIGNMENT		8
#define UCC_GETH_RX_PREFETCHED_BDS_ALIGNMENT	128
#define UCC_GETH_RX_EXTENDED_FILTERING_GLOBAL_PARAMETERS_ALIGNMENT 8
#define UCC_GETH_RX_BD_RING_ALIGNMENT		32
#define UCC_GETH_TX_BD_RING_ALIGNMENT		32
#define UCC_GETH_MRBLR_ALIGNMENT		128
#define UCC_GETH_RX_BD_RING_SIZE_ALIGNMENT	4
#define UCC_GETH_TX_BD_RING_SIZE_MEMORY_ALIGNMENT	32
#define UCC_GETH_RX_DATA_BUF_ALIGNMENT		64
#define UCC_GETH_TAD_EF                         0x80
#define UCC_GETH_TAD_V                          0x40
#define UCC_GETH_TAD_REJ                        0x20
#define UCC_GETH_TAD_VTAG_OP_RIGHT_SHIFT        2
#define UCC_GETH_TAD_VTAG_OP_SHIFT              6
#define UCC_GETH_TAD_V_NON_VTAG_OP              0x20
#define UCC_GETH_TAD_RQOS_SHIFT                 0
#define UCC_GETH_TAD_V_PRIORITY_SHIFT           5
#define UCC_GETH_TAD_CFI                        0x10
#define UCC_GETH_VLAN_PRIORITY_MAX              8
#define UCC_GETH_IP_PRIORITY_MAX                64
#define UCC_GETH_TX_VTAG_TABLE_ENTRY_MAX        8
#define UCC_GETH_RX_BD_RING_SIZE_MIN            8
#define UCC_GETH_TX_BD_RING_SIZE_MIN            2
#define UCC_GETH_BD_RING_SIZE_MAX		0xffff
#define UCC_GETH_SIZE_OF_BD                     QE_SIZEOF_BD
#define TX_BD_RING_LEN                          0x10
#define RX_BD_RING_LEN                          0x10
#define TX_RING_MOD_MASK(size)                  (size-1)
#define RX_RING_MOD_MASK(size)                  (size-1)
#define ENET_NUM_OCTETS_PER_ADDRESS             6
#define ENET_GROUP_ADDR                         0x01
#define TX_TIMEOUT                              (1*HZ)
#define SKB_ALLOC_TIMEOUT                       100000
#define PHY_INIT_TIMEOUT                        100000
#define PHY_CHANGE_TIME                         2
#define UCC_GETH_URFS_INIT                      512
#define UCC_GETH_URFET_INIT                     256
#define UCC_GETH_URFSET_INIT                    384
#define UCC_GETH_UTFS_INIT                      512
#define UCC_GETH_UTFET_INIT                     256
#define UCC_GETH_UTFTT_INIT                     256
#define UCC_GETH_URFS_GIGA_INIT                 4096
#define UCC_GETH_URFET_GIGA_INIT                2048
#define UCC_GETH_URFSET_GIGA_INIT               3072
#define UCC_GETH_UTFS_GIGA_INIT                 4096
#define UCC_GETH_UTFET_GIGA_INIT                2048
#define UCC_GETH_UTFTT_GIGA_INIT                4096
#define UCC_GETH_REMODER_INIT                   0
#define UCC_GETH_TEMODER_INIT                   0xC000
#define UCC_GETH_UPSMR_INIT                     UCC_GETH_UPSMR_RES1
#define UCC_GETH_MACCFG1_INIT                   0
#define UCC_GETH_MACCFG2_INIT                   (MACCFG2_RESERVED_1)
enum enet_addr_type ;
enum ucc_geth_enet_address_recognition_location ;
enum ucc_geth_vlan_operation_tagged ;
enum ucc_geth_vlan_operation_non_tagged ;
enum ucc_geth_qos_mode ;
enum ucc_geth_statistics_gathering_mode ;
enum ucc_geth_maccfg2_pad_and_crc_mode ;
enum ucc_geth_flow_control_mode ;
enum ucc_geth_num_of_threads ;
enum ucc_geth_num_of_station_addresses ;
struct enet_addr_container ;
#define ENET_ADDR_CONT_ENTRY(ptr) list_entry(ptr, struct enet_addr_container, node)
struct ucc_geth_tad_params ;
struct ucc_geth_info ;
struct ucc_geth_private ;
void uec_set_ethtool_ops(struct net_device *netdev);
int init_flow_control_params(u32 automatic_flow_control_mode,
int rx_flow_control_enable, int tx_flow_control_enable,
u16 pause_period, u16 extension_field,
u32 __iomem *upsmr_register, u32 __iomem *uempr_register,
u32 __iomem *maccfg1_register);
