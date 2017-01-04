#define __DOT_COMMAND_H__
#define sp_write		0
#define sp_write_next		1
#define sp_read			2
#define sp_read_next		3
#define sp_command_response	4
#define sp_event		5
#define sp_heartbeat		6
struct dot_command_header ;
static inline size_t get_dot_command_size(void *buffer)
static inline unsigned int get_dot_command_timeout(void *buffer)
