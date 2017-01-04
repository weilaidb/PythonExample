#define _IPU_H_
enum ipu_channel ;
enum ipu_channel_status ;
#define IPU_CHANNELS_NUM 32
enum pixel_fmt ;
enum ipu_color_space ;
enum ipu_rotate_mode ;
struct ipu_platform_data ;
enum display_port ;
struct idmac_video_param ;
union ipu_channel_param ;
struct idmac_tx_desc ;
struct idmac_channel ;
#define to_tx_desc(tx) container_of(tx, struct idmac_tx_desc, txd)
#define to_idmac_chan(c) container_of(c, struct idmac_channel, dma_chan)
