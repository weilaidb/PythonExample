int ccw_device_set_options_mask(struct ccw_device *cdev, unsigned long flags)
int ccw_device_set_options(struct ccw_device *cdev, unsigned long flags)
void ccw_device_clear_options(struct ccw_device *cdev, unsigned long flags)
int ccw_device_is_pathgroup(struct ccw_device *cdev)
EXPORT_SYMBOL(ccw_device_is_pathgroup);
int ccw_device_is_multipath(struct ccw_device *cdev)
EXPORT_SYMBOL(ccw_device_is_multipath);
int ccw_device_clear(struct ccw_device *cdev, unsigned long intparm)
int ccw_device_start_key(struct ccw_device *cdev, struct ccw1 *cpa,
unsigned long intparm, __u8 lpm, __u8 key,
unsigned long flags)
int ccw_device_start_timeout_key(struct ccw_device *cdev, struct ccw1 *cpa,
unsigned long intparm, __u8 lpm, __u8 key,
unsigned long flags, int expires)
int ccw_device_start(struct ccw_device *cdev, struct ccw1 *cpa,
unsigned long intparm, __u8 lpm, unsigned long flags)
int ccw_device_start_timeout(struct ccw_device *cdev, struct ccw1 *cpa,
unsigned long intparm, __u8 lpm,
unsigned long flags, int expires)
int ccw_device_halt(struct ccw_device *cdev, unsigned long intparm)
int ccw_device_resume(struct ccw_device *cdev)
int
ccw_device_call_handler(struct ccw_device *cdev)
struct ciw *ccw_device_get_ciw(struct ccw_device *cdev, __u32 ct)
__u8 ccw_device_get_path_mask(struct ccw_device *cdev)
struct stlck_data ;
void ccw_device_stlck_done(struct ccw_device *cdev, void *data, int rc)
int ccw_device_stlck(struct ccw_device *cdev)
void *ccw_device_get_chp_desc(struct ccw_device *cdev, int chp_no)
void ccw_device_get_id(struct ccw_device *cdev, struct ccw_dev_id *dev_id)
EXPORT_SYMBOL(ccw_device_get_id);
int ccw_device_tm_start_key(struct ccw_device *cdev, struct tcw *tcw,
unsigned long intparm, u8 lpm, u8 key)
EXPORT_SYMBOL(ccw_device_tm_start_key);
int ccw_device_tm_start_timeout_key(struct ccw_device *cdev, struct tcw *tcw,
unsigned long intparm, u8 lpm, u8 key,
int expires)
EXPORT_SYMBOL(ccw_device_tm_start_timeout_key);
int ccw_device_tm_start(struct ccw_device *cdev, struct tcw *tcw,
unsigned long intparm, u8 lpm)
EXPORT_SYMBOL(ccw_device_tm_start);
int ccw_device_tm_start_timeout(struct ccw_device *cdev, struct tcw *tcw,
unsigned long intparm, u8 lpm, int expires)
EXPORT_SYMBOL(ccw_device_tm_start_timeout);
int ccw_device_get_mdc(struct ccw_device *cdev, u8 mask)
EXPORT_SYMBOL(ccw_device_get_mdc);
int ccw_device_tm_intrg(struct ccw_device *cdev)
EXPORT_SYMBOL(ccw_device_tm_intrg);
int
_ccw_device_get_subchannel_number(struct ccw_device *cdev)
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ccw_device_set_options_mask);
EXPORT_SYMBOL(ccw_device_set_options);
EXPORT_SYMBOL(ccw_device_clear_options);
EXPORT_SYMBOL(ccw_device_clear);
EXPORT_SYMBOL(ccw_device_halt);
EXPORT_SYMBOL(ccw_device_resume);
EXPORT_SYMBOL(ccw_device_start_timeout);
EXPORT_SYMBOL(ccw_device_start);
EXPORT_SYMBOL(ccw_device_start_timeout_key);
EXPORT_SYMBOL(ccw_device_start_key);
EXPORT_SYMBOL(ccw_device_get_ciw);
EXPORT_SYMBOL(ccw_device_get_path_mask);
EXPORT_SYMBOL(_ccw_device_get_subchannel_number);
EXPORT_SYMBOL_GPL(ccw_device_get_chp_desc);
