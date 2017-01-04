#define __IWM_RX_H__
struct iwm_rx_ticket_node ;
struct iwm_rx_packet ;
void iwm_rx_worker(struct work_struct *work);
