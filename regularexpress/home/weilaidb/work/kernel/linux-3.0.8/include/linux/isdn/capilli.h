#define __CAPILLI_H__
typedef struct capiloaddatapart  capiloaddatapart;
typedef struct capiloaddata  capiloaddata;
typedef struct capicardparams  capicardparams;
struct capi_ctr ;
int attach_capi_ctr(struct capi_ctr *);
int detach_capi_ctr(struct capi_ctr *);
void capi_ctr_ready(struct capi_ctr * card);
void capi_ctr_down(struct capi_ctr * card);
void capi_ctr_suspend_output(struct capi_ctr * card);
void capi_ctr_resume_output(struct capi_ctr * card);
void capi_ctr_handle_message(struct capi_ctr * card, u16 appl, struct sk_buff *skb);
struct capi_driver ;
void register_capi_driver(struct capi_driver *driver);
void unregister_capi_driver(struct capi_driver *driver);
void capilib_new_ncci(struct list_head *head, u16 applid, u32 ncci, u32 winsize);
void capilib_free_ncci(struct list_head *head, u16 applid, u32 ncci);
void capilib_release_appl(struct list_head *head, u16 applid);
void capilib_release(struct list_head *head);
void capilib_data_b3_conf(struct list_head *head, u16 applid, u32 ncci, u16 msgid);
u16  capilib_data_b3_req(struct list_head *head, u16 applid, u32 ncci, u16 msgid);
