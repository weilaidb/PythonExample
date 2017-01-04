int ftdi_elan_switch_on_diagnostics(int number);
void ftdi_elan_gone_away(struct platform_device *pdev);
void start_usb_lock_device_tracing(void);
struct u132_platform_data ;
int usb_ftdi_elan_edset_single(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null));
int usb_ftdi_elan_edset_output(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null));
int usb_ftdi_elan_edset_empty(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null));
int usb_ftdi_elan_edset_input(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null));
int usb_ftdi_elan_edset_setup(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null));
int usb_ftdi_elan_edset_flush(struct platform_device *pdev, u8 ed_number,
void *endp);
int usb_ftdi_elan_read_pcimem(struct platform_device *pdev, int mem_offset,
u8 width, u32 *data);
int usb_ftdi_elan_write_pcimem(struct platform_device *pdev, int mem_offset,
u8 width, u32 data);
