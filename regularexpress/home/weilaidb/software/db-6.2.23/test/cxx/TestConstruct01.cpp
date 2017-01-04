using namespace std;
#define	ERR(a)  \
do  while (0)
#define	ERR2(a1,a2)  \
do  while (0)
#define	ERR3(a1,a2,a3)  \
do  while (0)
#define	CHK(a)   \
do  while (0)
#define	DEBUGOUT(a)          cout << a << "\n"
#define	DEBUGOUT(a)
#define	CONSTRUCT01_DBNAME         "construct01.db"
#define	CONSTRUCT01_DBDIR          "."
#define	CONSTRUCT01_DBFULLPATH     (CONSTRUCT01_DBDIR "/" CONSTRUCT01_DBNAME)
int itemcount;
void sysexit(int status)
void check_file_removed(const char *name, int fatal)
void rundb(Db *db, int count, int has_env)
void t1(int except_flag)
void t2(int except_flag)
void t3(int except_flag)
void t4(int except_flag)
void t5(int except_flag)
void t6(int except_flag)
void removeall()
int doall(int except_flag)
int main(int argc, char *argv[])
