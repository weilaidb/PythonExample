struct rb_page ;
#define RUN_TIME	10
#define SLEEP_TIME	10
static int wakeup_interval = 100;
static int reader_finish;
static struct completion read_start;
static struct completion read_done;
static struct ring_buffer *buffer;
static struct task_struct *producer;
static struct task_struct *consumer;
static unsigned long read;
static int disable_reader;
module_param(disable_reader, uint, 0644);
MODULE_PARM_DESC(disable_reader, "only run producer");
static int write_iteration = 50;
module_param(write_iteration, uint, 0644);
MODULE_PARM_DESC(write_iteration, "# of writes between timestamp readings");
static int producer_nice = 19;
static int consumer_nice = 19;
static int producer_fifo = -1;
static int consumer_fifo = -1;
module_param(producer_nice, uint, 0644);
MODULE_PARM_DESC(producer_nice, "nice prio for producer");
module_param(consumer_nice, uint, 0644);
MODULE_PARM_DESC(consumer_nice, "nice prio for consumer");
module_param(producer_fifo, uint, 0644);
MODULE_PARM_DESC(producer_fifo, "fifo prio for producer");
module_param(consumer_fifo, uint, 0644);
MODULE_PARM_DESC(consumer_fifo, "fifo prio for consumer");
static int read_events;
static int kill_test;
#define KILL_TEST()				\
do  while (0)
enum event_status ;
static enum event_status read_event(int cpu)
static enum event_status read_page(int cpu)
static void ring_buffer_consumer(void)
static void ring_buffer_producer(void)
static void wait_to_die(void)
static int ring_buffer_consumer_thread(void *arg)
static int ring_buffer_producer_thread(void *arg)
static int __init ring_buffer_benchmark_init(void)
static void __exit ring_buffer_benchmark_exit(void)
module_init(ring_buffer_benchmark_init);
module_exit(ring_buffer_benchmark_exit);
MODULE_AUTHOR("Steven Rostedt");
MODULE_DESCRIPTION("ring_buffer_benchmark");
MODULE_LICENSE("GPL");
