#define __PL330_CORE_H
#define PL330_MAX_CHAN		8
#define PL330_MAX_IRQS		32
#define PL330_MAX_PERI		32
enum pl330_srccachectrl ;
enum pl330_dstcachectrl ;
struct pl330_config ;
struct pl330_info ;
enum pl330_byteswap ;
struct pl330_reqcfg ;
struct pl330_xfer ;
enum pl330_op_err ;
enum pl330_reqtype ;
struct pl330_req ;
struct pl330_chanstatus ;
enum pl330_chan_op ;
extern int pl330_add(struct pl330_info *);
extern void pl330_del(struct pl330_info *pi);
extern int pl330_update(const struct pl330_info *pi);
extern void pl330_release_channel(void *ch_id);
extern void *pl330_request_channel(const struct pl330_info *pi);
extern int pl330_chan_status(void *ch_id, struct pl330_chanstatus *pstatus);
extern int pl330_chan_ctrl(void *ch_id, enum pl330_chan_op op);
extern int pl330_submit_req(void *ch_id, struct pl330_req *r);
