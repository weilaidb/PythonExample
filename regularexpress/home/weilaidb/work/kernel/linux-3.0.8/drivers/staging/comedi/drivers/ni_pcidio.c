#define USE_DMA
#undef DPRINTK
#define DPRINTK(format, args...)	printk(format, ## args)
#define DPRINTK(format, args...)
#define PCI_DIO_SIZE 4096
#define PCI_MITE_SIZE 4096
#define NIDIO_8255_BASE(x)	((x)*4)
#define NIDIO_A 0
#define NIDIO_B 4
#define NIDIO_C 8
#define NIDIO_D 12
#define Window_Address			4
#define Interrupt_And_Window_Status	4
#define IntStatus1				(1<<0)
#define IntStatus2				(1<<1)
#define WindowAddressStatus_mask		0x7c
#define Master_DMA_And_Interrupt_Control 5
#define InterruptLine(x)			((x)&3)
#define OpenInt				(1<<2)
#define Group_Status			5
#define DataLeft				(1<<0)
#define Req					(1<<2)
#define StopTrig				(1<<3)
#define Group_1_Flags			6
#define Group_2_Flags			7
#define TransferReady				(1<<0)
#define CountExpired				(1<<1)
#define Waited				(1<<5)
#define PrimaryTC				(1<<6)
#define SecondaryTC				(1<<7)
#define Group_1_First_Clear		6
#define Group_2_First_Clear		7
#define ClearWaited				(1<<3)
#define ClearPrimaryTC			(1<<4)
#define ClearSecondaryTC			(1<<5)
#define DMAReset				(1<<6)
#define FIFOReset				(1<<7)
#define ClearAll				0xf8
#define Group_1_FIFO			8
#define Group_2_FIFO			12
#define Transfer_Count			20
#define Chip_ID_D			24
#define Chip_ID_I			25
#define Chip_ID_O			26
#define Chip_Version			27
#define Port_IO(x)			(28+(x))
#define Port_Pin_Directions(x)		(32+(x))
#define Port_Pin_Mask(x)		(36+(x))
#define Port_Pin_Polarities(x)		(40+(x))
#define Master_Clock_Routing		45
#define RTSIClocking(x)			(((x)&3)<<4)
#define Group_1_Second_Clear		46
#define Group_2_Second_Clear		47
#define ClearExpired				(1<<0)
#define Port_Pattern(x)			(48+(x))
#define Data_Path			64
#define FIFOEnableA		(1<<0)
#define FIFOEnableB		(1<<1)
#define FIFOEnableC		(1<<2)
#define FIFOEnableD		(1<<3)
#define Funneling(x)		(((x)&3)<<4)
#define GroupDirection	(1<<7)
#define Protocol_Register_1		65
#define OpMode				Protocol_Register_1
#define RunMode(x)		((x)&7)
#define Numbered		(1<<3)
#define Protocol_Register_2		66
#define ClockReg			Protocol_Register_2
#define ClockLine(x)		(((x)&3)<<5)
#define InvertStopTrig	(1<<7)
#define DataLatching(x)       (((x)&3)<<5)
#define Protocol_Register_3		67
#define Sequence			Protocol_Register_3
#define Protocol_Register_14		68
#define ClockSpeed			Protocol_Register_14
#define Protocol_Register_4		70
#define ReqReg				Protocol_Register_4
#define ReqConditioning(x)	(((x)&7)<<3)
#define Protocol_Register_5		71
#define BlockMode			Protocol_Register_5
#define FIFO_Control			72
#define ReadyLevel(x)		((x)&7)
#define Protocol_Register_6		73
#define LinePolarities			Protocol_Register_6
#define InvertAck		(1<<0)
#define InvertReq		(1<<1)
#define InvertClock		(1<<2)
#define InvertSerial		(1<<3)
#define OpenAck		(1<<4)
#define OpenClock		(1<<5)
#define Protocol_Register_7		74
#define AckSer				Protocol_Register_7
#define AckLine(x)		(((x)&3)<<2)
#define ExchangePins		(1<<7)
#define Interrupt_Control		75
#define DMA_Line_Control_Group1		76
#define DMA_Line_Control_Group2		108
static inline unsigned primary_DMAChannel_bits(unsigned channel)
static inline unsigned secondary_DMAChannel_bits(unsigned channel)
#define Transfer_Size_Control		77
#define TransferWidth(x)	((x)&3)
#define TransferLength(x)	(((x)&3)<<3)
#define RequireRLevel		(1<<5)
#define Protocol_Register_15		79
#define DAQOptions			Protocol_Register_15
#define StartSource(x)			((x)&0x3)
#define InvertStart				(1<<2)
#define StopSource(x)				(((x)&0x3)<<3)
#define ReqStart				(1<<6)
#define PreStart				(1<<7)
#define Pattern_Detection		81
#define DetectionMethod			(1<<0)
#define InvertMatch				(1<<1)
#define IE_Pattern_Detection			(1<<2)
#define Protocol_Register_9		82
#define ReqDelay			Protocol_Register_9
#define Protocol_Register_10		83
#define ReqNotDelay			Protocol_Register_10
#define Protocol_Register_11		84
#define AckDelay			Protocol_Register_11
#define Protocol_Register_12		85
#define AckNotDelay			Protocol_Register_12
#define Protocol_Register_13		86
#define Data1Delay			Protocol_Register_13
#define Protocol_Register_8		88
#define StartDelay			Protocol_Register_8
enum pci_6534_firmware_registers ;
enum pci_6534_fpga_registers ;
enum FPGA_Control_Bits ;
#define TIMER_BASE 50
#define IntEn (CountExpired|Waited|PrimaryTC|SecondaryTC)
#define IntEn (TransferReady|CountExpired|Waited|PrimaryTC|SecondaryTC)
static int nidio_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int nidio_detach(struct comedi_device *dev);
static int ni_pcidio_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static struct comedi_driver driver_pcidio = ;
struct nidio_board ;
static const struct nidio_board nidio_boards[] = ;
#define n_nidio_boards ARRAY_SIZE(nidio_boards)
#define this_board ((const struct nidio_board *)dev->board_ptr)
static DEFINE_PCI_DEVICE_TABLE(ni_pcidio_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni_pcidio_pci_table);
struct nidio96_private ;
#define devpriv ((struct nidio96_private *)dev->private)
static int ni_pcidio_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int ni_pcidio_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int ni_pcidio_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum);
static int nidio_find_device(struct comedi_device *dev, int bus, int slot);
static int ni_pcidio_ns_to_timer(int *nanosec, int round_mode);
static int setup_mite_dma(struct comedi_device *dev,
struct comedi_subdevice *s);
static void ni_pcidio_print_flags(unsigned int flags);
static void ni_pcidio_print_status(unsigned int status);
#define ni_pcidio_print_flags(x)
#define ni_pcidio_print_status(x)
static int ni_pcidio_request_di_mite_channel(struct comedi_device *dev)
static void ni_pcidio_release_di_mite_channel(struct comedi_device *dev)
static int nidio96_8255_cb(int dir, int port, int data, unsigned long iobase)
void ni_pcidio_event(struct comedi_device *dev, struct comedi_subdevice *s)
static irqreturn_t nidio_interrupt(int irq, void *d)
static const char *const flags_strings[] = ;
static void ni_pcidio_print_flags(unsigned int flags)
static char *status_strings[] = ;
static void ni_pcidio_print_status(unsigned int flags)
static void debug_int(struct comedi_device *dev)
static int ni_pcidio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_pcidio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_pcidio_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int ni_pcidio_ns_to_timer(int *nanosec, int round_mode)
static int ni_pcidio_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int setup_mite_dma(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_pcidio_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum)
static int ni_pcidio_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni_pcidio_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size)
static int pci_6534_load_fpga(struct comedi_device *dev, int fpga_index,
u8 *data, int data_len)
static int pci_6534_reset_fpga(struct comedi_device *dev, int fpga_index)
static int pci_6534_reset_fpgas(struct comedi_device *dev)
static void pci_6534_init_main_fpga(struct comedi_device *dev)
static int pci_6534_upload_firmware(struct comedi_device *dev, int options[])
static int nidio_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int nidio_detach(struct comedi_device *dev)
static int nidio_find_device(struct comedi_device *dev, int bus, int slot)
static int __devinit driver_pcidio_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pcidio_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pcidio_pci_driver = ;
static int __init driver_pcidio_init_module(void)
static void __exit driver_pcidio_cleanup_module(void)
module_init(driver_pcidio_init_module);
module_exit(driver_pcidio_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
