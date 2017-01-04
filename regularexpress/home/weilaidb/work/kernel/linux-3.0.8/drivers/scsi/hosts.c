static atomic_t scsi_host_next_hn;
static void scsi_host_cls_release(struct device *dev)
static struct class shost_class = ;
int scsi_host_set_state(struct Scsi_Host *shost, enum scsi_host_state state)
EXPORT_SYMBOL(scsi_host_set_state);
void scsi_remove_host(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_remove_host);
int scsi_add_host_with_dma(struct Scsi_Host *shost, struct device *dev,
struct device *dma_dev)
EXPORT_SYMBOL(scsi_add_host_with_dma);
static void scsi_host_dev_release(struct device *dev)
static struct device_type scsi_host_type = ;
struct Scsi_Host *scsi_host_alloc(struct scsi_host_template *sht, int privsize)
EXPORT_SYMBOL(scsi_host_alloc);
struct Scsi_Host *scsi_register(struct scsi_host_template *sht, int privsize)
EXPORT_SYMBOL(scsi_register);
void scsi_unregister(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_unregister);
static int __scsi_host_match(struct device *dev, void *data)
struct Scsi_Host *scsi_host_lookup(unsigned short hostnum)
EXPORT_SYMBOL(scsi_host_lookup);
struct Scsi_Host *scsi_host_get(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_host_get);
void scsi_host_put(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_host_put);
int scsi_init_hosts(void)
void scsi_exit_hosts(void)
int scsi_is_host_device(const struct device *dev)
EXPORT_SYMBOL(scsi_is_host_device);
int scsi_queue_work(struct Scsi_Host *shost, struct work_struct *work)
EXPORT_SYMBOL_GPL(scsi_queue_work);
void scsi_flush_work(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(scsi_flush_work);
