const char *progname_crypt = "encryption";
#define	DATABASE	"encryption.db"
#define	PASSWORD	"ENCRYPT_KEY"
typedef struct crypt_config  CRYPT_CONFIG;
int	closeDb __P((DB_ENV *, DB *));
int	dbPutGet __P((CuTest *, DB *));
int	encryptTestCase __P((CuTest *, int, int, int, int));
int	initConfig __P((CRYPT_CONFIG *, int, int, int, int));
int	openDb __P((CuTest *, DB **dbp, DB_ENV *, char *, CRYPT_CONFIG *));
int	openEnv __P((CuTest *, DB_ENV **, char *, int));
int	reOpen __P((CuTest *, DB **, char *, CRYPT_CONFIG *));
int TestNoEncryptedDb(CuTest *ct)
int TestEncryptedDbFlag(CuTest *ct)
int TestEncryptedDb(CuTest *ct)
int TestEncryptedDbFlagAndDb(CuTest *ct)
int TestEnvWithNoEncryption(CuTest *ct)
int TestEnvWithEncryptedDbFlag(CuTest *ct)
int TestEnvWithEncryptedDb(CuTest *ct)
int TestEnvWithEncryptedDbFlagAndDb(CuTest *ct)
int TestEncyptedEnv(CuTest *ct)
int TestEncyptedEnvWithEncyptedDbFlag(CuTest *ct)
int TestEncyptedEnvWithEncyptedDb(CuTest *ct)
int TestEncyptedEnvWithEncryptedDbFlagAndDb(CuTest *ct)
int initConfig(CRYPT_CONFIG *crypt, int in_env, int is_env_encrypt,
int is_db_encrypt, int is_db_flags_encrypt)
int encryptTestCase(CuTest *ct, int in_env, int is_env_encrypt,
int is_db_encrypt, int is_db_flags_encrypt)
int openEnv(CuTest *ct, DB_ENV **dbenvp, char *home, int is_encrypt)
int openDb(CuTest *ct, DB **dbpp, DB_ENV *dbenv, char *dbname,
CRYPT_CONFIG *crypt)
int reOpen(CuTest *ct, DB **dbpp, char *dbname, CRYPT_CONFIG *crypt)
int dbPutGet(CuTest *ct, DB *dbp)
int closeDb(DB_ENV *dbenv, DB *dbp)
