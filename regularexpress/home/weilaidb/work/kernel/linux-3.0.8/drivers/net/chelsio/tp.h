#define CHELSIO_TP_H
#define TP_MAX_RX_COALESCING_SIZE 16224U
struct tp_mib_statistics ;
struct petp;
struct tp_params;
struct petp *t1_tp_create(adapter_t *adapter, struct tp_params *p);
void t1_tp_destroy(struct petp *tp);
void t1_tp_intr_disable(struct petp *tp);
void t1_tp_intr_enable(struct petp *tp);
void t1_tp_intr_clear(struct petp *tp);
int t1_tp_intr_handler(struct petp *tp);
void t1_tp_get_mib_statistics(adapter_t *adap, struct tp_mib_statistics *tps);
void t1_tp_set_tcp_checksum_offload(struct petp *tp, int enable);
void t1_tp_set_ip_checksum_offload(struct petp *tp, int enable);
int t1_tp_set_coalescing_size(struct petp *tp, unsigned int size);
int t1_tp_reset(struct petp *tp, struct tp_params *p, unsigned int tp_clk);
