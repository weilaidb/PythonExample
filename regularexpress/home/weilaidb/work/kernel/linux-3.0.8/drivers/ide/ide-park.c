DECLARE_WAIT_QUEUE_HEAD(ide_park_wq);
static void issue_park_cmd(ide_drive_t *drive, unsigned long timeout)
ide_startstop_t ide_do_park_unpark(ide_drive_t *drive, struct request *rq)
ssize_t ide_park_show(struct device *dev, struct device_attribute *attr,
char *buf)
ssize_t ide_park_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
