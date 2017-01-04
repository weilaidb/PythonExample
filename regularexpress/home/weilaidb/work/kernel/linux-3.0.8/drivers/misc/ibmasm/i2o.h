struct i2o_header ;
#define I2O_HEADER_TEMPLATE \
#define I2O_MESSAGE_SIZE	0x1000
#define I2O_COMMAND_SIZE	(I2O_MESSAGE_SIZE - sizeof(struct i2o_header))
struct i2o_message ;
static inline unsigned short outgoing_message_size(unsigned int data_size)
static inline u32 incoming_data_size(struct i2o_message *i2o_message)
