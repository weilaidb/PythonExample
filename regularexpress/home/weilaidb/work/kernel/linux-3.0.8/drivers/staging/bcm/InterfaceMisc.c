INT
InterfaceRDM(PS_INTERFACE_ADAPTER psIntfAdapter,
UINT addr,
PVOID buff,
INT len)
INT
InterfaceWRM(PS_INTERFACE_ADAPTER psIntfAdapter,
UINT addr,
PVOID buff,
INT len)
INT
BcmRDM(PVOID arg,
UINT addr,
PVOID buff,
INT len)
INT
BcmWRM(PVOID arg,
UINT addr,
PVOID buff,
INT len)
INT Bcm_clear_halt_of_endpoints(PMINI_ADAPTER Adapter)
VOID Bcm_kill_all_URBs(PS_INTERFACE_ADAPTER psIntfAdapter)
VOID putUsbSuspend(struct work_struct *work)
