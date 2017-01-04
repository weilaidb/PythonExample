#undef MAX_IO_WIN
#define MAX_IO_WIN 1
#undef MAX_WIN
#define MAX_WIN 1
static int poll_interval = 0;
typedef enum pcc_space  pcc_as_t;
typedef struct pcc_socket  pcc_socket_t;
static int pcc_sockets = 0;
static pcc_socket_t socket[M32R_MAX_PCC] = ;
static unsigned int pcc_get(u_short, unsigned int);
static void pcc_set(u_short, unsigned int , unsigned int );
static DEFINE_SPINLOCK(pcc_lock);
#if !defined(CONFIG_PLAT_USRV)
static inline u_long pcc_port2addr(unsigned long port, int size)
static inline u_long pcc_port2addr(unsigned long port, int size)
void pcc_ioread_byte(int sock, unsigned long port, void *buf, size_t size,
size_t nmemb, int flag)
void pcc_ioread_word(int sock, unsigned long port, void *buf, size_t size,
size_t nmemb, int flag)
void pcc_iowrite_byte(int sock, unsigned long port, void *buf, size_t size,
size_t nmemb, int flag)
void pcc_iowrite_word(int sock, unsigned long port, void *buf, size_t size,
size_t nmemb, int flag)
#define IS_REGISTERED		0x2000
#define IS_ALIVE		0x8000
typedef struct pcc_t  pcc_t;
static pcc_t pcc[] = ;
static irqreturn_t pcc_interrupt(int, void *);
static struct timer_list poll_timer;
static unsigned int pcc_get(u_short sock, unsigned int reg)
static void pcc_set(u_short sock, unsigned int reg, unsigned int data)
static int __init is_alive(u_short sock)
static void add_pcc_socket(ulong base, int irq, ulong mapaddr,
unsigned int ioaddr)
static irqreturn_t pcc_interrupt(int irq, void *dev)
static void pcc_interrupt_wrapper(u_long data)
static int _pcc_get_status(u_short sock, u_int *value)
static int _pcc_set_socket(u_short sock, socket_state_t *state)
static int _pcc_set_io_map(u_short sock, struct pccard_io_map *io)
static int _pcc_set_mem_map(u_short sock, struct pccard_mem_map *mem)
#define LOCKED(x) do  while (0)
static int pcc_get_status(struct pcmcia_socket *s, u_int *value)
static int pcc_set_socket(struct pcmcia_socket *s, socket_state_t *state)
static int pcc_set_io_map(struct pcmcia_socket *s, struct pccard_io_map *io)
static int pcc_set_mem_map(struct pcmcia_socket *s, struct pccard_mem_map *mem)
static int pcc_init(struct pcmcia_socket *s)
static struct pccard_operations pcc_operations = ;
static struct platform_driver pcc_driver = ;
static struct platform_device pcc_device = ;
static int __init init_m32r_pcc(void)
static void __exit exit_m32r_pcc(void)
module_init(init_m32r_pcc);
module_exit(exit_m32r_pcc);
MODULE_LICENSE("Dual MPL/GPL");
