#define __WAVELAN2_ENCRYPTION_H__
#define CRYPT_CODE					"57617665A5D6"
#define ENCRYPTION_LEN				102
#define ENCRYPTION_MAGIC			0x48576877L
#define DEF_CRYPT_STR				"G?TIUEA]d5MAdZV'eUb&&6.)'&:,'VF/(FR2)6^5*'*8*W6;+GB>,7NA-'ZD-X&G.H2J/8>M0(JP0XVS1HbV29.Y3):\\3YF_4IRb56"
#define DEFAULT_CRYPT_MAC			"W\x01\x6B\x66\xA5\x5A"
#define CH_START					'&'
#define MACADDRESS_STR_LEN			12
#define KEY_LEN                     14
#define NUM_KEYS                    4
#define KEY_LENGTH_NONE_ASCII       0
#define KEY_LENGTH_64_BIT_ASCII     5
#define KEY_LENGTH_128_BIT_ASCII    13
#define KEY_LENGTH_NONE_HEX         ( KEY_LENGTH_NONE_ASCII    * sizeof( unsigned short ))
#define KEY_LENGTH_64_BIT_HEX       ( KEY_LENGTH_64_BIT_ASCII  * sizeof( unsigned short ))
#define KEY_LENGTH_128_BIT_HEX      ( KEY_LENGTH_128_BIT_ASCII * sizeof( unsigned short ))
typedef struct _encstct
ENCSTRCT, *PENCSTRCT;
int wl_wep_code( char *szCrypt, char *szDest, void *Data, int nLen );
int wl_wep_decode( char *szCrypt, void *Dest, char *szData );
