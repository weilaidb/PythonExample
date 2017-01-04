int
diva_data_q_init(diva_um_idi_data_queue_t * q,
int max_length, int max_segments)
int diva_data_q_finit(diva_um_idi_data_queue_t * q)
int diva_data_q_get_max_length(const diva_um_idi_data_queue_t * q)
void *diva_data_q_get_segment4write(diva_um_idi_data_queue_t * q)
void
diva_data_q_ack_segment4write(diva_um_idi_data_queue_t * q, int length)
const void *diva_data_q_get_segment4read(const diva_um_idi_data_queue_t *
q)
int diva_data_q_get_segment_length(const diva_um_idi_data_queue_t * q)
void diva_data_q_ack_segment4read(diva_um_idi_data_queue_t * q)
