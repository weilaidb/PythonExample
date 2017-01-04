#define __MAD_RMPP_H__
enum ;
int ib_send_rmpp_mad(struct ib_mad_send_wr_private *mad_send_wr);
struct ib_mad_recv_wc *
ib_process_rmpp_recv_wc(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc);
int ib_process_rmpp_send_wc(struct ib_mad_send_wr_private *mad_send_wr,
struct ib_mad_send_wc *mad_send_wc);
void ib_rmpp_send_handler(struct ib_mad_send_wc *mad_send_wc);
void ib_cancel_rmpp_recvs(struct ib_mad_agent_private *agent);
int ib_retry_rmpp(struct ib_mad_send_wr_private *mad_send_wr);
