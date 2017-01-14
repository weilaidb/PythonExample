extern int Py_VerboseFlag;
#define PORT 4000
struct workorder ;
static void init_python(void);
static void usage(void);
static void oprogname(void);
static void main_thread(int);
static void create_thread(int, struct sockaddr_in *);
static void *service_thread(struct workorder *);
static void run_interpreter(FILE *, FILE *);
static int run_command(char *, PyObject *);
static void ps(void);
static char *progname = ;
static PyThreadState *gtstate;
main(int argc, char **argv)
static char usage_line[] = ;
static void
usage(void)
static void
main_thread(int port)
static void
create_thread(int conn, struct sockaddr_in *addr)
static PyThreadState *the_tstate;
static PyInterpreterState *the_interp;
static PyObject *the_builtins;
static void
init_python(void)
static void *
service_thread(struct workorder *work)
static void
oprogname(void)
static void
run_interpreter(FILE *input, FILE *output)
static int
run_command(char *buffer, PyObject *globals)
static void
ps(void)
