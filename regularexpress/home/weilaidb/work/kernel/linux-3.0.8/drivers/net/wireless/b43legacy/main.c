MODULE_DESCRIPTION("Broadcom B43legacy wireless driver");
MODULE_AUTHOR("Martin Langer");
MODULE_AUTHOR("Stefano Brivio");
MODULE_AUTHOR("Michael Buesch");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(B43legacy_SUPPORTED_FIRMWARE_ID);
MODULE_FIRMWARE("b43legacy/ucode2.fw");
MODULE_FIRMWARE("b43legacy/ucode4.fw");
#if defined(CONFIG_B43LEGACY_DMA) && defined(CONFIG_B43LEGACY_PIO)
static int modparam_pio;
module_param_named(pio, modparam_pio, int, 0444);
MODULE_PARM_DESC(pio, "enable(1) / disable(0) PIO mode");
#elif defined(CONFIG_B43LEGACY_DMA)
# define modparam_pio	0
#elif defined(CONFIG_B43LEGACY_PIO)
# define modparam_pio	1
static int modparam_bad_frames_preempt;
module_param_named(bad_frames_preempt, modparam_bad_frames_preempt, int, 0444);
MODULE_PARM_DESC(bad_frames_preempt, "enable(1) / disable(0) Bad Frames"
" Preemption");
static char modparam_fwpostfix[16];
module_param_string(fwpostfix, modparam_fwpostfix, 16, 0444);
MODULE_PARM_DESC(fwpostfix, "Postfix for the firmware files to load.");
static const struct ssb_device_id b43legacy_ssb_tbl[] = ;
MODULE_DEVICE_TABLE(ssb, b43legacy_ssb_tbl);
#define RATETAB_ENT(_rateid, _flags) \
static struct ieee80211_rate __b43legacy_ratetable[] = ;
#define b43legacy_b_ratetable		(__b43legacy_ratetable + 0)
#define b43legacy_b_ratetable_size	4
#define b43legacy_g_ratetable		(__b43legacy_ratetable + 0)
#define b43legacy_g_ratetable_size	12
#define CHANTAB_ENT(_chanid, _freq) \
static struct ieee80211_channel b43legacy_bg_chantable[] = ;
static struct ieee80211_supported_band b43legacy_band_2GHz_BPHY = ;
static struct ieee80211_supported_band b43legacy_band_2GHz_GPHY = ;
static void b43legacy_wireless_core_exit(struct b43legacy_wldev *dev);
static int b43legacy_wireless_core_init(struct b43legacy_wldev *dev);
static void b43legacy_wireless_core_stop(struct b43legacy_wldev *dev);
static int b43legacy_wireless_core_start(struct b43legacy_wldev *dev);
static int b43legacy_ratelimit(struct b43legacy_wl *wl)
void b43legacyinfo(struct b43legacy_wl *wl, const char *fmt, ...)
void b43legacyerr(struct b43legacy_wl *wl, const char *fmt, ...)
void b43legacywarn(struct b43legacy_wl *wl, const char *fmt, ...)
#if B43legacy_DEBUG
void b43legacydbg(struct b43legacy_wl *wl, const char *fmt, ...)
static void b43legacy_ram_write(struct b43legacy_wldev *dev, u16 offset,
u32 val)
static inline
void b43legacy_shm_control_word(struct b43legacy_wldev *dev,
u16 routing, u16 offset)
u32 b43legacy_shm_read32(struct b43legacy_wldev *dev,
u16 routing, u16 offset)
u16 b43legacy_shm_read16(struct b43legacy_wldev *dev,
u16 routing, u16 offset)
void b43legacy_shm_write32(struct b43legacy_wldev *dev,
u16 routing, u16 offset,
u32 value)
void b43legacy_shm_write16(struct b43legacy_wldev *dev, u16 routing, u16 offset,
u16 value)
u32 b43legacy_hf_read(struct b43legacy_wldev *dev)
void b43legacy_hf_write(struct b43legacy_wldev *dev, u32 value)
void b43legacy_tsf_read(struct b43legacy_wldev *dev, u64 *tsf)
static void b43legacy_time_lock(struct b43legacy_wldev *dev)
static void b43legacy_time_unlock(struct b43legacy_wldev *dev)
static void b43legacy_tsf_write_locked(struct b43legacy_wldev *dev, u64 tsf)
void b43legacy_tsf_write(struct b43legacy_wldev *dev, u64 tsf)
static
void b43legacy_macfilter_set(struct b43legacy_wldev *dev,
u16 offset, const u8 *mac)
static void b43legacy_write_mac_bssid_templates(struct b43legacy_wldev *dev)
static void b43legacy_upload_card_macaddress(struct b43legacy_wldev *dev)
static void b43legacy_set_slot_time(struct b43legacy_wldev *dev,
u16 slot_time)
static void b43legacy_short_slot_timing_enable(struct b43legacy_wldev *dev)
static void b43legacy_short_slot_timing_disable(struct b43legacy_wldev *dev)
static void b43legacy_synchronize_irq(struct b43legacy_wldev *dev)
void b43legacy_dummy_transmission(struct b43legacy_wldev *dev)
static void b43legacy_switch_analog(struct b43legacy_wldev *dev, int on)
void b43legacy_wireless_core_reset(struct b43legacy_wldev *dev, u32 flags)
static void handle_irq_transmit_status(struct b43legacy_wldev *dev)
static void drain_txstatus_queue(struct b43legacy_wldev *dev)
static u32 b43legacy_jssi_read(struct b43legacy_wldev *dev)
static void b43legacy_jssi_write(struct b43legacy_wldev *dev, u32 jssi)
static void b43legacy_generate_noise_sample(struct b43legacy_wldev *dev)
static void b43legacy_calculate_link_quality(struct b43legacy_wldev *dev)
static void handle_irq_noise(struct b43legacy_wldev *dev)
static void handle_irq_tbtt_indication(struct b43legacy_wldev *dev)
static void handle_irq_atim_end(struct b43legacy_wldev *dev)
static void handle_irq_pmq(struct b43legacy_wldev *dev)
static void b43legacy_write_template_common(struct b43legacy_wldev *dev,
const u8 *data, u16 size,
u16 ram_offset,
u16 shm_size_offset, u8 rate)
static u16 b43legacy_antenna_to_phyctl(int antenna)
static void b43legacy_write_beacon_template(struct b43legacy_wldev *dev,
u16 ram_offset,
u16 shm_size_offset)
static void b43legacy_write_probe_resp_plcp(struct b43legacy_wldev *dev,
u16 shm_offset, u16 size,
struct ieee80211_rate *rate)
static const u8 *b43legacy_generate_probe_resp(struct b43legacy_wldev *dev,
u16 *dest_size,
struct ieee80211_rate *rate)
static void b43legacy_write_probe_resp_template(struct b43legacy_wldev *dev,
u16 ram_offset,
u16 shm_size_offset,
struct ieee80211_rate *rate)
static void b43legacy_upload_beacon0(struct b43legacy_wldev *dev)
static void b43legacy_upload_beacon1(struct b43legacy_wldev *dev)
static void handle_irq_beacon(struct b43legacy_wldev *dev)
static void b43legacy_beacon_update_trigger_work(struct work_struct *work)
static void b43legacy_update_templates(struct b43legacy_wl *wl)
static void b43legacy_set_beacon_int(struct b43legacy_wldev *dev,
u16 beacon_int)
static void handle_irq_ucode_debug(struct b43legacy_wldev *dev)
static void b43legacy_interrupt_tasklet(struct b43legacy_wldev *dev)
static void pio_irq_workaround(struct b43legacy_wldev *dev,
u16 base, int queueidx)
static void b43legacy_interrupt_ack(struct b43legacy_wldev *dev, u32 reason)
static irqreturn_t b43legacy_interrupt_handler(int irq, void *dev_id)
static void b43legacy_release_firmware(struct b43legacy_wldev *dev)
static void b43legacy_print_fw_helptext(struct b43legacy_wl *wl)
static int do_request_fw(struct b43legacy_wldev *dev,
const char *name,
const struct firmware **fw)
static int b43legacy_request_firmware(struct b43legacy_wldev *dev)
static int b43legacy_upload_microcode(struct b43legacy_wldev *dev)
static int b43legacy_write_initvals(struct b43legacy_wldev *dev,
const struct b43legacy_iv *ivals,
size_t count,
size_t array_size)
static int b43legacy_upload_initvals(struct b43legacy_wldev *dev)
static int b43legacy_gpio_init(struct b43legacy_wldev *dev)
static void b43legacy_gpio_cleanup(struct b43legacy_wldev *dev)
b43legacy_read32(dev, B43legacy_MMIO_MACCTL);
b43legacy_read32(dev, B43legacy_MMIO_GEN_IRQ_REASON);
b43legacy_power_saving_ctl_bits(dev, -1, -1);
spin_lock_irq(&dev->wl->irq_lock);
b43legacy_write32(dev, B43legacy_MMIO_GEN_IRQ_MASK,
dev->irq_mask);
spin_unlock_irq(&dev->wl->irq_lock);
}
}
spin_lock_irq(&dev->wl->irq_lock);
b43legacy_write32(dev, B43legacy_MMIO_GEN_IRQ_MASK, 0);
spin_unlock_irq(&dev->wl->irq_lock);
b43legacy_synchronize_irq(dev);
b43legacy_power_saving_ctl_bits(dev, -1, 1);
b43legacy_write32(dev, B43legacy_MMIO_MACCTL,
b43legacy_read32(dev,
B43legacy_MMIO_MACCTL)
& ~B43legacy_MACCTL_ENABLED);
b43legacy_read32(dev, B43legacy_MMIO_GEN_IRQ_REASON);
for (i = 40; i; i--)
b43legacyerr(dev->wl, "MAC suspend failed\n");
}
out:
dev->mac_suspended++;
}
static void b43legacy_adjust_opmode(struct b43legacy_wldev *dev)
static void b43legacy_rate_memory_write(struct b43legacy_wldev *dev,
u16 rate,
int is_ofdm)
static void b43legacy_rate_memory_init(struct b43legacy_wldev *dev)
static void b43legacy_mgmtframe_txantenna(struct b43legacy_wldev *dev,
int antenna)
static void b43legacy_chip_exit(struct b43legacy_wldev *dev)
static int b43legacy_chip_init(struct b43legacy_wldev *dev)
static void b43legacy_periodic_every120sec(struct b43legacy_wldev *dev)
static void b43legacy_periodic_every60sec(struct b43legacy_wldev *dev)
static void b43legacy_periodic_every30sec(struct b43legacy_wldev *dev)
static void b43legacy_periodic_every15sec(struct b43legacy_wldev *dev)
static void do_periodic_work(struct b43legacy_wldev *dev)
static void b43legacy_periodic_work_handler(struct work_struct *work)
static void b43legacy_periodic_tasks_setup(struct b43legacy_wldev *dev)
static int b43legacy_validate_chipaccess(struct b43legacy_wldev *dev)
static void b43legacy_security_init(struct b43legacy_wldev *dev)
static int b43legacy_rng_read(struct hwrng *rng, u32 *data)
static void b43legacy_rng_exit(struct b43legacy_wl *wl)
static int b43legacy_rng_init(struct b43legacy_wl *wl)
static void b43legacy_op_tx(struct ieee80211_hw *hw,
struct sk_buff *skb)
static int b43legacy_op_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int b43legacy_op_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static const char *phymode_to_string(unsigned int phymode)
static int find_wldev_for_phymode(struct b43legacy_wl *wl,
unsigned int phymode,
struct b43legacy_wldev **dev,
bool *gmode)
static void b43legacy_put_phy_into_reset(struct b43legacy_wldev *dev)
static int b43legacy_switch_phymode(struct b43legacy_wl *wl,
unsigned int new_mode)
static void b43legacy_set_retry_limits(struct b43legacy_wldev *dev,
unsigned int short_retry,
unsigned int long_retry)
static int b43legacy_op_dev_config(struct ieee80211_hw *hw,
u32 changed)
static void b43legacy_update_basic_rates(struct b43legacy_wldev *dev, u32 brates)
static void b43legacy_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *conf,
u32 changed)
static void b43legacy_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed,
unsigned int *fflags,u64 multicast)
static void b43legacy_wireless_core_stop(struct b43legacy_wldev *dev)
static int b43legacy_wireless_core_start(struct b43legacy_wldev *dev)
static int b43legacy_phy_versioning(struct b43legacy_wldev *dev)
static void setup_struct_phy_for_init(struct b43legacy_wldev *dev,
struct b43legacy_phy *phy)
static void setup_struct_wldev_for_init(struct b43legacy_wldev *dev)
static void b43legacy_set_synth_pu_delay(struct b43legacy_wldev *dev,
bool idle)
static void b43legacy_set_pretbtt(struct b43legacy_wldev *dev)
static void b43legacy_wireless_core_exit(struct b43legacy_wldev *dev)
static void prepare_phy_data_for_init(struct b43legacy_wldev *dev)
static int b43legacy_wireless_core_init(struct b43legacy_wldev *dev)
static int b43legacy_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void b43legacy_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int b43legacy_op_start(struct ieee80211_hw *hw)
static void b43legacy_op_stop(struct ieee80211_hw *hw)
static int b43legacy_op_beacon_set_tim(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, bool set)
static int b43legacy_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static const struct ieee80211_ops b43legacy_hw_ops = ;
static void b43legacy_chip_reset(struct work_struct *work)
static int b43legacy_setup_modes(struct b43legacy_wldev *dev,
int have_bphy,
int have_gphy)
static void b43legacy_wireless_core_detach(struct b43legacy_wldev *dev)
static int b43legacy_wireless_core_attach(struct b43legacy_wldev *dev)
static void b43legacy_one_core_detach(struct ssb_device *dev)
static int b43legacy_one_core_attach(struct ssb_device *dev,
struct b43legacy_wl *wl)
static void b43legacy_sprom_fixup(struct ssb_bus *bus)
static void b43legacy_wireless_exit(struct ssb_device *dev,
struct b43legacy_wl *wl)
static int b43legacy_wireless_init(struct ssb_device *dev)
static int b43legacy_probe(struct ssb_device *dev,
const struct ssb_device_id *id)
static void b43legacy_remove(struct ssb_device *dev)
void b43legacy_controller_restart(struct b43legacy_wldev *dev,
const char *reason)
static int b43legacy_suspend(struct ssb_device *dev, pm_message_t state)
static int b43legacy_resume(struct ssb_device *dev)
# define b43legacy_suspend	NULL
# define b43legacy_resume		NULL
static struct ssb_driver b43legacy_ssb_driver = ;
static void b43legacy_print_driverinfo(void)
static int __init b43legacy_init(void)
static void __exit b43legacy_exit(void)
module_init(b43legacy_init)
module_exit(b43legacy_exit)
