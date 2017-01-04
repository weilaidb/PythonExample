enum ni_660x_constants ;
#define NUM_PFI_CHANNELS 40
#define MAX_DMA_CHANNEL 4
enum NI_660x_Register ;
static inline unsigned IOConfigReg(unsigned pfi_channel)
enum ni_660x_register_width ;
enum ni_660x_register_direction ;
enum ni_660x_pfi_output_select ;
enum ni_660x_subdevices ;
static inline unsigned NI_660X_GPCT_SUBDEV(unsigned index)
struct NI_660xRegisterData ;
static const struct NI_660xRegisterData registerData[NumRegisters] = ;
enum clock_config_register_bits ;
static inline unsigned ioconfig_bitshift(unsigned pfi_channel)
static inline unsigned pfi_output_select_mask(unsigned pfi_channel)
static inline unsigned pfi_output_select_bits(unsigned pfi_channel,
unsigned output_select)
static inline unsigned pfi_input_select_mask(unsigned pfi_channel)
static inline unsigned pfi_input_select_bits(unsigned pfi_channel,
unsigned input_select)
static inline unsigned dma_select_mask(unsigned dma_channel)
enum dma_selection ;
static inline unsigned dma_selection_counter(unsigned counter_index)
static inline unsigned dma_select_bits(unsigned dma_channel, unsigned selection)
static inline unsigned dma_reset_bit(unsigned dma_channel)
enum global_interrupt_status_register_bits ;
enum global_interrupt_config_register_bits ;
static const unsigned GPCT_OFFSET[2] = ;
struct ni_660x_board ;
static const struct ni_660x_board ni_660x_boards[] = ;
#define NI_660X_MAX_NUM_CHIPS 2
#define NI_660X_MAX_NUM_COUNTERS (NI_660X_MAX_NUM_CHIPS * counters_per_chip)
static DEFINE_PCI_DEVICE_TABLE(ni_660x_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni_660x_pci_table);
struct ni_660x_private ;
static inline struct ni_660x_private *private(struct comedi_device *dev)
static inline const struct ni_660x_board *board(struct comedi_device *dev)
#define n_ni_660x_boards ARRAY_SIZE(ni_660x_boards)
static int ni_660x_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int ni_660x_detach(struct comedi_device *dev);
static void init_tio_chip(struct comedi_device *dev, int chipset);
static void ni_660x_select_pfi_output(struct comedi_device *dev,
unsigned pfi_channel,
unsigned output_select);
static struct comedi_driver driver_ni_660x = ;
static int __devinit driver_ni_660x_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_ni_660x_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_ni_660x_pci_driver = ;
static int __init driver_ni_660x_init_module(void)
static void __exit driver_ni_660x_cleanup_module(void)
module_init(driver_ni_660x_init_module);
module_exit(driver_ni_660x_cleanup_module);
static int ni_660x_find_device(struct comedi_device *dev, int bus, int slot);
static int ni_660x_set_pfi_routing(struct comedi_device *dev, unsigned chan,
unsigned source);
static int ni_660x_GPCT_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_660x_GPCT_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int ni_660x_GPCT_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_660x_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int ni_660x_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static inline unsigned ni_660x_num_counters(struct comedi_device *dev)
static enum NI_660x_Register ni_gpct_to_660x_register(enum ni_gpct_register reg)
static inline void ni_660x_write_register(struct comedi_device *dev,
unsigned chip_index, unsigned bits,
enum NI_660x_Register reg)
static inline unsigned ni_660x_read_register(struct comedi_device *dev,
unsigned chip_index,
enum NI_660x_Register reg)
static void ni_gpct_write_register(struct ni_gpct *counter, unsigned bits,
enum ni_gpct_register reg)
static unsigned ni_gpct_read_register(struct ni_gpct *counter,
enum ni_gpct_register reg)
static inline struct mite_dma_descriptor_ring *mite_ring(struct ni_660x_private
*priv,
struct ni_gpct
*counter)
static inline void ni_660x_set_dma_channel(struct comedi_device *dev,
unsigned mite_channel,
struct ni_gpct *counter)
static inline void ni_660x_unset_dma_channel(struct comedi_device *dev,
unsigned mite_channel,
struct ni_gpct *counter)
static int ni_660x_request_mite_channel(struct comedi_device *dev,
struct ni_gpct *counter,
enum comedi_io_direction direction)
void ni_660x_release_mite_channel(struct comedi_device *dev,
struct ni_gpct *counter)
static int ni_660x_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_660x_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int ni_660x_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static void set_tio_counterswap(struct comedi_device *dev, int chipset)
static void ni_660x_handle_gpct_interrupt(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t ni_660x_interrupt(int irq, void *d)
static int ni_660x_input_poll(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni_660x_buf_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size)
static int ni_660x_allocate_private(struct comedi_device *dev)
static int ni_660x_alloc_mite_rings(struct comedi_device *dev)
static void ni_660x_free_mite_rings(struct comedi_device *dev)
static int ni_660x_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int ni_660x_detach(struct comedi_device *dev)
static int
ni_660x_GPCT_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void init_tio_chip(struct comedi_device *dev, int chipset)
static int
ni_660x_GPCT_insn_config(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_660x_GPCT_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_660x_find_device(struct comedi_device *dev, int bus, int slot)
static int ni_660x_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void ni_660x_select_pfi_output(struct comedi_device *dev,
unsigned pfi_channel,
unsigned output_select)
static int ni_660x_set_pfi_routing(struct comedi_device *dev, unsigned chan,
unsigned source)
static unsigned ni_660x_get_pfi_routing(struct comedi_device *dev,
unsigned chan)
static void ni660x_config_filter(struct comedi_device *dev,
unsigned pfi_channel,
enum ni_gpct_filter_select filter)
static int ni_660x_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
