#define SOUND_FIREWIRE_PACKETS_BUFFER_H_INCLUDED
struct iso_packets_buffer ;
int iso_packets_buffer_init(struct iso_packets_buffer *b, struct fw_unit *unit,
unsigned int count, unsigned int packet_size,
enum dma_data_direction direction);
void iso_packets_buffer_destroy(struct iso_packets_buffer *b,
struct fw_unit *unit);
