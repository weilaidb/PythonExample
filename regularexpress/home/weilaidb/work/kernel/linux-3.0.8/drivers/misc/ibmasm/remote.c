#define MOUSE_X_MAX	1600
#define MOUSE_Y_MAX	1200
static const unsigned short xlate_high[XLATE_SIZE] = ;
static const unsigned short xlate[XLATE_SIZE] = ;
static void print_input(struct remote_input *input)
static void send_mouse_event(struct input_dev *dev, struct remote_input *input)
static void send_keyboard_event(struct input_dev *dev,
struct remote_input *input)
void ibmasm_handle_mouse_interrupt(struct service_processor *sp)
int ibmasm_init_remote_input_dev(struct service_processor *sp)
void ibmasm_free_remote_input_dev(struct service_processor *sp)
