int iso_packets_buffer_init(struct iso_packets_buffer *b, struct fw_unit *unit,
unsigned int count, unsigned int packet_size,
enum dma_data_direction direction)
EXPORT_SYMBOL(iso_packets_buffer_init);
void iso_packets_buffer_destroy(struct iso_packets_buffer *b,
struct fw_unit *unit)
EXPORT_SYMBOL(iso_packets_buffer_destroy);
