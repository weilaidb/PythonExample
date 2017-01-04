#define MSG_
extern int msg_create(struct msg_mgr **msg_man,
struct dev_object *hdev_obj,
msg_onexit msg_callback);
extern void msg_delete(struct msg_mgr *hmsg_mgr);
extern void msg_exit(void);
extern bool msg_mod_init(void);
