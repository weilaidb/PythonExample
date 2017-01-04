void mei_hcsr_set(struct mei_device *dev)
void mei_enable_interrupts(struct mei_device *dev)
void mei_disable_interrupts(struct mei_device *dev)
static unsigned char _host_get_filled_slots(const struct mei_device *dev)
int mei_host_buffer_is_empty(struct mei_device *dev)
int mei_count_empty_write_slots(struct mei_device *dev)
int mei_write_message(struct mei_device *dev,
struct mei_msg_hdr *header,
unsigned char *write_buffer,
unsigned long write_length)
int mei_count_full_read_slots(struct mei_device *dev)
void mei_read_slots(struct mei_device *dev,
unsigned char *buffer, unsigned long buffer_length)
int mei_flow_ctrl_creds(struct mei_device *dev, struct mei_cl *cl)
int mei_flow_ctrl_reduce(struct mei_device *dev, struct mei_cl *cl)
int mei_send_flow_control(struct mei_device *dev, struct mei_cl *cl)
int mei_other_client_is_connecting(struct mei_device *dev,
struct mei_cl *cl)
int mei_disconnect(struct mei_device *dev, struct mei_cl *cl)
int mei_connect(struct mei_device *dev, struct mei_cl *cl)
