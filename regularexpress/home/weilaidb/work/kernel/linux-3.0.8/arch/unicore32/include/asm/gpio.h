#define __UNICORE_GPIO_H__
#define GPI_OTP_INT             0
#define GPI_PCI_INTA            1
#define GPI_PCI_INTB            2
#define GPI_PCI_INTC            3
#define GPI_PCI_INTD            4
#define GPI_BAT_DET             5
#define GPI_SD_CD               6
#define GPI_SOFF_REQ            7
#define GPI_SD_WP               8
#define GPI_LCD_CASE_OFF        9
#define GPO_WIFI_EN             10
#define GPO_HDD_LED             11
#define GPO_VGA_EN              12
#define GPO_LCD_EN              13
#define GPO_LED_DATA            14
#define GPO_LED_CLK             15
#define GPO_CAM_PWR_EN          16
#define GPO_LCD_VCC_EN          17
#define GPO_SOFT_OFF            18
#define GPO_BT_EN               19
#define GPO_FAN_ON              20
#define GPO_SPKR                21
#define GPO_SET_V1              23
#define GPO_SET_V2              24
#define GPO_CPU_HEALTH          25
#define GPO_LAN_SEL             26
#define GPI_BTN_TOUCH		14
#define GPIO_IN			0x000043ff
#define GPIO_OUT		0x0fffbc00
#define GPIO_IN			0x000003ff
#define GPIO_OUT		0x0ffffc00
#define GPIO_IN			0x000001df
#define GPIO_OUT		0x03fee800
#define GPIO_DIR                (~((GPIO_IN) | 0xf0000000))
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
#define gpio_cansleep	__gpio_cansleep
static inline unsigned gpio_to_irq(unsigned gpio)
static inline unsigned irq_to_gpio(unsigned irq)
