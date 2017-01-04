#define AVCODEC_MQC_H
#define MQC_CX_UNI 17
#define MQC_CX_RL  18
extern uint16_t ff_mqc_qe[2 * 47];
extern uint8_t  ff_mqc_nlps[2 * 47];
extern uint8_t  ff_mqc_nmps[2 * 47];
typedef struct MqcState  MqcState;
void ff_mqc_initenc(MqcState *mqc, uint8_t *bp);
void ff_mqc_encode(MqcState *mqc, uint8_t *cxstate, int d);
int ff_mqc_length(MqcState *mqc);
int ff_mqc_flush(MqcState *mqc);
int ff_mqc_flush_to(MqcState *mqc, uint8_t *dst, int *dst_len);
void ff_mqc_initdec(MqcState *mqc, uint8_t *bp, int raw, int reset);
int ff_mqc_decode(MqcState *mqc, uint8_t *cxstate);
void ff_mqc_init_context_tables(void);
void ff_mqc_init_contexts(MqcState *mqc);
