#define _MEI_INTERFACE_H_
#define AMT_WD_VALUE 120
#define MEI_WATCHDOG_DATA_SIZE         16
#define MEI_START_WD_DATA_SIZE         20
#define MEI_WD_PARAMS_SIZE             4
void mei_read_slots(struct mei_device *dev,
unsigned char *buffer, unsigned long buffer_length);
int mei_write_message(struct mei_device *dev,
struct mei_msg_hdr *header,
unsigned char *write_buffer,
unsigned long write_length);
int mei_host_buffer_is_empty(struct mei_device *dev);
int mei_count_full_read_slots(struct mei_device *dev);
int mei_count_empty_write_slots(struct mei_device *dev);
int mei_flow_ctrl_creds(struct mei_device *dev, struct mei_cl *cl);
int mei_wd_send(struct mei_device *dev);
int mei_wd_stop(struct mei_device *dev, bool preserve);
void mei_wd_host_init(struct mei_device *dev);
void mei_wd_start_setup(struct mei_device *dev);
int mei_flow_ctrl_reduce(struct mei_device *dev, struct mei_cl *cl);
int mei_send_flow_control(struct mei_device *dev, struct mei_cl *cl);
int mei_disconnect(struct mei_device *dev, struct mei_cl *cl);
int mei_other_client_is_connecting(struct mei_device *dev, struct mei_cl *cl);
int mei_connect(struct mei_device *dev, struct mei_cl *cl);
