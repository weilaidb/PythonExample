#define DSPDEH_
struct deh_mgr;
struct dev_object;
struct dsp_notification;
int bridge_deh_create(struct deh_mgr **ret_deh,
struct dev_object *hdev_obj);
int bridge_deh_destroy(struct deh_mgr *deh);
int bridge_deh_register_notify(struct deh_mgr *deh,
u32 event_mask,
u32 notify_type,
struct dsp_notification *hnotification);
void bridge_deh_notify(struct deh_mgr *deh, int event, int info);
