void (*atari_MIDI_interrupt_hook) (void);
void (*atari_input_keyboard_interrupt_hook) (unsigned char, char);
void (*atari_input_mouse_interrupt_hook) (char *);
EXPORT_SYMBOL(atari_input_keyboard_interrupt_hook);
EXPORT_SYMBOL(atari_input_mouse_interrupt_hook);
static volatile int ikbd_self_test;
static volatile unsigned long self_test_last_rcv;
static unsigned long broken_keys[128/(sizeof(unsigned long)*8)] = ;
#define BREAK_MASK	(0x80)
typedef enum kb_state_t  KB_STATE_T;
#define	IS_SYNC_CODE(sc)	((sc) >= 0x04 && (sc) <= 0xfb)
typedef struct keyboard_state  KEYBOARD_STATE;
KEYBOARD_STATE kb_state;
static irqreturn_t atari_keyboard_interrupt(int irq, void *dummy)
void ikbd_write(const char *str, int len)
void ikbd_reset(void)
void ikbd_mouse_button_action(int mode)
void ikbd_mouse_rel_pos(void)
EXPORT_SYMBOL(ikbd_mouse_rel_pos);
void ikbd_mouse_abs_pos(int xmax, int ymax)
void ikbd_mouse_kbd_mode(int dx, int dy)
void ikbd_mouse_thresh(int x, int y)
EXPORT_SYMBOL(ikbd_mouse_thresh);
void ikbd_mouse_scale(int x, int y)
void ikbd_mouse_pos_get(int *x, int *y)
void ikbd_mouse_pos_set(int x, int y)
void ikbd_mouse_y0_bot(void)
void ikbd_mouse_y0_top(void)
EXPORT_SYMBOL(ikbd_mouse_y0_top);
void ikbd_resume(void)
void ikbd_mouse_disable(void)
EXPORT_SYMBOL(ikbd_mouse_disable);
void ikbd_pause(void)
void ikbd_joystick_event_on(void)
void ikbd_joystick_event_off(void)
void ikbd_joystick_get_state(void)
void ikbd_joystick_disable(void)
void ikbd_clock_set(int year, int month, int day, int hour, int minute, int second)
void ikbd_clock_get(int *year, int *month, int *day, int *hour, int *minute, int second)
void ikbd_mem_write(int address, int size, char *data)
void ikbd_mem_read(int address, char data[6])
void ikbd_exec(int address)
void atari_kbd_leds(unsigned int leds)
static int atari_keyb_done = 0;
int atari_keyb_init(void)
EXPORT_SYMBOL_GPL(atari_keyb_init);
