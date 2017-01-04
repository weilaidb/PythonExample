#define _LINUX_IF_HIPPI_H
#define HIPPI_ALEN	6
#define HIPPI_HLEN	sizeof(struct hippi_hdr)
#define HIPPI_ZLEN	0
#define HIPPI_DATA_LEN	65280
#define HIPPI_FRAME_LEN	(HIPPI_DATA_LEN + HIPPI_HLEN)
#define HIPPI_EXTENDED_SAP	0xAA
#define HIPPI_UI_CMD		0x03
struct hipnet_statistics ;
struct hippi_fp_hdr  __attribute__((packed));
struct hippi_le_hdr  __attribute__((packed));
#define HIPPI_OUI_LEN	3
struct hippi_snap_hdr  __attribute__((packed));
struct hippi_hdr  __attribute__((packed));
