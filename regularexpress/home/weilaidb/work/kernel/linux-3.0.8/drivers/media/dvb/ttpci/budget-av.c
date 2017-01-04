#define DEBICICAM		0x02420000
#define SLOTSTATUS_NONE         1
#define SLOTSTATUS_PRESENT      2
#define SLOTSTATUS_RESET        4
#define SLOTSTATUS_READY        8
#define SLOTSTATUS_OCCUPIED     (SLOTSTATUS_PRESENT|SLOTSTATUS_RESET|SLOTSTATUS_READY)
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct budget_av ;
static int ciintf_slot_shutdown(struct dvb_ca_en50221 *ca, int slot);
static u8 i2c_readreg(struct i2c_adapter *i2c, u8 id, u8 reg)
static int i2c_readregs(struct i2c_adapter *i2c, u8 id, u8 reg, u8 * buf, u8 len)
static int i2c_writereg(struct i2c_adapter *i2c, u8 id, u8 reg, u8 val)
static int ciintf_read_attribute_mem(struct dvb_ca_en50221 *ca, int slot, int address)
static int ciintf_write_attribute_mem(struct dvb_ca_en50221 *ca, int slot, int address, u8 value)
static int ciintf_read_cam_control(struct dvb_ca_en50221 *ca, int slot, u8 address)
static int ciintf_write_cam_control(struct dvb_ca_en50221 *ca, int slot, u8 address, u8 value)
static int ciintf_slot_reset(struct dvb_ca_en50221 *ca, int slot)
static int ciintf_slot_shutdown(struct dvb_ca_en50221 *ca, int slot)
static int ciintf_slot_ts_enable(struct dvb_ca_en50221 *ca, int slot)
static int ciintf_poll_slot_status(struct dvb_ca_en50221 *ca, int slot, int open)
static int ciintf_init(struct budget_av *budget_av)
static void ciintf_deinit(struct budget_av *budget_av)
static const u8 saa7113_tab[] = ;
static int saa7113_init(struct budget_av *budget_av)
static int saa7113_setinput(struct budget_av *budget_av, int input)
static int philips_su1278_ty_ci_set_symbol_rate(struct dvb_frontend *fe, u32 srate, u32 ratio)
static int philips_su1278_ty_ci_tuner_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static u8 typhoon_cinergy1200s_inittab[] = ;
static struct stv0299_config typhoon_config = ;
static struct stv0299_config cinergy_1200s_config = ;
static struct stv0299_config cinergy_1200s_1894_0010_config = ;
static int philips_cu1216_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static struct tda1002x_config philips_cu1216_config = ;
static struct tda1002x_config philips_cu1216_config_altaddress = ;
static struct tda10023_config philips_cu1216_tda10023_config = ;
static int philips_tu1216_tuner_init(struct dvb_frontend *fe)
static int philips_tu1216_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static int philips_tu1216_request_firmware(struct dvb_frontend *fe,
const struct firmware **fw, char *name)
static struct tda1004x_config philips_tu1216_config = ;
static u8 philips_sd1878_inittab[] = ;
static int philips_sd1878_ci_set_symbol_rate(struct dvb_frontend *fe,
u32 srate, u32 ratio)
static struct stv0299_config philips_sd1878_config = ;
static const struct stb0899_s1_reg knc1_stb0899_s1_init_1[] = ;
static const struct stb0899_s1_reg knc1_stb0899_s1_init_3[] = ;
static struct stb0899_config knc1_dvbs2_config = ;
static const struct tda8261_config sd1878c_config = ;
static u8 read_pwm(struct budget_av *budget_av)
#define SUBID_DVBS_KNC1			0x0010
#define SUBID_DVBS_KNC1_PLUS		0x0011
#define SUBID_DVBS_TYPHOON		0x4f56
#define SUBID_DVBS_CINERGY1200		0x1154
#define SUBID_DVBS_CYNERGY1200N 	0x1155
#define SUBID_DVBS_TV_STAR		0x0014
#define SUBID_DVBS_TV_STAR_PLUS_X4	0x0015
#define SUBID_DVBS_TV_STAR_CI		0x0016
#define SUBID_DVBS2_KNC1		0x0018
#define SUBID_DVBS2_KNC1_OEM		0x0019
#define SUBID_DVBS_EASYWATCH_1  	0x001a
#define SUBID_DVBS_EASYWATCH_2  	0x001b
#define SUBID_DVBS2_EASYWATCH		0x001d
#define SUBID_DVBS_EASYWATCH		0x001e
#define SUBID_DVBC_EASYWATCH		0x002a
#define SUBID_DVBC_EASYWATCH_MK3	0x002c
#define SUBID_DVBC_KNC1			0x0020
#define SUBID_DVBC_KNC1_PLUS		0x0021
#define SUBID_DVBC_KNC1_MK3		0x0022
#define SUBID_DVBC_KNC1_PLUS_MK3	0x0023
#define SUBID_DVBC_CINERGY1200		0x1156
#define SUBID_DVBC_CINERGY1200_MK3	0x1176
#define SUBID_DVBT_EASYWATCH		0x003a
#define SUBID_DVBT_KNC1_PLUS		0x0031
#define SUBID_DVBT_KNC1			0x0030
#define SUBID_DVBT_CINERGY1200		0x1157
static void frontend_init(struct budget_av *budget_av)
static void budget_av_irq(struct saa7146_dev *dev, u32 * isr)
static int budget_av_detach(struct saa7146_dev *dev)
#define KNC1_INPUTS 2
static struct v4l2_input knc1_inputs[KNC1_INPUTS] = ;
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *i)
static int vidioc_s_input(struct file *file, void *fh, unsigned int input)
static struct saa7146_ext_vv vv_data;
static int budget_av_attach(struct saa7146_dev *dev, struct saa7146_pci_extension_data *info)
static struct saa7146_standard standard[] = ;
static struct saa7146_ext_vv vv_data = ;
static struct saa7146_extension budget_extension;
MAKE_BUDGET_INFO(knc1s, "KNC1 DVB-S", BUDGET_KNC1S);
MAKE_BUDGET_INFO(knc1s2,"KNC1 DVB-S2", BUDGET_KNC1S2);
MAKE_BUDGET_INFO(sates2,"Satelco EasyWatch DVB-S2", BUDGET_KNC1S2);
MAKE_BUDGET_INFO(knc1c, "KNC1 DVB-C", BUDGET_KNC1C);
MAKE_BUDGET_INFO(knc1t, "KNC1 DVB-T", BUDGET_KNC1T);
MAKE_BUDGET_INFO(kncxs, "KNC TV STAR DVB-S", BUDGET_TVSTAR);
MAKE_BUDGET_INFO(satewpls, "Satelco EasyWatch DVB-S light", BUDGET_TVSTAR);
MAKE_BUDGET_INFO(satewpls1, "Satelco EasyWatch DVB-S light", BUDGET_KNC1S);
MAKE_BUDGET_INFO(satewps, "Satelco EasyWatch DVB-S", BUDGET_KNC1S);
MAKE_BUDGET_INFO(satewplc, "Satelco EasyWatch DVB-C", BUDGET_KNC1CP);
MAKE_BUDGET_INFO(satewcmk3, "Satelco EasyWatch DVB-C MK3", BUDGET_KNC1C_MK3);
MAKE_BUDGET_INFO(satewt, "Satelco EasyWatch DVB-T", BUDGET_KNC1T);
MAKE_BUDGET_INFO(knc1sp, "KNC1 DVB-S Plus", BUDGET_KNC1SP);
MAKE_BUDGET_INFO(knc1spx4, "KNC1 DVB-S Plus X4", BUDGET_KNC1SP);
MAKE_BUDGET_INFO(knc1cp, "KNC1 DVB-C Plus", BUDGET_KNC1CP);
MAKE_BUDGET_INFO(knc1cmk3, "KNC1 DVB-C MK3", BUDGET_KNC1C_MK3);
MAKE_BUDGET_INFO(knc1cpmk3, "KNC1 DVB-C Plus MK3", BUDGET_KNC1CP_MK3);
MAKE_BUDGET_INFO(knc1tp, "KNC1 DVB-T Plus", BUDGET_KNC1TP);
MAKE_BUDGET_INFO(cin1200s, "TerraTec Cinergy 1200 DVB-S", BUDGET_CIN1200S);
MAKE_BUDGET_INFO(cin1200sn, "TerraTec Cinergy 1200 DVB-S", BUDGET_CIN1200S);
MAKE_BUDGET_INFO(cin1200c, "Terratec Cinergy 1200 DVB-C", BUDGET_CIN1200C);
MAKE_BUDGET_INFO(cin1200cmk3, "Terratec Cinergy 1200 DVB-C MK3", BUDGET_CIN1200C_MK3);
MAKE_BUDGET_INFO(cin1200t, "Terratec Cinergy 1200 DVB-T", BUDGET_CIN1200T);
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_extension budget_extension = ;
static int __init budget_av_init(void)
static void __exit budget_av_exit(void)
module_init(budget_av_init);
module_exit(budget_av_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ralph Metzler, Marcus Metzler, Michael Hunold, others");
MODULE_DESCRIPTION("driver for the SAA7146 based so-called "
"budget PCI DVB w/ analog input and CI-module (e.g. the KNC cards)");
