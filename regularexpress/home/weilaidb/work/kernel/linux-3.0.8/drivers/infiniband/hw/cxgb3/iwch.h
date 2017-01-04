#define __IWCH_H__
struct iwch_pd;
struct iwch_cq;
struct iwch_qp;
struct iwch_mr;
struct iwch_rnic_attributes ;
struct iwch_dev ;
static inline struct iwch_dev *to_iwch_dev(struct ib_device *ibdev)
static inline struct iwch_dev *rdev_to_iwch_dev(struct cxio_rdev *rdev)
static inline int t3b_device(const struct iwch_dev *rhp)
static inline int t3a_device(const struct iwch_dev *rhp)
static inline struct iwch_cq *get_chp(struct iwch_dev *rhp, u32 cqid)
static inline struct iwch_qp *get_qhp(struct iwch_dev *rhp, u32 qpid)
static inline struct iwch_mr *get_mhp(struct iwch_dev *rhp, u32 mmid)
static inline int insert_handle(struct iwch_dev *rhp, struct idr *idr,
void *handle, u32 id)
static inline void remove_handle(struct iwch_dev *rhp, struct idr *idr, u32 id)
extern struct cxgb3_client t3c_client;
extern cxgb3_cpl_handler_func t3c_handlers[NUM_CPL_CMDS];
extern void iwch_ev_dispatch(struct cxio_rdev *rdev_p, struct sk_buff *skb);
