static void randomize __P((ENV *, void *, size_t));
int
__crypto_region_init(env)
ENV *env;
int
__crypto_env_close(env)
ENV *env;
int
__crypto_env_refresh(env)
ENV *env;
int
__crypto_algsetup(env, db_cipher, alg, do_init)
ENV *env;
DB_CIPHER *db_cipher;
u_int32_t alg;
int do_init;
int
__crypto_decrypt_meta(env, dbp, mbuf, do_metachk)
ENV *env;
DB *dbp;
u_int8_t *mbuf;
int do_metachk;
int
__crypto_set_passwd(env_src, env_dest)
ENV *env_src, *env_dest;
void
__crypto_erase_passwd (env, passwdp, passwd_lenp)
ENV *env;
char **passwdp;
size_t *passwd_lenp;
static void
randomize(env, base, size)
ENV *env;
void *base;
size_t size;
