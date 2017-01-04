int carl9170_write_reg(struct ar9170 *ar, const u32 reg, const u32 val)
int carl9170_read_mreg(struct ar9170 *ar, const int nregs,
const u32 *regs, u32 *out)
int carl9170_read_reg(struct ar9170 *ar, u32 reg, u32 *val)
int carl9170_echo_test(struct ar9170 *ar, const u32 v)
struct carl9170_cmd *carl9170_cmd_buf(struct ar9170 *ar,
const enum carl9170_cmd_oids cmd, const unsigned int len)
int carl9170_reboot(struct ar9170 *ar)
int carl9170_mac_reset(struct ar9170 *ar)
int carl9170_bcn_ctrl(struct ar9170 *ar, const unsigned int vif_id,
const u32 mode, const u32 addr, const u32 len)
int carl9170_powersave(struct ar9170 *ar, const bool ps)
