#define __IB_MAD_PRIV_H__
#define PFX "ib_mad: "
#define IB_MAD_QPS_CORE		2
#define IB_MAD_QP_SEND_SIZE	128
#define IB_MAD_QP_RECV_SIZE	512
#define IB_MAD_QP_MIN_SIZE	64
#define IB_MAD_QP_MAX_SIZE	8192
#define IB_MAD_SEND_REQ_MAX_SG	2
#define IB_MAD_RECV_REQ_MAX_SG	1
#define IB_MAD_SEND_Q_PSN	0
#define MAX_MGMT_CLASS		80
#define MAX_MGMT_VERSION	8
#define MAX_MGMT_OUI		8
#define MAX_MGMT_VENDOR_RANGE2	(IB_MGMT_CLASS_VENDOR_RANGE2_END - \
IB_MGMT_CLASS_VENDOR_RANGE2_START + 1)
struct ib_mad_list_head ;
struct ib_mad_private_header  __attribute__ ((packed));
struct ib_mad_private  __attribute__ ((packed));
struct ib_rmpp_segment ;
struct ib_mad_agent_private ;
struct ib_mad_snoop_private ;
struct ib_mad_send_wr_private ;
struct ib_mad_local_private ;
struct ib_mad_mgmt_method_table ;
struct ib_mad_mgmt_class_table ;
struct ib_mad_mgmt_vendor_class ;
struct ib_mad_mgmt_vendor_class_table ;
struct ib_mad_mgmt_version_table ;
struct ib_mad_queue ;
struct ib_mad_qp_info ;
struct ib_mad_port_private ;
int ib_send_mad(struct ib_mad_send_wr_private *mad_send_wr);
struct ib_mad_send_wr_private *
ib_find_send_mad(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_recv_wc *mad_recv_wc);
void ib_mad_complete_send_wr(struct ib_mad_send_wr_private *mad_send_wr,
struct ib_mad_send_wc *mad_send_wc);
void ib_mark_mad_done(struct ib_mad_send_wr_private *mad_send_wr);
void ib_reset_mad_timeout(struct ib_mad_send_wr_private *mad_send_wr,
int timeout_ms);
