#define __ASM_PLAT_GPIO_H
#define gpio_get_value  __gpio_get_value
#define gpio_set_value  __gpio_set_value
#define gpio_cansleep   __gpio_cansleep
#define gpio_to_irq     __gpio_to_irq
#define NMK_GPIO_DAT	0x00
#define NMK_GPIO_DATS	0x04
#define NMK_GPIO_DATC	0x08
#define NMK_GPIO_PDIS	0x0c
#define NMK_GPIO_DIR	0x10
#define NMK_GPIO_DIRS	0x14
#define NMK_GPIO_DIRC	0x18
#define NMK_GPIO_SLPC	0x1c
#define NMK_GPIO_AFSLA	0x20
#define NMK_GPIO_AFSLB	0x24
#define NMK_GPIO_RIMSC	0x40
#define NMK_GPIO_FIMSC	0x44
#define NMK_GPIO_IS	0x48
#define NMK_GPIO_IC	0x4c
#define NMK_GPIO_RWIMSC	0x50
#define NMK_GPIO_FWIMSC	0x54
#define NMK_GPIO_WKS	0x58
#define NMK_GPIO_ALT_GPIO	0
#define NMK_GPIO_ALT_A	1
#define NMK_GPIO_ALT_B	2
#define NMK_GPIO_ALT_C	(NMK_GPIO_ALT_A | NMK_GPIO_ALT_B)
enum nmk_gpio_pull ;
enum nmk_gpio_slpm ;
extern int nmk_gpio_set_slpm(int gpio, enum nmk_gpio_slpm mode);
extern int nmk_gpio_set_pull(int gpio, enum nmk_gpio_pull pull);
extern int nmk_gpio_set_mode(int gpio, int gpio_mode);
extern int nmk_gpio_get_mode(int gpio);
extern void nmk_gpio_wakeups_suspend(void);
extern void nmk_gpio_wakeups_resume(void);
extern void nmk_gpio_read_pull(int gpio_bank, u32 *pull_up);
struct nmk_gpio_platform_data ;
