extern int getopt(int, char * const *, const char *);
extern char *optarg;
#define snprintf _snprintf
#define DEFAULT_HOMEDIR	"./"
#define INVENTORY_FILE	"inventory.txt"
#define VENDORS_FILE	"vendors.txt"
#define INVENTORYDB	"inventoryDB.db"
#define ITEMNAMEDB	"itemnameDB.db"
#define MAXDATABUF	1024
#define MAXFIELD	21
#define MAXLINE		150
#define PRIMARY_DB	0
#define SECONDARY_DB	1
#define VENDORDB	"vendorDB.db"
typedef struct stock_dbs  STOCK_DBS;
typedef struct vendor  VENDOR;
int	databases_setup(STOCK_DBS *, const char *, FILE *);
int	databases_close(STOCK_DBS *);
void	initialize_stockdbs(STOCK_DBS *);
int	open_database(DB **, const char *, const char *, FILE *, int);
void	set_db_filenames(STOCK_DBS *my_stock);
