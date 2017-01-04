#define __WPACTL_H__
typedef enum  wpa_alg;
typedef enum  wpa_cipher;
typedef enum  wpa_key_mgmt;
#define AUTH_ALG_OPEN_SYSTEM	0x01
#define AUTH_ALG_SHARED_KEY	0x02
#define AUTH_ALG_LEAP		0x04
#define GENERIC_INFO_ELEM 0xdd
#define RSN_INFO_ELEM 0x30
typedef unsigned long long NDIS_802_11_KEY_RSC;
int wpa_set_wpadev(PSDevice pDevice, int val);
int wpa_ioctl(PSDevice pDevice, struct iw_point *p);
int wpa_set_keys(PSDevice pDevice, void *ctx, BOOL  fcpfkernel);
