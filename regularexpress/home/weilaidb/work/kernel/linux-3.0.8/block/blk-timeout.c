static DECLARE_FAULT_ATTR(fail_io_timeout);
static int __init setup_fail_io_timeout(char *str)
__setup("fail_io_timeout=", setup_fail_io_timeout);
int blk_should_fake_timeout(struct request_queue *q)
static int __init fail_io_timeout_debugfs(void)
late_initcall(fail_io_timeout_debugfs);
ssize_t part_timeout_show(struct device *dev, struct device_attribute *attr,
char *buf)
ssize_t part_timeout_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
void blk_delete_timer(struct request *req)
static void blk_rq_timed_out(struct request *req)
void blk_rq_timed_out_timer(unsigned long data)
void blk_abort_request(struct request *req)
EXPORT_SYMBOL_GPL(blk_abort_request);
void blk_add_timer(struct request *req)
void blk_abort_queue(struct request_queue *q)
EXPORT_SYMBOL_GPL(blk_abort_queue);
