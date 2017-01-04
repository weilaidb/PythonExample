struct s3c2410_dma_buf;
struct s3c2410_dma_chan s3c2410_chans[S3C_DMA_CHANNELS];
struct s3c2410_dma_chan *s3c_dma_chan_map[DMACH_MAX];
struct s3c2410_dma_chan *s3c_dma_lookup_channel(unsigned int channel)
int s3c2410_dma_set_opfn(enum dma_ch channel, s3c2410_dma_opfn_t rtn)
EXPORT_SYMBOL(s3c2410_dma_set_opfn);
int s3c2410_dma_set_buffdone_fn(enum dma_ch channel, s3c2410_dma_cbfn_t rtn)
EXPORT_SYMBOL(s3c2410_dma_set_buffdone_fn);
int s3c2410_dma_setflags(enum dma_ch channel, unsigned int flags)
EXPORT_SYMBOL(s3c2410_dma_setflags);
