static int       trans_mode = 0;
module_param     (trans_mode, int, 0);
MODULE_PARM_DESC(trans_mode, "transfer mode (0: BIOS(default) 1: Async 2: Ultra20M");
#define ASYNC_MODE    1
#define ULTRA20M_MODE 2
static int       auto_param = 0;
module_param     (auto_param, bool, 0);
MODULE_PARM_DESC(auto_param, "AutoParameter mode (0: ON(default) 1: OFF)");
static int       disc_priv  = 1;
module_param     (disc_priv, bool, 0);
MODULE_PARM_DESC(disc_priv,  "disconnection privilege mode (0: ON 1: OFF(default))");
MODULE_AUTHOR("YOKOTA Hiroshi <yokota@netlab.is.tsukuba.ac.jp>, GOTO Masanori <gotom@debian.or.jp>");
MODULE_DESCRIPTION("Workbit NinjaSCSI-32Bi/UDE CardBus/PCI SCSI host bus adapter module");
MODULE_LICENSE("GPL");
static const char *nsp32_release_version = "1.2";
static struct pci_device_id nsp32_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, nsp32_pci_table);
static nsp32_hw_data nsp32_data_base;
static nsp32_sync_table nsp32_sync_table_40M[] = ;
static nsp32_sync_table nsp32_sync_table_20M[] = ;
static nsp32_sync_table nsp32_sync_table_pci[] = ;
static int  __devinit nsp32_probe (struct pci_dev *, const struct pci_device_id *);
static void __devexit nsp32_remove(struct pci_dev *);
static int  __init    init_nsp32  (void);
static void __exit    exit_nsp32  (void);
static int         nsp32_proc_info   (struct Scsi_Host *, char *, char **, off_t, int, int);
static int         nsp32_detect      (struct pci_dev *pdev);
static int         nsp32_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
static const char *nsp32_info        (struct Scsi_Host *);
static int         nsp32_release     (struct Scsi_Host *);
static int         nsp32_eh_abort     (struct scsi_cmnd *);
static int         nsp32_eh_bus_reset (struct scsi_cmnd *);
static int         nsp32_eh_host_reset(struct scsi_cmnd *);
static void nsp32_build_identify(struct scsi_cmnd *);
static void nsp32_build_nop     (struct scsi_cmnd *);
static void nsp32_build_reject  (struct scsi_cmnd *);
static void nsp32_build_sdtr    (struct scsi_cmnd *, unsigned char, unsigned char);
static int  nsp32_busfree_occur(struct scsi_cmnd *, unsigned short);
static void nsp32_msgout_occur (struct scsi_cmnd *);
static void nsp32_msgin_occur  (struct scsi_cmnd *, unsigned long, unsigned short);
static int  nsp32_setup_sg_table    (struct scsi_cmnd *);
static int  nsp32_selection_autopara(struct scsi_cmnd *);
static int  nsp32_selection_autoscsi(struct scsi_cmnd *);
static void nsp32_scsi_done         (struct scsi_cmnd *);
static int  nsp32_arbitration       (struct scsi_cmnd *, unsigned int);
static int  nsp32_reselection       (struct scsi_cmnd *, unsigned char);
static void nsp32_adjust_busfree    (struct scsi_cmnd *, unsigned int);
static void nsp32_restart_autoscsi  (struct scsi_cmnd *, unsigned short);
static void nsp32_analyze_sdtr       (struct scsi_cmnd *);
static int  nsp32_search_period_entry(nsp32_hw_data *, nsp32_target *, unsigned char);
static void nsp32_set_async          (nsp32_hw_data *, nsp32_target *);
static void nsp32_set_max_sync       (nsp32_hw_data *, nsp32_target *, unsigned char *, unsigned char *);
static void nsp32_set_sync_entry     (nsp32_hw_data *, nsp32_target *, int, unsigned char);
static void nsp32_wait_req    (nsp32_hw_data *, int);
static void nsp32_wait_sack   (nsp32_hw_data *, int);
static void nsp32_sack_assert (nsp32_hw_data *);
static void nsp32_sack_negate (nsp32_hw_data *);
static void nsp32_do_bus_reset(nsp32_hw_data *);
static irqreturn_t do_nsp32_isr(int, void *);
static int  nsp32hw_init(nsp32_hw_data *);
static        int  nsp32_getprom_param (nsp32_hw_data *);
static        int  nsp32_getprom_at24  (nsp32_hw_data *);
static        int  nsp32_getprom_c16   (nsp32_hw_data *);
static        void nsp32_prom_start    (nsp32_hw_data *);
static        void nsp32_prom_stop     (nsp32_hw_data *);
static        int  nsp32_prom_read     (nsp32_hw_data *, int);
static        int  nsp32_prom_read_bit (nsp32_hw_data *);
static        void nsp32_prom_write_bit(nsp32_hw_data *, int);
static        void nsp32_prom_set      (nsp32_hw_data *, int, int);
static        int  nsp32_prom_get      (nsp32_hw_data *, int);
static void nsp32_message (const char *, int, char *, char *, ...);
static void nsp32_dmessage(const char *, int, int,    char *, ...);
static struct scsi_host_template nsp32_template = ;
# define NSP32_DEBUG_MASK	      0x000000
# define nsp32_msg(type, args...)     nsp32_message ("", 0, (type), args)
# define nsp32_dbg(mask, args...)
# define NSP32_DEBUG_MASK	      0xffffff
# define nsp32_msg(type, args...) \
nsp32_message (__func__, __LINE__, (type), args)
# define nsp32_dbg(mask, args...) \
nsp32_dmessage(__func__, __LINE__, (mask), args)
#define NSP32_DEBUG_QUEUECOMMAND	BIT(0)
#define NSP32_DEBUG_REGISTER		BIT(1)
#define NSP32_DEBUG_AUTOSCSI		BIT(2)
#define NSP32_DEBUG_INTR		BIT(3)
#define NSP32_DEBUG_SGLIST		BIT(4)
#define NSP32_DEBUG_BUSFREE		BIT(5)
#define NSP32_DEBUG_CDB_CONTENTS	BIT(6)
#define NSP32_DEBUG_RESELECTION		BIT(7)
#define NSP32_DEBUG_MSGINOCCUR		BIT(8)
#define NSP32_DEBUG_EEPROM		BIT(9)
#define NSP32_DEBUG_MSGOUTOCCUR		BIT(10)
#define NSP32_DEBUG_BUSRESET		BIT(11)
#define NSP32_DEBUG_RESTART		BIT(12)
#define NSP32_DEBUG_SYNC		BIT(13)
#define NSP32_DEBUG_WAIT		BIT(14)
#define NSP32_DEBUG_TARGETFLAG		BIT(15)
#define NSP32_DEBUG_PROC		BIT(16)
#define NSP32_DEBUG_INIT		BIT(17)
#define NSP32_SPECIAL_PRINT_REGISTER	BIT(20)
#define NSP32_DEBUG_BUF_LEN		100
static void nsp32_message(const char *func, int line, char *type, char *fmt, ...)
static void nsp32_dmessage(const char *func, int line, int mask, char *fmt, ...)
# include "nsp32_debug.c"
# define show_command(arg)
# define show_busphase(arg)
# define show_autophase(arg)
static void nsp32_build_identify(struct scsi_cmnd *SCpnt)
static void nsp32_build_sdtr(struct scsi_cmnd    *SCpnt,
unsigned char period,
unsigned char offset)
static void nsp32_build_nop(struct scsi_cmnd *SCpnt)
static void nsp32_build_reject(struct scsi_cmnd *SCpnt)
static int nsp32_selection_autopara(struct scsi_cmnd *SCpnt)
static int nsp32_selection_autoscsi(struct scsi_cmnd *SCpnt)
static int nsp32_arbitration(struct scsi_cmnd *SCpnt, unsigned int base)
static int nsp32_reselection(struct scsi_cmnd *SCpnt, unsigned char newlun)
static int nsp32_setup_sg_table(struct scsi_cmnd *SCpnt)
static int nsp32_queuecommand_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(nsp32_queuecommand)
static int nsp32hw_init(nsp32_hw_data *data)
static irqreturn_t do_nsp32_isr(int irq, void *dev_id)
#undef SPRINTF
#define SPRINTF(args...) \
do  while(0)
static int nsp32_proc_info(struct Scsi_Host *host, char *buffer, char **start,
off_t offset, int length, int inout)
#undef SPRINTF
static void nsp32_scsi_done(struct scsi_cmnd *SCpnt)
static int nsp32_busfree_occur(struct scsi_cmnd *SCpnt, unsigned short execph)
static void nsp32_adjust_busfree(struct scsi_cmnd *SCpnt, unsigned int s_sacklen)
static void nsp32_msgout_occur(struct scsi_cmnd *SCpnt)
static void nsp32_restart_autoscsi(struct scsi_cmnd *SCpnt, unsigned short command)
static void nsp32_msgin_occur(struct scsi_cmnd     *SCpnt,
unsigned long  irq_status,
unsigned short execph)
static void nsp32_analyze_sdtr(struct scsi_cmnd *SCpnt)
static int nsp32_search_period_entry(nsp32_hw_data *data,
nsp32_target  *target,
unsigned char  period)
static void nsp32_set_async(nsp32_hw_data *data, nsp32_target *target)
static void nsp32_set_max_sync(nsp32_hw_data *data,
nsp32_target  *target,
unsigned char *period,
unsigned char *offset)
static void nsp32_set_sync_entry(nsp32_hw_data *data,
nsp32_target  *target,
int            entry,
unsigned char  offset)
static void nsp32_wait_req(nsp32_hw_data *data, int state)
static void nsp32_wait_sack(nsp32_hw_data *data, int state)
static void nsp32_sack_assert(nsp32_hw_data *data)
static void nsp32_sack_negate(nsp32_hw_data *data)
static int nsp32_detect(struct pci_dev *pdev)
static int nsp32_release(struct Scsi_Host *host)
static const char *nsp32_info(struct Scsi_Host *shpnt)
static int nsp32_eh_abort(struct scsi_cmnd *SCpnt)
static int nsp32_eh_bus_reset(struct scsi_cmnd *SCpnt)
static void nsp32_do_bus_reset(nsp32_hw_data *data)
static int nsp32_eh_host_reset(struct scsi_cmnd *SCpnt)
static int nsp32_getprom_param(nsp32_hw_data *data)
static int nsp32_getprom_at24(nsp32_hw_data *data)
static int nsp32_getprom_c16(nsp32_hw_data *data)
static int nsp32_prom_read(nsp32_hw_data *data, int romaddr)
static void nsp32_prom_set(nsp32_hw_data *data, int bit, int val)
static int nsp32_prom_get(nsp32_hw_data *data, int bit)
static void nsp32_prom_start (nsp32_hw_data *data)
static void nsp32_prom_stop (nsp32_hw_data *data)
static void nsp32_prom_write_bit(nsp32_hw_data *data, int val)
static int nsp32_prom_read_bit(nsp32_hw_data *data)
static int nsp32_suspend(struct pci_dev *pdev, pm_message_t state)
static int nsp32_resume(struct pci_dev *pdev)
static int __devinit nsp32_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit nsp32_remove(struct pci_dev *pdev)
static struct pci_driver nsp32_driver = ;
static int __init init_nsp32(void)
static void __exit exit_nsp32(void)
module_init(init_nsp32);
module_exit(exit_nsp32);
