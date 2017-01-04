#define __PVRUSB2_HDW_INTERNAL_H
#define PVR2_CVAL_HSM_FAIL 0
#define PVR2_CVAL_HSM_FULL 1
#define PVR2_CVAL_HSM_HIGH 2
#define PVR2_VID_ENDPOINT        0x84
#define PVR2_UNK_ENDPOINT        0x86
#define PVR2_VBI_ENDPOINT        0x88
#define PVR2_CTL_BUFFSIZE        64
#define FREQTABLE_SIZE 500
#define LOCK_TAKE(x) do  while (0)
#define LOCK_GIVE(x) do  while (0)
typedef int (*pvr2_ctlf_is_dirty)(struct pvr2_ctrl *);
typedef void (*pvr2_ctlf_clear_dirty)(struct pvr2_ctrl *);
typedef int (*pvr2_ctlf_check_value)(struct pvr2_ctrl *,int);
typedef int (*pvr2_ctlf_get_value)(struct pvr2_ctrl *,int *);
typedef int (*pvr2_ctlf_set_value)(struct pvr2_ctrl *,int msk,int val);
typedef int (*pvr2_ctlf_val_to_sym)(struct pvr2_ctrl *,int msk,int val,
char *,unsigned int,unsigned int *);
typedef int (*pvr2_ctlf_sym_to_val)(struct pvr2_ctrl *,
const char *,unsigned int,
int *mskp,int *valp);
typedef unsigned int (*pvr2_ctlf_get_v4lflags)(struct pvr2_ctrl *);
struct pvr2_ctl_info ;
#define PVR2_CTLD_INFO_DESC_SIZE 32
struct pvr2_ctld_info ;
struct pvr2_ctrl ;
#define FW1_STATE_UNKNOWN 0
#define FW1_STATE_MISSING 1
#define FW1_STATE_FAILED 2
#define FW1_STATE_RELOAD 3
#define FW1_STATE_OK 4
#define PVR2_PATHWAY_UNKNOWN 0
#define PVR2_PATHWAY_ANALOG 1
#define PVR2_PATHWAY_DIGITAL 2
typedef int (*pvr2_i2c_func)(struct pvr2_hdw *,u8,u8 *,u16,u8 *, u16);
#define PVR2_I2C_FUNC_CNT 128
struct pvr2_hdw ;
unsigned long pvr2_hdw_get_cur_freq(struct pvr2_hdw *);
void pvr2_hdw_status_poll(struct pvr2_hdw *);
