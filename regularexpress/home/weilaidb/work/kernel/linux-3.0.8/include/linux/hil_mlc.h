typedef struct hil_mlc hil_mlc;
enum hilse_act ;
typedef int	(hilse_func) (hil_mlc *mlc, int arg);
struct hilse_node ;
typedef int	(hil_mlc_cts) (hil_mlc *mlc);
typedef void	(hil_mlc_out) (hil_mlc *mlc);
typedef int	(hil_mlc_in)  (hil_mlc *mlc, suseconds_t timeout);
struct hil_mlc_devinfo ;
struct hil_mlc_serio_map ;
#define HIL_MLC_DEVMEM 16
struct hil_mlc ;
int hil_mlc_register(hil_mlc *mlc);
int hil_mlc_unregister(hil_mlc *mlc);
