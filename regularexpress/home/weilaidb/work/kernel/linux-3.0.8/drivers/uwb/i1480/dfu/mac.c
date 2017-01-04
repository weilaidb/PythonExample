struct fw_hdr ;
static
void fw_hdrs_free(struct fw_hdr *hdr)
static
int fw_hdr_load(struct i1480 *i1480, struct fw_hdr *hdr, unsigned hdr_cnt,
const char *_data, const u32 *data_itr, const u32 *data_top)
static
int fw_hdrs_load(struct i1480 *i1480, struct fw_hdr **phdr,
const char *_data, size_t data_size)
static
ssize_t i1480_fw_cmp(struct i1480 *i1480, struct fw_hdr *hdr)
static
int mac_fw_hdrs_push(struct i1480 *i1480, struct fw_hdr *hdr,
const char *fw_name, const char *fw_tag)
static
int mac_fw_upload_enable(struct i1480 *i1480)
static
int mac_fw_upload_disable(struct i1480 *i1480)
static
int __mac_fw_upload(struct i1480 *i1480, const char *fw_name,
const char *fw_tag)
int i1480_pre_fw_upload(struct i1480 *i1480)
static
int i1480_cmd_reset(struct i1480 *i1480)
static
int i1480_fw_is_running_q(struct i1480 *i1480)
int i1480_mac_fw_upload(struct i1480 *i1480)
