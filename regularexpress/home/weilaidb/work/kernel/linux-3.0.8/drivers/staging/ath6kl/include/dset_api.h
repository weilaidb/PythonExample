#define _DSET_API_H_
#define CONFIG_HOST_DSET_SUPPORT 1
int wmi_dset_open_reply(struct wmi_t *wmip,
u32 status,
u32 access_cookie,
u32 size,
u32 version,
u32 targ_handle,
u32 targ_reply_fn,
u32 targ_reply_arg);
int wmi_dset_data_reply(struct wmi_t *wmip,
u32 status,
u8 *host_buf,
u32 length,
u32 targ_buf,
u32 targ_reply_fn,
u32 targ_reply_arg);
