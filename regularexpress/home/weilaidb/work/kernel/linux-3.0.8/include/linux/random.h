#define _LINUX_RANDOM_H
#define RNDGETENTCNT	_IOR( 'R', 0x00, int )
#define RNDADDTOENTCNT	_IOW( 'R', 0x01, int )
#define RNDGETPOOL	_IOR( 'R', 0x02, int [2] )
#define RNDADDENTROPY	_IOW( 'R', 0x03, int [2] )
#define RNDZAPENTCNT	_IO( 'R', 0x04 )
#define RNDCLEARPOOL	_IO( 'R', 0x06 )
struct rand_pool_info ;
struct rnd_state ;
extern void rand_initialize_irq(int irq);
extern void add_input_randomness(unsigned int type, unsigned int code,
unsigned int value);
extern void add_interrupt_randomness(int irq);
extern void get_random_bytes(void *buf, int nbytes);
void generate_random_uuid(unsigned char uuid_out[16]);
extern const struct file_operations random_fops, urandom_fops;
unsigned int get_random_int(void);
unsigned long randomize_range(unsigned long start, unsigned long end, unsigned long len);
u32 random32(void);
void srandom32(u32 seed);
u32 prandom32(struct rnd_state *);
static inline u32 __seed(u32 x, u32 m)
static inline void prandom32_seed(struct rnd_state *state, u64 seed)
