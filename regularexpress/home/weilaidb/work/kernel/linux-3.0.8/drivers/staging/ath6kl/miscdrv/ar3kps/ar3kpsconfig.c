#define MAX_FW_PATH_LEN             50
#define MAX_BDADDR_FORMAT_LENGTH    30
typedef struct HciCommandListParam;
int SendHCICommandWaitCommandComplete(struct ar3k_config_info *pConfig,
u8 *pHCICommand,
int              CmdLength,
u8 **ppEventBuffer,
u8 **ppBufferToFree);
u32 Rom_Version;
u32 Build_Version;
extern bool BDADDR;
int getDeviceType(struct ar3k_config_info *pConfig, u32 *code);
int ReadVersionInfo(struct ar3k_config_info *pConfig);
DECLARE_WAIT_QUEUE_HEAD(PsCompleteEvent);
DECLARE_WAIT_QUEUE_HEAD(HciEvent);
u8 *HciEventpacket;
rwlock_t syncLock;
wait_queue_t Eventwait;
int PSHciWritepacket(struct hci_dev*,u8* Data, u32 len);
extern char *bdaddr;
int write_bdaddr(struct ar3k_config_info *pConfig,u8 *bdaddr,int type);
int PSSendOps(void *arg);
void Hci_log(u8 * log_string,u8 *data,u32 len)
#define Hci_log(string,data,len)
int AthPSInitialize(struct ar3k_config_info *hdev)
int PSSendOps(void *arg)
int SendHCICommandWaitCommandComplete(struct ar3k_config_info *pConfig,
u8 *pHCICommand,
int              CmdLength,
u8 **ppEventBuffer,
u8 **ppBufferToFree)
int ReadPSEvent(u8* Data)
int str2ba(unsigned char *str_bdaddr,unsigned char *bdaddr)
int write_bdaddr(struct ar3k_config_info *pConfig,u8 *bdaddr,int type)
int ReadVersionInfo(struct ar3k_config_info *pConfig)
int getDeviceType(struct ar3k_config_info *pConfig, u32 *code)
