#define CFSRVL_H_
struct cfsrvl ;
struct cflayer *cfvei_create(u8 linkid, struct dev_info *dev_info);
struct cflayer *cfdgml_create(u8 linkid, struct dev_info *dev_info);
struct cflayer *cfutill_create(u8 linkid, struct dev_info *dev_info);
struct cflayer *cfvidl_create(u8 linkid, struct dev_info *dev_info);
struct cflayer *cfrfml_create(u8 linkid, struct dev_info *dev_info,
int mtu_size);
struct cflayer *cfdbgl_create(u8 linkid, struct dev_info *dev_info);
void cfsrvl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid);
bool cfsrvl_phyid_match(struct cflayer *layer, int phyid);
void cfsrvl_init(struct cfsrvl *service,
u8 channel_id,
struct dev_info *dev_info,
bool supports_flowctrl);
bool cfsrvl_ready(struct cfsrvl *service, int *err);
u8 cfsrvl_getphyid(struct cflayer *layer);
static inline void cfsrvl_get(struct cflayer *layr)
static inline void cfsrvl_put(struct cflayer *layr)
