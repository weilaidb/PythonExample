MODULE_AUTHOR("Dave Airlie");
MODULE_DESCRIPTION("MXM WMI Driver");
MODULE_LICENSE("GPL");
#define MXM_WMMX_GUID "F6CB5C3C-9CAE-4EBD-B577-931EA32A2CC0"
MODULE_ALIAS("wmi:"MXM_WMMX_GUID);
#define MXM_WMMX_FUNC_MXDS 0x5344584D
#define MXM_WMMX_FUNC_MXMX 0x53445344
struct mxds_args ;
int mxm_wmi_call_mxds(int adapter)
EXPORT_SYMBOL_GPL(mxm_wmi_call_mxds);
int mxm_wmi_call_mxmx(int adapter)
EXPORT_SYMBOL_GPL(mxm_wmi_call_mxmx);
bool mxm_wmi_supported(void)
EXPORT_SYMBOL_GPL(mxm_wmi_supported);
static int __init mxm_wmi_init(void)
static void __exit mxm_wmi_exit(void)
module_init(mxm_wmi_init);
module_exit(mxm_wmi_exit);
