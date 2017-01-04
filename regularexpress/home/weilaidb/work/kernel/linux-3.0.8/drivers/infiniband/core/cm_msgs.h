#if !defined(CM_MSGS_H)
#define CM_MSGS_H
#define IB_CM_CLASS_VERSION	2
#define CM_REQ_ATTR_ID		cpu_to_be16(0x0010)
#define CM_MRA_ATTR_ID		cpu_to_be16(0x0011)
#define CM_REJ_ATTR_ID		cpu_to_be16(0x0012)
#define CM_REP_ATTR_ID		cpu_to_be16(0x0013)
#define CM_RTU_ATTR_ID		cpu_to_be16(0x0014)
#define CM_DREQ_ATTR_ID		cpu_to_be16(0x0015)
#define CM_DREP_ATTR_ID		cpu_to_be16(0x0016)
#define CM_SIDR_REQ_ATTR_ID	cpu_to_be16(0x0017)
#define CM_SIDR_REP_ATTR_ID	cpu_to_be16(0x0018)
#define CM_LAP_ATTR_ID		cpu_to_be16(0x0019)
#define CM_APR_ATTR_ID		cpu_to_be16(0x001A)
enum cm_msg_sequence ;
struct cm_req_msg  __attribute__ ((packed));
static inline __be32 cm_req_get_local_qpn(struct cm_req_msg *req_msg)
static inline void cm_req_set_local_qpn(struct cm_req_msg *req_msg, __be32 qpn)
static inline u8 cm_req_get_resp_res(struct cm_req_msg *req_msg)
static inline void cm_req_set_resp_res(struct cm_req_msg *req_msg, u8 resp_res)
static inline u8 cm_req_get_init_depth(struct cm_req_msg *req_msg)
static inline void cm_req_set_init_depth(struct cm_req_msg *req_msg,
u8 init_depth)
static inline u8 cm_req_get_remote_resp_timeout(struct cm_req_msg *req_msg)
static inline void cm_req_set_remote_resp_timeout(struct cm_req_msg *req_msg,
u8 resp_timeout)
static inline enum ib_qp_type cm_req_get_qp_type(struct cm_req_msg *req_msg)
static inline void cm_req_set_qp_type(struct cm_req_msg *req_msg,
enum ib_qp_type qp_type)
static inline u8 cm_req_get_flow_ctrl(struct cm_req_msg *req_msg)
static inline void cm_req_set_flow_ctrl(struct cm_req_msg *req_msg,
u8 flow_ctrl)
static inline __be32 cm_req_get_starting_psn(struct cm_req_msg *req_msg)
static inline void cm_req_set_starting_psn(struct cm_req_msg *req_msg,
__be32 starting_psn)
static inline u8 cm_req_get_local_resp_timeout(struct cm_req_msg *req_msg)
static inline void cm_req_set_local_resp_timeout(struct cm_req_msg *req_msg,
u8 resp_timeout)
static inline u8 cm_req_get_retry_count(struct cm_req_msg *req_msg)
static inline void cm_req_set_retry_count(struct cm_req_msg *req_msg,
u8 retry_count)
static inline u8 cm_req_get_path_mtu(struct cm_req_msg *req_msg)
static inline void cm_req_set_path_mtu(struct cm_req_msg *req_msg, u8 path_mtu)
static inline u8 cm_req_get_rnr_retry_count(struct cm_req_msg *req_msg)
static inline void cm_req_set_rnr_retry_count(struct cm_req_msg *req_msg,
u8 rnr_retry_count)
static inline u8 cm_req_get_max_cm_retries(struct cm_req_msg *req_msg)
static inline void cm_req_set_max_cm_retries(struct cm_req_msg *req_msg,
u8 retries)
static inline u8 cm_req_get_srq(struct cm_req_msg *req_msg)
static inline void cm_req_set_srq(struct cm_req_msg *req_msg, u8 srq)
static inline __be32 cm_req_get_primary_flow_label(struct cm_req_msg *req_msg)
static inline void cm_req_set_primary_flow_label(struct cm_req_msg *req_msg,
__be32 flow_label)
static inline u8 cm_req_get_primary_packet_rate(struct cm_req_msg *req_msg)
static inline void cm_req_set_primary_packet_rate(struct cm_req_msg *req_msg,
u8 rate)
static inline u8 cm_req_get_primary_sl(struct cm_req_msg *req_msg)
static inline void cm_req_set_primary_sl(struct cm_req_msg *req_msg, u8 sl)
static inline u8 cm_req_get_primary_subnet_local(struct cm_req_msg *req_msg)
static inline void cm_req_set_primary_subnet_local(struct cm_req_msg *req_msg,
u8 subnet_local)
static inline u8 cm_req_get_primary_local_ack_timeout(struct cm_req_msg *req_msg)
static inline void cm_req_set_primary_local_ack_timeout(struct cm_req_msg *req_msg,
u8 local_ack_timeout)
static inline __be32 cm_req_get_alt_flow_label(struct cm_req_msg *req_msg)
static inline void cm_req_set_alt_flow_label(struct cm_req_msg *req_msg,
__be32 flow_label)
static inline u8 cm_req_get_alt_packet_rate(struct cm_req_msg *req_msg)
static inline void cm_req_set_alt_packet_rate(struct cm_req_msg *req_msg,
u8 rate)
static inline u8 cm_req_get_alt_sl(struct cm_req_msg *req_msg)
static inline void cm_req_set_alt_sl(struct cm_req_msg *req_msg, u8 sl)
static inline u8 cm_req_get_alt_subnet_local(struct cm_req_msg *req_msg)
static inline void cm_req_set_alt_subnet_local(struct cm_req_msg *req_msg,
u8 subnet_local)
static inline u8 cm_req_get_alt_local_ack_timeout(struct cm_req_msg *req_msg)
static inline void cm_req_set_alt_local_ack_timeout(struct cm_req_msg *req_msg,
u8 local_ack_timeout)
enum cm_msg_response ;
struct cm_mra_msg  __attribute__ ((packed));
static inline u8 cm_mra_get_msg_mraed(struct cm_mra_msg *mra_msg)
static inline void cm_mra_set_msg_mraed(struct cm_mra_msg *mra_msg, u8 msg)
static inline u8 cm_mra_get_service_timeout(struct cm_mra_msg *mra_msg)
static inline void cm_mra_set_service_timeout(struct cm_mra_msg *mra_msg,
u8 service_timeout)
struct cm_rej_msg  __attribute__ ((packed));
static inline u8 cm_rej_get_msg_rejected(struct cm_rej_msg *rej_msg)
static inline void cm_rej_set_msg_rejected(struct cm_rej_msg *rej_msg, u8 msg)
static inline u8 cm_rej_get_reject_info_len(struct cm_rej_msg *rej_msg)
static inline void cm_rej_set_reject_info_len(struct cm_rej_msg *rej_msg,
u8 len)
struct cm_rep_msg  __attribute__ ((packed));
static inline __be32 cm_rep_get_local_qpn(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_local_qpn(struct cm_rep_msg *rep_msg, __be32 qpn)
static inline __be32 cm_rep_get_starting_psn(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_starting_psn(struct cm_rep_msg *rep_msg,
__be32 starting_psn)
static inline u8 cm_rep_get_target_ack_delay(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_target_ack_delay(struct cm_rep_msg *rep_msg,
u8 target_ack_delay)
static inline u8 cm_rep_get_failover(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_failover(struct cm_rep_msg *rep_msg, u8 failover)
static inline u8 cm_rep_get_flow_ctrl(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_flow_ctrl(struct cm_rep_msg *rep_msg,
u8 flow_ctrl)
static inline u8 cm_rep_get_rnr_retry_count(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_rnr_retry_count(struct cm_rep_msg *rep_msg,
u8 rnr_retry_count)
static inline u8 cm_rep_get_srq(struct cm_rep_msg *rep_msg)
static inline void cm_rep_set_srq(struct cm_rep_msg *rep_msg, u8 srq)
struct cm_rtu_msg  __attribute__ ((packed));
struct cm_dreq_msg  __attribute__ ((packed));
static inline __be32 cm_dreq_get_remote_qpn(struct cm_dreq_msg *dreq_msg)
static inline void cm_dreq_set_remote_qpn(struct cm_dreq_msg *dreq_msg, __be32 qpn)
struct cm_drep_msg  __attribute__ ((packed));
struct cm_lap_msg  __attribute__  ((packed));
static inline __be32 cm_lap_get_remote_qpn(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_remote_qpn(struct cm_lap_msg *lap_msg, __be32 qpn)
static inline u8 cm_lap_get_remote_resp_timeout(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_remote_resp_timeout(struct cm_lap_msg *lap_msg,
u8 resp_timeout)
static inline __be32 cm_lap_get_flow_label(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_flow_label(struct cm_lap_msg *lap_msg,
__be32 flow_label)
static inline u8 cm_lap_get_traffic_class(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_traffic_class(struct cm_lap_msg *lap_msg,
u8 traffic_class)
static inline u8 cm_lap_get_packet_rate(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_packet_rate(struct cm_lap_msg *lap_msg,
u8 packet_rate)
static inline u8 cm_lap_get_sl(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_sl(struct cm_lap_msg *lap_msg, u8 sl)
static inline u8 cm_lap_get_subnet_local(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_subnet_local(struct cm_lap_msg *lap_msg,
u8 subnet_local)
static inline u8 cm_lap_get_local_ack_timeout(struct cm_lap_msg *lap_msg)
static inline void cm_lap_set_local_ack_timeout(struct cm_lap_msg *lap_msg,
u8 local_ack_timeout)
struct cm_apr_msg  __attribute__ ((packed));
struct cm_sidr_req_msg  __attribute__ ((packed));
struct cm_sidr_rep_msg  __attribute__ ((packed));
static inline __be32 cm_sidr_rep_get_qpn(struct cm_sidr_rep_msg *sidr_rep_msg)
static inline void cm_sidr_rep_set_qpn(struct cm_sidr_rep_msg *sidr_rep_msg,
__be32 qpn)
