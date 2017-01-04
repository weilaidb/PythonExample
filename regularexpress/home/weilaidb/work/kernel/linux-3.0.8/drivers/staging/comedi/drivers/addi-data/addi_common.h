#define ERROR	-1
#define SUCCESS	1
#define LOBYTE(W)	(unsigned char)((W) & 0xFF)
#define HIBYTE(W)	(unsigned char)(((W) >> 8) & 0xFF)
#define MAKEWORD(H, L)	(unsigned short)((L) | ((H) << 8))
#define LOWORD(W)	(unsigned short)((W) & 0xFFFF)
#define HIWORD(W)	(unsigned short)(((W) >> 16) & 0xFFFF)
#define MAKEDWORD(H, L)	(unsigned int)((L) | ((H) << 16))
#define ADDI_ENABLE		1
#define ADDI_DISABLE		0
#define APCI1710_SAVE_INTERRUPT	1
#define ADDIDATA_EEPROM		1
#define ADDIDATA_NO_EEPROM	0
#define ADDIDATA_93C76		"93C76"
#define ADDIDATA_S5920		"S5920"
#define ADDIDATA_S5933		"S5933"
#define ADDIDATA_9054		"9054"
#define ADDIDATA_ENABLE		1
#define ADDIDATA_DISABLE	0
struct addi_board ;
union str_ModuleInfo ;
struct addi_private ;
static unsigned short pci_list_builded;
static int i_ADDI_Attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int i_ADDI_Detach(struct comedi_device *dev);
static int i_ADDI_Reset(struct comedi_device *dev);
static irqreturn_t v_ADDI_Interrupt(int irq, void *d);
static int i_ADDIDATA_InsnReadEeprom(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
