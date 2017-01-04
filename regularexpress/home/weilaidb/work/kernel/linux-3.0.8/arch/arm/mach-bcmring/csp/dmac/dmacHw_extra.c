extern dmacHw_CBLK_t dmacHw_gCblk[dmacHw_MAX_CHANNEL_COUNT];
void dmacHw_setDataLength(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
size_t dataLen
);
static void DisplayRegisterContents(int module,
int channel,
int (*fpPrint) (const char *, ...)
)
static void DisplayDescRing(void *pDescriptor,
int (*fpPrint) (const char *, ...)
)
static inline int DmaIsFlowController(void *pDescriptor
)
void dmacHw_setDataLength(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
size_t dataLen
)
void dmacHw_clearInterrupt(dmacHw_HANDLE_t handle
)
dmacHw_INTERRUPT_STATUS_e dmacHw_getInterruptStatus(dmacHw_HANDLE_t handle
)
dmacHw_HANDLE_t dmacHw_getInterruptSource(void)
int dmacHw_calculateDescriptorCount(dmacHw_CONFIG_t *pConfig,
void *pSrcAddr,
void *pDstAddr,
size_t dataLen
)
uint32_t dmacHw_descriptorPending(dmacHw_HANDLE_t handle,
void *pDescriptor
)
void dmacHw_stopTransfer(dmacHw_HANDLE_t handle
)
int dmacHw_freeMem(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void (*fpFree) (void *)
)
int dmacHw_setVariableDataDescriptor(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
uint32_t srcAddr,
void *(*fpAlloc) (int len),
int len,
int num
)
int dmacHw_readTransferredData(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void **ppBbuf,
size_t *pLlen
)
int dmacHw_setControlDescriptor(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
uint32_t ctlAddress,
uint32_t control
)
void dmacHw_setChannelUserData(dmacHw_HANDLE_t handle,
void *userData
)
void *dmacHw_getChannelUserData(dmacHw_HANDLE_t handle
)
void dmacHw_resetDescriptorControl(void *pDescriptor
)
void dmacHw_printDebugInfo(dmacHw_HANDLE_t handle,
void *pDescriptor,
int (*fpPrint) (const char *, ...)
)
