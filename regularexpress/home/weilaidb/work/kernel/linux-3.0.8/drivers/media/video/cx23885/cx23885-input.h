#define _CX23885_INPUT_H_
int cx23885_input_rx_work_handler(struct cx23885_dev *dev, u32 events);
int cx23885_input_init(struct cx23885_dev *dev);
void cx23885_input_fini(struct cx23885_dev *dev);
