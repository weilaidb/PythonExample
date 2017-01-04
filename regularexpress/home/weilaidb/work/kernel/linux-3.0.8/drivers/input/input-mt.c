#define TRKID_SGN	((TRKID_MAX + 1) >> 1)
int input_mt_init_slots(struct input_dev *dev, unsigned int num_slots)
EXPORT_SYMBOL(input_mt_init_slots);
void input_mt_destroy_slots(struct input_dev *dev)
EXPORT_SYMBOL(input_mt_destroy_slots);
void input_mt_report_slot_state(struct input_dev *dev,
unsigned int tool_type, bool active)
EXPORT_SYMBOL(input_mt_report_slot_state);
void input_mt_report_finger_count(struct input_dev *dev, int count)
EXPORT_SYMBOL(input_mt_report_finger_count);
void input_mt_report_pointer_emulation(struct input_dev *dev, bool use_count)
EXPORT_SYMBOL(input_mt_report_pointer_emulation);
