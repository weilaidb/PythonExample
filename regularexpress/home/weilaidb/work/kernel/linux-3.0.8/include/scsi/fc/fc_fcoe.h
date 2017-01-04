#define	_FC_FCOE_H_
#define	FC_FCOE_OUI	0x0efc00
#define	FC_FCOE_FLOGI_MAC
#define	FC_FCOE_VER	0
#define	FC_FCOE_ENCAPS_ID(n)	(((u64) FC_FCOE_OUI << 24) | (n))
#define	FC_FCOE_DECAPS_ID(n)	((n) >> 24)
struct fcoe_hdr ;
#define FC_FCOE_DECAPS_VER(hp)	    ((hp)->fcoe_ver >> 4)
#define FC_FCOE_ENCAPS_VER(hp, ver) ((hp)->fcoe_ver = (ver) << 4)
struct fcoe_crc_eof  __attribute__((packed));
#define FCOE_HEADER_LEN 38
#define FCOE_MIN_FRAME 46
struct fcoe_fc_els_lesb ;
static inline void fc_fcoe_set_mac(u8 *mac, u8 *did)
