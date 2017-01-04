int fw_iso_buffer_init(struct fw_iso_buffer *buffer, struct fw_card *card,
int page_count, enum dma_data_direction direction)
EXPORT_SYMBOL(fw_iso_buffer_init);
int fw_iso_buffer_map(struct fw_iso_buffer *buffer, struct vm_area_struct *vma)
void fw_iso_buffer_destroy(struct fw_iso_buffer *buffer,
struct fw_card *card)
EXPORT_SYMBOL(fw_iso_buffer_destroy);
size_t fw_iso_buffer_lookup(struct fw_iso_buffer *buffer, dma_addr_t completed)
struct fw_iso_context *fw_iso_context_create(struct fw_card *card,
int type, int channel, int speed, size_t header_size,
fw_iso_callback_t callback, void *callback_data)
EXPORT_SYMBOL(fw_iso_context_create);
void fw_iso_context_destroy(struct fw_iso_context *ctx)
EXPORT_SYMBOL(fw_iso_context_destroy);
int fw_iso_context_start(struct fw_iso_context *ctx,
int cycle, int sync, int tags)
EXPORT_SYMBOL(fw_iso_context_start);
int fw_iso_context_set_channels(struct fw_iso_context *ctx, u64 *channels)
int fw_iso_context_queue(struct fw_iso_context *ctx,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload)
EXPORT_SYMBOL(fw_iso_context_queue);
void fw_iso_context_queue_flush(struct fw_iso_context *ctx)
EXPORT_SYMBOL(fw_iso_context_queue_flush);
int fw_iso_context_stop(struct fw_iso_context *ctx)
EXPORT_SYMBOL(fw_iso_context_stop);
static int manage_bandwidth(struct fw_card *card, int irm_id, int generation,
int bandwidth, bool allocate)
static int manage_channel(struct fw_card *card, int irm_id, int generation,
u32 channels_mask, u64 offset, bool allocate)
static void deallocate_channel(struct fw_card *card, int irm_id,
int generation, int channel)
void fw_iso_resource_manage(struct fw_card *card, int generation,
u64 channels_mask, int *channel, int *bandwidth,
bool allocate)
EXPORT_SYMBOL(fw_iso_resource_manage);
