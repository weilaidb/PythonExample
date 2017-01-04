#define AMBA_PL08X_H
struct pl08x_lli;
struct pl08x_driver_data;
enum ;
struct pl08x_channel_data ;
struct pl08x_bus_data ;
struct pl08x_phy_chan ;
struct pl08x_txd ;
enum pl08x_dma_chan_state ;
struct pl08x_dma_chan ;
struct pl08x_platform_data ;
bool pl08x_filter_id(struct dma_chan *chan, void *chan_id);
static inline bool pl08x_filter_id(struct dma_chan *chan, void *chan_id)
