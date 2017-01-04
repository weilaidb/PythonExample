#define __DIVA_OS_XDI_ADAPTER_H__
#define DIVAS_XDI_ADAPTER_BUS_PCI  0
#define DIVAS_XDI_ADAPTER_BUS_ISA  1
typedef struct _divas_pci_card_resources  divas_pci_card_resources_t;
typedef union _divas_card_resources  divas_card_resources_t;
struct _diva_os_xdi_adapter;
typedef int (*diva_init_card_proc_t) (struct _diva_os_xdi_adapter * a);
typedef int (*diva_cmd_card_proc_t) (struct _diva_os_xdi_adapter * a,
diva_xdi_um_cfg_cmd_t * data,
int length);
typedef void (*diva_xdi_clear_interrupts_proc_t) (struct
_diva_os_xdi_adapter *);
#define DIVA_XDI_MBOX_BUSY			1
#define DIVA_XDI_MBOX_WAIT_XLOG	2
typedef struct _xdi_mbox_t  xdi_mbox_t;
typedef struct _diva_os_idi_adapter_interface  diva_os_idi_adapter_interface_t;
typedef struct _diva_os_xdi_adapter  diva_os_xdi_adapter_t;
