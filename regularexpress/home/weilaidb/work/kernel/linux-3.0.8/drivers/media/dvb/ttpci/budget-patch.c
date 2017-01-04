DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define budget_patch budget
static struct saa7146_extension budget_extension;
MAKE_BUDGET_INFO(ttbp, "TT-Budget/Patch DVB-S 1.x PCI", BUDGET_PATCH);
static struct pci_device_id pci_tbl[] = ;
static void gpio_Set22K (struct budget *budget, int state)
static void DiseqcSendBit (struct budget *budget, int data)
static void DiseqcSendByte (struct budget *budget, int data)
static int SendDiSEqCMsg (struct budget *budget, int len, u8 *msg, unsigned long burst)
static int budget_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int budget_diseqc_send_master_cmd(struct dvb_frontend* fe, struct dvb_diseqc_master_cmd* cmd)
static int budget_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static int budget_av7110_send_fw_cmd(struct budget_patch *budget, u16* buf, int length)
static void av7110_set22k(struct budget_patch *budget, int state)
static int av7110_send_diseqc_msg(struct budget_patch *budget, int len, u8 *msg, int burst)
static int budget_patch_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int budget_patch_diseqc_send_master_cmd(struct dvb_frontend* fe, struct dvb_diseqc_master_cmd* cmd)
static int budget_patch_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static int alps_bsrv2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct ves1x93_config alps_bsrv2_config = ;
static int grundig_29504_451_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct tda8083_config grundig_29504_451_config = ;
static void frontend_init(struct budget_patch* budget)
static int budget_patch_attach (struct saa7146_dev* dev, struct saa7146_pci_extension_data *info)
static int budget_patch_detach (struct saa7146_dev* dev)
static int __init budget_patch_init(void)
static void __exit budget_patch_exit(void)
static struct saa7146_extension budget_extension = ;
module_init(budget_patch_init);
module_exit(budget_patch_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Emard, Roberto Deza, Holger Waechtler, Michael Hunold, others");
MODULE_DESCRIPTION("Driver for full TS modified DVB-S SAA7146+AV7110 "
"based so-called Budget Patch cards");
