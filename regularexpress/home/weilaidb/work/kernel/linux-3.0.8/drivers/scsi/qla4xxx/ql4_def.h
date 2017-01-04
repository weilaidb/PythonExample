#define __QL4_DEF_H
#define PCI_DEVICE_ID_QLOGIC_ISP4010	0x4010
#define PCI_DEVICE_ID_QLOGIC_ISP4022	0x4022
#define PCI_DEVICE_ID_QLOGIC_ISP4032	0x4032
#define PCI_DEVICE_ID_QLOGIC_ISP8022	0x8022
#define ISP4XXX_PCI_FN_1	0x1
#define ISP4XXX_PCI_FN_2	0x3
#define QLA_SUCCESS			0
#define QLA_ERROR			1
#define BIT_0	0x1
#define BIT_1	0x2
#define BIT_2	0x4
#define BIT_3	0x8
#define BIT_4	0x10
#define BIT_5	0x20
#define BIT_6	0x40
#define BIT_7	0x80
#define BIT_8	0x100
#define BIT_9	0x200
#define BIT_10	0x400
#define BIT_11	0x800
#define BIT_12	0x1000
#define BIT_13	0x2000
#define BIT_14	0x4000
#define BIT_15	0x8000
#define BIT_16	0x10000
#define BIT_17	0x20000
#define BIT_18	0x40000
#define BIT_19	0x80000
#define BIT_20	0x100000
#define BIT_21	0x200000
#define BIT_22	0x400000
#define BIT_23	0x800000
#define BIT_24	0x1000000
#define BIT_25	0x2000000
#define BIT_26	0x4000000
#define BIT_27	0x8000000
#define BIT_28	0x10000000
#define BIT_29	0x20000000
#define BIT_30	0x40000000
#define BIT_31	0x80000000
#define ql4_printk(level, ha, format, arg...) \
dev_printk(level , &((ha)->pdev->dev) , format , ## arg)
#define MAX_HBAS		16
#define MAX_BUSES		1
#define MAX_TARGETS		MAX_DEV_DB_ENTRIES
#define MAX_LUNS		0xffff
#define MAX_AEN_ENTRIES		256
#define MAX_DDB_ENTRIES		MAX_DEV_DB_ENTRIES
#define MAX_PDU_ENTRIES		32
#define INVALID_ENTRY		0xFFFF
#define MAX_CMDS_TO_RISC	1024
#define MAX_SRBS		MAX_CMDS_TO_RISC
#define MBOX_AEN_REG_COUNT	8
#define MAX_INIT_RETRIES	5
#define REQUEST_QUEUE_DEPTH		MAX_CMDS_TO_RISC
#define RESPONSE_QUEUE_DEPTH		64
#define QUEUE_SIZE			64
#define DMA_BUFFER_SIZE			512
#define MAC_ADDR_LEN			6
#define IP_ADDR_LEN			4
#define IPv6_ADDR_LEN			16
#define DRIVER_NAME			"qla4xxx"
#define MAX_LINKED_CMDS_PER_LUN		3
#define MAX_REQS_SERVICED_PER_INTR	1
#define ISCSI_IPADDR_SIZE		4
#define ISCSI_ALIAS_SIZE		32
#define ISCSI_NAME_SIZE			0xE0
#define QL4_SESS_RECOVERY_TMO		30
#define LSDW(x) ((u32)((u64)(x)))
#define MSDW(x) ((u32)((((u64)(x)) >> 16) >> 16))
#define MBOX_TOV			60
#define SOFT_RESET_TOV			30
#define RESET_INTR_TOV			3
#define SEMAPHORE_TOV			10
#define ADAPTER_INIT_TOV		30
#define ADAPTER_RESET_TOV		180
#define EXTEND_CMD_TOV			60
#define WAIT_CMD_TOV			30
#define EH_WAIT_CMD_TOV			120
#define FIRMWARE_UP_TOV			60
#define RESET_FIRMWARE_TOV		30
#define LOGOUT_TOV			10
#define IOCB_TOV_MARGIN			10
#define RELOGIN_TOV			18
#define ISNS_DEREG_TOV			5
#define HBA_ONLINE_TOV			30
#define MAX_RESET_HA_RETRIES		2
#define CMD_SP(Cmnd)			((Cmnd)->SCp.ptr)
struct srb ;
struct aen ;
struct ql4_aen_log ;
struct ddb_entry ;
#define DDB_STATE_DEAD		0
#define DDB_STATE_ONLINE	1
#define DDB_STATE_MISSING	2
#define DF_RELOGIN		0
#define DF_ISNS_DISCOVERED	2
#define DF_FO_MASKED		3
struct ql82xx_hw_data ;
struct qla4_8xxx_legacy_intr_set ;
#define QLA_MSIX_DEFAULT	0x00
#define QLA_MSIX_RSP_Q		0x01
#define QLA_MSIX_ENTRIES	2
#define QLA_MIDX_DEFAULT	0
#define QLA_MIDX_RSP_Q		1
struct ql4_msix_entry ;
struct isp_operations ;
struct scsi_qla_host ;
static inline int is_ipv4_enabled(struct scsi_qla_host *ha)
static inline int is_ipv6_enabled(struct scsi_qla_host *ha)
static inline int is_qla4010(struct scsi_qla_host *ha)
static inline int is_qla4022(struct scsi_qla_host *ha)
static inline int is_qla4032(struct scsi_qla_host *ha)
static inline int is_qla8022(struct scsi_qla_host *ha)
static inline int is_aer_supported(struct scsi_qla_host *ha)
static inline int adapter_up(struct scsi_qla_host *ha)
static inline struct scsi_qla_host* to_qla_host(struct Scsi_Host *shost)
static inline void __iomem* isp_semaphore(struct scsi_qla_host *ha)
static inline void __iomem* isp_nvram(struct scsi_qla_host *ha)
static inline void __iomem* isp_ext_hw_conf(struct scsi_qla_host *ha)
static inline void __iomem* isp_port_status(struct scsi_qla_host *ha)
static inline void __iomem* isp_port_ctrl(struct scsi_qla_host *ha)
static inline void __iomem* isp_port_error_status(struct scsi_qla_host *ha)
static inline void __iomem * isp_gp_out(struct scsi_qla_host *ha)
static inline int eeprom_ext_hw_conf_offset(struct scsi_qla_host *ha)
int ql4xxx_sem_spinlock(struct scsi_qla_host * ha, u32 sem_mask, u32 sem_bits);
void ql4xxx_sem_unlock(struct scsi_qla_host * ha, u32 sem_mask);
int ql4xxx_sem_lock(struct scsi_qla_host * ha, u32 sem_mask, u32 sem_bits);
static inline int ql4xxx_lock_flash(struct scsi_qla_host *a)
static inline void ql4xxx_unlock_flash(struct scsi_qla_host *a)
static inline int ql4xxx_lock_nvram(struct scsi_qla_host *a)
static inline void ql4xxx_unlock_nvram(struct scsi_qla_host *a)
static inline int ql4xxx_lock_drvr(struct scsi_qla_host *a)
static inline void ql4xxx_unlock_drvr(struct scsi_qla_host *a)
#define PRESERVE_DDB_LIST	0
#define REBUILD_DDB_LIST	1
#define PROCESS_ALL_AENS	 0
#define FLUSH_DDB_CHANGED_AENS	 1
