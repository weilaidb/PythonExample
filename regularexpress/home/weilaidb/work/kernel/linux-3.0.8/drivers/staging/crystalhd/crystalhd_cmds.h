#define _CRYSTALHD_CMDS_H_
enum crystalhd_state;
struct crystalhd_user ;
#define DTS_MODE_INV	(-1)
struct crystalhd_cmd ;
typedef enum BC_STATUS(*crystalhd_cmd_proc)(struct crystalhd_cmd *, struct crystalhd_ioctl_data *);
struct crystalhd_cmd_tbl ;
enum BC_STATUS crystalhd_suspend(struct crystalhd_cmd *ctx, struct crystalhd_ioctl_data *idata);
enum BC_STATUS crystalhd_resume(struct crystalhd_cmd *ctx);
crystalhd_cmd_proc crystalhd_get_cmd_proc(struct crystalhd_cmd *ctx, uint32_t cmd,
struct crystalhd_user *uc);
enum BC_STATUS crystalhd_user_open(struct crystalhd_cmd *ctx, struct crystalhd_user **user_ctx);
enum BC_STATUS crystalhd_user_close(struct crystalhd_cmd *ctx, struct crystalhd_user *uc);
enum BC_STATUS crystalhd_setup_cmd_context(struct crystalhd_cmd *ctx, struct crystalhd_adp *adp);
enum BC_STATUS crystalhd_delete_cmd_context(struct crystalhd_cmd *ctx);
bool crystalhd_cmd_interrupt(struct crystalhd_cmd *ctx);
