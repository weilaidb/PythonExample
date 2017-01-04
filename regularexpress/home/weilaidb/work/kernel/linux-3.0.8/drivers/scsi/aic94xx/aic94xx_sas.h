#define _AIC94XX_SAS_H_
#define ASD_MAX_DDBS	128
struct asd_ddb_ssp_smp_target_port  __attribute__ ((packed));
struct asd_ddb_stp_sata_target_port  __attribute__ ((packed));
struct asd_ddb_init_port  __attribute__ ((packed));
struct asd_ddb_sata_tag  __attribute__ ((packed));
struct asd_ddb_sata_pm_table  __attribute__ ((packed));
struct asd_ddb_sata_pm_port  __attribute__ ((packed));
struct asd_ddb_seq_shared  __attribute__ ((packed));
struct sg_el  __attribute__ ((packed));
struct scb_header  __attribute__ ((packed));
#define INITIATE_SSP_TASK       0x00
#define INITIATE_LONG_SSP_TASK  0x01
#define INITIATE_BIDIR_SSP_TASK 0x02
#define SCB_ABORT_TASK          0x03
#define INITIATE_SSP_TMF        0x04
#define SSP_TARG_GET_DATA       0x05
#define SSP_TARG_GET_DATA_GOOD  0x06
#define SSP_TARG_SEND_RESP      0x07
#define QUERY_SSP_TASK          0x08
#define INITIATE_ATA_TASK       0x09
#define INITIATE_ATAPI_TASK     0x0a
#define CONTROL_ATA_DEV         0x0b
#define INITIATE_SMP_TASK       0x0c
#define SMP_TARG_SEND_RESP      0x0f
#define SSP_TARG_SEND_DATA      0x40
#define SSP_TARG_SEND_DATA_GOOD 0x41
#define CONTROL_PHY             0x80
#define SEND_PRIMITIVE          0x81
#define INITIATE_LINK_ADM_TASK  0x82
#define EMPTY_SCB               0xc0
#define INITIATE_SEQ_ADM_TASK   0xc1
#define EST_ICL_TARG_WINDOW     0xc2
#define COPY_MEM                0xc3
#define CLEAR_NEXUS             0xc4
#define INITIATE_DDB_ADM_TASK   0xc6
#define ESTABLISH_NEXUS_ESCB    0xd0
#define LUN_SIZE                8
struct ssp_task_iu  __attribute__ ((packed));
struct ssp_command_iu  __attribute__ ((packed));
struct xfer_rdy_iu  __attribute__ ((packed));
struct initiate_ssp_task  __attribute__ ((packed));
struct initiate_ata_task  __attribute__ ((packed));
struct initiate_smp_task  __attribute__ ((packed));
struct control_phy  __attribute__ ((packed));
struct control_ata_dev  __attribute__ ((packed));
struct empty_scb  __attribute__ ((packed));
struct initiate_link_adm  __attribute__ ((packed));
struct copy_memory  __attribute__ ((packed));
struct abort_task  __attribute__ ((packed));
struct clear_nexus  __attribute__ ((packed));
struct initiate_ssp_tmf  __attribute__ ((packed));
struct send_prim  __attribute__ ((packed));
struct ssp_targ_get_data  __attribute__ ((packed));
struct scb  __attribute__ ((packed));
#define TC_NO_ERROR             0x00
#define TC_UNDERRUN             0x01
#define TC_OVERRUN              0x02
#define TF_OPEN_TO              0x03
#define TF_OPEN_REJECT          0x04
#define TI_BREAK                0x05
#define TI_PROTO_ERR            0x06
#define TC_SSP_RESP             0x07
#define TI_PHY_DOWN             0x08
#define TF_PHY_DOWN             0x09
#define TC_LINK_ADM_RESP        0x0a
#define TC_CSMI                 0x0b
#define TC_ATA_RESP             0x0c
#define TU_PHY_DOWN             0x0d
#define TU_BREAK                0x0e
#define TI_SATA_TO              0x0f
#define TI_NAK                  0x10
#define TC_CONTROL_PHY          0x11
#define TF_BREAK                0x12
#define TC_RESUME               0x13
#define TI_ACK_NAK_TO           0x14
#define TF_SMPRSP_TO            0x15
#define TF_SMP_XMIT_RCV_ERR     0x16
#define TC_PARTIAL_SG_LIST      0x17
#define TU_ACK_NAK_TO           0x18
#define TU_SATA_TO              0x19
#define TF_NAK_RECV             0x1a
#define TA_I_T_NEXUS_LOSS       0x1b
#define TC_ATA_R_ERR_RECV       0x1c
#define TF_TMF_NO_CTX           0x1d
#define TA_ON_REQ               0x1e
#define TF_TMF_NO_TAG           0x1f
#define TF_TMF_TAG_FREE         0x20
#define TF_TMF_TASK_DONE        0x21
#define TF_TMF_NO_CONN_HANDLE   0x22
#define TC_TASK_CLEARED         0x23
#define TI_SYNCS_RECV           0x24
#define TU_SYNCS_RECV           0x25
#define TF_IRTT_TO              0x26
#define TF_NO_SMP_CONN          0x27
#define TF_IU_SHORT             0x28
#define TF_DATA_OFFS_ERR        0x29
#define TF_INV_CONN_HANDLE      0x2a
#define TF_REQUESTED_N_PENDING  0x2b
#define ESCB_RECVD              0xC0
struct done_list_struct  __attribute__ ((packed));
struct asd_phy ;
#define ASD_SCB_SIZE sizeof(struct scb)
#define ASD_DDB_SIZE sizeof(struct asd_ddb_ssp_smp_target_port)
#define ASD_NOTIFY_ENABLE_SPINUP  0x10
#define ASD_NOTIFY_TIMEOUT        2500
#define ASD_NOTIFY_DOWN_COUNT     0
#define ASD_DEV_PRESENT_TIMEOUT   0x2710
#define ASD_SATA_INTERLOCK_TIMEOUT 0
#define ASD_STP_SHUTDOWN_TIMEOUT  0x0
#define ASD_SRST_ASSERT_TIMEOUT   0x05
#define ASD_RCV_FIS_TIMEOUT       0x01D905C0
#define ASD_ONE_MILLISEC_TIMEOUT  0x03e8
#define ASD_TEN_MILLISEC_TIMEOUT  0x2710
#define ASD_COMINIT_TIMEOUT ASD_TEN_MILLISEC_TIMEOUT
#define ASD_SMP_RCV_TIMEOUT       0x000F4240
