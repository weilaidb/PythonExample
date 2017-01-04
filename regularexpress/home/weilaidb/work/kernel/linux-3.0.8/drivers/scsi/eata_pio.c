static unsigned int ISAbases[MAXISA] =	;
static unsigned int ISAirqs[MAXISA] = ;
static unsigned char EISAbases[] = ;
static unsigned int registered_HBAs;
static struct Scsi_Host *last_HBA;
static struct Scsi_Host *first_HBA;
static unsigned char reg_IRQ[16];
static unsigned char reg_IRQL[16];
static unsigned long int_counter;
static unsigned long queue_counter;
static struct scsi_host_template driver_template;
static int eata_pio_proc_info(struct Scsi_Host *shost, char *buffer, char **start, off_t offset,
int length, int rw)
static int eata_pio_release(struct Scsi_Host *sh)
static void IncStat(struct scsi_pointer *SCp, unsigned int Increment)
static irqreturn_t eata_pio_int_handler(int irq, void *dev_id);
static irqreturn_t do_eata_pio_int_handler(int irq, void *dev_id)
static irqreturn_t eata_pio_int_handler(int irq, void *dev_id)
static inline unsigned int eata_pio_send_command(unsigned long base, unsigned char command)
static int eata_pio_queue_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(eata_pio_queue)
static int eata_pio_abort(struct scsi_cmnd *cmd)
static int eata_pio_host_reset(struct scsi_cmnd *cmd)
static char *get_pio_board_data(unsigned long base, unsigned int irq, unsigned int id, unsigned long cplen, unsigned short cppadlen)
static int get_pio_conf_PIO(unsigned long base, struct get_conf *buf)
static void print_pio_config(struct get_conf *gc)
static unsigned int print_selftest(unsigned int base)
static int register_pio_HBA(long base, struct get_conf *gc, struct pci_dev *pdev)
static void find_pio_ISA(struct get_conf *buf)
static void find_pio_EISA(struct get_conf *buf)
static void find_pio_PCI(struct get_conf *buf)
static int eata_pio_detect(struct scsi_host_template *tpnt)
static struct scsi_host_template driver_template = ;
MODULE_AUTHOR("Michael Neuffer, Alfred Arnold");
MODULE_DESCRIPTION("EATA SCSI PIO driver");
MODULE_LICENSE("GPL");
