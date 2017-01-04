static void
ccw_device_msg_control_check(struct ccw_device *cdev, struct irb *irb)
static void
ccw_device_path_notoper(struct ccw_device *cdev)
static void
ccw_device_accumulate_ecw(struct ccw_device *cdev, struct irb *irb)
static int
ccw_device_accumulate_esw_valid(struct irb *irb)
static void
ccw_device_accumulate_esw(struct ccw_device *cdev, struct irb *irb)
void
ccw_device_accumulate_irb(struct ccw_device *cdev, struct irb *irb)
int
ccw_device_do_sense(struct ccw_device *cdev, struct irb *irb)
void
ccw_device_accumulate_basic_sense(struct ccw_device *cdev, struct irb *irb)
int
ccw_device_accumulate_and_sense(struct ccw_device *cdev, struct irb *irb)
