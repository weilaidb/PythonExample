static int          msglevel                =MSG_LEVEL_INFO;
#define USB_CTL_WAIT   500
#define URB_ASYNC_UNLINK    0
static
void
s_nsInterruptUsbIoCompleteRead(
struct urb *urb
);
static
void
s_nsBulkInUsbIoCompleteRead(
struct urb *urb
);
static
void
s_nsBulkOutIoCompleteWrite(
struct urb *urb
);
static
void
s_nsControlInUsbIoCompleteRead(
struct urb *urb
);
static
void
s_nsControlInUsbIoCompleteWrite(
struct urb *urb
);
int PIPEnsControlOutAsyn(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE        pbyBuffer
)
int PIPEnsControlOut(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE        pbyBuffer
)
int PIPEnsControlIn(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE   pbyBuffer
)
static
void
s_nsControlInUsbIoCompleteWrite(
struct urb *urb
)
static
void
s_nsControlInUsbIoCompleteRead(
struct urb *urb
)
int PIPEnsInterruptRead(PSDevice pDevice)
static
void
s_nsInterruptUsbIoCompleteRead(
struct urb *urb
)
int PIPEnsBulkInUsbRead(PSDevice pDevice, PRCB pRCB)
static
void
s_nsBulkInUsbIoCompleteRead(
struct urb *urb
)
int
PIPEnsSendBulkOut(
PSDevice pDevice,
PUSB_SEND_CONTEXT pContext
)
static
void
s_nsBulkOutIoCompleteWrite(
struct urb *urb
)
