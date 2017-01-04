#define _LINUX_IF_FC_H
#define FC_ALEN	6
#define FC_HLEN   (sizeof(struct fch_hdr)+sizeof(struct fcllc))
#define FC_ID_LEN 3
#define EXTENDED_SAP 0xAA
#define UI_CMD       0x03
struct fch_hdr ;
struct fcllc ;
