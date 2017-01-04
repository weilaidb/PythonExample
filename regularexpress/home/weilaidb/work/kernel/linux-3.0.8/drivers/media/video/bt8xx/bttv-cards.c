static void boot_msp34xx(struct bttv *btv, int pin);
static void hauppauge_eeprom(struct bttv *btv);
static void avermedia_eeprom(struct bttv *btv);
static void osprey_eeprom(struct bttv *btv, const u8 ee[256]);
static void modtec_eeprom(struct bttv *btv);
static void init_PXC200(struct bttv *btv);
static void init_RTV24(struct bttv *btv);
static void rv605_muxsel(struct bttv *btv, unsigned int input);
static void eagle_muxsel(struct bttv *btv, unsigned int input);
static void xguard_muxsel(struct bttv *btv, unsigned int input);
static void ivc120_muxsel(struct bttv *btv, unsigned int input);
static void gvc1100_muxsel(struct bttv *btv, unsigned int input);
static void PXC200_muxsel(struct bttv *btv, unsigned int input);
static void picolo_tetra_muxsel(struct bttv *btv, unsigned int input);
static void picolo_tetra_init(struct bttv *btv);
static void tibetCS16_muxsel(struct bttv *btv, unsigned int input);
static void tibetCS16_init(struct bttv *btv);
static void kodicom4400r_muxsel(struct bttv *btv, unsigned int input);
static void kodicom4400r_init(struct bttv *btv);
static void sigmaSLC_muxsel(struct bttv *btv, unsigned int input);
static void sigmaSQ_muxsel(struct bttv *btv, unsigned int input);
static void geovision_muxsel(struct bttv *btv, unsigned int input);
static void phytec_muxsel(struct bttv *btv, unsigned int input);
static void gv800s_muxsel(struct bttv *btv, unsigned int input);
static void gv800s_init(struct bttv *btv);
static int terratec_active_radio_upgrade(struct bttv *btv);
static int tea5757_read(struct bttv *btv);
static int tea5757_write(struct bttv *btv, int value);
static void identify_by_eeprom(struct bttv *btv,
unsigned char eeprom_data[256]);
static int __devinit pvr_boot(struct bttv *btv);
static unsigned int triton1;
static unsigned int vsfx;
static unsigned int latency = UNSET;
int no_overlay=-1;
static unsigned int card[BTTV_MAX]   = ;
static unsigned int pll[BTTV_MAX]    = ;
static unsigned int tuner[BTTV_MAX]  = ;
static unsigned int svhs[BTTV_MAX]   = ;
static unsigned int remote[BTTV_MAX] = ;
static unsigned int audiodev[BTTV_MAX];
static unsigned int saa6588[BTTV_MAX];
static struct bttv  *master[BTTV_MAX] = ;
static unsigned int autoload = UNSET;
static unsigned int gpiomask = UNSET;
static unsigned int audioall = UNSET;
static unsigned int audiomux[5] = ;
module_param(triton1,    int, 0444);
module_param(vsfx,       int, 0444);
module_param(no_overlay, int, 0444);
module_param(latency,    int, 0444);
module_param(gpiomask,   int, 0444);
module_param(audioall,   int, 0444);
module_param(autoload,   int, 0444);
module_param_array(card,     int, NULL, 0444);
module_param_array(pll,      int, NULL, 0444);
module_param_array(tuner,    int, NULL, 0444);
module_param_array(svhs,     int, NULL, 0444);
module_param_array(remote,   int, NULL, 0444);
module_param_array(audiodev, int, NULL, 0444);
module_param_array(audiomux, int, NULL, 0444);
MODULE_PARM_DESC(triton1,"set ETBF pci config bit "
"[enable bug compatibility for triton1 + others]");
MODULE_PARM_DESC(vsfx,"set VSFX pci config bit "
"[yet another chipset flaw workaround]");
MODULE_PARM_DESC(latency,"pci latency timer");
MODULE_PARM_DESC(card,"specify TV/grabber card model, see CARDLIST file for a list");
MODULE_PARM_DESC(pll,"specify installed crystal (0=none, 28=28 MHz, 35=35 MHz)");
MODULE_PARM_DESC(tuner,"specify installed tuner type");
MODULE_PARM_DESC(autoload, "obsolete option, please do not use anymore");
MODULE_PARM_DESC(audiodev, "specify audio device:\n"
"\t\t-1 = no audio\n"
"\t\t 0 = autodetect (default)\n"
"\t\t 1 = msp3400\n"
"\t\t 2 = tda7432\n"
"\t\t 3 = tvaudio");
MODULE_PARM_DESC(saa6588, "if 1, then load the saa6588 RDS module, default (0) is to use the card definition.");
MODULE_PARM_DESC(no_overlay,"allow override overlay default (0 disables, 1 enables)"
" [some VIA/SIS chipsets are known to have problem with overlay]");
static struct CARD  cards[] __devinitdata = ;
struct tvcard bttv_tvcards[] = ;
static const unsigned int bttv_num_tvcards = ARRAY_SIZE(bttv_tvcards);
static unsigned char eeprom_data[256];
void __devinit bttv_idcard(struct bttv *btv)
static void identify_by_eeprom(struct bttv *btv, unsigned char eeprom_data[256])
static void flyvideo_gpio(struct bttv *btv)
static int miro_tunermap[] = ;
static int miro_fmtuner[]  = ;
static void miro_pinnacle_gpio(struct bttv *btv)
#define LM1882_SYNC_DRIVE     0x200000L
static void init_ids_eagle(struct bttv *btv)
static void eagle_muxsel(struct bttv *btv, unsigned int input)
static void gvc1100_muxsel(struct bttv *btv, unsigned int input)
static void init_lmlbt4x(struct bttv *btv)
static void sigmaSQ_muxsel(struct bttv *btv, unsigned int input)
static void sigmaSLC_muxsel(struct bttv *btv, unsigned int input)
static void geovision_muxsel(struct bttv *btv, unsigned int input)
static void bttv_reset_audio(struct bttv *btv)
void __devinit bttv_init_card1(struct bttv *btv)
void __devinit bttv_init_card2(struct bttv *btv)
void __devinit bttv_init_tuner(struct bttv *btv)
static void modtec_eeprom(struct bttv *btv)
static void __devinit hauppauge_eeprom(struct bttv *btv)
static int terratec_active_radio_upgrade(struct bttv *btv)
#define PVR_GPIO_DELAY		10
#define BTTV_ALT_DATA		0x000001
#define BTTV_ALT_DCLK		0x100000
#define BTTV_ALT_NCONFIG	0x800000
static int __devinit pvr_altera_load(struct bttv *btv, const u8 *micro,
u32 microlen)
static int __devinit pvr_boot(struct bttv *btv)
static void __devinit osprey_eeprom(struct bttv *btv, const u8 ee[256])
static int tuner_0_table[] = ;
static int tuner_1_table[] = ;
static void __devinit avermedia_eeprom(struct bttv *btv)
u32 bttv_tda9880_setnorm(struct bttv *btv, u32 gpiobits)
static void __devinit boot_msp34xx(struct bttv *btv, int pin)
static void __devinit init_PXC200(struct bttv *btv)
static void
init_RTV24 (struct bttv *btv)
static void bus_low(struct bttv *btv, int bit)
static void bus_high(struct bttv *btv, int bit)
static int bus_in(struct bttv *btv, int bit)
#define TEA_FREQ		0:14
#define TEA_BUFFER		15:15
#define TEA_SIGNAL_STRENGTH	16:17
#define TEA_PORT1		18:18
#define TEA_PORT0		19:19
#define TEA_BAND		20:21
#define TEA_BAND_FM		0
#define TEA_BAND_MW		1
#define TEA_BAND_LW		2
#define TEA_BAND_SW		3
#define TEA_MONO		22:22
#define TEA_ALLOW_STEREO	0
#define TEA_FORCE_MONO		1
#define TEA_SEARCH_DIRECTION	23:23
#define TEA_SEARCH_DOWN		0
#define TEA_SEARCH_UP		1
#define TEA_STATUS		24:24
#define TEA_STATUS_TUNED	0
#define TEA_STATUS_SEARCHING	1
static int tea5757_read(struct bttv *btv)
static int tea5757_write(struct bttv *btv, int value)
void tea5757_set_freq(struct bttv *btv, unsigned short freq)
static void rv605_muxsel(struct bttv *btv, unsigned int input)
static void tibetCS16_muxsel(struct bttv *btv, unsigned int input)
static void tibetCS16_init(struct bttv *btv)
static void kodicom4400r_write(struct bttv *btv,
unsigned char xaddr,
unsigned char yaddr,
unsigned char data)
static void kodicom4400r_muxsel(struct bttv *btv, unsigned int input)
static void kodicom4400r_init(struct bttv *btv)
#define ENA0    0x01
#define ENB0    0x02
#define ENA1    0x04
#define ENB1    0x08
#define IN10    0x10
#define IN00    0x20
#define IN11    0x40
#define IN01    0x80
static void xguard_muxsel(struct bttv *btv, unsigned int input)
static void picolo_tetra_init(struct bttv *btv)
static void picolo_tetra_muxsel (struct bttv* btv, unsigned int input)
#define I2C_TDA8540        0x90
#define I2C_TDA8540_ALT1   0x92
#define I2C_TDA8540_ALT2   0x94
#define I2C_TDA8540_ALT3   0x96
#define I2C_TDA8540_ALT4   0x98
#define I2C_TDA8540_ALT5   0x9a
#define I2C_TDA8540_ALT6   0x9c
static void ivc120_muxsel(struct bttv *btv, unsigned int input)
#define PX_CFG_PXC200F 0x01
#define PX_FLAG_PXC200A  0x00001000
#define PX_I2C_PIC       0x0f
#define PX_PXC200A_CARDID 0x200a1295
#define PX_I2C_CMD_CFG   0x00
static void PXC200_muxsel(struct bttv *btv, unsigned int input)
static void phytec_muxsel(struct bttv *btv, unsigned int input)
static void gv800s_write(struct bttv *btv,
unsigned char xaddr,
unsigned char yaddr,
unsigned char data)
static void gv800s_muxsel(struct bttv *btv, unsigned int input)
static void gv800s_init(struct bttv *btv)
void __init bttv_check_chipset(void)
int __devinit bttv_handle_chipset(struct bttv *btv)
