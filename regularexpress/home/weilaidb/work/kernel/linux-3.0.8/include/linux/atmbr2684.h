#define _LINUX_ATMBR2684_H
#define BR2684_MEDIA_ETHERNET	(0)
#define BR2684_MEDIA_802_4	(1)
#define BR2684_MEDIA_TR		(2)
#define BR2684_MEDIA_FDDI	(3)
#define BR2684_MEDIA_802_6	(4)
#define BR2684_FLAG_ROUTED	(1<<16)
#define BR2684_FCSIN_NO		(0)
#define BR2684_FCSIN_IGNORE	(1)
#define BR2684_FCSIN_VERIFY	(2)
#define BR2684_FCSOUT_NO	(0)
#define BR2684_FCSOUT_SENDZERO	(1)
#define BR2684_FCSOUT_GENERATE	(2)
#define BR2684_ENCAPS_VC	(0)
#define BR2684_ENCAPS_LLC	(1)
#define BR2684_ENCAPS_AUTODETECT (2)
#define BR2684_PAYLOAD_ROUTED   (0)
#define BR2684_PAYLOAD_BRIDGED  (1)
struct atm_newif_br2684 ;
#define BR2684_FIND_BYNOTHING	(0)
#define BR2684_FIND_BYNUM	(1)
#define BR2684_FIND_BYIFNAME	(2)
struct br2684_if_spec ;
struct atm_backend_br2684 ;
struct br2684_filter ;
struct br2684_filter_set ;
enum br2684_payload ;
#define BR2684_SETFILT	_IOW( 'a', ATMIOC_BACKEND + 0, \
struct br2684_filter_set)
