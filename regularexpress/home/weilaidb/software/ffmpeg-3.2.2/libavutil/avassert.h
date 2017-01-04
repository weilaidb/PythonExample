#define AVUTIL_AVASSERT_H
#define av_assert0(cond) do  while (0)
#if defined(ASSERT_LEVEL) && ASSERT_LEVEL > 0
#define av_assert1(cond) av_assert0(cond)
#define av_assert1(cond) ((void)0)
#if defined(ASSERT_LEVEL) && ASSERT_LEVEL > 1
#define av_assert2(cond) av_assert0(cond)
#define av_assert2_fpu() av_assert0_fpu()
#define av_assert2(cond) ((void)0)
#define av_assert2_fpu() ((void)0)
void av_assert0_fpu(void);
