#define NVCMD_BEGIN_READ 	(0x7 << 5)
#define NVCMD_LOAD_LOW   	(0x4 << 5)
#define NVCMD_LOAD_HIGH  	(0x5 << 5)
#define EE76_CMD_LEN    	13
#define EE_READ         	0x0180
#define EEPROM_DIGITALINPUT 			0
#define EEPROM_DIGITALOUTPUT			1
#define EEPROM_ANALOGINPUT				2
#define EEPROM_ANALOGOUTPUT				3
#define EEPROM_TIMER					4
#define EEPROM_WATCHDOG					5
#define EEPROM_TIMER_WATCHDOG_COUNTER	10
struct str_Functionality ;
struct str_MainHeader ;
struct str_DigitalInputHeader ;
struct str_DigitalOutputHeader ;
struct str_TimerDetails ;
struct str_TimerMainHeader ;
struct str_AnalogOutputHeader ;
struct str_AnalogInputHeader ;
int i_EepromReadMainHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, struct comedi_device *dev);
int i_EepromReadDigitalInputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_DigitalInputHeader *s_Header);
int i_EepromReadDigitalOutputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_DigitalOutputHeader *s_Header);
int i_EepromReadTimerHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_TimerMainHeader *s_Header);
int i_EepromReadAnlogOutputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_AnalogOutputHeader *s_Header);
int i_EepromReadAnlogInputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_AnalogInputHeader *s_Header);
unsigned short w_EepromReadWord(unsigned short w_PCIBoardEepromAddress, char *pc_PCIChipInformation,
unsigned short w_EepromStartAddress);
void v_EepromWaitBusy(unsigned short w_PCIBoardEepromAddress);
void v_EepromClock76(unsigned int dw_Address, unsigned int dw_RegisterValue);
void v_EepromWaitBusy(unsigned short w_PCIBoardEepromAddress);
void v_EepromSendCommand76(unsigned int dw_Address, unsigned int dw_EepromCommand,
unsigned char b_DataLengthInBits);
void v_EepromCs76Read(unsigned int dw_Address, unsigned short w_offset, unsigned short *pw_Value);
unsigned short w_EepromReadWord(unsigned short w_PCIBoardEepromAddress, char *pc_PCIChipInformation,
unsigned short w_EepromStartAddress)
void v_EepromWaitBusy(unsigned short w_PCIBoardEepromAddress)
void v_EepromClock76(unsigned int dw_Address, unsigned int dw_RegisterValue)
void v_EepromSendCommand76(unsigned int dw_Address, unsigned int dw_EepromCommand,
unsigned char b_DataLengthInBits)
void v_EepromCs76Read(unsigned int dw_Address, unsigned short w_offset, unsigned short *pw_Value)
int i_EepromReadMainHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, struct comedi_device *dev)
int i_EepromReadDigitalInputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_DigitalInputHeader *s_Header)
int i_EepromReadDigitalOutputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_DigitalOutputHeader *s_Header)
int i_EepromReadTimerHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_TimerMainHeader *s_Header)
int i_EepromReadAnlogOutputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_AnalogOutputHeader *s_Header)
int i_EepromReadAnlogInputHeader(unsigned short w_PCIBoardEepromAddress,
char *pc_PCIChipInformation, unsigned short w_Address,
struct str_AnalogInputHeader *s_Header)
