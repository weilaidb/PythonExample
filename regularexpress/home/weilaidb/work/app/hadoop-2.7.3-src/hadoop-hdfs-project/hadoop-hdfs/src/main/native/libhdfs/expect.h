#define LIBHDFS_NATIVE_TESTS_EXPECT_H
struct hdfsFile_internal;
#define EXPECT_ZERO(x) \
do  while (0);
#define EXPECT_NULL(x) \
do  while (0);
#define EXPECT_NONNULL(x) \
do  while (0);
#define EXPECT_NEGATIVE_ONE_WITH_ERRNO(x, e) \
do  while (0);
#define EXPECT_NONZERO(x) \
do  while (0);
#define EXPECT_NONNEGATIVE(x) \
do  while (0);
#define EXPECT_INT_EQ(x, y) \
do  while (0);
#define EXPECT_INT64_EQ(x, y) \
do  while (0);
#define EXPECT_UINT64_EQ(x, y) \
do  while (0);
#define RETRY_ON_EINTR_GET_ERRNO(ret, expr) do  while (ret == -EINTR);
int expectFileStats(struct hdfsFile_internal *file,
uint64_t expectedTotalBytesRead,
uint64_t expectedTotalLocalBytesRead,
uint64_t expectedTotalShortCircuitBytesRead,
uint64_t expectedTotalZeroCopyBytesRead);
