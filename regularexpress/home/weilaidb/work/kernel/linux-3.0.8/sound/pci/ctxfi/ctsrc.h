#define CTSRC_H
#define SRC_STATE_OFF	0x0
#define SRC_STATE_INIT	0x4
#define SRC_STATE_RUN	0x5
#define SRC_SF_U8	0x0
#define SRC_SF_S16	0x1
#define SRC_SF_S24	0x2
#define SRC_SF_S32	0x3
#define SRC_SF_F32	0x4
enum SRCMODE ;
struct src_rsc_ops;
struct src ;
struct src_rsc_ops ;
struct src_desc ;
struct src_mgr ;
struct srcimp_mgr;
struct srcimp_rsc_ops;
struct srcimp ;
struct srcimp_rsc_ops ;
struct srcimp_desc ;
struct srcimp_mgr ;
int src_mgr_create(void *hw, struct src_mgr **rsrc_mgr);
int src_mgr_destroy(struct src_mgr *src_mgr);
int srcimp_mgr_create(void *hw, struct srcimp_mgr **rsrc_mgr);
int srcimp_mgr_destroy(struct srcimp_mgr *srcimp_mgr);
