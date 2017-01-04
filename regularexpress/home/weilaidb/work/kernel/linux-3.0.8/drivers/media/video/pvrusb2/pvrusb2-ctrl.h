#define __PVRUSB2_CTRL_H
struct pvr2_ctrl;
enum pvr2_ctl_type ;
int pvr2_ctrl_set_value(struct pvr2_ctrl *,int val);
int pvr2_ctrl_set_mask_value(struct pvr2_ctrl *,int mask,int val);
int pvr2_ctrl_get_value(struct pvr2_ctrl *,int *valptr);
enum pvr2_ctl_type pvr2_ctrl_get_type(struct pvr2_ctrl *);
int pvr2_ctrl_get_max(struct pvr2_ctrl *);
int pvr2_ctrl_get_min(struct pvr2_ctrl *);
int pvr2_ctrl_get_def(struct pvr2_ctrl *, int *valptr);
int pvr2_ctrl_get_cnt(struct pvr2_ctrl *);
int pvr2_ctrl_get_mask(struct pvr2_ctrl *);
const char *pvr2_ctrl_get_name(struct pvr2_ctrl *);
const char *pvr2_ctrl_get_desc(struct pvr2_ctrl *);
int pvr2_ctrl_get_valname(struct pvr2_ctrl *,int,char *,unsigned int,
unsigned int *);
int pvr2_ctrl_is_writable(struct pvr2_ctrl *);
unsigned int pvr2_ctrl_get_v4lflags(struct pvr2_ctrl *);
int pvr2_ctrl_get_v4lid(struct pvr2_ctrl *);
int pvr2_ctrl_has_custom_symbols(struct pvr2_ctrl *);
int pvr2_ctrl_custom_value_to_sym(struct pvr2_ctrl *,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len);
int pvr2_ctrl_custom_sym_to_value(struct pvr2_ctrl *,
const char *buf,unsigned int len,
int *maskptr,int *valptr);
int pvr2_ctrl_value_to_sym(struct pvr2_ctrl *,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len);
int pvr2_ctrl_sym_to_value(struct pvr2_ctrl *,
const char *buf,unsigned int len,
int *maskptr,int *valptr);
int pvr2_ctrl_value_to_sym_internal(struct pvr2_ctrl *,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len);
