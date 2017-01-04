static int pvr2_ctrl_range_check(struct pvr2_ctrl *cptr,int val)
int pvr2_ctrl_set_value(struct pvr2_ctrl *cptr,int val)
int pvr2_ctrl_set_mask_value(struct pvr2_ctrl *cptr,int mask,int val)
int pvr2_ctrl_get_value(struct pvr2_ctrl *cptr,int *valptr)
enum pvr2_ctl_type pvr2_ctrl_get_type(struct pvr2_ctrl *cptr)
int pvr2_ctrl_get_max(struct pvr2_ctrl *cptr)
int pvr2_ctrl_get_min(struct pvr2_ctrl *cptr)
int pvr2_ctrl_get_def(struct pvr2_ctrl *cptr, int *valptr)
int pvr2_ctrl_get_cnt(struct pvr2_ctrl *cptr)
int pvr2_ctrl_get_mask(struct pvr2_ctrl *cptr)
const char *pvr2_ctrl_get_name(struct pvr2_ctrl *cptr)
const char *pvr2_ctrl_get_desc(struct pvr2_ctrl *cptr)
int pvr2_ctrl_get_valname(struct pvr2_ctrl *cptr,int val,
char *bptr,unsigned int bmax,
unsigned int *blen)
int pvr2_ctrl_get_v4lid(struct pvr2_ctrl *cptr)
unsigned int pvr2_ctrl_get_v4lflags(struct pvr2_ctrl *cptr)
int pvr2_ctrl_is_writable(struct pvr2_ctrl *cptr)
int pvr2_ctrl_has_custom_symbols(struct pvr2_ctrl *cptr)
int pvr2_ctrl_custom_value_to_sym(struct pvr2_ctrl *cptr,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len)
int pvr2_ctrl_custom_sym_to_value(struct pvr2_ctrl *cptr,
const char *buf,unsigned int len,
int *maskptr,int *valptr)
static unsigned int gen_bitmask_string(int msk,int val,int msk_only,
const char **names,
char *ptr,unsigned int len)
static const char *boolNames[] = ;
static int parse_token(const char *ptr,unsigned int len,
int *valptr,
const char * const *names, unsigned int namecnt)
static int parse_mtoken(const char *ptr,unsigned int len,
int *valptr,
const char **names,int valid_bits)
static int parse_tlist(const char *ptr,unsigned int len,
int *maskptr,int *valptr,
const char **names,int valid_bits)
int pvr2_ctrl_sym_to_value(struct pvr2_ctrl *cptr,
const char *ptr,unsigned int len,
int *maskptr,int *valptr)
int pvr2_ctrl_value_to_sym_internal(struct pvr2_ctrl *cptr,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len)
int pvr2_ctrl_value_to_sym(struct pvr2_ctrl *cptr,
int mask,int val,
char *buf,unsigned int maxlen,
unsigned int *len)
