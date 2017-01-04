int InterfaceFileDownload( PVOID arg,
struct file *flp,
unsigned int on_chip_loc)
int InterfaceFileReadbackFromChip( PVOID arg,
struct file *flp,
unsigned int on_chip_loc)
static int bcm_download_config_file(PMINI_ADAPTER Adapter,
FIRMWARE_INFO *psFwInfo)
static int bcm_compare_buff_contents(unsigned char *readbackbuff,
unsigned char *buff,unsigned int len)
int bcm_ioctl_fw_download(PMINI_ADAPTER Adapter, FIRMWARE_INFO *psFwInfo)
static INT buffDnld(PMINI_ADAPTER Adapter, PUCHAR mappedbuffer, UINT u32FirmwareLength,
ULONG u32StartingAddress)
static INT buffRdbkVerify(PMINI_ADAPTER Adapter,
PUCHAR mappedbuffer, UINT u32FirmwareLength,
ULONG u32StartingAddress)
INT buffDnldVerify(PMINI_ADAPTER Adapter, unsigned char *mappedbuffer, unsigned int u32FirmwareLength,
unsigned long u32StartingAddress)
