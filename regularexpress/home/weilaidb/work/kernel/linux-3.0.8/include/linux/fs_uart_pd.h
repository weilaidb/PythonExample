#define FS_UART_PD_H
enum fs_uart_id ;
static inline int fs_uart_id_scc2fsid(int id)
static inline int fs_uart_id_fsid2scc(int id)
static inline int fs_uart_id_smc2fsid(int id)
static inline int fs_uart_id_fsid2smc(int id)
struct fs_uart_platform_info ;
static inline int fs_uart_get_id(struct fs_uart_platform_info *fpi)
