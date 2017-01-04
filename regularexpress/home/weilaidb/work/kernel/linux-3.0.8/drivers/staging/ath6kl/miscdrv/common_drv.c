#define ATH_MODULE_NAME misc
static ATH_DEBUG_MODULE_DBG_INFO *g_pModuleInfoHead = NULL;
static A_MUTEX_T                 g_ModuleListLock;
static bool                    g_ModuleDebugInit = false;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(misc,
"misc",
"Common and misc APIs",
ATH_DEBUG_MASK_DEFAULTS,
0,
NULL);
#define HOST_INTEREST_ITEM_ADDRESS(target, item) \
((((target) == TARGET_TYPE_AR6002) ? AR6002_HOST_INTEREST_ITEM_ADDRESS(item) : \
(((target) == TARGET_TYPE_AR6003) ? AR6003_HOST_INTEREST_ITEM_ADDRESS(item) : 0)))
#define AR6001_LOCAL_COUNT_ADDRESS 0x0c014080
#define AR6002_LOCAL_COUNT_ADDRESS 0x00018080
#define AR6003_LOCAL_COUNT_ADDRESS 0x00018080
#define CPU_DBG_SEL_ADDRESS                      0x00000483
#define CPU_DBG_ADDRESS                          0x00000484
static u8 custDataAR6002[AR6002_CUST_DATA_SIZE];
static u8 custDataAR6003[AR6003_CUST_DATA_SIZE];
int ar6000_SetAddressWindowRegister(struct hif_device *hifDevice, u32 RegisterAddr, u32 Address)
int ar6000_SetAddressWindowRegister(struct hif_device *hifDevice, u32 RegisterAddr, u32 Address)
int
ar6000_ReadRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data)
int
ar6000_WriteRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data)
int
ar6000_ReadDataDiag(struct hif_device *hifDevice, u32 address,
u8 *data, u32 length)
int
ar6000_WriteDataDiag(struct hif_device *hifDevice, u32 address,
u8 *data, u32 length)
int
ar6k_ReadTargetRegister(struct hif_device *hifDevice, int regsel, u32 *regval)
void
ar6k_FetchTargetRegs(struct hif_device *hifDevice, u32 *targregs)
#define AR6001_RESET_CONTROL_ADDRESS 0x0C000000
#define AR6002_RESET_CONTROL_ADDRESS 0x00004000
#define AR6003_RESET_CONTROL_ADDRESS 0x00004000
int ar6000_reset_device(struct hif_device *hifDevice, u32 TargetType, bool waitForCompletion, bool coldReset)
void
ar6000_copy_cust_data_from_target(struct hif_device *hifDevice, u32 TargetType)
u8 *ar6000_get_cust_data_buffer(u32 TargetType)
#define REG_DUMP_COUNT_AR6001   38
#define REG_DUMP_COUNT_AR6002   60
#define REG_DUMP_COUNT_AR6003   60
#define REGISTER_DUMP_LEN_MAX   60
#if REG_DUMP_COUNT_AR6001 > REGISTER_DUMP_LEN_MAX
#error "REG_DUMP_COUNT_AR6001 too large"
#if REG_DUMP_COUNT_AR6002 > REGISTER_DUMP_LEN_MAX
#error "REG_DUMP_COUNT_AR6002 too large"
#if REG_DUMP_COUNT_AR6003 > REGISTER_DUMP_LEN_MAX
#error "REG_DUMP_COUNT_AR6003 too large"
void ar6000_dump_target_assert_info(struct hif_device *hifDevice, u32 TargetType)
int ar6000_set_htc_params(struct hif_device *hifDevice,
u32 TargetType,
u32 MboxIsrYieldValue,
u8 HtcControlBuffers)
void DebugDumpBytes(u8 *buffer, u16 length, char *pDescription)
void a_dump_module_debug_info(ATH_DEBUG_MODULE_DBG_INFO *pInfo)
static ATH_DEBUG_MODULE_DBG_INFO *FindModule(char *module_name)
void a_register_module_debug_info(ATH_DEBUG_MODULE_DBG_INFO *pInfo)
void a_dump_module_debug_info_by_name(char *module_name)
int a_get_module_mask(char *module_name, u32 *pMask)
int a_set_module_mask(char *module_name, u32 Mask)
void a_module_debug_support_init(void)
void a_module_debug_support_cleanup(void)
int ar6000_set_hci_bridge_flags(struct hif_device *hifDevice,
u32 TargetType,
u32 Flags)
