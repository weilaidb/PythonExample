#define __CXGB3I_H__
#define CXGB3I_SCSI_HOST_QDEPTH 1024
#define CXGB3I_MAX_LUN		512
#define ISCSI_PDU_NONPAYLOAD_MAX \
(sizeof(struct iscsi_hdr) + ISCSI_MAX_AHS_SIZE + 2*ISCSI_DIGEST_SIZE)
#define CXGB3I_TX_HEADER_LEN \
(sizeof(struct tx_data_wr) + sizeof(struct sge_opaque_hdr))
extern cxgb3_cpl_handler_func cxgb3i_cpl_handlers[NUM_CPL_CMDS];
static inline unsigned int cxgb3i_get_private_ipv4addr(struct net_device *ndev)
static inline void cxgb3i_set_private_ipv4addr(struct net_device *ndev,
unsigned int addr)
struct cpl_iscsi_hdr_norss ;
struct cpl_rx_data_ddp_norss ;
