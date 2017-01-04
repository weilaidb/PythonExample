#define _CX23885_IR_H_
void cx23885_ir_rx_v4l2_dev_notify(struct v4l2_subdev *sd, u32 events);
void cx23885_ir_tx_v4l2_dev_notify(struct v4l2_subdev *sd, u32 events);
void cx23885_ir_rx_work_handler(struct work_struct *work);
void cx23885_ir_tx_work_handler(struct work_struct *work);
