#define __FLEXCOP_USB_H_INCLUDED__
#define B2C2_USB_FRAMES_PER_ISO 4
#define B2C2_USB_NUM_ISO_URB 4
#define B2C2_USB_CTRL_PIPE_IN usb_rcvctrlpipe(fc_usb->udev, 0)
#define B2C2_USB_CTRL_PIPE_OUT usb_sndctrlpipe(fc_usb->udev, 0)
#define B2C2_USB_DATA_PIPE usb_rcvisocpipe(fc_usb->udev, 0x81)
struct flexcop_usb ;
typedef enum  flexcop_usb_request_t;
typedef enum  flexcop_usb_i2c_function_t;
typedef enum  flexcop_usb_utility_function_t;
#define B2C2_WAIT_FOR_OPERATION_RW (1*HZ)
#define B2C2_WAIT_FOR_OPERATION_RDW (3*HZ)
#define B2C2_WAIT_FOR_OPERATION_WDW (1*HZ)
#define B2C2_WAIT_FOR_OPERATION_V8READ (3*HZ)
#define B2C2_WAIT_FOR_OPERATION_V8WRITE (3*HZ)
#define B2C2_WAIT_FOR_OPERATION_V8FLASH (3*HZ)
typedef enum  flexcop_usb_mem_page_t;
#define V8_MEMORY_EXTENDED (1 << 15)
#define USB_MEM_READ_MAX   32
#define USB_MEM_WRITE_MAX   1
#define USB_FLASH_MAX       8
#define V8_MEMORY_PAGE_SIZE 0x8000
#define V8_MEMORY_PAGE_MASK 0x7FFF
