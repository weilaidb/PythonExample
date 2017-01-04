#define __PVRUSB2_CONTEXT_H
struct pvr2_hdw;
struct pvr2_stream;
struct pvr2_context;
struct pvr2_channel;
struct pvr2_context_stream;
struct pvr2_ioread;
struct pvr2_context_stream ;
struct pvr2_context ;
struct pvr2_channel ;
struct pvr2_context *pvr2_context_create(struct usb_interface *intf,
const struct usb_device_id *devid,
void (*setup_func)(struct pvr2_context *));
void pvr2_context_disconnect(struct pvr2_context *);
void pvr2_channel_init(struct pvr2_channel *,struct pvr2_context *);
void pvr2_channel_done(struct pvr2_channel *);
int pvr2_channel_limit_inputs(struct pvr2_channel *,unsigned int);
unsigned int pvr2_channel_get_limited_inputs(struct pvr2_channel *);
int pvr2_channel_claim_stream(struct pvr2_channel *,
struct pvr2_context_stream *);
struct pvr2_ioread *pvr2_channel_create_mpeg_stream(
struct pvr2_context_stream *);
int pvr2_context_global_init(void);
void pvr2_context_global_done(void);
