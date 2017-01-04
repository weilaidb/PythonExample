#define IP2TYPES_H
#define IP2_MAX_BOARDS        4
#define IP2_PORTS_PER_BOARD   ABS_MOST_PORTS
#define IP2_MAX_PORTS         (IP2_MAX_BOARDS*IP2_PORTS_PER_BOARD)
#define ISA    0
#define PCI    1
#define EISA   2
typedef struct tty_struct *   PTTY;
typedef wait_queue_head_t   PWAITQ;
typedef unsigned char         UCHAR;
typedef unsigned int          UINT;
typedef unsigned short        USHORT;
typedef unsigned long         ULONG;
typedef struct
ip2config_t;
