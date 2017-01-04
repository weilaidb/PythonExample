#define _KEYS_RXRPC_TYPE_H
extern struct key_type key_type_rxrpc;
extern struct key *rxrpc_get_null_key(const char *);
struct rxkad_key ;
struct krb5_principal ;
struct krb5_tagged_data ;
struct rxk5_key ;
struct rxrpc_key_token ;
struct rxrpc_key_data_v1 ;
#define AFSTOKEN_LENGTH_MAX		16384
#define AFSTOKEN_STRING_MAX		256
#define AFSTOKEN_DATA_MAX		64
#define AFSTOKEN_CELL_MAX		64
#define AFSTOKEN_MAX			8
#define AFSTOKEN_BDATALN_MAX		16384
#define AFSTOKEN_RK_TIX_MAX		12000
#define AFSTOKEN_GK_KEY_MAX		64
#define AFSTOKEN_GK_TOKEN_MAX		16384
#define AFSTOKEN_K5_COMPONENTS_MAX	16
#define AFSTOKEN_K5_NAME_MAX		128
#define AFSTOKEN_K5_REALM_MAX		64
#define AFSTOKEN_K5_TIX_MAX		16384
#define AFSTOKEN_K5_ADDRESSES_MAX	16
#define AFSTOKEN_K5_AUTHDATA_MAX	16
