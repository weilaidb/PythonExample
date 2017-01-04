#define _SAS_H_
#define SAS_ADDR_SIZE        8
#define HASHED_SAS_ADDR_SIZE 3
#define SAS_ADDR(_sa) ((unsigned long long) be64_to_cpu(*(__be64 *)(_sa)))
#define SMP_REQUEST             0x40
#define SMP_RESPONSE            0x41
#define SSP_DATA                0x01
#define SSP_XFER_RDY            0x05
#define SSP_COMMAND             0x06
#define SSP_RESPONSE            0x07
#define SSP_TASK                0x16
#define SMP_REPORT_GENERAL       0x00
#define SMP_REPORT_MANUF_INFO    0x01
#define SMP_READ_GPIO_REG        0x02
#define SMP_DISCOVER             0x10
#define SMP_REPORT_PHY_ERR_LOG   0x11
#define SMP_REPORT_PHY_SATA      0x12
#define SMP_REPORT_ROUTE_INFO    0x13
#define SMP_WRITE_GPIO_REG       0x82
#define SMP_CONF_ROUTE_INFO      0x90
#define SMP_PHY_CONTROL          0x91
#define SMP_PHY_TEST_FUNCTION    0x92
#define SMP_RESP_FUNC_ACC        0x00
#define SMP_RESP_FUNC_UNK        0x01
#define SMP_RESP_FUNC_FAILED     0x02
#define SMP_RESP_INV_FRM_LEN     0x03
#define SMP_RESP_NO_PHY          0x10
#define SMP_RESP_NO_INDEX        0x11
#define SMP_RESP_PHY_NO_SATA     0x12
#define SMP_RESP_PHY_UNK_OP      0x13
#define SMP_RESP_PHY_UNK_TESTF   0x14
#define SMP_RESP_PHY_TEST_INPROG 0x15
#define SMP_RESP_PHY_VACANT      0x16
#define TMF_ABORT_TASK      0x01
#define TMF_ABORT_TASK_SET  0x02
#define TMF_CLEAR_TASK_SET  0x04
#define TMF_LU_RESET        0x08
#define TMF_CLEAR_ACA       0x40
#define TMF_QUERY_TASK      0x80
#define TMF_RESP_FUNC_COMPLETE   0x00
#define TMF_RESP_INVALID_FRAME   0x02
#define TMF_RESP_FUNC_ESUPP      0x04
#define TMF_RESP_FUNC_FAILED     0x05
#define TMF_RESP_FUNC_SUCC       0x08
#define TMF_RESP_NO_LUN          0x09
#define TMF_RESP_OVERLAPPED_TAG  0x0A
enum sas_oob_mode ;
enum sas_dev_type ;
enum sas_protocol ;
enum phy_func ;
enum sas_prim ;
enum sas_open_rej_reason ;
struct  dev_to_host_fis  __attribute__ ((packed));
struct host_to_dev_fis  __attribute__ ((packed));
struct sas_identify_frame  __attribute__ ((packed));
struct ssp_frame_hdr  __attribute__ ((packed));
struct ssp_response_iu  __attribute__ ((packed));
struct report_general_resp  __attribute__ ((packed));
struct discover_resp  __attribute__ ((packed));
struct report_phy_sata_resp  __attribute__ ((packed));
struct smp_resp  __attribute__ ((packed));
#elif defined(__BIG_ENDIAN_BITFIELD)
struct sas_identify_frame  __attribute__ ((packed));
struct ssp_frame_hdr  __attribute__ ((packed));
struct ssp_response_iu  __attribute__ ((packed));
struct report_general_resp  __attribute__ ((packed));
struct discover_resp  __attribute__ ((packed));
struct report_phy_sata_resp  __attribute__ ((packed));
struct smp_resp  __attribute__ ((packed));
#error "Bitfield order not defined!"
