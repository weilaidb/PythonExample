#define SOURCEFILE_NAME "hpioctl.c"
MODULE_FIRMWARE("asihpi/dsp5000.bin");
MODULE_FIRMWARE("asihpi/dsp6200.bin");
MODULE_FIRMWARE("asihpi/dsp6205.bin");
MODULE_FIRMWARE("asihpi/dsp6400.bin");
MODULE_FIRMWARE("asihpi/dsp6600.bin");
MODULE_FIRMWARE("asihpi/dsp8700.bin");
MODULE_FIRMWARE("asihpi/dsp8900.bin");
static int prealloc_stream_buf;
module_param(prealloc_stream_buf, int, S_IRUGO);
MODULE_PARM_DESC(prealloc_stream_buf,
"Preallocate size for per-adapter stream buffer");
module_param(hpi_debug_level, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(hpi_debug_level, "debug verbosity 0..5");
static struct hpi_adapter adapters[HPI_MAX_ADAPTERS];
static void hpi_send_recv_f(struct hpi_message *phm, struct hpi_response *phr,
struct file *file)
void hpi_send_recv(struct hpi_message *phm, struct hpi_response *phr)
EXPORT_SYMBOL(hpi_send_recv);
int asihpi_hpi_release(struct file *file)
long asihpi_hpi_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int __devinit asihpi_adapter_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
void __devexit asihpi_adapter_remove(struct pci_dev *pci_dev)
void __init asihpi_init(void)
void asihpi_exit(void)
