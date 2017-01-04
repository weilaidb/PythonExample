#define	_FC_FCP_H_
#define	FCP_SPPF_TASK_RETRY_ID	0x0200
#define	FCP_SPPF_RETRY		0x0100
#define	FCP_SPPF_CONF_COMPL	0x0080
#define	FCP_SPPF_OVLY_ALLOW	0x0040
#define	FCP_SPPF_INIT_FCN	0x0020
#define	FCP_SPPF_TARG_FCN	0x0010
#define	FCP_SPPF_RD_XRDY_DIS	0x0002
#define	FCP_SPPF_WR_XRDY_DIS	0x0001
struct fcp_cmnd ;
#define	FCP_CMND_LEN	32
struct fcp_cmnd32 ;
#define	FCP_CMND32_LEN	    48
#define	FCP_CMND32_ADD_LEN  (16 / 4)
#define	FCP_PTA_SIMPLE	    0
#define	FCP_PTA_HEADQ	    1
#define	FCP_PTA_ORDERED     2
#define	FCP_PTA_ACA	    4
#define	FCP_PTA_MASK	    7
#define	FCP_PRI_SHIFT	    3
#define	FCP_PRI_RESVD_MASK  0x80
#define	FCP_TMF_CLR_ACA		0x40
#define	FCP_TMF_TGT_RESET	0x20
#define	FCP_TMF_LUN_RESET	0x10
#define	FCP_TMF_CLR_TASK_SET	0x04
#define	FCP_TMF_ABT_TASK_SET	0x02
#define	FCP_CFL_LEN_MASK	0xfc
#define	FCP_CFL_LEN_SHIFT	2
#define	FCP_CFL_RDDATA		0x02
#define	FCP_CFL_WRDATA		0x01
struct fcp_txrdy ;
#define	FCP_TXRDY_LEN	12
struct fcp_resp ;
#define	FCP_RESP_LEN	12
struct fcp_resp_ext ;
#define FCP_RESP_EXT_LEN    12
struct fcp_resp_rsp_info ;
struct fcp_resp_with_ext ;
#define	FCP_RESP_WITH_EXT   (FCP_RESP_LEN + FCP_RESP_EXT_LEN)
#define	FCP_BIDI_RSP	    0x80
#define	FCP_BIDI_READ_UNDER 0x40
#define	FCP_BIDI_READ_OVER  0x20
#define	FCP_CONF_REQ	    0x10
#define	FCP_RESID_UNDER     0x08
#define	FCP_RESID_OVER	    0x04
#define	FCP_SNS_LEN_VAL     0x02
#define	FCP_RSP_LEN_VAL     0x01
enum fcp_resp_rsp_codes ;
struct fcp_srr ;
#define	FCP_FEAT_TARG	(1 << 0)
#define	FCP_FEAT_INIT	(1 << 1)
