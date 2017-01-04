static DEFINE_PCI_DEVICE_TABLE(me4000_pci_table) = ;
MODULE_DEVICE_TABLE(pci, me4000_pci_table);
static const struct me4000_board me4000_boards[] = ;
#define ME4000_BOARD_VERSIONS (ARRAY_SIZE(me4000_boards) - 1)
static int me4000_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int me4000_detach(struct comedi_device *dev);
static struct comedi_driver driver_me4000 = ;
static int me4000_probe(struct comedi_device *dev, struct comedi_devconfig *it);
static int get_registers(struct comedi_device *dev, struct pci_dev *pci_dev_p);
static int init_board_info(struct comedi_device *dev,
struct pci_dev *pci_dev_p);
static int init_ao_context(struct comedi_device *dev);
static int init_ai_context(struct comedi_device *dev);
static int init_dio_context(struct comedi_device *dev);
static int init_cnt_context(struct comedi_device *dev);
static int xilinx_download(struct comedi_device *dev);
static int reset_board(struct comedi_device *dev);
static int me4000_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int me4000_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cnt_reset(struct comedi_device *dev, unsigned int channel);
static int cnt_config(struct comedi_device *dev,
unsigned int channel, unsigned int mode);
static int me4000_cnt_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int me4000_cnt_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int me4000_cnt_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int me4000_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data);
static int me4000_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int ai_check_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int ai_round_cmd_args(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd,
unsigned int *init_ticks,
unsigned int *scan_ticks,
unsigned int *chan_ticks);
static int ai_prepare(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd,
unsigned int init_ticks,
unsigned int scan_ticks, unsigned int chan_ticks);
static int ai_write_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static irqreturn_t me4000_ai_isr(int irq, void *dev_id);
static int me4000_ai_do_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int me4000_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int me4000_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int me4000_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static inline void me4000_outb(struct comedi_device *dev, unsigned char value,
unsigned long port)
static inline void me4000_outl(struct comedi_device *dev, unsigned long value,
unsigned long port)
static inline unsigned long me4000_inl(struct comedi_device *dev,
unsigned long port)
static inline unsigned char me4000_inb(struct comedi_device *dev,
unsigned long port)
static const struct comedi_lrange me4000_ai_range = ;
static const struct comedi_lrange me4000_ao_range = ;
static int me4000_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int me4000_probe(struct comedi_device *dev, struct comedi_devconfig *it)
static int get_registers(struct comedi_device *dev, struct pci_dev *pci_dev_p)
static int init_board_info(struct comedi_device *dev, struct pci_dev *pci_dev_p)
static int init_ao_context(struct comedi_device *dev)
static int init_ai_context(struct comedi_device *dev)
static int init_dio_context(struct comedi_device *dev)
static int init_cnt_context(struct comedi_device *dev)
#define FIRMWARE_NOT_AVAILABLE 1
#if FIRMWARE_NOT_AVAILABLE
extern unsigned char *xilinx_firm;
static int xilinx_download(struct comedi_device *dev)
static int reset_board(struct comedi_device *dev)
static int me4000_detach(struct comedi_device *dev)
static int me4000_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data)
static int me4000_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ai_check_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int ai_round_cmd_args(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd,
unsigned int *init_ticks,
unsigned int *scan_ticks, unsigned int *chan_ticks)
static void ai_write_timer(struct comedi_device *dev,
unsigned int init_ticks,
unsigned int scan_ticks, unsigned int chan_ticks)
static int ai_prepare(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd,
unsigned int init_ticks,
unsigned int scan_ticks, unsigned int chan_ticks)
static int ai_write_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int me4000_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int me4000_ai_do_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static irqreturn_t me4000_ai_isr(int irq, void *dev_id)
static int me4000_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me4000_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me4000_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me4000_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cnt_reset(struct comedi_device *dev, unsigned int channel)
static int cnt_config(struct comedi_device *dev, unsigned int channel,
unsigned int mode)
static int me4000_cnt_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me4000_cnt_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me4000_cnt_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit driver_me4000_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_me4000_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_me4000_pci_driver = ;
static int __init driver_me4000_init_module(void)
static void __exit driver_me4000_cleanup_module(void)
module_init(driver_me4000_init_module);
module_exit(driver_me4000_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
