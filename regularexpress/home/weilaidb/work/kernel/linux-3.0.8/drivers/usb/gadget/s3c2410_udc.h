#define _S3C2410_UDC_H
struct s3c2410_ep ;
#define EP0_FIFO_SIZE		 8
#define EP_FIFO_SIZE		64
#define DEFAULT_POWER_STATE	0x00
#define S3C2440_EP_FIFO_SIZE	128
static const char ep0name [] = "ep0";
static const char *const ep_name[] = ;
#define S3C2410_ENDPOINTS       ARRAY_SIZE(ep_name)
struct s3c2410_request ;
enum ep0_state ;
static const char *ep0states[]= ;
struct s3c2410_udc ;
