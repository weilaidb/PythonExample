static u16 watchdog_timeout = AMT_WD_VALUE;
module_param(watchdog_timeout, ushort, 0);
MODULE_PARM_DESC(watchdog_timeout,
"Intel(R) AMT Watchdog timeout value in seconds. (default="
__MODULE_STRING(AMT_WD_VALUE)
", disable=0)");
static const u8 mei_start_wd_params[] = ;
static const u8 mei_stop_wd_params[] = ;
const u8 mei_wd_state_independence_msg[3][4] = ;
const uuid_le mei_wd_guid = UUID_LE(0x05B79A6F, 0x4628, 0x4D7F, 0x89,
0x9D, 0xA9, 0x15, 0x14, 0xCB,
0x32, 0xAB);
void mei_wd_start_setup(struct mei_device *dev)
void mei_wd_host_init(struct mei_device *dev)
int mei_wd_send(struct mei_device *dev)
int mei_wd_stop(struct mei_device *dev, bool preserve)
