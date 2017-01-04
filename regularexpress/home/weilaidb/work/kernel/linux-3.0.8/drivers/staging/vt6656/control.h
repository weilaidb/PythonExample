#define __CONTROL_H__
#define CONTROLnsRequestOut(Device, Request, Value, Index, Length, Buffer) \
PIPEnsControlOut(Device, Request, Value, Index, Length, Buffer)
#define CONTROLnsRequestOutAsyn(Device, Request, Value, Index, Length, Buffer) \
PIPEnsControlOutAsyn(Device, Request, Value, Index, Length, Buffer)
#define CONTROLnsRequestIn(Device, Request, Value, Index, Length, Buffer) \
PIPEnsControlIn(Device, Request, Value, Index, Length, Buffer)
void ControlvWriteByte(
PSDevice pDevice,
BYTE byRegType,
BYTE byRegOfs,
BYTE byData
);
void ControlvReadByte(
PSDevice pDevice,
BYTE byRegType,
BYTE byRegOfs,
PBYTE pbyData
);
void ControlvMaskByte(
PSDevice pDevice,
BYTE byRegType,
BYTE byRegOfs,
BYTE byMask,
BYTE byData
);
