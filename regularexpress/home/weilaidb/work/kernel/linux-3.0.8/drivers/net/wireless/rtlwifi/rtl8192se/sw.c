static void rtl92s_init_aspm_vars(struct ieee80211_hw *hw)
static int rtl92s_init_sw_vars(struct ieee80211_hw *hw)
static void rtl92s_deinit_sw_vars(struct ieee80211_hw *hw)
static struct rtl_hal_ops rtl8192se_hal_ops = ;
static struct rtl_mod_params rtl92se_mod_params = ;
static struct rtl_hal_cfg rtl92se_hal_cfg = ;
static struct pci_device_id rtl92se_pci_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, rtl92se_pci_ids);
MODULE_AUTHOR("lizhaoming	<chaoming_li@realsil.com.cn>");
MODULE_AUTHOR("Realtek WlanFAE	<wlanfae@realtek.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek 8192S/8191S 802.11n PCI wireless");
MODULE_FIRMWARE("rtlwifi/rtl8192sefw.bin");
module_param_named(swenc, rtl92se_mod_params.sw_crypto, bool, 0444);
module_param_named(ips, rtl92se_mod_params.inactiveps, bool, 0444);
module_param_named(swlps, rtl92se_mod_params.swctrl_lps, bool, 0444);
module_param_named(fwlps, rtl92se_mod_params.fwctrl_lps, bool, 0444);
MODULE_PARM_DESC(swenc, "using hardware crypto (default 0 [hardware])\n");
MODULE_PARM_DESC(ips, "using no link power save (default 1 is open)\n");
MODULE_PARM_DESC(swlps, "using linked sw control power save (default 1 is "
"open)\n");
static struct pci_driver rtl92se_driver = ;
static int __init rtl92se_module_init(void)
static void __exit rtl92se_module_exit(void)
module_init(rtl92se_module_init);
module_exit(rtl92se_module_exit);
