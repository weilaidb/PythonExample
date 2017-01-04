#define __mISDNdsp_H__
struct mISDN_dsp_element_arg ;
struct mISDN_dsp_element ;
extern int  mISDN_dsp_element_register(struct mISDN_dsp_element *elem);
extern void mISDN_dsp_element_unregister(struct mISDN_dsp_element *elem);
struct dsp_features ;
