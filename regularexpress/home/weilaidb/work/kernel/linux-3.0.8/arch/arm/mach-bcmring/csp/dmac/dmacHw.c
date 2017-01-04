dmacHw_CBLK_t dmacHw_gCblk[dmacHw_MAX_CHANNEL_COUNT];
uint32_t dmaChannelCount_0 = dmacHw_MAX_CHANNEL_COUNT / 2;
uint32_t dmaChannelCount_1 = dmacHw_MAX_CHANNEL_COUNT / 2;
static uint32_t GetFifoSize(dmacHw_HANDLE_t handle
)
void dmacHw_initiateTransfer(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor
)
void dmacHw_initDma(void)
void dmacHw_exitDma(void)
dmacHw_HANDLE_t dmacHw_getChannelHandle(dmacHw_ID_t channelId
)
int dmacHw_initChannel(dmacHw_HANDLE_t handle
)
uint32_t dmacHw_descriptorLen(uint32_t descCnt
)
int dmacHw_initDescriptor(void *pDescriptorVirt,
uint32_t descriptorPhyAddr,
uint32_t len,
uint32_t num
)
int dmacHw_configChannel(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig
)
dmacHw_TRANSFER_STATUS_e dmacHw_transferCompleted(dmacHw_HANDLE_t handle
)
int dmacHw_setDataDescriptor(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void *pSrcAddr,
void *pDstAddr,
size_t dataLen
)
uint32_t dmacHw_getDmaControllerAttribute(dmacHw_HANDLE_t handle,
dmacHw_CONTROLLER_ATTRIB_e attr
)
