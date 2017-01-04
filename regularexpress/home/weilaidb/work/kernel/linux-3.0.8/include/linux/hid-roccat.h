#define __HID_ROCCAT_H
#define ROCCATIOCGREPSIZE _IOR('H', 0xf1, int)
int roccat_connect(struct class *klass, struct hid_device *hid,
int report_size);
void roccat_disconnect(int minor);
int roccat_report_event(int minor, u8 const *data);
