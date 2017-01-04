#define MAXPATHSIZE 1024
#define DOLLARNPOINTS 64
#define DOLLARSIZE 256
#define ENABLE_DOLLAR
#define PHI 0.618033989
typedef struct  SDL_FloatPoint;
typedef struct  SDL_DollarPath;
typedef struct  SDL_DollarTemplate;
typedef struct  SDL_GestureTouch;
SDL_GestureTouch *SDL_gestureTouch;
int SDL_numGestureTouches = 0;
SDL_bool recordAll;
int SDL_RecordGesture(SDL_TouchID touchId)
static unsigned long SDL_HashDollar(SDL_FloatPoint* points)
static int SaveTemplate(SDL_DollarTemplate *templ, SDL_RWops *dst)
int SDL_SaveAllDollarTemplates(SDL_RWops *dst)
int SDL_SaveDollarTemplate(SDL_GestureID gestureId, SDL_RWops *dst)
static int SDL_AddDollarGesture_one(SDL_GestureTouch* inTouch, SDL_FloatPoint* path)
static int SDL_AddDollarGesture(SDL_GestureTouch* inTouch, SDL_FloatPoint* path)
int SDL_LoadDollarTemplates(SDL_TouchID touchId, SDL_RWops *src)
static float dollarDifference(SDL_FloatPoint* points,SDL_FloatPoint* templ,float ang)
static float bestDollarDifference(SDL_FloatPoint* points,SDL_FloatPoint* templ)
static int dollarNormalize(const SDL_DollarPath *path,SDL_FloatPoint *points)
static float dollarRecognize(const SDL_DollarPath *path,int *bestTempl,SDL_GestureTouch* touch)
int SDL_GestureAddTouch(SDL_TouchID touchId)
static SDL_GestureTouch * SDL_GetGestureTouch(SDL_TouchID id)
int SDL_SendGestureMulti(SDL_GestureTouch* touch,float dTheta,float dDist)
static int SDL_SendGestureDollar(SDL_GestureTouch* touch,
SDL_GestureID gestureId,float error)
static int SDL_SendDollarRecord(SDL_GestureTouch* touch,SDL_GestureID gestureId)
void SDL_GestureProcessEvent(SDL_Event* event)
