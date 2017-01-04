int mei_ioctl_connect_client(struct file *file,
struct mei_connect_client_data *data)
struct mei_cl_cb *find_amthi_read_list_entry(
struct mei_device *dev,
struct file *file)
int amthi_read(struct mei_device *dev, struct file *file,
char __user *ubuf, size_t length, loff_t *offset)
int mei_start_read(struct mei_device *dev, struct mei_cl *cl)
int amthi_write(struct mei_device *dev, struct mei_cl_cb *cb)
void run_next_iamthif_cmd(struct mei_device *dev)
void mei_free_cb_private(struct mei_cl_cb *cb)
