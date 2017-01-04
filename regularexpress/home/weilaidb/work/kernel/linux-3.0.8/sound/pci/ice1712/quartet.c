struct qtet_spec ;
struct qtet_kcontrol_private ;
enum ;
static char *ext_clock_names[3] = ;
#define AK4113_ADDR		0x26
#define AK4620_ADDR		0x02
#define GPIO_D0			(1<<0)
#define GPIO_D1_JACKDTC0	(1<<1)
#define GPIO_D2_JACKDTC1	(1<<2)
#define GPIO_D3			(1<<3)
#define GPIO_D4_SPI_CDTO	(1<<4)
#define GPIO_D5_SPI_CCLK	(1<<5)
#define GPIO_D6_CD		(1<<6)
#define GPIO_D7_DD		(1<<7)
#define GPIO_CPLD_CSN		(1<<8)
#define GPIO_CPLD_RW		(1<<9)
#define GPIO_SPI_CSN0		(1<<10)
#define GPIO_SPI_CSN1		(1<<11)
#define GPIO_EX_GPIOE		(1<<12)
#define GPIO_SCR		(1<<13)
#define GPIO_MCR		(1<<14)
#define GPIO_SPI_ALL		(GPIO_D4_SPI_CDTO | GPIO_D5_SPI_CCLK |\
GPIO_SPI_CSN0 | GPIO_SPI_CSN1)
#define GPIO_DATA_MASK		(GPIO_D0 | GPIO_D1_JACKDTC0 | \
GPIO_D2_JACKDTC1 | GPIO_D3 | \
GPIO_D4_SPI_CDTO | GPIO_D5_SPI_CCLK | \
GPIO_D6_CD | GPIO_D7_DD)
#define SCR_RELAY		GPIO_D0
#define SCR_PHP_V		GPIO_D1_JACKDTC0
#define SCR_MUTE		GPIO_D2_JACKDTC1
#define SCR_PHP			GPIO_D3
#define SCR_AIN12_SEL0		GPIO_D4_SPI_CDTO
#define SCR_AIN12_SEL1		GPIO_D5_SPI_CCLK
#define SCR_AIN34_SEL		GPIO_D6_CD
#define SCR_CODEC_PDN		GPIO_D7_DD
#define SCR_AIN12_LINE		(0)
#define SCR_AIN12_MIC		(SCR_AIN12_SEL0)
#define SCR_AIN12_LOWCUT	(SCR_AIN12_SEL1 | SCR_AIN12_SEL0)
#define MCR_IN12_MON12		GPIO_D0
#define MCR_IN12_MON34		GPIO_D1_JACKDTC0
#define MCR_IN34_MON12		GPIO_D2_JACKDTC1
#define MCR_IN34_MON34		GPIO_D3
#define MCR_OUT34_MON12		GPIO_D4_SPI_CDTO
#define MCR_OUT12_MON34		GPIO_D5_SPI_CCLK
#define CPLD_CKS0		GPIO_D0
#define CPLD_CKS1		GPIO_D1_JACKDTC0
#define CPLD_CKS2		GPIO_D2_JACKDTC1
#define CPLD_SYNC_SEL		GPIO_D3
#define CPLD_WORD_SEL		GPIO_D4_SPI_CDTO
#define CPLD_COAX_OUT		GPIO_D5_SPI_CCLK
#define CPLD_IN12_SEL		GPIO_D6_CD
#define CPLD_IN34_SEL		GPIO_D7_DD
#define CPLD_CKS_44100HZ	(0)
#define CPLD_CKS_48000HZ	(CPLD_CKS0)
#define CPLD_CKS_88200HZ	(CPLD_CKS1)
#define CPLD_CKS_96000HZ	(CPLD_CKS1 | CPLD_CKS0)
#define CPLD_CKS_176400HZ	(CPLD_CKS2)
#define CPLD_CKS_192000HZ	(CPLD_CKS2 | CPLD_CKS0)
#define CPLD_CKS_MASK		(CPLD_CKS0 | CPLD_CKS1 | CPLD_CKS2)
#define CPLD_EXT_SPDIF	(0 | CPLD_SYNC_SEL)
#define CPLD_EXT_WORDCLOCK_1FS	(CPLD_CKS1 | CPLD_SYNC_SEL)
#define CPLD_EXT_WORDCLOCK_256FS	(CPLD_CKS1 | CPLD_WORD_SEL |\
CPLD_SYNC_SEL)
#define EXT_SPDIF_TYPE			0
#define EXT_WORDCLOCK_1FS_TYPE		1
#define EXT_WORDCLOCK_256FS_TYPE	2
#define AK4620_DFS0		(1<<0)
#define AK4620_DFS1		(1<<1)
#define AK4620_CKS0		(1<<2)
#define AK4620_CKS1		(1<<3)
#define AK4620_DFS_REG		0x02
#define AK4620_DEEMVOL_REG	0x03
#define AK4620_SMUTE		(1<<7)
static char *get_binary(char *buffer, int value)
static unsigned int qtet_rates[] = ;
static unsigned int cks_vals[] = ;
static struct snd_pcm_hw_constraint_list qtet_rates_info = ;
static void qtet_ak4113_write(void *private_data, unsigned char reg,
unsigned char val)
static unsigned char qtet_ak4113_read(void *private_data, unsigned char reg)
static void qtet_akm_write(struct snd_akm4xxx *ak, int chip,
unsigned char addr, unsigned char data)
static void qtet_akm_set_regs(struct snd_akm4xxx *ak, unsigned char addr,
unsigned char mask, unsigned char value)
static void qtet_akm_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
#define AK_CONTROL(xname, xch)
#define PCM_12_PLAYBACK_VOLUME	"PCM 1/2 Playback Volume"
#define PCM_34_PLAYBACK_VOLUME	"PCM 3/4 Playback Volume"
#define PCM_12_CAPTURE_VOLUME	"PCM 1/2 Capture Volume"
#define PCM_34_CAPTURE_VOLUME	"PCM 3/4 Capture Volume"
static const struct snd_akm4xxx_dac_channel qtet_dac[] = ;
static const struct snd_akm4xxx_adc_channel qtet_adc[] = ;
static struct snd_akm4xxx akm_qtet_dac __devinitdata = ;
static void reg_write(struct snd_ice1712 *ice, unsigned int reg,
unsigned int data)
static unsigned int get_scr(struct snd_ice1712 *ice)
static unsigned int get_mcr(struct snd_ice1712 *ice)
static unsigned int get_cpld(struct snd_ice1712 *ice)
static void set_scr(struct snd_ice1712 *ice, unsigned int val)
static void set_mcr(struct snd_ice1712 *ice, unsigned int val)
static void set_cpld(struct snd_ice1712 *ice, unsigned int val)
static void proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void proc_init(struct snd_ice1712 *ice)
static void proc_init(struct snd_ice1712 *ice)
static int qtet_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_ain12_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int qtet_ain12_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_ain12_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_php_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_php_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define PRIV_SW(xid, xbit, xreg)	[xid] =
#define PRIV_ENUM2(xid, xbit, xreg, xtext1, xtext2)	[xid] =
static struct qtet_kcontrol_private qtet_privates[] = ;
static int qtet_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int qtet_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int qtet_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define qtet_sw_info	snd_ctl_boolean_mono_info
#define QTET_CONTROL(xname, xtype, xpriv)	\
static struct snd_kcontrol_new qtet_controls[] __devinitdata = ;
static char *slave_vols[] __devinitdata = ;
static __devinitdata
DECLARE_TLV_DB_SCALE(qtet_master_db_scale, -6350, 50, 1);
static struct snd_kcontrol __devinit *ctl_find(struct snd_card *card,
const char *name)
static void __devinit add_slaves(struct snd_card *card,
struct snd_kcontrol *master, char **list)
static int __devinit qtet_add_controls(struct snd_ice1712 *ice)
static inline int qtet_is_spdif_master(struct snd_ice1712 *ice)
static unsigned int qtet_get_rate(struct snd_ice1712 *ice)
static int get_cks_val(int rate)
static void qtet_set_rate(struct snd_ice1712 *ice, unsigned int rate)
static inline unsigned char qtet_set_mclk(struct snd_ice1712 *ice,
unsigned int rate)
static int qtet_set_spdif_clock(struct snd_ice1712 *ice, int type)
static int qtet_get_spdif_master_type(struct snd_ice1712 *ice)
static void qtet_ak4113_change(struct ak4113 *ak4113, unsigned char c0,
unsigned char c1)
static void qtet_spdif_in_open(struct snd_ice1712 *ice,
struct snd_pcm_substream *substream)
static int __devinit qtet_init(struct snd_ice1712 *ice)
static unsigned char qtet_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_qtet_cards[] __devinitdata = ;
