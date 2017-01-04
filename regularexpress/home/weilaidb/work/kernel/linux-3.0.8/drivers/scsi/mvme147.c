static irqreturn_t mvme147_intr(int irq, void *data)
static int dma_setup(struct scsi_cmnd *cmd, int dir_in)
static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
int mvme147_detect(struct scsi_host_template *tpnt)
static int mvme147_bus_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template driver_template = ;
int mvme147_release(struct Scsi_Host *instance)
