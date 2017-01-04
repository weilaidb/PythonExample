#define __GRULIB_H__
#define GRU_BASENAME		"gru"
#define GRU_FULLNAME		"/dev/gru"
#define GRU_IOCTL_NUM 		 'G'
#define GRU_MAX_OPEN_CONTEXTS		32
#define GRU_CREATE_CONTEXT		_IOWR(GRU_IOCTL_NUM, 1, void *)
#define GRU_SET_CONTEXT_OPTION		_IOWR(GRU_IOCTL_NUM, 4, void *)
#define GRU_USER_GET_EXCEPTION_DETAIL	_IOWR(GRU_IOCTL_NUM, 6, void *)
#define GRU_USER_CALL_OS		_IOWR(GRU_IOCTL_NUM, 8, void *)
#define GRU_USER_UNLOAD_CONTEXT		_IOWR(GRU_IOCTL_NUM, 9, void *)
#define GRU_DUMP_CHIPLET_STATE		_IOWR(GRU_IOCTL_NUM, 11, void *)
#define GRU_GET_GSEG_STATISTICS		_IOWR(GRU_IOCTL_NUM, 12, void *)
#define GRU_USER_FLUSH_TLB		_IOWR(GRU_IOCTL_NUM, 50, void *)
#define GRU_GET_CONFIG_INFO		_IOWR(GRU_IOCTL_NUM, 51, void *)
#define GRU_KTEST			_IOWR(GRU_IOCTL_NUM, 52, void *)
#define CONTEXT_WINDOW_BYTES(th)        (GRU_GSEG_PAGESIZE * (th))
#define THREAD_POINTER(p, th)		(p + GRU_GSEG_PAGESIZE * (th))
#define GSEG_START(cb)			((void *)((unsigned long)(cb) & ~(GRU_GSEG_PAGESIZE - 1)))
struct gru_get_gseg_statistics_req ;
struct gru_create_context_req ;
struct gru_unload_context_req ;
enum ;
struct gru_set_context_option_req ;
struct gru_flush_tlb_req ;
enum ;
struct gru_dump_chiplet_state_req ;
#define GRU_DUMP_MAGIC	0x3474ab6c
struct gru_dump_context_header ;
struct gru_config_info ;
