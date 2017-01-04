enum s3c2410_dma_buffresult ;
enum s3c2410_dmasrc ;
enum s3c2410_chan_op ;
struct s3c2410_dma_client ;
struct s3c2410_dma_chan;
enum dma_ch;
typedef void (*s3c2410_dma_cbfn_t)(struct s3c2410_dma_chan *,
void *buf, int size,
enum s3c2410_dma_buffresult result);
typedef int  (*s3c2410_dma_opfn_t)(struct s3c2410_dma_chan *,
enum s3c2410_chan_op );
extern int s3c2410_dma_request(enum dma_ch channel,
struct s3c2410_dma_client *, void *dev);
extern int s3c2410_dma_ctrl(enum dma_ch channel, enum s3c2410_chan_op op);
extern int s3c2410_dma_setflags(enum dma_ch channel,
unsigned int flags);
extern int s3c2410_dma_free(enum dma_ch channel, struct s3c2410_dma_client *);
extern int s3c2410_dma_enqueue(enum dma_ch channel, void *id,
dma_addr_t data, int size);
extern int s3c2410_dma_config(enum dma_ch channel, int xferunit);
extern int s3c2410_dma_devconfig(enum dma_ch channel,
enum s3c2410_dmasrc source, unsigned long devaddr);
extern int s3c2410_dma_getposition(enum dma_ch channel,
dma_addr_t *src, dma_addr_t *dest);
extern int s3c2410_dma_set_opfn(enum dma_ch, s3c2410_dma_opfn_t rtn);
extern int s3c2410_dma_set_buffdone_fn(enum dma_ch, s3c2410_dma_cbfn_t rtn);
