#define SETS(var, reg, field, val) var = (var & ~IO_MASK_(reg##_, field##_)) | \
IO_STATE_(reg##_, field##_, _##val)
static char used_dma_channels[MAX_DMA_CHANNELS];
static const char * used_dma_channels_users[MAX_DMA_CHANNELS];
int cris_request_dma(unsigned int dmanr, const char * device_id,
unsigned options, enum dma_owner owner)
void cris_free_dma(unsigned int dmanr, const char * device_id)
EXPORT_SYMBOL(cris_request_dma);
EXPORT_SYMBOL(cris_free_dma);
