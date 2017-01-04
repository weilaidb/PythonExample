#define _USERAUTH_H_
#define	DB_MAC_KEY		20
#define	HMAC_OUTPUT_SIZE	20
#define	DB_IV_BYTES		16
#define	DB_AES_CHUNK		16
#define	DB_OSO_CREATE	0x0002
#define	DB_OSO_EXCL	0x0010
#define	DB_OSO_RDONLY	0x0020
#define	DB_OSO_TRUNC	0x0200
#define	DB_IO_READ	1
#define	DB_IO_WRITE	2
#define	AUTH_PW_SALT_LEN	DB_MAC_KEY
#define	AUTH_PW_HASH_LEN	HMAC_OUTPUT_SIZE
#define	MEGABYTE	1048576
#define	KS_FILE			"sql-userauth.ks"
#define	KS_BAK_FILE		"___sql-userauth.ks.bak"
#define	KS_LCK_FILE		"___sql-userauth.ks.lck"
#define	KS_TMP_FILE		"___sql-userauth.ks.tmp"
#define	KS_DEL_TMP_FILE		"___sql-userauth.ks.del.tmp"
#define	AUTH_KS_READONLY	0x00001
#define	AUTH_KS_APPEND		0x00002
#define	KS_CHKSUM_LEN	4
#define	KS_VER_LEN	4
typedef struct __ks_entry_hdr  KS_ENTRY_HDR;
#define KSE_HDR_LEN(p) sizeof(u_int8_t) * 2 + (p)->username_len
#define	MAX_KSE_LEN	256
typedef struct __ks_entry_data  KS_ENTRY_DATA;
#define KSE_DATA_ENCR_LEN(p) (p)->buf_len + sizeof(u_int8_t)
#define KSE_DATA_LEN_NOKEY AUTH_PW_SALT_LEN + sizeof(u_int8_t) * 2 + DB_IV_BYTES
#define KSE_DATA_LEN(p) KSE_DATA_LEN_NOKEY + (p)->buf_len
typedef struct __ks_cb_arg  KS_CB_ARG;
