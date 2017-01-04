#define _CRYPTO_INTERNAL_COMPRESS_H
extern int crypto_register_pcomp(struct pcomp_alg *alg);
extern int crypto_unregister_pcomp(struct pcomp_alg *alg);
