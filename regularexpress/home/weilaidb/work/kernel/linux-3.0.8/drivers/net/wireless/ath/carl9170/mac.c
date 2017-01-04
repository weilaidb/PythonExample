int carl9170_set_dyn_sifs_ack(struct ar9170 *ar)
int carl9170_set_rts_cts_rate(struct ar9170 *ar)
int carl9170_set_slot_time(struct ar9170 *ar)
int carl9170_set_mac_rates(struct ar9170 *ar)
int carl9170_set_qos(struct ar9170 *ar)
int carl9170_init_mac(struct ar9170 *ar)
static int carl9170_set_mac_reg(struct ar9170 *ar,
const u32 reg, const u8 *mac)
int carl9170_mod_virtual_mac(struct ar9170 *ar, const unsigned int id,
const u8 *mac)
int carl9170_update_multicast(struct ar9170 *ar, const u64 mc_hash)
int carl9170_set_operating_mode(struct ar9170 *ar)
int carl9170_set_hwretry_limit(struct ar9170 *ar, const unsigned int max_retry)
int carl9170_set_beacon_timers(struct ar9170 *ar)
int carl9170_update_beacon(struct ar9170 *ar, const bool submit)
int carl9170_upload_key(struct ar9170 *ar, const u8 id, const u8 *mac,
const u8 ktype, const u8 keyidx, const u8 *keydata,
const int keylen)
int carl9170_disable_key(struct ar9170 *ar, const u8 id)
