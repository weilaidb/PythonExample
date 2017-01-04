static int diseqc_method;
module_param(diseqc_method, int, 0444);
MODULE_PARM_DESC(diseqc_method, "Select DiSEqC method for subsystem id 13c2:1003, 0: default, 1: more reliable (for newer revisions only)");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static void Set22K (struct budget *budget, int state)
static void DiseqcSendBit (struct budget *budget, int data)
static void DiseqcSendByte (struct budget *budget, int data)
static int SendDiSEqCMsg (struct budget *budget, int len, u8 *msg, unsigned long burst)
static int SetVoltage_Activy (struct budget *budget, fe_sec_voltage_t voltage)
static int siemens_budget_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int budget_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int budget_diseqc_send_master_cmd(struct dvb_frontend* fe, struct dvb_diseqc_master_cmd* cmd)
static int budget_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static int alps_bsrv2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct ves1x93_config alps_bsrv2_config =
;
static int alps_tdbe2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct ves1820_config alps_tdbe2_config = ;
static int grundig_29504_401_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct l64781_config grundig_29504_401_config = ;
static struct l64781_config grundig_29504_401_config_activy = ;
static u8 tuner_address_grundig_29504_401_activy = 0x60;
static int grundig_29504_451_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct tda8083_config grundig_29504_451_config = ;
static int s5h1420_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct s5h1420_config s5h1420_config = ;
static struct tda10086_config tda10086_config = ;
static struct stv0299_config alps_bsru6_config_activy = ;
static struct stv0299_config alps_bsbe1_config_activy = ;
static int alps_tdhd1_204_request_firmware(struct dvb_frontend *fe, const struct firmware **fw, char *name)
static int i2c_readreg(struct i2c_adapter *i2c, u8 adr, u8 reg)
static u8 read_pwm(struct budget* budget)
static struct stv090x_config tt1600_stv090x_config = ;
static struct stv6110x_config tt1600_stv6110x_config = ;
static struct isl6423_config tt1600_isl6423_config = ;
static void frontend_init(struct budget *budget)
static int budget_attach (struct saa7146_dev* dev, struct saa7146_pci_extension_data *info)
static int budget_detach (struct saa7146_dev* dev)
static struct saa7146_extension budget_extension;
MAKE_BUDGET_INFO(ttbs,	"TT-Budget/WinTV-NOVA-S  PCI",	BUDGET_TT);
MAKE_BUDGET_INFO(ttbc,	"TT-Budget/WinTV-NOVA-C  PCI",	BUDGET_TT);
MAKE_BUDGET_INFO(ttbt,	"TT-Budget/WinTV-NOVA-T  PCI",	BUDGET_TT);
MAKE_BUDGET_INFO(satel,	"SATELCO Multimedia PCI",	BUDGET_TT_HW_DISEQC);
MAKE_BUDGET_INFO(ttbs1401, "TT-Budget-S-1401 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(tt1600, "TT-Budget S2-1600 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(fsacs0, "Fujitsu Siemens Activy Budget-S PCI (rev GR/grundig frontend)", BUDGET_FS_ACTIVY);
MAKE_BUDGET_INFO(fsacs1, "Fujitsu Siemens Activy Budget-S PCI (rev AL/alps frontend)", BUDGET_FS_ACTIVY);
MAKE_BUDGET_INFO(fsact,	 "Fujitsu Siemens Activy Budget-T PCI (rev GR/Grundig frontend)", BUDGET_FS_ACTIVY);
MAKE_BUDGET_INFO(fsact1, "Fujitsu Siemens Activy Budget-T PCI (rev AL/ALPS TDHD1-204A)", BUDGET_FS_ACTIVY);
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_extension budget_extension = ;
static int __init budget_init(void)
static void __exit budget_exit(void)
module_init(budget_init);
module_exit(budget_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ralph Metzler, Marcus Metzler, Michael Hunold, others");
MODULE_DESCRIPTION("driver for the SAA7146 based so-called "
"budget PCI DVB cards by Siemens, Technotrend, Hauppauge");
