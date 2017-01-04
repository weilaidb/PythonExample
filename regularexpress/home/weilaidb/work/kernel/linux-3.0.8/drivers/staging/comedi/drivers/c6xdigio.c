static u8 ReadByteFromHwPort(unsigned long addr)
static void WriteByteToHwPort(unsigned long addr, u8 val)
#define C6XDIGIO_SIZE 3
#define C6XDIGIO_PARALLEL_DATA 0
#define C6XDIGIO_PARALLEL_STATUS 1
#define C6XDIGIO_PARALLEL_CONTROL 2
struct pwmbitstype ;
union pwmcmdtype ;
struct encbitstype ;
union encvaluetype ;
#define C6XDIGIO_TIME_OUT 20
static int c6xdigio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int c6xdigio_detach(struct comedi_device *dev);
struct comedi_driver driver_c6xdigio = ;
static void C6X_pwmInit(unsigned long baseAddr)
static void C6X_pwmOutput(unsigned long baseAddr, unsigned channel, int value)
static int C6X_encInput(unsigned long baseAddr, unsigned channel)
static void C6X_encResetAll(unsigned long baseAddr)
static int c6xdigio_pwmo_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int c6xdigio_pwmo_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int c6xdigio_ei_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void board_init(struct comedi_device *dev)
static const struct pnp_device_id c6xdigio_pnp_tbl[] = ;
static struct pnp_driver c6xdigio_pnp_driver = ;
static int c6xdigio_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int c6xdigio_detach(struct comedi_device *dev)
static int __init driver_c6xdigio_init_module(void)
static void __exit driver_c6xdigio_cleanup_module(void)
module_init(driver_c6xdigio_init_module);
module_exit(driver_c6xdigio_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
