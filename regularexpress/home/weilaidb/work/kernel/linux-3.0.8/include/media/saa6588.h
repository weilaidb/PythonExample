#define _SAA6588_H
struct saa6588_command ;
#define SAA6588_CMD_OPEN	_IOW('R', 1, int)
#define SAA6588_CMD_CLOSE	_IOW('R', 2, int)
#define SAA6588_CMD_READ	_IOR('R', 3, int)
#define SAA6588_CMD_POLL	_IOR('R', 4, int)
