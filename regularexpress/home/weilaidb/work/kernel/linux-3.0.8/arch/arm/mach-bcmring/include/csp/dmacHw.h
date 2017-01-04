#define _DMACHW_H
#define dmacHw_MAKE_CHANNEL_ID(m, c)         (m << 8 | c)
typedef enum  dmacHw_CHANNEL_PRIORITY_e;
typedef enum  dmacHw_MASTER_INTERFACE_e;
typedef enum  dmacHw_TRANSACTION_WIDTH_e;
typedef enum  dmacHw_BURST_WIDTH_e;
typedef enum  dmacHw_TRANSFER_TYPE_e;
typedef enum  dmacHw_TRANSFER_MODE_e;
typedef enum  dmacHw_ADDRESS_UPDATE_MODE_e;
typedef enum  dmacHw_FLOW_CONTROL_e;
typedef enum  dmacHw_TRANSFER_STATUS_e;
typedef enum  dmacHw_INTERRUPT_e;
typedef enum  dmacHw_INTERRUPT_STATUS_e;
typedef enum  dmacHw_CONTROLLER_ATTRIB_e;
typedef unsigned long dmacHw_HANDLE_t;
typedef uint32_t dmacHw_ID_t;
typedef struct  dmacHw_CONFIG_t;
void dmacHw_initDma(void);
void dmacHw_exitDma(void);
dmacHw_HANDLE_t dmacHw_getChannelHandle(dmacHw_ID_t channelId
);
int dmacHw_initChannel(dmacHw_HANDLE_t handle
);
int dmacHw_calculateDescriptorCount(dmacHw_CONFIG_t *pConfig,
void *pSrcAddr,
void *pDstAddr,
size_t dataLen
);
int dmacHw_initDescriptor(void *pDescriptorVirt,
uint32_t descriptorPhyAddr,
uint32_t len,
uint32_t num
);
uint32_t dmacHw_descriptorLen(uint32_t descCnt
);
int dmacHw_configChannel(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig
);
int dmacHw_setDataDescriptor(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void *pSrcAddr,
void *pDstAddr,
size_t dataLen
);
dmacHw_TRANSFER_STATUS_e dmacHw_transferCompleted(dmacHw_HANDLE_t handle
);
int dmacHw_setControlDescriptor(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
uint32_t ctlAddress,
uint32_t control
);
int dmacHw_readTransferredData(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void **ppBbuf,
size_t *pLlen
);
int dmacHw_setVariableDataDescriptor(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
uint32_t srcAddr,
void *(*fpAlloc) (int len),
int len,
int num
);
void dmacHw_initiateTransfer(dmacHw_HANDLE_t handle,
dmacHw_CONFIG_t *pConfig,
void *pDescriptor
);
void dmacHw_resetDescriptorControl(void *pDescriptor
);
void dmacHw_stopTransfer(dmacHw_HANDLE_t handle
);
uint32_t dmacHw_descriptorPending(dmacHw_HANDLE_t handle,
void *pDescriptor
);
int dmacHw_freeMem(dmacHw_CONFIG_t *pConfig,
void *pDescriptor,
void (*fpFree) (void *)
);
void dmacHw_clearInterrupt(dmacHw_HANDLE_t handle
);
dmacHw_INTERRUPT_STATUS_e dmacHw_getInterruptStatus(dmacHw_HANDLE_t handle
);
dmacHw_HANDLE_t dmacHw_getInterruptSource(void);
void dmacHw_setChannelUserData(dmacHw_HANDLE_t handle,
void *userData
);
void *dmacHw_getChannelUserData(dmacHw_HANDLE_t handle
);
void dmacHw_printDebugInfo(dmacHw_HANDLE_t handle,
void *pDescriptor,
int (*fpPrint) (const char *, ...)
);
uint32_t dmacHw_getDmaControllerAttribute(dmacHw_HANDLE_t handle,
dmacHw_CONTROLLER_ATTRIB_e attr
);
