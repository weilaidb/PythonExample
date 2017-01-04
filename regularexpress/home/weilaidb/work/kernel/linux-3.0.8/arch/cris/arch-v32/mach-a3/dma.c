static char used_dma_channels[MAX_DMA_CHANNELS];
static const char *used_dma_channels_users[MAX_DMA_CHANNELS];
static DEFINE_SPINLOCK(dma_lock);
int crisv32_request_dma(unsigned int dmanr, const char *device_id,
unsigned options, unsigned int bandwidth, enum dma_owner owner)
void crisv32_free_dma(unsigned int dmanr)
