#define __HTC_EGPIO_H__
#define HTC_EGPIO_OUTPUT (~0)
#define HTC_EGPIO_INPUT  0
struct htc_egpio_chip ;
struct htc_egpio_platform_data ;
extern int htc_egpio_get_wakeup_irq(struct device *dev);
