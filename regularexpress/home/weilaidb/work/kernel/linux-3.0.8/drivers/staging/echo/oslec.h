#define __OSLEC_H
#define ECHO_CAN_USE_ADAPTION	0x01
#define ECHO_CAN_USE_NLP	0x02
#define ECHO_CAN_USE_CNG	0x04
#define ECHO_CAN_USE_CLIP	0x08
#define ECHO_CAN_USE_TX_HPF	0x10
#define ECHO_CAN_USE_RX_HPF	0x20
#define ECHO_CAN_DISABLE	0x40
struct oslec_state;
struct oslec_state *oslec_create(int len, int adaption_mode);
void oslec_free(struct oslec_state *ec);
void oslec_flush(struct oslec_state *ec);
void oslec_adaption_mode(struct oslec_state *ec, int adaption_mode);
void oslec_snapshot(struct oslec_state *ec);
int16_t oslec_update(struct oslec_state *ec, int16_t tx, int16_t rx);
int16_t oslec_hpf_tx(struct oslec_state *ec, int16_t tx);
