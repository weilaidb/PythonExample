#define I2O_BLOCK_OSM_H
#define I2O_BLOCK_RETRY_TIME HZ/4
#define I2O_BLOCK_MAX_OPEN_REQUESTS 50
#define I2O_BLOCK_REQ_MEMPOOL_SIZE		32
#define KERNEL_SECTOR_SHIFT 9
#define KERNEL_SECTOR_SIZE (1 << KERNEL_SECTOR_SHIFT)
struct i2o_block_mempool ;
struct i2o_block_device ;
struct i2o_block_request ;
struct i2o_block_delayed_request ;
