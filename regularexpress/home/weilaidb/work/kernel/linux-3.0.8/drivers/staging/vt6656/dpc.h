#define __DPC_H__
void RXvWorkItem(void *Context);
void RXvMngWorkItem(void *Context);
void
RXvFreeRCB(
PRCB pRCB,
BOOL bReAllocSkb
);
BOOL
RXbBulkInProcessData(
PSDevice         pDevice,
PRCB             pRCB,
unsigned long            BytesToIndicate
);
