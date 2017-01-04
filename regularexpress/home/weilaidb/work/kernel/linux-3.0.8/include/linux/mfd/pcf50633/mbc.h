#define __LINUX_MFD_PCF50633_MBC_H
#define PCF50633_REG_MBCC1	0x43
#define PCF50633_REG_MBCC2	0x44
#define PCF50633_REG_MBCC3	0x45
#define PCF50633_REG_MBCC4	0x46
#define PCF50633_REG_MBCC5	0x47
#define PCF50633_REG_MBCC6	0x48
#define PCF50633_REG_MBCC7	0x49
#define PCF50633_REG_MBCC8	0x4a
#define PCF50633_REG_MBCS1	0x4b
#define PCF50633_REG_MBCS2	0x4c
#define PCF50633_REG_MBCS3	0x4d
enum pcf50633_reg_mbcc1 ;
#define PCF50633_MBCC1_WDTIME_MASK	  0xc0
enum pcf50633_reg_mbcc2 ;
enum pcf50633_reg_mbcc7 ;
#define PCF50633_MBCC7_USB_MASK 0x03
enum pcf50633_reg_mbcc8 ;
enum pcf50633_reg_mbcs1 ;
enum pcf50633_reg_mbcs2_mbcmod ;
#define PCF50633_MBCS2_MBC_MASK		0x0f
enum pcf50633_reg_mbcs2_chgstat ;
#define PCF50633_MBCS2_RESSTAT_AUTO	0x40
enum pcf50633_reg_mbcs3 ;
#define PCF50633_MBCC2_VBATCOND_MASK	  0x03
#define PCF50633_MBCC2_VMAX_MASK	  0x3c
#define PCF50633_MBC_USB_ONLINE		0x01
#define PCF50633_MBC_USB_ACTIVE		0x02
#define PCF50633_MBC_ADAPTER_ONLINE	0x04
#define PCF50633_MBC_ADAPTER_ACTIVE	0x08
int pcf50633_mbc_usb_curlim_set(struct pcf50633 *pcf, int ma);
int pcf50633_mbc_get_status(struct pcf50633 *);
int pcf50633_mbc_get_usb_online_status(struct pcf50633 *);
