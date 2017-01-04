#define CTDAIO_H
enum DAIOTYP ;
struct dao_rsc_ops;
struct dai_rsc_ops;
struct daio_mgr;
struct daio ;
struct dao ;
struct dai ;
struct dao_desc ;
struct dao_rsc_ops ;
struct dai_rsc_ops ;
struct daio_desc ;
struct daio_mgr ;
int daio_mgr_create(void *hw, struct daio_mgr **rdaio_mgr);
int daio_mgr_destroy(struct daio_mgr *daio_mgr);
