#define CTRESOURCE_H
enum RSCTYP ;
struct rsc_ops;
struct rsc ;
struct rsc_ops ;
int rsc_init(struct rsc *rsc, u32 idx, enum RSCTYP type, u32 msr, void *hw);
int rsc_uninit(struct rsc *rsc);
struct rsc_mgr ;
int rsc_mgr_init(struct rsc_mgr *mgr, enum RSCTYP type,
unsigned int amount, void *hw);
int rsc_mgr_uninit(struct rsc_mgr *mgr);
int mgr_get_resource(struct rsc_mgr *mgr, unsigned int n, unsigned int *ridx);
int mgr_put_resource(struct rsc_mgr *mgr, unsigned int n, unsigned int idx);
