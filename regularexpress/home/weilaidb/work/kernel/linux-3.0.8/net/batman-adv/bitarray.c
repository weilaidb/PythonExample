uint8_t get_bit_status(unsigned long *seq_bits, uint32_t last_seqno,
uint32_t curr_seqno)
void bit_mark(unsigned long *seq_bits, int32_t n)
static void bit_shift(unsigned long *seq_bits, int32_t n)
static void bit_reset_window(unsigned long *seq_bits)
char bit_get_packet(void *priv, unsigned long *seq_bits,
int32_t seq_num_diff, int8_t set_mark)
int bit_packet_count(unsigned long *seq_bits)
