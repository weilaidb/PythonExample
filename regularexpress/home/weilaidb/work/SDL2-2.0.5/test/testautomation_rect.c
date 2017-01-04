void _validateIntersectRectAndLineResults(
SDL_bool intersection, SDL_bool expectedIntersection,
SDL_Rect *rect, SDL_Rect * refRect,
int x1, int y1, int x2, int y2,
int x1Ref, int y1Ref, int x2Ref, int y2Ref)
int
rect_testIntersectRectAndLine (void *arg)
int
rect_testIntersectRectAndLineInside (void *arg)
int
rect_testIntersectRectAndLineOutside (void *arg)
int
rect_testIntersectRectAndLineEmpty (void *arg)
int
rect_testIntersectRectAndLineParam (void *arg)
void _validateHasIntersectionResults(
SDL_bool intersection, SDL_bool expectedIntersection,
SDL_Rect *rectA, SDL_Rect *rectB, SDL_Rect *refRectA, SDL_Rect *refRectB)
void _validateIntersectRectResults(
SDL_bool intersection, SDL_bool expectedIntersection,
SDL_Rect *rectA, SDL_Rect *rectB, SDL_Rect *refRectA, SDL_Rect *refRectB,
SDL_Rect *result, SDL_Rect *expectedResult)
void _validateUnionRectResults(
SDL_Rect *rectA, SDL_Rect *rectB, SDL_Rect *refRectA, SDL_Rect *refRectB,
SDL_Rect *result, SDL_Rect *expectedResult)
void _validateRectEmptyResults(
SDL_bool empty, SDL_bool expectedEmpty,
SDL_Rect *rect, SDL_Rect *refRect)
void _validateRectEqualsResults(
SDL_bool equals, SDL_bool expectedEquals,
SDL_Rect *rectA, SDL_Rect *rectB, SDL_Rect *refRectA, SDL_Rect *refRectB)
int rect_testIntersectRectInside (void *arg)
int rect_testIntersectRectOutside (void *arg)
int rect_testIntersectRectPartial (void *arg)
int rect_testIntersectRectPoint (void *arg)
int rect_testIntersectRectEmpty (void *arg)
int rect_testIntersectRectParam(void *arg)
int rect_testHasIntersectionInside (void *arg)
int rect_testHasIntersectionOutside (void *arg)
int rect_testHasIntersectionPartial (void *arg)
int rect_testHasIntersectionPoint (void *arg)
int rect_testHasIntersectionEmpty (void *arg)
int rect_testHasIntersectionParam(void *arg)
int rect_testEnclosePoints(void *arg)
int rect_testEnclosePointsRepeatedInput(void *arg)
int rect_testEnclosePointsWithClipping(void *arg)
int rect_testEnclosePointsParam(void *arg)
int rect_testUnionRectOutside(void *arg)
int rect_testUnionRectEmpty(void *arg)
int rect_testUnionRectInside(void *arg)
int rect_testUnionRectParam(void *arg)
int rect_testRectEmpty(void *arg)
int rect_testRectEmptyParam(void *arg)
int rect_testRectEquals(void *arg)
int rect_testRectEqualsParam(void *arg)
static const SDLTest_TestCaseReference rectTest1 =
;
static const SDLTest_TestCaseReference rectTest2 =
;
static const SDLTest_TestCaseReference rectTest3 =
;
static const SDLTest_TestCaseReference rectTest4 =
;
static const SDLTest_TestCaseReference rectTest5 =
;
static const SDLTest_TestCaseReference rectTest6 =
;
static const SDLTest_TestCaseReference rectTest7 =
;
static const SDLTest_TestCaseReference rectTest8 =
;
static const SDLTest_TestCaseReference rectTest9 =
;
static const SDLTest_TestCaseReference rectTest10 =
;
static const SDLTest_TestCaseReference rectTest11 =
;
static const SDLTest_TestCaseReference rectTest12 =
;
static const SDLTest_TestCaseReference rectTest13 =
;
static const SDLTest_TestCaseReference rectTest14 =
;
static const SDLTest_TestCaseReference rectTest15 =
;
static const SDLTest_TestCaseReference rectTest16 =
;
static const SDLTest_TestCaseReference rectTest17 =
;
static const SDLTest_TestCaseReference rectTest18 =
;
static const SDLTest_TestCaseReference rectTest19 =
;
static const SDLTest_TestCaseReference rectTest20 =
;
static const SDLTest_TestCaseReference rectTest21 =
;
static const SDLTest_TestCaseReference rectTest22 =
;
static const SDLTest_TestCaseReference rectTest23 =
;
static const SDLTest_TestCaseReference rectTest24 =
;
static const SDLTest_TestCaseReference rectTest25 =
;
static const SDLTest_TestCaseReference rectTest26 =
;
static const SDLTest_TestCaseReference rectTest27 =
;
static const SDLTest_TestCaseReference rectTest28 =
;
static const SDLTest_TestCaseReference rectTest29 =
;
static const SDLTest_TestCaseReference *rectTests[] =  ;
SDLTest_TestSuiteReference rectTestSuite = ;
