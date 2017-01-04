#define _NET_BATMAN_ADV_RING_BUFFER_H_
void ring_buffer_set(uint8_t lq_recv[], uint8_t *lq_index, uint8_t value);
uint8_t ring_buffer_avg(uint8_t lq_recv[]);
