#define _TEST_MULTIPLEX_H
#define MULTIPLEX_CTRL_ENABLE          214014
#define MULTIPLEX_CTRL_SET_CHUNK_SIZE  214015
#define MULTIPLEX_CTRL_SET_MAX_CHUNKS  214016
extern int sqlite3_multiplex_initialize(const char *zOrigVfsName, int makeDefault);
extern int sqlite3_multiplex_shutdown(int eForce);
