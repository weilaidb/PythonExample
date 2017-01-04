#define	__CXGB4I_H__
#define	CXGB4I_SCSI_HOST_QDEPTH	1024
#define	CXGB4I_MAX_CONN		16384
#define	CXGB4I_MAX_TARGET	CXGB4I_MAX_CONN
#define	CXGB4I_MAX_LUN		0x1000
#define CXGB4I_TX_HEADER_LEN \
(sizeof(struct fw_ofld_tx_data_wr) + sizeof(struct sge_opaque_hdr))
struct ulptx_idata ;
struct cpl_rx_data_ddp ;
