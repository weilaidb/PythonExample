#define WL_ERROR(fmt, args...) printk(fmt, ##args)
#define WL_TRACE(fmt, args...) no_printk(fmt, ##args)
extern void bcm_wlan_power_off(int);
extern void bcm_wlan_power_on(int);
int wifi_set_carddetect(int on);
int wifi_set_power(int on, unsigned long msec);
int wifi_get_irq_number(unsigned long *irq_flags_ptr);
#if defined(OOB_INTR_ONLY)
#if defined(BCMLXSDMMC)
extern int sdioh_mmc_irq(int irq);
static int dhd_oob_gpio_num = -1;
module_param(dhd_oob_gpio_num, int, 0644);
MODULE_PARM_DESC(dhd_oob_gpio_num, "DHD oob gpio number");
int dhd_customer_oob_irq_map(unsigned long *irq_flags_ptr)
void dhd_customer_gpio_wlan_ctrl(int onoff)
int dhd_custom_get_mac_address(unsigned char *buf)
