#define _DAS08_H
enum das08_bustype ;
enum das08_ai_encoding ;
enum das08_lrange ;
struct das08_board_struct ;
struct i8254_struct ;
#define I8254_CNT0 0
#define I8254_CNT1 1
#define I8254_CNT2 2
#define I8254_CTRL 3
struct das08_private_struct ;
#define NUM_DAS08_CS_BOARDS 2
extern struct das08_board_struct das08_cs_boards[NUM_DAS08_CS_BOARDS];
int das08_common_attach(struct comedi_device *dev, unsigned long iobase);
int das08_common_detach(struct comedi_device *dev);
