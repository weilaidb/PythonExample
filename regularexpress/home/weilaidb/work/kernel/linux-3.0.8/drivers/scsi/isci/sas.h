#define _SCI_SAS_H_
#define FIS_REGH2D          0x27
#define FIS_REGD2H          0x34
#define FIS_SETDEVBITS      0xA1
#define FIS_DMA_ACTIVATE    0x39
#define FIS_DMA_SETUP       0x41
#define FIS_BIST_ACTIVATE   0x58
#define FIS_PIO_SETUP       0x5F
#define FIS_DATA            0x46
#define SSP_RESP_IU_MAX_SIZE	280
struct ssp_cmd_iu   __packed;
struct ssp_task_iu   __packed;
struct smp_req_phy_id   __packed;
struct smp_req_conf_rtinfo   __packed;
struct smp_req_phycntl   __packed;
struct smp_req   __packed;
#define SMP_RESP_HDR_SZ	4
struct sci_sas_address ;
