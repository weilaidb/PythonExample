#define DB_FILE "test.db"
volatile int all_stop = 0;
int check_callback(void *pid, int argc, char **argv, char **notUsed2)
int integrity_check(sqlite *db, int id)
void *worker(void *workerArg)
int main(int argc, char **argv)
