#define _TIOMAP_PWR_
extern s32 dsp_test_sleepstate;
extern struct mailbox_context mboxsetting;
extern int wake_dsp(struct bridge_dev_context *dev_context,
void *pargs);
extern int sleep_dsp(struct bridge_dev_context *dev_context,
u32 dw_cmd, void *pargs);
extern void interrupt_dsp(struct bridge_dev_context *dev_context,
u16 mb_val);
extern int dsp_peripheral_clk_ctrl(struct bridge_dev_context
*dev_context, void *pargs);
int handle_hibernation_from_dsp(struct bridge_dev_context *dev_context);
int post_scale_dsp(struct bridge_dev_context *dev_context,
void *pargs);
int pre_scale_dsp(struct bridge_dev_context *dev_context,
void *pargs);
int handle_constraints_set(struct bridge_dev_context *dev_context,
void *pargs);
void dsp_clk_wakeup_event_ctrl(u32 clock_id, bool enable);
