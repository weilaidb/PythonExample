#define __CXIO_RESOURCE_H__
extern int cxio_hal_init_rhdl_resource(u32 nr_rhdl);
extern void cxio_hal_destroy_rhdl_resource(void);
extern int cxio_hal_init_resource(struct cxio_rdev *rdev_p,
u32 nr_tpt, u32 nr_pbl,
u32 nr_rqt, u32 nr_qpid, u32 nr_cqid,
u32 nr_pdid);
extern u32 cxio_hal_get_stag(struct cxio_hal_resource *rscp);
extern void cxio_hal_put_stag(struct cxio_hal_resource *rscp, u32 stag);
extern u32 cxio_hal_get_qpid(struct cxio_hal_resource *rscp);
extern void cxio_hal_put_qpid(struct cxio_hal_resource *rscp, u32 qpid);
extern u32 cxio_hal_get_cqid(struct cxio_hal_resource *rscp);
extern void cxio_hal_put_cqid(struct cxio_hal_resource *rscp, u32 cqid);
extern void cxio_hal_destroy_resource(struct cxio_hal_resource *rscp);
#define PBL_OFF(rdev_p, a) ( (a) - (rdev_p)->rnic_info.pbl_base )
extern int cxio_hal_pblpool_create(struct cxio_rdev *rdev_p);
extern void cxio_hal_pblpool_destroy(struct cxio_rdev *rdev_p);
extern u32 cxio_hal_pblpool_alloc(struct cxio_rdev *rdev_p, int size);
extern void cxio_hal_pblpool_free(struct cxio_rdev *rdev_p, u32 addr, int size);
#define RQT_OFF(rdev_p, a) ( (a) - (rdev_p)->rnic_info.rqt_base )
extern int cxio_hal_rqtpool_create(struct cxio_rdev *rdev_p);
extern void cxio_hal_rqtpool_destroy(struct cxio_rdev *rdev_p);
extern u32 cxio_hal_rqtpool_alloc(struct cxio_rdev *rdev_p, int size);
extern void cxio_hal_rqtpool_free(struct cxio_rdev *rdev_p, u32 addr, int size);
