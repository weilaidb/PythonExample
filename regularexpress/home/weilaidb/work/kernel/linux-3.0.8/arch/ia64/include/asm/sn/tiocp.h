#define _ASM_IA64_SN_PCI_TIOCP_H
#define TIOCP_HOST_INTR_ADDR            0x003FFFFFFFFFFFFFUL
#define TIOCP_PCI64_CMDTYPE_MEM         (0x1ull << 60)
#define TIOCP_PCI64_CMDTYPE_MSI         (0x3ull << 60)
struct tiocp;
