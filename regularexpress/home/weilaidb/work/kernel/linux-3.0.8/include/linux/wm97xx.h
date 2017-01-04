#define _LINUX_WM97XX_H
#define	WM97xx_GENERIC			0x0000
#define	WM97xx_WM1613			0x1613
#define AC97_WM97XX_DIGITISER1		0x76
#define AC97_WM97XX_DIGITISER2		0x78
#define AC97_WM97XX_DIGITISER_RD 	0x7a
#define AC97_WM9713_DIG1		0x74
#define AC97_WM9713_DIG2		AC97_WM97XX_DIGITISER1
#define AC97_WM9713_DIG3		AC97_WM97XX_DIGITISER2
#define WM97XX_POLL		0x8000
#define WM97XX_ADCSEL_X		0x1000
#define WM97XX_ADCSEL_Y		0x2000
#define WM97XX_ADCSEL_PRES	0x3000
#define WM97XX_ADCSEL_MASK	0x7000
#define WM97XX_COO		0x0800
#define WM97XX_CTC		0x0400
#define WM97XX_CM_RATE_93	0x0000
#define WM97XX_CM_RATE_187	0x0100
#define WM97XX_CM_RATE_375	0x0200
#define WM97XX_CM_RATE_750	0x0300
#define WM97XX_CM_RATE_8K	0x00f0
#define WM97XX_CM_RATE_12K	0x01f0
#define WM97XX_CM_RATE_24K	0x02f0
#define WM97XX_CM_RATE_48K	0x03f0
#define WM97XX_CM_RATE_MASK	0x03f0
#define WM97XX_RATE(i)		(((i & 3) << 8) | ((i & 4) ? 0xf0 : 0))
#define WM97XX_DELAY(i)		((i << 4) & 0x00f0)
#define WM97XX_DELAY_MASK	0x00f0
#define WM97XX_SLEN		0x0008
#define WM97XX_SLT(i)		((i - 5) & 0x7)
#define WM97XX_SLT_MASK		0x0007
#define WM97XX_PRP_DETW		0x4000
#define WM97XX_PRP_DET		0x8000
#define WM97XX_PRP_DET_DIG	0xc000
#define WM97XX_RPR		0x2000
#define WM97XX_PEN_DOWN		0x8000
#define WM97XX_ADCSRC_MASK	0x7000
#define WM97XX_AUX_ID1		0x8001
#define WM97XX_AUX_ID2		0x8002
#define WM97XX_AUX_ID3		0x8003
#define WM97XX_AUX_ID4		0x8004
#define WM9712_45W		0x1000
#define WM9712_PDEN		0x0800
#define WM9712_WAIT		0x0200
#define WM9712_PIL		0x0100
#define WM9712_MASK_HI		0x0040
#define WM9712_MASK_EDGE	0x0080
#define	WM9712_MASK_SYNC	0x00c0
#define WM9712_RPU(i)		(i&0x3f)
#define WM9712_PD(i)		(0x1 << i)
#define AC97_WM9712_POWER	0x24
#define AC97_WM9712_REV		0x58
#define WM9705_PDEN		0x1000
#define WM9705_PINV		0x0800
#define WM9705_BSEN		0x0400
#define WM9705_BINV		0x0200
#define WM9705_WAIT		0x0100
#define WM9705_PIL		0x0080
#define WM9705_PHIZ		0x0040
#define WM9705_MASK_HI		0x0010
#define WM9705_MASK_EDGE	0x0020
#define	WM9705_MASK_SYNC	0x0030
#define WM9705_PDD(i)		(i & 0x000f)
#define WM9713_PDPOL		0x0400
#define WM9713_POLL		0x0200
#define WM9713_CTC		0x0100
#define WM9713_ADCSEL_X		0x0002
#define WM9713_ADCSEL_Y		0x0004
#define WM9713_ADCSEL_PRES	0x0008
#define WM9713_COO		0x0001
#define WM9713_45W		0x1000
#define WM9713_PDEN		0x0800
#define WM9713_ADCSEL_MASK	0x00fe
#define WM9713_WAIT		0x0200
#define TS_COMP1		0x0
#define TS_COMP2		0x1
#define TS_BMON			0x2
#define TS_WIPER		0x3
#define WM97XX_ID1		0x574d
#define WM9712_ID2		0x4c12
#define WM9705_ID2		0x4c05
#define WM9713_ID2		0x4c13
#define WM97XX_MAX_GPIO		16
#define WM97XX_GPIO_1		(1 << 1)
#define WM97XX_GPIO_2		(1 << 2)
#define WM97XX_GPIO_3		(1 << 3)
#define WM97XX_GPIO_4		(1 << 4)
#define WM97XX_GPIO_5		(1 << 5)
#define WM97XX_GPIO_6		(1 << 6)
#define WM97XX_GPIO_7		(1 << 7)
#define WM97XX_GPIO_8		(1 << 8)
#define WM97XX_GPIO_9		(1 << 9)
#define WM97XX_GPIO_10		(1 << 10)
#define WM97XX_GPIO_11		(1 << 11)
#define WM97XX_GPIO_12		(1 << 12)
#define WM97XX_GPIO_13		(1 << 13)
#define WM97XX_GPIO_14		(1 << 14)
#define WM97XX_GPIO_15		(1 << 15)
#define AC97_LINK_FRAME		21
#define RC_AGAIN			0x00000001
#define RC_VALID			0x00000002
#define RC_PENUP			0x00000004
#define RC_PENDOWN			0x00000008
struct wm97xx_data ;
enum wm97xx_gpio_status ;
enum wm97xx_gpio_dir ;
enum wm97xx_gpio_pol ;
enum wm97xx_gpio_sticky ;
enum wm97xx_gpio_wake ;
#define WM97XX_DIG_START	0x1
#define WM97XX_DIG_STOP		0x2
#define WM97XX_PHY_INIT		0x3
#define WM97XX_AUX_PREPARE	0x4
#define WM97XX_DIG_RESTORE	0x5
struct wm97xx;
extern struct wm97xx_codec_drv wm9705_codec;
extern struct wm97xx_codec_drv wm9712_codec;
extern struct wm97xx_codec_drv wm9713_codec;
struct wm97xx_codec_drv ;
struct wm97xx_mach_ops ;
struct wm97xx ;
struct wm97xx_batt_pdata ;
struct wm97xx_pdata ;
enum wm97xx_gpio_status wm97xx_get_gpio(struct wm97xx *wm, u32 gpio);
void wm97xx_set_gpio(struct wm97xx *wm, u32 gpio,
enum wm97xx_gpio_status status);
void wm97xx_config_gpio(struct wm97xx *wm, u32 gpio,
enum wm97xx_gpio_dir dir,
enum wm97xx_gpio_pol pol,
enum wm97xx_gpio_sticky sticky,
enum wm97xx_gpio_wake wake);
void wm97xx_set_suspend_mode(struct wm97xx *wm, u16 mode);
int wm97xx_reg_read(struct wm97xx *wm, u16 reg);
void wm97xx_reg_write(struct wm97xx *wm, u16 reg, u16 val);
int wm97xx_read_aux_adc(struct wm97xx *wm, u16 adcsel);
int wm97xx_register_mach_ops(struct wm97xx *, struct wm97xx_mach_ops *);
void wm97xx_unregister_mach_ops(struct wm97xx *);
