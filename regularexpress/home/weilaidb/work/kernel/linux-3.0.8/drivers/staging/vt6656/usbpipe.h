#define __USBPIPE_H__
int PIPEnsControlOut(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE        pbyBuffer
);
int PIPEnsControlOutAsyn(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE        pbyBuffer
);
int PIPEnsControlIn(
PSDevice     pDevice,
BYTE         byRequest,
WORD         wValue,
WORD         wIndex,
WORD         wLength,
PBYTE   pbyBuffer
);
int PIPEnsInterruptRead(PSDevice pDevice);
int PIPEnsBulkInUsbRead(PSDevice pDevice, PRCB pRCB);
int PIPEnsSendBulkOut(PSDevice pDevice, PUSB_SEND_CONTEXT pContext);
