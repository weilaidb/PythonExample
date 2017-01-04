#define AR6K_H_
#define AR6K_MAILBOXES 4
#define HTC_MAILBOX          0
#define AR6K_TARGET_DEBUG_INTR_MASK     0x01
#define OTHER_INTS_ENABLED (INT_STATUS_ENABLE_ERROR_MASK |   \
INT_STATUS_ENABLE_CPU_MASK   |   \
INT_STATUS_ENABLE_COUNTER_MASK)
PREPACK struct ar6k_irq_proc_registers  POSTPACK;
#define AR6K_IRQ_PROC_REGS_SIZE sizeof(struct ar6k_irq_proc_registers)
PREPACK struct ar6k_irq_enable_registers  POSTPACK;
PREPACK struct ar6k_gmbox_ctrl_registers  POSTPACK;
#define AR6K_IRQ_ENABLE_REGS_SIZE sizeof(struct ar6k_irq_enable_registers)
#define AR6K_REG_IO_BUFFER_SIZE     32
#define AR6K_MAX_REG_IO_BUFFERS     8
#define FROM_DMA_BUFFER true
#define TO_DMA_BUFFER   false
#define AR6K_SCATTER_ENTRIES_PER_REQ            16
#define AR6K_MAX_TRANSFER_SIZE_PER_SCATTER      16*1024
#define AR6K_SCATTER_REQS                       4
#define AR6K_LEGACY_MAX_WRITE_LENGTH            2048
#define A_CACHE_LINE_PAD                        128
#define AR6K_MIN_SCATTER_ENTRIES_PER_REQ        2
#define AR6K_MIN_TRANSFER_SIZE_PER_SCATTER      4*1024
struct ar6k_async_reg_io_buffer ;
struct ar6k_gmbox_info ;
struct ar6k_device ;
#define LOCK_AR6K(p)      A_MUTEX_LOCK(&(p)->Lock);
#define UNLOCK_AR6K(p)    A_MUTEX_UNLOCK(&(p)->Lock);
#define REF_IRQ_STATUS_RECHECK(p) (p)->RecheckIRQStatusCnt = 1
int DevSetup(struct ar6k_device *pDev);
void     DevCleanup(struct ar6k_device *pDev);
int DevUnmaskInterrupts(struct ar6k_device *pDev);
int DevMaskInterrupts(struct ar6k_device *pDev);
int DevPollMboxMsgRecv(struct ar6k_device *pDev,
u32 *pLookAhead,
int          TimeoutMS);
int DevRWCompletionHandler(void *context, int status);
int DevDsrHandler(void *context);
int DevCheckPendingRecvMsgsAsync(void *context);
void     DevAsyncIrqProcessComplete(struct ar6k_device *pDev);
void     DevDumpRegisters(struct ar6k_device               *pDev,
struct ar6k_irq_proc_registers   *pIrqProcRegs,
struct ar6k_irq_enable_registers *pIrqEnableRegs);
#define DEV_STOP_RECV_ASYNC true
#define DEV_STOP_RECV_SYNC  false
#define DEV_ENABLE_RECV_ASYNC true
#define DEV_ENABLE_RECV_SYNC  false
int DevStopRecv(struct ar6k_device *pDev, bool ASyncMode);
int DevEnableRecv(struct ar6k_device *pDev, bool ASyncMode);
int DevEnableInterrupts(struct ar6k_device *pDev);
int DevDisableInterrupts(struct ar6k_device *pDev);
int DevWaitForPendingRecv(struct ar6k_device *pDev,u32 TimeoutInMs,bool *pbIsRecvPending);
#define DEV_CALC_RECV_PADDED_LEN(pDev, length) (((length) + (pDev)->BlockMask) & (~((pDev)->BlockMask)))
#define DEV_CALC_SEND_PADDED_LEN(pDev, length) DEV_CALC_RECV_PADDED_LEN(pDev,length)
#define DEV_IS_LEN_BLOCK_ALIGNED(pDev, length) (((length) % (pDev)->BlockSize) == 0)
static INLINE int DevSendPacket(struct ar6k_device *pDev, struct htc_packet *pPacket, u32 SendLength)
static INLINE int DevRecvPacket(struct ar6k_device *pDev, struct htc_packet *pPacket, u32 RecvLength)
#define DEV_CHECK_RECV_YIELD(pDev) \
((pDev)->CurrentDSRRecvCount >= (pDev)->HifIRQYieldParams.RecvPacketYieldCount)
#define IS_DEV_IRQ_PROC_SYNC_MODE(pDev) (HIF_DEVICE_IRQ_SYNC_ONLY == (pDev)->HifIRQProcessingMode)
#define IS_DEV_IRQ_PROCESSING_ASYNC_ALLOWED(pDev) ((pDev)->HifIRQProcessingMode != HIF_DEVICE_IRQ_SYNC_ONLY)
int DevCopyScatterListToFromDMABuffer(struct hif_scatter_req *pReq, bool FromDMA);
#define DEV_FINISH_SCATTER_OPERATION(pR)				\
do  while (0)
static INLINE int DEV_PREPARE_SCATTER_OPERATION(struct hif_scatter_req *pReq)
int DevSetupMsgBundling(struct ar6k_device *pDev, int MaxMsgsPerTransfer);
int DevCleanupMsgBundling(struct ar6k_device *pDev);
#define DEV_GET_MAX_MSG_PER_BUNDLE(pDev)        (pDev)->HifScatterInfo.MaxScatterEntries
#define DEV_GET_MAX_BUNDLE_LENGTH(pDev)         (pDev)->HifScatterInfo.MaxTransferSizePerScatterReq
#define DEV_ALLOC_SCATTER_REQ(pDev)             \
(pDev)->HifScatterInfo.pAllocateReqFunc((pDev)->ScatterIsVirtual ? (pDev) : (pDev)->HIFDevice)
#define DEV_FREE_SCATTER_REQ(pDev,pR)           \
(pDev)->HifScatterInfo.pFreeReqFunc((pDev)->ScatterIsVirtual ? (pDev) : (pDev)->HIFDevice,(pR))
#define DEV_GET_MAX_BUNDLE_RECV_LENGTH(pDev)   (pDev)->MaxRecvBundleSize
#define DEV_GET_MAX_BUNDLE_SEND_LENGTH(pDev)   (pDev)->MaxSendBundleSize
#define DEV_SCATTER_READ  true
#define DEV_SCATTER_WRITE false
#define DEV_SCATTER_ASYNC true
#define DEV_SCATTER_SYNC  false
int DevSubmitScatterRequest(struct ar6k_device *pDev, struct hif_scatter_req *pScatterReq, bool Read, bool Async);
int DoMboxHWTest(struct ar6k_device *pDev);
struct dev_scatter_dma_virtual_info ;
void     DumpAR6KDevState(struct ar6k_device *pDev);
void     DevCleanupGMbox(struct ar6k_device *pDev);
int DevSetupGMbox(struct ar6k_device *pDev);
int DevCheckGMboxInterrupts(struct ar6k_device *pDev);
void     DevNotifyGMboxTargetFailure(struct ar6k_device *pDev);
#define DevCleanupGMbox(p)
#define DevCheckGMboxInterrupts(p) 0
#define DevNotifyGMboxTargetFailure(p)
static INLINE int DevSetupGMbox(struct ar6k_device *pDev)
HCI_TRANSPORT_HANDLE GMboxAttachProtocol(struct ar6k_device *pDev, struct hci_transport_config_info *pInfo);
int             GMboxProtocolInstall(struct ar6k_device *pDev);
void                 GMboxProtocolUninstall(struct ar6k_device *pDev);
struct ar6k_device  *HTCGetAR6KDevice(void *HTCHandle);
#define DEV_GMBOX_SET_PROTOCOL(pDev,recv_callback,credits_pending,failure,statedump,context) \
#define DEV_GMBOX_GET_PROTOCOL(pDev)  (pDev)->GMboxInfo.pProtocolContext
int DevGMboxWrite(struct ar6k_device *pDev, struct htc_packet *pPacket, u32 WriteLength);
int DevGMboxRead(struct ar6k_device *pDev, struct htc_packet *pPacket, u32 ReadLength);
#define PROC_IO_ASYNC true
#define PROC_IO_SYNC  false
typedef enum GMBOX_IRQ_ACTION_TYPE  GMBOX_IRQ_ACTION_TYPE;
int DevGMboxIRQAction(struct ar6k_device *pDev, GMBOX_IRQ_ACTION_TYPE, bool AsyncMode);
int DevGMboxReadCreditCounter(struct ar6k_device *pDev, bool AsyncMode, int *pCredits);
int DevGMboxReadCreditSize(struct ar6k_device *pDev, int *pCreditSize);
int DevGMboxRecvLookAheadPeek(struct ar6k_device *pDev, u8 *pLookAheadBuffer, int *pLookAheadBytes);
int DevGMboxSetTargetInterrupt(struct ar6k_device *pDev, int SignalNumber, int AckTimeoutMS);
