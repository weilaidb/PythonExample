#define MODULE_NAME "cx23885"
static void cx23885_input_process_measurements(struct cx23885_dev *dev,
bool overrun)
void cx23885_input_rx_work_handler(struct cx23885_dev *dev, u32 events)
static int cx23885_input_ir_start(struct cx23885_dev *dev)
static int cx23885_input_ir_open(struct rc_dev *rc)
static void cx23885_input_ir_stop(struct cx23885_dev *dev)
static void cx23885_input_ir_close(struct rc_dev *rc)
int cx23885_input_init(struct cx23885_dev *dev)
void cx23885_input_fini(struct cx23885_dev *dev)
