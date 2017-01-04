#define SCSI_BSG_FC_H
#define FC_DEFAULT_BSG_TIMEOUT		(10 * HZ)
#define FC_BSG_CLS_MASK		0xF0000000
#define FC_BSG_HST_MASK		0x80000000
#define FC_BSG_RPT_MASK		0x40000000
#define FC_BSG_HST_ADD_RPORT		(FC_BSG_HST_MASK | 0x00000001)
#define FC_BSG_HST_DEL_RPORT		(FC_BSG_HST_MASK | 0x00000002)
#define FC_BSG_HST_ELS_NOLOGIN		(FC_BSG_HST_MASK | 0x00000003)
#define FC_BSG_HST_CT			(FC_BSG_HST_MASK | 0x00000004)
#define FC_BSG_HST_VENDOR		(FC_BSG_HST_MASK | 0x000000FF)
#define FC_BSG_RPT_ELS			(FC_BSG_RPT_MASK | 0x00000001)
#define FC_BSG_RPT_CT			(FC_BSG_RPT_MASK | 0x00000002)
struct fc_bsg_host_add_rport ;
struct fc_bsg_host_del_rport ;
struct fc_bsg_host_els ;
#define FC_CTELS_STATUS_OK	0x00000000
#define FC_CTELS_STATUS_REJECT	0x00000001
#define FC_CTELS_STATUS_P_RJT	0x00000002
#define FC_CTELS_STATUS_F_RJT	0x00000003
#define FC_CTELS_STATUS_P_BSY	0x00000004
#define FC_CTELS_STATUS_F_BSY	0x00000006
struct fc_bsg_ctels_reply ;
struct fc_bsg_host_ct ;
struct fc_bsg_host_vendor ;
struct fc_bsg_host_vendor_reply ;
struct fc_bsg_rport_els ;
struct fc_bsg_rport_ct ;
struct fc_bsg_request  __attribute__((packed));
struct fc_bsg_reply ;
