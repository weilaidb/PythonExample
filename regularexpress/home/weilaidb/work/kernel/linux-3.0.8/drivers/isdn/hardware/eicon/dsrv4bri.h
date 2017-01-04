#define __DIVA_XDI_DSRV_4_BRI_INC__
#define PLX9054_P2LDBELL    0x60
#define PLX9054_L2PDBELL    0x64
#define PLX9054_INTCSR      0x69
#define PLX9054_INT_ENABLE  0x09
#define PLX9054_SOFT_RESET 0x4000
#define PLX9054_RELOAD_EEPROM 0x2000
#define DIVA_4BRI_REVISION(__x__) (((__x__)->cardType == CARDTYPE_DIVASRV_Q_8M_V2_PCI) || ((__x__)->cardType == CARDTYPE_DIVASRV_VOICE_Q_8M_V2_PCI) || ((__x__)->cardType == CARDTYPE_DIVASRV_B_2M_V2_PCI) || ((__x__)->cardType == CARDTYPE_DIVASRV_B_2F_PCI) || ((__x__)->cardType == CARDTYPE_DIVASRV_VOICE_B_2M_V2_PCI))
void diva_os_set_qBri_functions (PISDN_ADAPTER IoAdapter);
void diva_os_set_qBri2_functions (PISDN_ADAPTER IoAdapter);
