#define DEBUG_H
struct __debug_entry __attribute__((packed));
#define __DEBUG_FEATURE_VERSION      2
#define DEBUG_MAX_LEVEL            6
#define DEBUG_OFF_LEVEL            -1
#define DEBUG_FLUSH_ALL            -1
#define DEBUG_MAX_VIEWS            10
#define DEBUG_MAX_NAME_LEN         64
#define DEBUG_DEFAULT_LEVEL        3
#define DEBUG_DIR_ROOT "s390dbf"
#define DEBUG_DATA(entry) (char*)(entry + 1)
typedef struct __debug_entry debug_entry_t;
struct debug_view;
typedef struct debug_info  debug_info_t;
typedef int (debug_header_proc_t) (debug_info_t* id,
struct debug_view* view,
int area,
debug_entry_t* entry,
char* out_buf);
typedef int (debug_format_proc_t) (debug_info_t* id,
struct debug_view* view, char* out_buf,
const char* in_buf);
typedef int (debug_prolog_proc_t) (debug_info_t* id,
struct debug_view* view,
char* out_buf);
typedef int (debug_input_proc_t) (debug_info_t* id,
struct debug_view* view,
struct file* file,
const char __user *user_buf,
size_t in_buf_size, loff_t* offset);
int debug_dflt_header_fn(debug_info_t* id, struct debug_view* view,
int area, debug_entry_t* entry, char* out_buf);
struct debug_view ;
extern struct debug_view debug_hex_ascii_view;
extern struct debug_view debug_raw_view;
extern struct debug_view debug_sprintf_view;
debug_entry_t* debug_event_common(debug_info_t* id, int level,
const void* data, int length);
debug_entry_t* debug_exception_common(debug_info_t* id, int level,
const void* data, int length);
debug_info_t *debug_register(const char *name, int pages, int nr_areas,
int buf_size);
debug_info_t *debug_register_mode(const char *name, int pages, int nr_areas,
int buf_size, mode_t mode, uid_t uid,
gid_t gid);
void debug_unregister(debug_info_t* id);
void debug_set_level(debug_info_t* id, int new_level);
void debug_stop_all(void);
static inline debug_entry_t*
debug_event(debug_info_t* id, int level, void* data, int length)
static inline debug_entry_t*
debug_int_event(debug_info_t* id, int level, unsigned int tag)
static inline debug_entry_t *
debug_long_event (debug_info_t* id, int level, unsigned long tag)
static inline debug_entry_t*
debug_text_event(debug_info_t* id, int level, const char* txt)
extern debug_entry_t *
debug_sprintf_event(debug_info_t* id,int level,char *string,...)
__attribute__ ((format(printf, 3, 4)));
static inline debug_entry_t*
debug_exception(debug_info_t* id, int level, void* data, int length)
static inline debug_entry_t*
debug_int_exception(debug_info_t* id, int level, unsigned int tag)
static inline debug_entry_t *
debug_long_exception (debug_info_t* id, int level, unsigned long tag)
static inline debug_entry_t*
debug_text_exception(debug_info_t* id, int level, const char* txt)
extern debug_entry_t *
debug_sprintf_exception(debug_info_t* id,int level,char *string,...)
__attribute__ ((format(printf, 3, 4)));
int debug_register_view(debug_info_t* id, struct debug_view* view);
int debug_unregister_view(debug_info_t* id, struct debug_view* view);
#define DEBUG_LEVEL 4
#define INTERNAL_ERRMSG(x,y...) "E" __FILE__ "%d: " x, __LINE__, y
#define INTERNAL_WRNMSG(x,y...) "W" __FILE__ "%d: " x, __LINE__, y
#define INTERNAL_INFMSG(x,y...) "I" __FILE__ "%d: " x, __LINE__, y
#define INTERNAL_DEBMSG(x,y...) "D" __FILE__ "%d: " x, __LINE__, y
#if DEBUG_LEVEL > 0
#define PRINT_DEBUG(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
#define PRINT_INFO(x...) printk ( KERN_INFO PRINTK_HEADER x )
#define PRINT_WARN(x...) printk ( KERN_WARNING PRINTK_HEADER x )
#define PRINT_ERR(x...) printk ( KERN_ERR PRINTK_HEADER x )
#define PRINT_FATAL(x...) panic ( PRINTK_HEADER x )
#define PRINT_DEBUG(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
#define PRINT_INFO(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
#define PRINT_WARN(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
#define PRINT_ERR(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
#define PRINT_FATAL(x...) printk ( KERN_DEBUG PRINTK_HEADER x )
