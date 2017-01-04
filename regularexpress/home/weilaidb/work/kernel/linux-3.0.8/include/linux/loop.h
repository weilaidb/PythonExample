#define _LINUX_LOOP_H
#define LO_NAME_SIZE	64
#define LO_KEY_SIZE	32
enum ;
struct loop_func_table;
struct loop_device ;
enum ;
struct loop_info ;
struct loop_info64 ;
#define LO_CRYPT_NONE		0
#define LO_CRYPT_XOR		1
#define LO_CRYPT_DES		2
#define LO_CRYPT_FISH2		3
#define LO_CRYPT_BLOW		4
#define LO_CRYPT_CAST128	5
#define LO_CRYPT_IDEA		6
#define LO_CRYPT_DUMMY		9
#define LO_CRYPT_SKIPJACK	10
#define LO_CRYPT_CRYPTOAPI	18
#define MAX_LO_CRYPT		20
struct loop_func_table ;
int loop_register_transfer(struct loop_func_table *funcs);
int loop_unregister_transfer(int number);
#define LOOP_SET_FD		0x4C00
#define LOOP_CLR_FD		0x4C01
#define LOOP_SET_STATUS		0x4C02
#define LOOP_GET_STATUS		0x4C03
#define LOOP_SET_STATUS64	0x4C04
#define LOOP_GET_STATUS64	0x4C05
#define LOOP_CHANGE_FD		0x4C06
#define LOOP_SET_CAPACITY	0x4C07
