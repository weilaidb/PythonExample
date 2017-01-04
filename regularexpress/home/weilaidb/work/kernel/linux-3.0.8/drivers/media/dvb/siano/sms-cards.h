#define __SMS_CARDS_H__
#define SMS_BOARD_UNKNOWN 0
#define SMS1XXX_BOARD_SIANO_STELLAR 1
#define SMS1XXX_BOARD_SIANO_NOVA_A  2
#define SMS1XXX_BOARD_SIANO_NOVA_B  3
#define SMS1XXX_BOARD_SIANO_VEGA    4
#define SMS1XXX_BOARD_HAUPPAUGE_CATAMOUNT 5
#define SMS1XXX_BOARD_HAUPPAUGE_OKEMO_A 6
#define SMS1XXX_BOARD_HAUPPAUGE_OKEMO_B 7
#define SMS1XXX_BOARD_HAUPPAUGE_WINDHAM 8
#define SMS1XXX_BOARD_HAUPPAUGE_TIGER_MINICARD 9
#define SMS1XXX_BOARD_HAUPPAUGE_TIGER_MINICARD_R2 10
#define SMS1XXX_BOARD_SIANO_NICE	11
#define SMS1XXX_BOARD_SIANO_VENICE	12
struct sms_board_gpio_cfg ;
struct sms_board ;
struct sms_board *sms_get_board(unsigned id);
extern struct smscore_device_t *coredev;
enum SMS_BOARD_EVENTS ;
int sms_board_event(struct smscore_device_t *coredev,
enum SMS_BOARD_EVENTS gevent);
int sms_board_setup(struct smscore_device_t *coredev);
#define SMS_LED_OFF 0
#define SMS_LED_LO  1
#define SMS_LED_HI  2
int sms_board_led_feedback(struct smscore_device_t *coredev, int led);
int sms_board_power(struct smscore_device_t *coredev, int onoff);
int sms_board_lna_control(struct smscore_device_t *coredev, int onoff);
extern int sms_board_load_modules(int id);
