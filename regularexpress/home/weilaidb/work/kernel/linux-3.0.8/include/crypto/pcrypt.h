#define _CRYPTO_PCRYPT_H
struct pcrypt_request ;
static inline void *pcrypt_request_ctx(struct pcrypt_request *req)
static inline
struct padata_priv *pcrypt_request_padata(struct pcrypt_request *req)
static inline
struct pcrypt_request *pcrypt_padata_request(struct padata_priv *padata)
