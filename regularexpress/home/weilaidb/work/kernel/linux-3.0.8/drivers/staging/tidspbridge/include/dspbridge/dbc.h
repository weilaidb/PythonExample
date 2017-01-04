#define DBC_
#define DBC_ASSERT(exp) \
if (!(exp)) \
pr_err("%s, line %d: Assertion (" #exp ") failed.\n", \
__FILE__, __LINE__)
#define DBC_REQUIRE DBC_ASSERT
#define DBC_ENSURE  DBC_ASSERT
#define DBC_ASSERT(exp)
#define DBC_REQUIRE(exp)
#define DBC_ENSURE(exp)
