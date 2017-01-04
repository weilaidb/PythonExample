static int sms_dbg;
module_param_named(cards_dbg, sms_dbg, int, 0644);
MODULE_PARM_DESC(cards_dbg, "set debug level (info=1, adv=2 (or-able))");
static struct sms_board sms_boards[] = ;
struct sms_board *sms_get_board(unsigned id)
EXPORT_SYMBOL_GPL(sms_get_board);
static inline void sms_gpio_assign_11xx_default_led_config(
struct smscore_gpio_config *pGpioConfig)
int sms_board_event(struct smscore_device_t *coredev,
enum SMS_BOARD_EVENTS gevent)
EXPORT_SYMBOL_GPL(sms_board_event);
static int sms_set_gpio(struct smscore_device_t *coredev, int pin, int enable)
int sms_board_setup(struct smscore_device_t *coredev)
EXPORT_SYMBOL_GPL(sms_board_setup);
int sms_board_power(struct smscore_device_t *coredev, int onoff)
EXPORT_SYMBOL_GPL(sms_board_power);
int sms_board_led_feedback(struct smscore_device_t *coredev, int led)
EXPORT_SYMBOL_GPL(sms_board_led_feedback);
int sms_board_lna_control(struct smscore_device_t *coredev, int onoff)
EXPORT_SYMBOL_GPL(sms_board_lna_control);
int sms_board_load_modules(int id)
EXPORT_SYMBOL_GPL(sms_board_load_modules);
