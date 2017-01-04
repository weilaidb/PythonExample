struct sender_data ;
struct receiver_data ;
struct message ;
#define MAGIC 0xdeadc0de
static void free_frame(void *arg)
static void *sender_thread(void *arg)
static void *receiver_thread(void *arg)
static int get_workload(int minv, int maxv)
int main(int ac, char **av)
