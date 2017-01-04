#define __DAVINCI_CPDMA_H__
#define CPDMA_MAX_CHANNELS	BITS_PER_LONG
#define tx_chan_num(chan)	(chan)
#define rx_chan_num(chan)	((chan) + CPDMA_MAX_CHANNELS)
#define is_rx_chan(chan)	((chan)->chan_num >= CPDMA_MAX_CHANNELS)
#define is_tx_chan(chan)	(!is_rx_chan(chan))
#define __chan_linear(chan_num)	((chan_num) & (CPDMA_MAX_CHANNELS - 1))
#define chan_linear(chan)	__chan_linear((chan)->chan_num)
struct cpdma_params ;
struct cpdma_chan_stats ;
struct cpdma_ctlr;
struct cpdma_chan;
typedef void (*cpdma_handler_fn)(void *token, int len, int status);
struct cpdma_ctlr *cpdma_ctlr_create(struct cpdma_params *params);
int cpdma_ctlr_destroy(struct cpdma_ctlr *ctlr);
int cpdma_ctlr_start(struct cpdma_ctlr *ctlr);
int cpdma_ctlr_stop(struct cpdma_ctlr *ctlr);
int cpdma_ctlr_dump(struct cpdma_ctlr *ctlr);
struct cpdma_chan *cpdma_chan_create(struct cpdma_ctlr *ctlr, int chan_num,
cpdma_handler_fn handler);
int cpdma_chan_destroy(struct cpdma_chan *chan);
int cpdma_chan_start(struct cpdma_chan *chan);
int cpdma_chan_stop(struct cpdma_chan *chan);
int cpdma_chan_dump(struct cpdma_chan *chan);
int cpdma_chan_get_stats(struct cpdma_chan *chan,
struct cpdma_chan_stats *stats);
int cpdma_chan_submit(struct cpdma_chan *chan, void *token, void *data,
int len, gfp_t gfp_mask);
int cpdma_chan_process(struct cpdma_chan *chan, int quota);
int cpdma_ctlr_int_ctrl(struct cpdma_ctlr *ctlr, bool enable);
void cpdma_ctlr_eoi(struct cpdma_ctlr *ctlr);
int cpdma_chan_int_ctrl(struct cpdma_chan *chan, bool enable);
enum cpdma_control ;
int cpdma_control_get(struct cpdma_ctlr *ctlr, int control);
int cpdma_control_set(struct cpdma_ctlr *ctlr, int control, int value);
