#define DAQBOARD2000_SUBSYSTEM_IDS2 	0x00021616
#define DAQBOARD2000_SUBSYSTEM_IDS4 	0x00041616
#define DAQBOARD2000_DAQ_SIZE 		0x1002
#define DAQBOARD2000_PLX_SIZE 		0x100
#define DAQBOARD2000_SECRProgPinHi      0x8001767e
#define DAQBOARD2000_SECRProgPinLo      0x8000767e
#define DAQBOARD2000_SECRLocalBusHi     0xc000767e
#define DAQBOARD2000_SECRLocalBusLo     0x8000767e
#define DAQBOARD2000_SECRReloadHi       0xa000767e
#define DAQBOARD2000_SECRReloadLo       0x8000767e
#define DAQBOARD2000_EEPROM_PRESENT     0x10000000
#define DAQBOARD2000_CPLD_INIT 		0x0002
#define DAQBOARD2000_CPLD_DONE 		0x0004
static const struct comedi_lrange range_daqboard2000_ai = ;
static const struct comedi_lrange range_daqboard2000_ao = ;
struct daqboard2000_hw ;
#define DAQBOARD2000_SeqStartScanList            0x0011
#define DAQBOARD2000_SeqStopScanList             0x0010
#define DAQBOARD2000_AcqResetScanListFifo        0x0004
#define DAQBOARD2000_AcqResetResultsFifo         0x0002
#define DAQBOARD2000_AcqResetConfigPipe          0x0001
#define DAQBOARD2000_AcqResultsFIFOMore1Sample   0x0001
#define DAQBOARD2000_AcqResultsFIFOHasValidData  0x0002
#define DAQBOARD2000_AcqResultsFIFOOverrun       0x0004
#define DAQBOARD2000_AcqLogicScanning            0x0008
#define DAQBOARD2000_AcqConfigPipeFull           0x0010
#define DAQBOARD2000_AcqScanListFIFOEmpty        0x0020
#define DAQBOARD2000_AcqAdcNotReady              0x0040
#define DAQBOARD2000_ArbitrationFailure          0x0080
#define DAQBOARD2000_AcqPacerOverrun             0x0100
#define DAQBOARD2000_DacPacerOverrun             0x0200
#define DAQBOARD2000_AcqHardwareError            0x01c0
#define DAQBOARD2000_SeqStartScanList            0x0011
#define DAQBOARD2000_SeqStopScanList             0x0010
#define DAQBOARD2000_AdcPacerInternal            0x0030
#define DAQBOARD2000_AdcPacerExternal            0x0032
#define DAQBOARD2000_AdcPacerEnable              0x0031
#define DAQBOARD2000_AdcPacerEnableDacPacer      0x0034
#define DAQBOARD2000_AdcPacerDisable             0x0030
#define DAQBOARD2000_AdcPacerNormalMode          0x0060
#define DAQBOARD2000_AdcPacerCompatibilityMode   0x0061
#define DAQBOARD2000_AdcPacerInternalOutEnable   0x0008
#define DAQBOARD2000_AdcPacerExternalRising      0x0100
#define DAQBOARD2000_DacFull                     0x0001
#define DAQBOARD2000_RefBusy                     0x0002
#define DAQBOARD2000_TrgBusy                     0x0004
#define DAQBOARD2000_CalBusy                     0x0008
#define DAQBOARD2000_Dac0Busy                    0x0010
#define DAQBOARD2000_Dac1Busy                    0x0020
#define DAQBOARD2000_Dac2Busy                    0x0040
#define DAQBOARD2000_Dac3Busy                    0x0080
#define DAQBOARD2000_Dac0Enable                  0x0021
#define DAQBOARD2000_Dac1Enable                  0x0031
#define DAQBOARD2000_Dac2Enable                  0x0041
#define DAQBOARD2000_Dac3Enable                  0x0051
#define DAQBOARD2000_DacEnableBit                0x0001
#define DAQBOARD2000_Dac0Disable                 0x0020
#define DAQBOARD2000_Dac1Disable                 0x0030
#define DAQBOARD2000_Dac2Disable                 0x0040
#define DAQBOARD2000_Dac3Disable                 0x0050
#define DAQBOARD2000_DacResetFifo                0x0004
#define DAQBOARD2000_DacPatternDisable           0x0060
#define DAQBOARD2000_DacPatternEnable            0x0061
#define DAQBOARD2000_DacSelectSignedData         0x0002
#define DAQBOARD2000_DacSelectUnsignedData       0x0000
#define DAQBOARD2000_TrigAnalog                  0x0000
#define DAQBOARD2000_TrigTTL                     0x0010
#define DAQBOARD2000_TrigTransHiLo               0x0004
#define DAQBOARD2000_TrigTransLoHi               0x0000
#define DAQBOARD2000_TrigAbove                   0x0000
#define DAQBOARD2000_TrigBelow                   0x0004
#define DAQBOARD2000_TrigLevelSense              0x0002
#define DAQBOARD2000_TrigEdgeSense               0x0000
#define DAQBOARD2000_TrigEnable                  0x0001
#define DAQBOARD2000_TrigDisable                 0x0000
#define DAQBOARD2000_PosRefDacSelect             0x0100
#define DAQBOARD2000_NegRefDacSelect             0x0000
static int daqboard2000_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int daqboard2000_detach(struct comedi_device *dev);
static struct comedi_driver driver_daqboard2000 = ;
struct daq200_boardtype ;
static const struct daq200_boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct daq200_boardtype))
#define this_board ((const struct daq200_boardtype *)dev->board_ptr)
static DEFINE_PCI_DEVICE_TABLE(daqboard2000_pci_table) = ;
MODULE_DEVICE_TABLE(pci, daqboard2000_pci_table);
struct daqboard2000_private ;
#define devpriv ((struct daqboard2000_private *)dev->private)
static void writeAcqScanListEntry(struct comedi_device *dev, u16 entry)
static void setup_sampling(struct comedi_device *dev, int chan, int gain)
static int daqboard2000_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int daqboard2000_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int daqboard2000_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void daqboard2000_resetLocalBus(struct comedi_device *dev)
static void daqboard2000_reloadPLX(struct comedi_device *dev)
static void daqboard2000_pulseProgPin(struct comedi_device *dev)
static int daqboard2000_pollCPLD(struct comedi_device *dev, int mask)
static int daqboard2000_writeCPLD(struct comedi_device *dev, int data)
static int initialize_daqboard2000(struct comedi_device *dev,
unsigned char *cpld_array, int len)
static void daqboard2000_adcStopDmaTransfer(struct comedi_device *dev)
static void daqboard2000_adcDisarm(struct comedi_device *dev)
static void daqboard2000_activateReferenceDacs(struct comedi_device *dev)
static void daqboard2000_initializeCtrs(struct comedi_device *dev)
static void daqboard2000_initializeTmrs(struct comedi_device *dev)
static void daqboard2000_dacDisarm(struct comedi_device *dev)
static void daqboard2000_initializeAdc(struct comedi_device *dev)
static void daqboard2000_initializeDac(struct comedi_device *dev)
static int daqboard2000_8255_cb(int dir, int port, int data,
unsigned long ioaddr)
static int daqboard2000_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int daqboard2000_detach(struct comedi_device *dev)
static int __devinit driver_daqboard2000_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_daqboard2000_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_daqboard2000_pci_driver = ;
static int __init driver_daqboard2000_init_module(void)
static void __exit driver_daqboard2000_cleanup_module(void)
module_init(driver_daqboard2000_init_module);
module_exit(driver_daqboard2000_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
