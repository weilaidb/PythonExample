static void rtl92c_init_aspm_vars(struct ieee80211_hw *hw)
int rtl92c_init_sw_vars(struct ieee80211_hw *hw)
void rtl92c_deinit_sw_vars(struct ieee80211_hw *hw)
static struct rtl_hal_ops rtl8192ce_hal_ops = ;
static struct rtl_mod_params rtl92ce_mod_params = ;
static struct rtl_hal_cfg rtl92ce_hal_cfg = ;
DEFINE_PCI_DEVICE_TABLE(rtl92ce_pci_ids) = ;
MODULE_DEVICE_TABLE(pci, rtl92ce_pci_ids);
MODULE_AUTHOR("lizhaoming	<chaoming_li@realsil.com.cn>");
MODULE_AUTHOR("Realtek WlanFAE	<wlanfae@realtek.com>");
MODULE_AUTHOR("Larry Finger	<Larry.Finger@lwfinger.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek 8192C/8188C 802.11n PCI wireless");
MODULE_FIRMWARE("rtlwifi/rtl8192cfw.bin");
module_param_named(swenc, rtl92ce_mod_params.sw_crypto, bool, 0444);
module_param_named(ips, rtl92ce_mod_params.inactiveps, bool, 0444);
module_param_named(swlps, rtl92ce_mod_params.swctrl_lps, bool, 0444);
module_param_named(fwlps, rtl92ce_mod_params.fwctrl_lps, bool, 0444);
MODULE_PARM_DESC(swenc, "using hardware crypto (default 0 [hardware])\n");
MODULE_PARM_DESC(ips, "using no link power save (default 1 is open)\n");
MODULE_PARM_DESC(fwlps, "using linked fw control power save "
"(default 1 is open)\n");
static struct pci_driver rtl92ce_driver = ;
static int __init rtl92ce_module_init(void)
static void __exit rtl92ce_module_exit(void)
module_init(rtl92ce_module_init);
module_exit(rtl92ce_module_exit);
