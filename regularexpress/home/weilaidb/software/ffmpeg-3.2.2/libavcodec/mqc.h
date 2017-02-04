#define AVCODEC_MQC_H
#define MQC_CX_UNI 17
#define MQC_CX_RL  18
extern uint16_t ff_mqc_qe[2 * 47];
extern uint8_t  ff_mqc_nlps[2 * 47];
extern uint8_t  ff_mqc_nmps[2 * 47];
typedef struct MqcState  MqcState;
ff_mqc_initenc;
ff_mqc_encode;
ff_mqc_length;
ff_mqc_flush;
ff_mqc_flush_to;
ff_mqc_initdec;
ff_mqc_decode;
ff_mqc_init_context_tables;
ff_mqc_init_contexts;
