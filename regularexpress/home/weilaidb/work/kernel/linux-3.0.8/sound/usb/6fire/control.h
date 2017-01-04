#define USB6FIRE_CONTROL_H
enum ;
enum ;
struct control_runtime ;
int __devinit usb6fire_control_init(struct sfire_chip *chip);
void usb6fire_control_abort(struct sfire_chip *chip);
void usb6fire_control_destroy(struct sfire_chip *chip);
