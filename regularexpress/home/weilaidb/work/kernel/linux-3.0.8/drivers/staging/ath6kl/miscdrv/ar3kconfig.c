#define ATH_MODULE_NAME misc
#define BAUD_CHANGE_COMMAND_STATUS_OFFSET   5
#define HCI_EVENT_RESP_TIMEOUTMS            3000
#define HCI_CMD_OPCODE_BYTE_LOW_OFFSET      0
#define HCI_CMD_OPCODE_BYTE_HI_OFFSET       1
#define HCI_EVENT_OPCODE_BYTE_LOW           3
#define HCI_EVENT_OPCODE_BYTE_HI            4
#define HCI_CMD_COMPLETE_EVENT_CODE         0xE
#define HCI_MAX_EVT_RECV_LENGTH             257
#define EXIT_MIN_BOOT_COMMAND_STATUS_OFFSET  5
int AthPSInitialize(struct ar3k_config_info *hdev);
static int SendHCICommand(struct ar3k_config_info *pConfig,
u8 *pBuffer,
int              Length)
static int RecvHCIEvent(struct ar3k_config_info *pConfig,
u8 *pBuffer,
int              *pLength)
int SendHCICommandWaitCommandComplete(struct ar3k_config_info *pConfig,
u8 *pHCICommand,
int              CmdLength,
u8 **ppEventBuffer,
u8 **ppBufferToFree)
static int AR3KConfigureHCIBaud(struct ar3k_config_info *pConfig)
static int AR3KExitMinBoot(struct ar3k_config_info *pConfig)
static int AR3KConfigureSendHCIReset(struct ar3k_config_info *pConfig)
static int AR3KEnableTLPM(struct ar3k_config_info *pConfig)
int AR3KConfigure(struct ar3k_config_info *pConfig)
int AR3KConfigureExit(void *config)
