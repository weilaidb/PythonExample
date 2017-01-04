#define _NET_BATMAN_ADV_BITARRAY_H_
#define WORD_BIT_SIZE (sizeof(unsigned long) * 8)
uint8_t get_bit_status(unsigned long *seq_bits, uint32_t last_seqno,
uint32_t curr_seqno);
void bit_mark(unsigned long *seq_bits, int32_t n);
char bit_get_packet(void *priv, unsigned long *seq_bits,
int32_t seq_num_diff, int8_t set_mark);
int  bit_packet_count(unsigned long *seq_bits);
