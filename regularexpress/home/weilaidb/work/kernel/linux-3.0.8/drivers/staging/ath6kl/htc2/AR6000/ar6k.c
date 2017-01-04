#define MAILBOX_FOR_BLOCK_SIZE          1
int DevEnableInterrupts(struct ar6k_device *pDev);
int DevDisableInterrupts(struct ar6k_device *pDev);
static void DevCleanupVirtualScatterSupport(struct ar6k_device *pDev);
void AR6KFreeIOPacket(struct ar6k_device *pDev, struct htc_packet *pPacket)
struct htc_packet *AR6KAllocIOPacket(struct ar6k_device *pDev)
void DevCleanup(struct ar6k_device *pDev)
int DevSetup(struct ar6k_device *pDev)
int DevEnableInterrupts(struct ar6k_device *pDev)
int DevDisableInterrupts(struct ar6k_device *pDev)
int DevUnmaskInterrupts(struct ar6k_device *pDev)
int DevMaskInterrupts(struct ar6k_device *pDev)
static void DevDoEnableDisableRecvAsyncHandler(void *Context, struct htc_packet *pPacket)
static int DevDoEnableDisableRecvOverride(struct ar6k_device *pDev, bool EnableRecv, bool AsyncMode)
static int DevDoEnableDisableRecvNormal(struct ar6k_device *pDev, bool EnableRecv, bool AsyncMode)
int DevStopRecv(struct ar6k_device *pDev, bool AsyncMode)
int DevEnableRecv(struct ar6k_device *pDev, bool AsyncMode)
int DevWaitForPendingRecv(struct ar6k_device *pDev,u32 TimeoutInMs,bool *pbIsRecvPending)
void DevDumpRegisters(struct ar6k_device               *pDev,
struct ar6k_irq_proc_registers   *pIrqProcRegs,
struct ar6k_irq_enable_registers *pIrqEnableRegs)
#define DEV_GET_VIRT_DMA_INFO(p)  ((struct dev_scatter_dma_virtual_info *)((p)->HIFPrivate[0]))
static struct hif_scatter_req *DevAllocScatterReq(struct hif_device *Context)
static void DevFreeScatterReq(struct hif_device *Context, struct hif_scatter_req *pReq)
int DevCopyScatterListToFromDMABuffer(struct hif_scatter_req *pReq, bool FromDMA)
static void DevReadWriteScatterAsyncHandler(void *Context, struct htc_packet *pPacket)
static int DevReadWriteScatter(struct hif_device *Context, struct hif_scatter_req *pReq)
static void DevCleanupVirtualScatterSupport(struct ar6k_device *pDev)
static int DevSetupVirtualScatterSupport(struct ar6k_device *pDev)
int DevCleanupMsgBundling(struct ar6k_device *pDev)
int DevSetupMsgBundling(struct ar6k_device *pDev, int MaxMsgsPerTransfer)
int DevSubmitScatterRequest(struct ar6k_device *pDev, struct hif_scatter_req *pScatterReq, bool Read, bool Async)
#define A_ROUND_UP_PWR2(x, align)    (((int) (x) + ((align)-1)) & ~((align)-1))
#define BUFFER_BLOCK_PAD 128
#if 1
#define BUFFER1 80
#define BUFFER2 200
#define BUFFER3 444
#define BUFFER4 800
#define TOTAL_BYTES (A_ROUND_UP_PWR2(BUFFER1,BUFFER_BLOCK_PAD) + \
A_ROUND_UP_PWR2(BUFFER2,BUFFER_BLOCK_PAD) + \
A_ROUND_UP_PWR2(BUFFER3,BUFFER_BLOCK_PAD) + \
A_ROUND_UP_PWR2(BUFFER4,BUFFER_BLOCK_PAD) )
#define TEST_BYTES (BUFFER1 +  BUFFER2 + BUFFER3 + BUFFER4)
#define TEST_CREDITS_RECV_TIMEOUT 100
static u8 g_Buffer[TOTAL_BYTES];
static u32 g_MailboxAddrs[AR6K_MAILBOXES];
static u32 g_BlockSizes[AR6K_MAILBOXES];
#define BUFFER_PROC_LIST_DEPTH 4
struct buffer_proc_list ;
#define PUSH_BUFF_PROC_ENTRY(pList,len,pCurrpos) \
static void AssembleBufferList(struct buffer_proc_list *pList)
#define FILL_ZERO     true
#define FILL_COUNTING false
static void InitBuffers(bool Zero)
static bool CheckOneBuffer(u16 *pBuffer16, int Length)
static bool CheckBuffers(void)
static u16 GetEndMarker(void)
#define ATH_PRINT_OUT_ZONE ATH_DEBUG_ERR
static int SendBuffers(struct ar6k_device *pDev, int mbox)
static int GetCredits(struct ar6k_device *pDev, int mbox, int *pCredits)
static int RecvBuffers(struct ar6k_device *pDev, int mbox)
static int DoOneMboxHWTest(struct ar6k_device *pDev, int mbox)
int DoMboxHWTest(struct ar6k_device *pDev)
