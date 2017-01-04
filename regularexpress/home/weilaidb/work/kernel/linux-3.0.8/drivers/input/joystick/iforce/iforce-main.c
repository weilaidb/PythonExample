MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>, Johann Deneux <johann.deneux@gmail.com>");
MODULE_DESCRIPTION("USB/RS232 I-Force joysticks and wheels driver");
MODULE_LICENSE("GPL");
static signed short btn_joystick[] =
;
static signed short btn_avb_pegasus[] =
;
static signed short btn_wheel[] =
;
static signed short btn_avb_tw[] =
;
static signed short btn_avb_wheel[] =
;
static signed short abs_joystick[] =
;
static signed short abs_joystick_rudder[] =
;
static signed short abs_avb_pegasus[] =
;
static signed short abs_wheel[] =
;
static signed short ff_iforce[] =
;
static struct iforce_device iforce_device[] = ;
static int iforce_playback(struct input_dev *dev, int effect_id, int value)
static void iforce_set_gain(struct input_dev *dev, u16 gain)
static void iforce_set_autocenter(struct input_dev *dev, u16 magnitude)
static int iforce_upload_effect(struct input_dev *dev, struct ff_effect *effect, struct ff_effect *old)
static int iforce_erase_effect(struct input_dev *dev, int effect_id)
static int iforce_open(struct input_dev *dev)
static void iforce_close(struct input_dev *dev)
int iforce_init_device(struct iforce *iforce)
static int __init iforce_init(void)
static void __exit iforce_exit(void)
module_init(iforce_init);
module_exit(iforce_exit);
