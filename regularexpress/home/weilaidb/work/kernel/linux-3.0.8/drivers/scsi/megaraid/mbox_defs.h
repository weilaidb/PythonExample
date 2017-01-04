#define _MRAID_MBOX_DEFS_H_
#define MBOXCMD_LREAD		0x01
#define MBOXCMD_LWRITE		0x02
#define MBOXCMD_PASSTHRU	0x03
#define MBOXCMD_ADPEXTINQ	0x04
#define MBOXCMD_ADAPTERINQ	0x05
#define MBOXCMD_LREAD64		0xA7
#define MBOXCMD_LWRITE64	0xA8
#define MBOXCMD_PASSTHRU64	0xC3
#define MBOXCMD_EXTPTHRU	0xE3
#define MAIN_MISC_OPCODE	0xA4
#define GET_MAX_SG_SUPPORT	0x01
#define SUPPORT_EXT_CDB		0x16
#define FC_NEW_CONFIG		0xA1
#define NC_SUBOP_PRODUCT_INFO	0x0E
#define NC_SUBOP_ENQUIRY3	0x0F
#define ENQ3_GET_SOLICITED_FULL	0x02
#define OP_DCMD_READ_CONFIG	0x04
#define NEW_READ_CONFIG_8LD	0x67
#define READ_CONFIG_8LD		0x07
#define FLUSH_ADAPTER		0x0A
#define FLUSH_SYSTEM		0xFE
#define	FC_DEL_LOGDRV		0xA4
#define	OP_SUP_DEL_LOGDRV	0x2A
#define OP_GET_LDID_MAP		0x18
#define OP_DEL_LOGDRV		0x1C
#define IS_BIOS_ENABLED		0x62
#define GET_BIOS		0x01
#define CHNL_CLASS		0xA9
#define GET_CHNL_CLASS		0x00
#define SET_CHNL_CLASS		0x01
#define CH_RAID			0x01
#define CH_SCSI			0x00
#define BIOS_PVT_DATA		0x40
#define GET_BIOS_PVT_DATA	0x00
#define GET_TARGET_ID		0x7D
#define CLUSTER_OP		0x70
#define GET_CLUSTER_MODE	0x02
#define CLUSTER_CMD		0x6E
#define RESERVE_LD		0x01
#define RELEASE_LD		0x02
#define RESET_RESERVATIONS	0x03
#define RESERVATION_STATUS	0x04
#define RESERVE_PD		0x05
#define RELEASE_PD		0x06
#define BATTERY_MODULE_MISSING		0x01
#define BATTERY_LOW_VOLTAGE		0x02
#define BATTERY_TEMP_HIGH		0x04
#define BATTERY_PACK_MISSING		0x08
#define BATTERY_CHARGE_MASK		0x30
#define BATTERY_CHARGE_DONE		0x00
#define BATTERY_CHARGE_INPROG		0x10
#define BATTERY_CHARGE_FAIL		0x20
#define BATTERY_CYCLES_EXCEEDED		0x40
#define PDRV_UNCNF	0
#define PDRV_ONLINE	3
#define PDRV_FAILED	4
#define PDRV_RBLD	5
#define PDRV_HOTSPARE	6
#define RDRV_OFFLINE	0
#define RDRV_DEGRADED	1
#define RDRV_OPTIMAL	2
#define RDRV_DELETED	3
#define NO_READ_AHEAD		0
#define READ_AHEAD		1
#define ADAP_READ_AHEAD		2
#define WRMODE_WRITE_THRU	0
#define WRMODE_WRITE_BACK	1
#define CACHED_IO		0
#define DIRECT_IO		1
#define MAX_LOGICAL_DRIVES_8LD		8
#define MAX_LOGICAL_DRIVES_40LD		40
#define FC_MAX_PHYSICAL_DEVICES		256
#define MAX_MBOX_CHANNELS		5
#define MAX_MBOX_TARGET			15
#define MBOX_MAX_PHYSICAL_DRIVES	MAX_MBOX_CHANNELS*MAX_MBOX_TARGET
#define MAX_ROW_SIZE_40LD		32
#define MAX_ROW_SIZE_8LD		8
#define SPAN_DEPTH_8_SPANS		8
#define SPAN_DEPTH_4_SPANS		4
#define MAX_REQ_SENSE_LEN		0x20
#define MBOX_MAX_FIRMWARE_STATUS	46
typedef struct  __attribute__ ((packed)) mbox_t;
typedef struct  __attribute__ ((packed)) mbox64_t;
typedef struct  __attribute__ ((packed)) int_mbox_t;
typedef struct  __attribute__ ((packed)) mraid_passthru_t;
typedef struct  __attribute__ ((packed)) mega_passthru64_t;
typedef struct  __attribute__ ((packed)) mraid_epassthru_t;
typedef struct  __attribute__ ((packed)) mraid_pinfo_t;
typedef struct  __attribute__ ((packed)) mraid_notify_t;
#define MAX_NOTIFY_SIZE		0x80
#define CUR_NOTIFY_SIZE		sizeof(mraid_notify_t)
typedef struct  __attribute__ ((packed)) mraid_inquiry3_t;
typedef struct  __attribute__ ((packed)) mraid_adapinfo_t;
typedef struct  __attribute__ ((packed)) mraid_ldrv_info_t;
typedef struct  __attribute__ ((packed)) mraid_pdrv_info_t;
typedef struct  __attribute__ ((packed)) mraid_inquiry_t;
typedef struct  __attribute__ ((packed)) mraid_extinq_t;
typedef struct __attribute__ ((packed)) adap_device_t;
typedef struct __attribute__ ((packed)) adap_span_40ld_t;
typedef struct __attribute__ ((packed)) adap_span_8ld_t;
typedef struct  __attribute__ ((packed)) logdrv_param_t;
typedef struct __attribute__ ((packed)) logdrv_40ld_t;
typedef struct __attribute__ ((packed)) logdrv_8ld_span8_t;
typedef struct __attribute__ ((packed)) logdrv_8ld_span4_t;
typedef struct __attribute__ ((packed)) phys_drive_t;
typedef struct __attribute__ ((packed)) disk_array_40ld_t;
typedef struct __attribute__ ((packed)) disk_array_8ld_span8_t;
typedef struct __attribute__ ((packed)) disk_array_8ld_span4_t;
struct private_bios_data  __attribute__ ((packed));
typedef struct  __attribute__ ((packed)) mbox_sgl64;
typedef struct  __attribute__ ((packed)) mbox_sgl32;
