static u32 refs;
int msg_create(struct msg_mgr **msg_man,
struct dev_object *hdev_obj, msg_onexit msg_callback)
void msg_delete(struct msg_mgr *hmsg_mgr)
void msg_exit(void)
bool msg_mod_init(void)
