#define USB6FIRE_COMM_H
enum
;
struct comm_runtime ;
int __devinit usb6fire_comm_init(struct sfire_chip *chip);
void usb6fire_comm_abort(struct sfire_chip *chip);
void usb6fire_comm_destroy(struct sfire_chip *chip);
