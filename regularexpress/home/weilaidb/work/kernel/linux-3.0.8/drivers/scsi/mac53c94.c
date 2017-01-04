enum fsc_phase ;
struct fsc_state ;
static void mac53c94_init(struct fsc_state *);
static void mac53c94_start(struct fsc_state *);
static void mac53c94_interrupt(int, void *);
static irqreturn_t do_mac53c94_interrupt(int, void *);
static void cmd_done(struct fsc_state *, int result);
static void set_dma_cmds(struct fsc_state *, struct scsi_cmnd *);
static int mac53c94_queue_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(mac53c94_queue)
static int mac53c94_host_reset(struct scsi_cmnd *cmd)
static void mac53c94_init(struct fsc_state *state)
static void mac53c94_start(struct fsc_state *state)
static irqreturn_t do_mac53c94_interrupt(int irq, void *dev_id)
static void mac53c94_interrupt(int irq, void *dev_id)
static void cmd_done(struct fsc_state *state, int result)
static void set_dma_cmds(struct fsc_state *state, struct scsi_cmnd *cmd)
static struct scsi_host_template mac53c94_template = ;
static int mac53c94_probe(struct macio_dev *mdev, const struct of_device_id *match)
static int mac53c94_remove(struct macio_dev *mdev)
static struct of_device_id mac53c94_match[] =
;
MODULE_DEVICE_TABLE (of, mac53c94_match);
static struct macio_driver mac53c94_driver =
;
static int __init init_mac53c94(void)
static void __exit exit_mac53c94(void)
module_init(init_mac53c94);
module_exit(exit_mac53c94);
MODULE_DESCRIPTION("PowerMac 53c94 SCSI driver");
MODULE_AUTHOR("Paul Mackerras <paulus@samba.org>");
MODULE_LICENSE("GPL");
