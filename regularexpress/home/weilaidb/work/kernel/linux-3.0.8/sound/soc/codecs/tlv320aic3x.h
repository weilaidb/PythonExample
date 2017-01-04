#define _AIC3X_H
#define AIC3X_CACHEREGNUM		103
#define AIC3X_PAGE_SELECT		0
#define AIC3X_RESET			1
#define AIC3X_SAMPLE_RATE_SEL_REG	2
#define AIC3X_PLL_PROGA_REG		3
#define AIC3X_PLL_PROGB_REG		4
#define AIC3X_PLL_PROGC_REG		5
#define AIC3X_PLL_PROGD_REG		6
#define AIC3X_CODEC_DATAPATH_REG	7
#define AIC3X_ASD_INTF_CTRLA		8
#define AIC3X_ASD_INTF_CTRLB		9
#define AIC3X_ASD_INTF_CTRLC		10
#define AIC3X_OVRF_STATUS_AND_PLLR_REG	11
#define AIC3X_CODEC_DFILT_CTRL		12
#define AIC3X_HEADSET_DETECT_CTRL_A	13
#define AIC3X_HEADSET_DETECT_CTRL_B	14
#define LADC_VOL			15
#define RADC_VOL			16
#define MIC3LR_2_LADC_CTRL		17
#define MIC3LR_2_RADC_CTRL		18
#define LINE1L_2_LADC_CTRL		19
#define LINE1R_2_LADC_CTRL		21
#define LINE1R_2_RADC_CTRL		22
#define LINE1L_2_RADC_CTRL		24
#define LINE2L_2_LADC_CTRL		20
#define LINE2R_2_RADC_CTRL		23
#define MICBIAS_CTRL			25
#define LAGC_CTRL_A			26
#define LAGC_CTRL_B			27
#define LAGC_CTRL_C			28
#define RAGC_CTRL_A			29
#define RAGC_CTRL_B			30
#define RAGC_CTRL_C			31
#define DAC_PWR				37
#define HPLCOM_CFG			37
#define HPRCOM_CFG			38
#define DAC_LINE_MUX			41
#define HPOUT_POP_REDUCTION		42
#define LDAC_VOL			43
#define RDAC_VOL			44
#define LINE2L_2_HPLOUT_VOL		45
#define PGAL_2_HPLOUT_VOL		46
#define DACL1_2_HPLOUT_VOL		47
#define LINE2R_2_HPLOUT_VOL		48
#define PGAR_2_HPLOUT_VOL		49
#define DACR1_2_HPLOUT_VOL		50
#define HPLOUT_CTRL			51
#define LINE2L_2_HPLCOM_VOL		52
#define PGAL_2_HPLCOM_VOL		53
#define DACL1_2_HPLCOM_VOL		54
#define LINE2R_2_HPLCOM_VOL		55
#define PGAR_2_HPLCOM_VOL		56
#define DACR1_2_HPLCOM_VOL		57
#define HPLCOM_CTRL			58
#define LINE2L_2_HPROUT_VOL		59
#define PGAL_2_HPROUT_VOL		60
#define DACL1_2_HPROUT_VOL		61
#define LINE2R_2_HPROUT_VOL		62
#define PGAR_2_HPROUT_VOL		63
#define DACR1_2_HPROUT_VOL		64
#define HPROUT_CTRL			65
#define LINE2L_2_HPRCOM_VOL		66
#define PGAL_2_HPRCOM_VOL		67
#define DACL1_2_HPRCOM_VOL		68
#define LINE2R_2_HPRCOM_VOL		69
#define PGAR_2_HPRCOM_VOL		70
#define DACR1_2_HPRCOM_VOL		71
#define HPRCOM_CTRL			72
#define LINE2L_2_MONOLOPM_VOL		73
#define PGAL_2_MONOLOPM_VOL		74
#define DACL1_2_MONOLOPM_VOL		75
#define LINE2R_2_MONOLOPM_VOL		76
#define PGAR_2_MONOLOPM_VOL		77
#define DACR1_2_MONOLOPM_VOL		78
#define MONOLOPM_CTRL			79
#define CLASSD_CTRL			73
#define LINE2L_2_LLOPM_VOL		80
#define PGAL_2_LLOPM_VOL		81
#define DACL1_2_LLOPM_VOL		82
#define LINE2R_2_LLOPM_VOL		83
#define PGAR_2_LLOPM_VOL		84
#define DACR1_2_LLOPM_VOL		85
#define LLOPM_CTRL			86
#define LINE2L_2_RLOPM_VOL		87
#define PGAL_2_RLOPM_VOL		88
#define DACL1_2_RLOPM_VOL		89
#define LINE2R_2_RLOPM_VOL		90
#define PGAR_2_RLOPM_VOL		91
#define DACR1_2_RLOPM_VOL		92
#define RLOPM_CTRL			93
#define AIC3X_STICKY_IRQ_FLAGS_REG	96
#define AIC3X_RT_IRQ_FLAGS_REG		97
#define AIC3X_GPIO1_REG			98
#define AIC3X_GPIO2_REG			99
#define AIC3X_GPIOA_REG			100
#define AIC3X_GPIOB_REG			101
#define AIC3X_CLKGEN_CTRL_REG		102
#define PAGE0_SELECT		0
#define PAGE1_SELECT		1
#define BIT_CLK_MASTER          0x80
#define WORD_CLK_MASTER         0x40
#define FSREF_44100		(1 << 7)
#define FSREF_48000		(0 << 7)
#define DUAL_RATE_MODE		((1 << 5) | (1 << 6))
#define LDAC2LCH		(0x1 << 3)
#define RDAC2RCH		(0x1 << 1)
#define PLLP_SHIFT		0
#define PLLQ_SHIFT		3
#define PLLR_SHIFT		0
#define PLLJ_SHIFT		2
#define PLLD_MSB_SHIFT		0
#define PLLD_LSB_SHIFT		2
#define CODEC_CLKIN_PLLDIV	0
#define CODEC_CLKIN_CLKDIV	1
#define PLL_CLKIN_SHIFT		4
#define MCLK_SOURCE		0x0
#define PLL_CLKDIV_SHIFT	0
#define SOFT_RESET		0x80
#define PLL_ENABLE		0x80
#define ROUTE_ON		0x80
#define UNMUTE			0x08
#define MUTE_ON			0x80
#define LADC_PWR_ON		0x04
#define RADC_PWR_ON		0x04
#define LDAC_PWR_ON		0x80
#define RDAC_PWR_ON		0x40
#define HPLOUT_PWR_ON		0x01
#define HPROUT_PWR_ON		0x01
#define HPLCOM_PWR_ON		0x01
#define HPRCOM_PWR_ON		0x01
#define MONOLOPM_PWR_ON		0x01
#define LLOPM_PWR_ON		0x01
#define RLOPM_PWR_ON	0x01
#define INVERT_VOL(val)   (0x7f - val)
#define DEFAULT_VOL     INVERT_VOL(0x50)
#define DEFAULT_GAIN    0x20
void aic3x_set_gpio(struct snd_soc_codec *codec, int gpio, int state);
int aic3x_get_gpio(struct snd_soc_codec *codec, int gpio);
enum ;
enum ;
enum ;
#define AIC3X_HEADSET_DETECT_ENABLED	0x80
#define AIC3X_HEADSET_DETECT_SHIFT	5
#define AIC3X_HEADSET_DETECT_MASK	3
#define AIC3X_HEADSET_DEBOUNCE_SHIFT	2
#define AIC3X_HEADSET_DEBOUNCE_MASK	7
#define AIC3X_BUTTON_DEBOUNCE_SHIFT 	0
#define AIC3X_BUTTON_DEBOUNCE_MASK	3
void aic3x_set_headset_detection(struct snd_soc_codec *codec, int detect,
int headset_debounce, int button_debounce);
int aic3x_headset_detected(struct snd_soc_codec *codec);
int aic3x_button_pressed(struct snd_soc_codec *codec);