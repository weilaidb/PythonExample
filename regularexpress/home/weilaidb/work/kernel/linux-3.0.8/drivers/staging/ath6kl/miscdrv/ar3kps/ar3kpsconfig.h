#define __AR3KPSCONFIG_H
#undef HCI_TRANSPORT_UART
#define FPGA_REGISTER	0x4FFC
#define BDADDR_TYPE_STRING	0
#define BDADDR_TYPE_HEX		1
#define CONFIG_PATH	  "ar3k"
#define PS_ASIC_FILE      "PS_ASIC.pst"
#define PS_FPGA_FILE      "PS_FPGA.pst"
#define PATCH_FILE      "RamPatch.txt"
#define BDADDR_FILE "ar3kbdaddr.pst"
#define ROM_VER_AR3001_3_1_0	30000
#define ROM_VER_AR3001_3_1_1	30101
#define struct ar3k_config_info        struct hci_dev
extern wait_queue_head_t HciEvent;
extern wait_queue_t Eventwait;
extern u8 *HciEventpacket;
int AthPSInitialize(struct ar3k_config_info *hdev);
int ReadPSEvent(u8* Data);
