static BLOCKING_NOTIFIER_HEAD(ipcns_chain);
static int ipcns_callback(struct notifier_block *self,
unsigned long action, void *arg)
int register_ipcns_notifier(struct ipc_namespace *ns)
int cond_register_ipcns_notifier(struct ipc_namespace *ns)
void unregister_ipcns_notifier(struct ipc_namespace *ns)
int ipcns_notify(unsigned long val)
