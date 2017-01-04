#define __DPC_H__
bool
device_receive_frame (
PSDevice pDevice,
PSRxDesc pCurrRD
);
void	MngWorkItem(void *Context);
