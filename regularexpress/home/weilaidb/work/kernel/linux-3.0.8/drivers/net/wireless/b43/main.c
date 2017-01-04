MODULE_DESCRIPTION("Broadcom B43 wireless driver");
MODULE_AUTHOR("Martin Langer");
MODULE_AUTHOR("Stefano Brivio");
MODULE_AUTHOR("Michael Buesch");
MODULE_AUTHOR("Gábor Stefanik");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(B43_SUPPORTED_FIRMWARE_ID);
MODULE_FIRMWARE("b43/ucode11.fw");
MODULE_FIRMWARE("b43/ucode13.fw");
MODULE_FIRMWARE("b43/ucode14.fw");
MODULE_FIRMWARE("b43/ucode15.fw");
MODULE_FIRMWARE("b43/ucode16_mimo.fw");
MODULE_FIRMWARE("b43/ucode5.fw");
MODULE_FIRMWARE("b43/ucode9.fw");
static int modparam_bad_frames_preempt;
module_param_named(bad_frames_preempt, modparam_bad_frames_preempt, int, 0444);
MODULE_PARM_DESC(bad_frames_preempt,
"enable(1) / disable(0) Bad Frames Preemption");
static char modparam_fwpostfix[16];
module_param_string(fwpostfix, modparam_fwpostfix, 16, 0444);
MODULE_PARM_DESC(fwpostfix, "Postfix for the .fw files to load.");
static int modparam_hwpctl;
module_param_named(hwpctl, modparam_hwpctl, int, 0444);
MODULE_PARM_DESC(hwpctl, "Enable hardware-side power control (default off)");
static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, int, 0444);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
static int modparam_hwtkip;
module_param_named(hwtkip, modparam_hwtkip, int, 0444);
MODULE_PARM_DESC(hwtkip, "Enable hardware tkip.");
static int modparam_qos = 1;
module_param_named(qos, modparam_qos, int, 0444);
MODULE_PARM_DESC(qos, "Enable QOS support (default on)");
static int modparam_btcoex = 1;
module_param_named(btcoex, modparam_btcoex, int, 0444);
MODULE_PARM_DESC(btcoex, "Enable Bluetooth coexistence (default on)");
int b43_modparam_verbose = B43_VERBOSITY_DEFAULT;
module_param_named(verbose, b43_modparam_verbose, int, 0644);
MODULE_PARM_DESC(verbose, "Log message verbosity: 0=error, 1=warn, 2=info(default), 3=debug");
static int b43_modparam_pio = B43_PIO_DEFAULT;
module_param_named(pio, b43_modparam_pio, int, 0644);
MODULE_PARM_DESC(pio, "Use PIO accesses by default: 0=DMA, 1=PIO");
static const struct ssb_device_id b43_ssb_tbl[] = ;
MODULE_DEVICE_TABLE(ssb, b43_ssb_tbl);
#define RATETAB_ENT(_rateid, _flags) \
static struct ieee80211_rate __b43_ratetable[] = ;
#define b43_a_ratetable		(__b43_ratetable + 4)
#define b43_a_ratetable_size	8
#define b43_b_ratetable		(__b43_ratetable + 0)
#define b43_b_ratetable_size	4
#define b43_g_ratetable		(__b43_ratetable + 0)
#define b43_g_ratetable_size	12
#define CHAN4G(_channel, _freq, _flags)
static struct ieee80211_channel b43_2ghz_chantable[] = ;
#undef CHAN4G
#define CHAN5G(_channel, _flags)
static struct ieee80211_channel b43_5ghz_nphy_chantable[] = ;
static struct ieee80211_channel b43_5ghz_aphy_chantable[] = ;
#undef CHAN5G
static struct ieee80211_supported_band b43_band_5GHz_nphy = ;
static struct ieee80211_supported_band b43_band_5GHz_aphy = ;
static struct ieee80211_supported_band b43_band_2GHz = ;
static void b43_wireless_core_exit(struct b43_wldev *dev);
static int b43_wireless_core_init(struct b43_wldev *dev);
static struct b43_wldev * b43_wireless_core_stop(struct b43_wldev *dev);
static int b43_wireless_core_start(struct b43_wldev *dev);
static int b43_ratelimit(struct b43_wl *wl)
void b43info(struct b43_wl *wl, const char *fmt, ...)
void b43err(struct b43_wl *wl, const char *fmt, ...)
void b43warn(struct b43_wl *wl, const char *fmt, ...)
void b43dbg(struct b43_wl *wl, const char *fmt, ...)
static void b43_ram_write(struct b43_wldev *dev, u16 offset, u32 val)
static inline void b43_shm_control_word(struct b43_wldev *dev,
u16 routing, u16 offset)
u32 b43_shm_read32(struct b43_wldev *dev, u16 routing, u16 offset)
u16 b43_shm_read16(struct b43_wldev *dev, u16 routing, u16 offset)
void b43_shm_write32(struct b43_wldev *dev, u16 routing, u16 offset, u32 value)
void b43_shm_write16(struct b43_wldev *dev, u16 routing, u16 offset, u16 value)
u64 b43_hf_read(struct b43_wldev *dev)
void b43_hf_write(struct b43_wldev *dev, u64 value)
static u16 b43_fwcapa_read(struct b43_wldev *dev)
void b43_tsf_read(struct b43_wldev *dev, u64 *tsf)
static void b43_time_lock(struct b43_wldev *dev)
static void b43_time_unlock(struct b43_wldev *dev)
static void b43_tsf_write_locked(struct b43_wldev *dev, u64 tsf)
void b43_tsf_write(struct b43_wldev *dev, u64 tsf)
static
void b43_macfilter_set(struct b43_wldev *dev, u16 offset, const u8 *mac)
static void b43_write_mac_bssid_templates(struct b43_wldev *dev)
static void b43_upload_card_macaddress(struct b43_wldev *dev)
static void b43_set_slot_time(struct b43_wldev *dev, u16 slot_time)
static void b43_short_slot_timing_enable(struct b43_wldev *dev)
static void b43_short_slot_timing_disable(struct b43_wldev *dev)
void b43_dummy_transmission(struct b43_wldev *dev, bool ofdm, bool pa_on)
static void key_write(struct b43_wldev *dev,
u8 index, u8 algorithm, const u8 *key)
static void keymac_write(struct b43_wldev *dev, u8 index, const u8 *addr)
static void rx_tkip_phase1_write(struct b43_wldev *dev, u8 index, u32 iv32,
u16 *phase1key)
static void b43_op_update_tkip_key(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_key_conf *keyconf,
struct ieee80211_sta *sta,
u32 iv32, u16 *phase1key)
static void do_key_write(struct b43_wldev *dev,
u8 index, u8 algorithm,
const u8 *key, size_t key_len, const u8 *mac_addr)
static int b43_key_write(struct b43_wldev *dev,
int index, u8 algorithm,
const u8 *key, size_t key_len,
const u8 *mac_addr,
struct ieee80211_key_conf *keyconf)
static int b43_key_clear(struct b43_wldev *dev, int index)
static void b43_clear_keys(struct b43_wldev *dev)
static void b43_dump_keymemory(struct b43_wldev *dev)
void b43_power_saving_ctl_bits(struct b43_wldev *dev, unsigned int ps_flags)
static void b43_ssb_wireless_core_reset(struct b43_wldev *dev, u32 flags)
void b43_wireless_core_reset(struct b43_wldev *dev, u32 flags)
static void handle_irq_transmit_status(struct b43_wldev *dev)
static void drain_txstatus_queue(struct b43_wldev *dev)
static u32 b43_jssi_read(struct b43_wldev *dev)
static void b43_jssi_write(struct b43_wldev *dev, u32 jssi)
static void b43_generate_noise_sample(struct b43_wldev *dev)
static void b43_calculate_link_quality(struct b43_wldev *dev)
static void handle_irq_noise(struct b43_wldev *dev)
static void handle_irq_tbtt_indication(struct b43_wldev *dev)
static void handle_irq_atim_end(struct b43_wldev *dev)
static void handle_irq_pmq(struct b43_wldev *dev)
static void b43_write_template_common(struct b43_wldev *dev,
const u8 *data, u16 size,
u16 ram_offset,
u16 shm_size_offset, u8 rate)
u8 b43_ieee80211_antenna_sanitize(struct b43_wldev *dev,
u8 antenna_nr)
static u16 b43_antenna_to_phyctl(int antenna)
static void b43_write_beacon_template(struct b43_wldev *dev,
u16 ram_offset,
u16 shm_size_offset)
static void b43_upload_beacon0(struct b43_wldev *dev)
static void b43_upload_beacon1(struct b43_wldev *dev)
static void handle_irq_beacon(struct b43_wldev *dev)
static void b43_do_beacon_update_trigger_work(struct b43_wldev *dev)
static void b43_beacon_update_trigger_work(struct work_struct *work)
static void b43_update_templates(struct b43_wl *wl)
static void b43_set_beacon_int(struct b43_wldev *dev, u16 beacon_int)
static void b43_handle_firmware_panic(struct b43_wldev *dev)
static void handle_irq_ucode_debug(struct b43_wldev *dev)
static void b43_do_interrupt_thread(struct b43_wldev *dev)
static irqreturn_t b43_interrupt_thread_handler(int irq, void *dev_id)
static irqreturn_t b43_do_interrupt(struct b43_wldev *dev)
static irqreturn_t b43_interrupt_handler(int irq, void *dev_id)
static void b43_sdio_interrupt_handler(struct b43_wldev *dev)
void b43_do_release_fw(struct b43_firmware_file *fw)
static void b43_release_firmware(struct b43_wldev *dev)
static void b43_print_fw_helptext(struct b43_wl *wl, bool error)
int b43_do_request_fw(struct b43_request_fw_context *ctx,
const char *name,
struct b43_firmware_file *fw)
static int b43_try_request_fw(struct b43_request_fw_context *ctx)
static int b43_request_firmware(struct b43_wldev *dev)
static int b43_upload_microcode(struct b43_wldev *dev)
static int b43_write_initvals(struct b43_wldev *dev,
const struct b43_iv *ivals,
size_t count,
size_t array_size)
static int b43_upload_initvals(struct b43_wldev *dev)
static struct ssb_device *b43_ssb_gpio_dev(struct b43_wldev *dev)
static int b43_gpio_init(struct b43_wldev *dev)
static void b43_gpio_cleanup(struct b43_wldev *dev)
b43_read32(dev, B43_MMIO_MACCTL);
b43_read32(dev, B43_MMIO_GEN_IRQ_REASON);
b43_power_saving_ctl_bits(dev, 0);
}
}
b43_read32(dev, B43_MMIO_MACCTL);
for (i = 35; i; i--)
for (i = 40; i; i--)
b43err(dev->wl, "MAC suspend failed\n");
}
out:
dev->mac_suspended++;
}
ctl &= ~B43_MACCTL_AP;
ctl &= ~B43_MACCTL_KEEP_CTL;
ctl &= ~B43_MACCTL_KEEP_BADPLCP;
ctl &= ~B43_MACCTL_KEEP_BAD;
ctl &= ~B43_MACCTL_PROMISC;
ctl &= ~B43_MACCTL_BEACPROMISC;
ctl |= B43_MACCTL_INFRA;
if (b43_is_mode(wl, NL80211_IFTYPE_AP) ||
b43_is_mode(wl, NL80211_IFTYPE_MESH_POINT))
ctl |= B43_MACCTL_AP;
else if (b43_is_mode(wl, NL80211_IFTYPE_ADHOC))
ctl &= ~B43_MACCTL_INFRA;
if (wl->filter_flags & FIF_CONTROL)
ctl |= B43_MACCTL_KEEP_CTL;
if (wl->filter_flags & FIF_FCSFAIL)
ctl |= B43_MACCTL_KEEP_BAD;
if (wl->filter_flags & FIF_PLCPFAIL)
ctl |= B43_MACCTL_KEEP_BADPLCP;
if (wl->filter_flags & FIF_PROMISC_IN_BSS)
ctl |= B43_MACCTL_PROMISC;
if (wl->filter_flags & FIF_BCN_PRBRESP_PROMISC)
ctl |= B43_MACCTL_BEACPROMISC;
if (dev->sdev->id.revision <= 4)
ctl |= B43_MACCTL_PROMISC;
b43_write32(dev, B43_MMIO_MACCTL, ctl);
cfp_pretbtt = 2;
if ((ctl & B43_MACCTL_INFRA) && !(ctl & B43_MACCTL_AP))
b43_write16(dev, 0x612, cfp_pretbtt);
if (0)  else
}
static void b43_rate_memory_write(struct b43_wldev *dev, u16 rate, int is_ofdm)
static void b43_rate_memory_init(struct b43_wldev *dev)
static void b43_set_phytxctl_defaults(struct b43_wldev *dev)
static void b43_mgmtframe_txantenna(struct b43_wldev *dev, int antenna)
static void b43_chip_exit(struct b43_wldev *dev)
static int b43_chip_init(struct b43_wldev *dev)
static void b43_periodic_every60sec(struct b43_wldev *dev)
static void b43_periodic_every30sec(struct b43_wldev *dev)
static void b43_periodic_every15sec(struct b43_wldev *dev)
static void do_periodic_work(struct b43_wldev *dev)
static void b43_periodic_work_handler(struct work_struct *work)
static void b43_periodic_tasks_setup(struct b43_wldev *dev)
static int b43_validate_chipaccess(struct b43_wldev *dev)
static void b43_security_init(struct b43_wldev *dev)
static int b43_rng_read(struct hwrng *rng, u32 *data)
static void b43_rng_exit(struct b43_wl *wl)
static int b43_rng_init(struct b43_wl *wl)
static void b43_tx_work(struct work_struct *work)
static void b43_op_tx(struct ieee80211_hw *hw,
struct sk_buff *skb)
static void b43_qos_params_upload(struct b43_wldev *dev,
const struct ieee80211_tx_queue_params *p,
u16 shm_offset)
static const u16 b43_qos_shm_offsets[] = ;
static void b43_qos_upload_all(struct b43_wldev *dev)
static void b43_qos_clear(struct b43_wl *wl)
static void b43_qos_init(struct b43_wldev *dev)
static int b43_op_conf_tx(struct ieee80211_hw *hw, u16 _queue,
const struct ieee80211_tx_queue_params *params)
static int b43_op_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static u64 b43_op_get_tsf(struct ieee80211_hw *hw)
static void b43_op_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static void b43_put_phy_into_reset(struct b43_wldev *dev)
static const char *band_to_string(enum ieee80211_band band)
static int b43_switch_band(struct b43_wl *wl, struct ieee80211_channel *chan)
static void b43_set_retry_limits(struct b43_wldev *dev,
unsigned int short_retry,
unsigned int long_retry)
static int b43_op_config(struct ieee80211_hw *hw, u32 changed)
static void b43_update_basic_rates(struct b43_wldev *dev, u32 brates)
static void b43_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *conf,
u32 changed)
static int b43_op_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static void b43_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed, unsigned int *fflags,
u64 multicast)
static struct b43_wldev * b43_wireless_core_stop(struct b43_wldev *dev)
static int b43_wireless_core_start(struct b43_wldev *dev)
static int b43_phy_versioning(struct b43_wldev *dev)
static void setup_struct_phy_for_init(struct b43_wldev *dev,
struct b43_phy *phy)
static void setup_struct_wldev_for_init(struct b43_wldev *dev)
static void b43_bluetooth_coext_enable(struct b43_wldev *dev)
static void b43_bluetooth_coext_disable(struct b43_wldev *dev)
static void b43_imcfglo_timeouts_workaround(struct b43_wldev *dev)
static void b43_set_synth_pu_delay(struct b43_wldev *dev, bool idle)
static void b43_set_pretbtt(struct b43_wldev *dev)
static void b43_wireless_core_exit(struct b43_wldev *dev)
static int b43_wireless_core_init(struct b43_wldev *dev)
static int b43_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void b43_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int b43_op_start(struct ieee80211_hw *hw)
static void b43_op_stop(struct ieee80211_hw *hw)
static int b43_op_beacon_set_tim(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, bool set)
static void b43_op_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd notify_cmd,
struct ieee80211_sta *sta)
static void b43_op_sw_scan_start_notifier(struct ieee80211_hw *hw)
static void b43_op_sw_scan_complete_notifier(struct ieee80211_hw *hw)
static int b43_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static const struct ieee80211_ops b43_hw_ops = ;
static void b43_chip_reset(struct work_struct *work)
static int b43_setup_bands(struct b43_wldev *dev,
bool have_2ghz_phy, bool have_5ghz_phy)
static void b43_wireless_core_detach(struct b43_wldev *dev)
static int b43_wireless_core_attach(struct b43_wldev *dev)
static void b43_one_core_detach(struct ssb_device *dev)
static int b43_one_core_attach(struct ssb_device *dev, struct b43_wl *wl)
#define IS_PDEV(pdev, _vendor, _device, _subvendor, _subdevice)		( \
(pdev->vendor == PCI_VENDOR_ID_##_vendor) &&			\
(pdev->device == _device) &&					\
(pdev->subsystem_vendor == PCI_VENDOR_ID_##_subvendor) &&	\
(pdev->subsystem_device == _subdevice)				)
static void b43_sprom_fixup(struct ssb_bus *bus)
static void b43_wireless_exit(struct ssb_device *dev, struct b43_wl *wl)
static struct b43_wl *b43_wireless_init(struct ssb_device *dev)
static int b43_ssb_probe(struct ssb_device *dev, const struct ssb_device_id *id)
static void b43_ssb_remove(struct ssb_device *dev)
void b43_controller_restart(struct b43_wldev *dev, const char *reason)
static struct ssb_driver b43_ssb_driver = ;
static void b43_print_driverinfo(void)
static int __init b43_init(void)
static void __exit b43_exit(void)
module_init(b43_init)
module_exit(b43_exit)
