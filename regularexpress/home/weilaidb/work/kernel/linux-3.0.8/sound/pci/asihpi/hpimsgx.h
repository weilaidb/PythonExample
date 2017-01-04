#define _HPIMSGX_H_
#define HPIMSGX_ALLADAPTERS     (0xFFFF)
void hpi_send_recv_ex(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner);
#define HPI_MESSAGE_LOWER_LAYER hpi_send_recv_ex
