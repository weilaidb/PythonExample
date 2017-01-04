extern int getopt(int, char * const *, const char *);
extern char *optarg;
#define snprintf _snprintf
#define DEFAULT_HOMEDIR "./ServicemgmtExample"
#define CUSTOMER_FILE DEFAULT_HOMEDIR"/customer.txt"
#define ENGINEER_FILE DEFAULT_HOMEDIR"/engineer.txt"
#define SERVICE_FILE DEFAULT_HOMEDIR"/service.txt"
#define CUSTOMERDB "customerDB.db"
#define ENGINEERDB "engineerDB.db"
#define SERVICEDB "serviceDB.db"
#define CUSTNAMEDB "custnameDB.db"
#define ENGINAMEDB "enginameDB.db"
#define MAXDATABUF 1024
#define MAXFIELD 31
#define MAXLINE 150
#define PRIMARY_DB 0
#define SECONDARY_DB 1
typedef struct aftersale_dbs AFTERSALE_DBS;
typedef struct customer CUSTOMER;
typedef struct engineer ENGINEER;
typedef struct service SERVICE;
int databases_setup(AFTERSALE_DBS *, const char *, FILE *);
int open_database(DB **, const char *, DB_ENV *, const char *, FILE *, int);
void initialize_aftersaledbs(AFTERSALE_DBS *);
void set_db_filenames(AFTERSALE_DBS *my_aftersale);
int databases_close(AFTERSALE_DBS *);
int load_customer_database(AFTERSALE_DBS, char *);
int load_engineer_database(AFTERSALE_DBS, char *);
int load_service_database(AFTERSALE_DBS, char *);
int show_customer_record(char *, DB *);
int show_all_customer_records(AFTERSALE_DBS *);
int show_custname_record(char [], DB *);
int show_engineer_record(char *, DB *);
int show_all_engineer_records(AFTERSALE_DBS *);
int show_enginame_record(char [], DB *);
int show_service_record(char *, AFTERSALE_DBS *);
int show_all_service_record(AFTERSALE_DBS *);
int insert_customer_record(DB *);
int insert_engineer_record(DB *);
int insert_service_record(DB *);
int flush_customer_database(AFTERSALE_DBS, char *);
int flush_engineer_database(AFTERSALE_DBS, char *);
int flush_service_database(AFTERSALE_DBS, char *);
int delete_customer_record(char *, DB *);
int delete_engineer_record(char *, DB *);
int delete_service_record(char *, DB *);
int update_customer_record(AFTERSALE_DBS *);
int update_engineer_record(AFTERSALE_DBS *);
int update_service_record(AFTERSALE_DBS *);
int customer_login();
int engineer_login();
int administrator_login();
int print_customer_record(CUSTOMER);
int print_engineer_record(ENGINEER);
int print_service_record(SERVICE);
