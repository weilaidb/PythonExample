#define __HID_LG_H
int lgff_init(struct hid_device *hdev);
static inline int lgff_init(struct hid_device *hdev)
int lg2ff_init(struct hid_device *hdev);
static inline int lg2ff_init(struct hid_device *hdev)
int lg3ff_init(struct hid_device *hdev);
static inline int lg3ff_init(struct hid_device *hdev)
int lg4ff_init(struct hid_device *hdev);
static inline int lg4ff_init(struct hid_device *hdev)
