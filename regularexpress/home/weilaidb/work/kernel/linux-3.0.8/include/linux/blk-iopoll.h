#define BLK_IOPOLL_H
struct blk_iopoll;
typedef int (blk_iopoll_fn)(struct blk_iopoll *, int);
struct blk_iopoll ;
enum ;
static inline int blk_iopoll_sched_prep(struct blk_iopoll *iop)
static inline int blk_iopoll_disable_pending(struct blk_iopoll *iop)
extern void blk_iopoll_sched(struct blk_iopoll *);
extern void blk_iopoll_init(struct blk_iopoll *, int, blk_iopoll_fn *);
extern void blk_iopoll_complete(struct blk_iopoll *);
extern void __blk_iopoll_complete(struct blk_iopoll *);
extern void blk_iopoll_enable(struct blk_iopoll *);
extern void blk_iopoll_disable(struct blk_iopoll *);
extern int blk_iopoll_enabled;
