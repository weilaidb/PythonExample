static u32 refs;
int chnl_create(struct chnl_mgr **channel_mgr,
struct dev_object *hdev_obj,
const struct chnl_mgrattrs *mgr_attrts)
int chnl_destroy(struct chnl_mgr *hchnl_mgr)
void chnl_exit(void)
bool chnl_init(void)
