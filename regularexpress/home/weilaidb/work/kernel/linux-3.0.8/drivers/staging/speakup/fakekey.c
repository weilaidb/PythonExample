#define PRESSED 1
#define RELEASED 0
DEFINE_PER_CPU(bool, reporting_keystroke);
static struct input_dev *virt_keyboard;
int speakup_add_virtual_keyboard(void)
void speakup_remove_virtual_keyboard(void)
void speakup_fake_down_arrow(void)
bool speakup_fake_key_pressed(void)
