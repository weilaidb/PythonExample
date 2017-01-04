#define CX23885_IR_RX_FIFO_SERVICE_REQ		0
#define CX23885_IR_RX_END_OF_RX_DETECTED	1
#define CX23885_IR_RX_HW_FIFO_OVERRUN		2
#define CX23885_IR_RX_SW_FIFO_OVERRUN		3
#define CX23885_IR_TX_FIFO_SERVICE_REQ		0
void cx23885_ir_rx_work_handler(struct work_struct *work)
void cx23885_ir_tx_work_handler(struct work_struct *work)
void cx23885_ir_rx_v4l2_dev_notify(struct v4l2_subdev *sd, u32 events)
void cx23885_ir_tx_v4l2_dev_notify(struct v4l2_subdev *sd, u32 events)
