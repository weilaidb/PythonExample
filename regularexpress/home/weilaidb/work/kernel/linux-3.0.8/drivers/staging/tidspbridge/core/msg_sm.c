static int add_new_msg(struct list_head *msg_list);
static void delete_msg_mgr(struct msg_mgr *hmsg_mgr);
static void delete_msg_queue(struct msg_queue *msg_queue_obj, u32 num_to_dsp);
static void free_msg_list(struct list_head *msg_list);
int bridge_msg_create(struct msg_mgr **msg_man,
struct dev_object *hdev_obj,
msg_onexit msg_callback)
int bridge_msg_create_queue(struct msg_mgr *hmsg_mgr, struct msg_queue **msgq,
u32 msgq_id, u32 max_msgs, void *arg)
void bridge_msg_delete(struct msg_mgr *hmsg_mgr)
void bridge_msg_delete_queue(struct msg_queue *msg_queue_obj)
int bridge_msg_get(struct msg_queue *msg_queue_obj,
struct dsp_msg *pmsg, u32 utimeout)
int bridge_msg_put(struct msg_queue *msg_queue_obj,
const struct dsp_msg *pmsg, u32 utimeout)
int bridge_msg_register_notify(struct msg_queue *msg_queue_obj,
u32 event_mask, u32 notify_type,
struct dsp_notification *hnotification)
void bridge_msg_set_queue_id(struct msg_queue *msg_queue_obj, u32 msgq_id)
static int add_new_msg(struct list_head *msg_list)
static void delete_msg_mgr(struct msg_mgr *hmsg_mgr)
static void delete_msg_queue(struct msg_queue *msg_queue_obj, u32 num_to_dsp)
static void free_msg_list(struct list_head *msg_list)
