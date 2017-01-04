static void
target_fill_alua_data(struct se_port *port, unsigned char *buf)
static int
target_emulate_inquiry_std(struct se_cmd *cmd)
static int
target_emulate_evpd_00(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_evpd_80(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_evpd_83(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_evpd_86(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_evpd_b0(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_evpd_b2(struct se_cmd *cmd, unsigned char *buf)
static int
target_emulate_inquiry(struct se_cmd *cmd)
static int
target_emulate_readcapacity(struct se_cmd *cmd)
static int
target_emulate_readcapacity_16(struct se_cmd *cmd)
static int
target_modesense_rwrecovery(unsigned char *p)
static int
target_modesense_control(struct se_device *dev, unsigned char *p)
static int
target_modesense_caching(struct se_device *dev, unsigned char *p)
static void
target_modesense_write_protect(unsigned char *buf, int type)
static void
target_modesense_dpofua(unsigned char *buf, int type)
static int
target_emulate_modesense(struct se_cmd *cmd, int ten)
static int
target_emulate_request_sense(struct se_cmd *cmd)
static int
target_emulate_unmap(struct se_task *task)
static int
target_emulate_write_same(struct se_task *task)
int
transport_emulate_control_cdb(struct se_task *task)
