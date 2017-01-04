#define _TAPE_H
struct gendisk;
#define DBF_LIKE_HELL
#define DBF_LH(level, str, ...) \
do  while (0)
#define DBF_LH(level, str, ...) do  while(0)
#define DBF_EVENT(d_level, d_str...) \
do  while (0)
#define DBF_EXCEPTION(d_level, d_str...) \
do  while (0)
#define TAPE_VERSION_MAJOR 2
#define TAPE_VERSION_MINOR 0
#define TAPE_MAGIC "tape"
#define TAPE_MINORS_PER_DEV 2
#define TAPEBLOCK_HSEC_SIZE	2048
#define TAPEBLOCK_HSEC_S2B	2
#define TAPEBLOCK_RETRIES	5
enum tape_medium_state ;
enum tape_state ;
enum tape_op ;
struct tape_device;
enum tape_request_status ;
struct tape_request ;
typedef int (*tape_mtop_fn)(struct tape_device *, int);
#define TAPE_NR_MTOPS (MTMKPART+1)
struct tape_discipline ;
#define TAPE_IO_SUCCESS		0
#define TAPE_IO_PENDING		1
#define TAPE_IO_RETRY		2
#define TAPE_IO_STOP		3
#define TAPE_IO_LONG_BUSY	4
struct tape_char_data ;
struct tape_blk_data
;
struct tape_device ;
extern struct tape_request *tape_alloc_request(int cplength, int datasize);
extern void tape_free_request(struct tape_request *);
extern int tape_do_io(struct tape_device *, struct tape_request *);
extern int tape_do_io_async(struct tape_device *, struct tape_request *);
extern int tape_do_io_interruptible(struct tape_device *, struct tape_request *);
extern int tape_cancel_io(struct tape_device *, struct tape_request *);
void tape_hotplug_event(struct tape_device *, int major, int action);
static inline int
tape_do_io_free(struct tape_device *device, struct tape_request *request)
static inline void
tape_do_io_async_free(struct tape_device *device, struct tape_request *request)
extern int tape_oper_handler(int irq, int status);
extern void tape_noper_handler(int irq, int status);
extern int tape_open(struct tape_device *);
extern int tape_release(struct tape_device *);
extern int tape_mtop(struct tape_device *, int, int);
extern void tape_state_set(struct tape_device *, enum tape_state);
extern int tape_generic_online(struct tape_device *, struct tape_discipline *);
extern int tape_generic_offline(struct ccw_device *);
extern int tape_generic_pm_suspend(struct ccw_device *);
extern int tape_generic_probe(struct ccw_device *);
extern void tape_generic_remove(struct ccw_device *);
extern struct tape_device *tape_find_device(int devindex);
extern struct tape_device *tape_get_device(struct tape_device *);
extern void tape_put_device(struct tape_device *);
extern int tapechar_init(void);
extern void tapechar_exit(void);
extern int  tapechar_setup_device(struct tape_device *);
extern void tapechar_cleanup_device(struct tape_device *);
extern int tapeblock_init (void);
extern void tapeblock_exit(void);
extern int tapeblock_setup_device(struct tape_device *);
extern void tapeblock_cleanup_device(struct tape_device *);
static inline int tapeblock_init (void)
static inline void tapeblock_exit (void)
static inline int tapeblock_setup_device(struct tape_device *t)
static inline void tapeblock_cleanup_device (struct tape_device *t)
extern void tape_proc_init (void);
extern void tape_proc_cleanup (void);
static inline void tape_proc_init (void)
static inline void tape_proc_cleanup (void)
extern void tape_dump_sense_dbf(struct tape_device *, struct tape_request *,
struct irb *);
extern void tape_med_state_set(struct tape_device *, enum tape_medium_state);
extern debug_info_t *TAPE_DBF_AREA;
static inline struct ccw1 *
tape_ccw_cc(struct ccw1 *ccw, __u8 cmd_code, __u16 memsize, void *cda)
static inline struct ccw1 *
tape_ccw_end(struct ccw1 *ccw, __u8 cmd_code, __u16 memsize, void *cda)
static inline struct ccw1 *
tape_ccw_cmd(struct ccw1 *ccw, __u8 cmd_code)
static inline struct ccw1 *
tape_ccw_repeat(struct ccw1 *ccw, __u8 cmd_code, int count)
static inline struct ccw1 *
tape_ccw_cc_idal(struct ccw1 *ccw, __u8 cmd_code, struct idal_buffer *idal)
static inline struct ccw1 *
tape_ccw_end_idal(struct ccw1 *ccw, __u8 cmd_code, struct idal_buffer *idal)
extern const char *tape_state_verbose[];
extern const char *tape_op_verbose[];
