typedef struct BenignMallocHooks BenignMallocHooks;
static SQLITE_WSD struct BenignMallocHooks  sqlite3Hooks = ;
# define wsdHooksInit \
BenignMallocHooks *x = &GLOBAL(BenignMallocHooks,sqlite3Hooks)
# define wsdHooks x[0]
# define wsdHooksInit
# define wsdHooks sqlite3Hooks
void sqlite3BenignMallocHooks(
void (*xBenignBegin)(void),
void (*xBenignEnd)(void)
)
void sqlite3BeginBenignMalloc(void)
void sqlite3EndBenignMalloc(void)
