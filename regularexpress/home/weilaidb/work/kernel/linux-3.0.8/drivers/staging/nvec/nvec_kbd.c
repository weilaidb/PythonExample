#define ACK_KBD_EVENT
static unsigned char keycodes[ARRAY_SIZE(code_tab_102us)
+ ARRAY_SIZE(extcode_tab_us102)];
struct nvec_keys ;
static struct nvec_keys keys_dev;
static int nvec_keys_notifier(struct notifier_block *nb,
unsigned long event_type, void *data)
static int nvec_kbd_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
int __init nvec_kbd_init(struct nvec_chip *nvec)
