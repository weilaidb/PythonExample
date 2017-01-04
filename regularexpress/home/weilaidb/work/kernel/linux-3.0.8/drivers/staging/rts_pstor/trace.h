#define __REALTEK_RTSX_TRACE_H
#define _MSG_TRACE
static inline char *filename(char *path)
#define TRACE_RET(chip, ret)   										\
do  while (0)
#define TRACE_GOTO(chip, label)   									\
do  while (0)
#define TRACE_RET(chip, ret)	return ret
#define TRACE_GOTO(chip, label)	goto label
static inline void rtsx_dump(u8 *buf, int buf_len)
#define RTSX_DUMP(buf, buf_len)		rtsx_dump((u8 *)(buf), (buf_len))
#define RTSX_DUMP(buf, buf_len)
