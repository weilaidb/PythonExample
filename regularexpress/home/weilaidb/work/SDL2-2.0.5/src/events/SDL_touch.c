static int SDL_num_touch = 0;
static SDL_Touch **SDL_touchDevices = NULL;
int
SDL_TouchInit(void)
int
SDL_GetNumTouchDevices(void)
SDL_TouchID
SDL_GetTouchDevice(int index)
static int
SDL_GetTouchIndex(SDL_TouchID id)
SDL_Touch *
SDL_GetTouch(SDL_TouchID id)
static int
SDL_GetFingerIndex(const SDL_Touch * touch, SDL_FingerID fingerid)
SDL_Finger *
SDL_GetFinger(const SDL_Touch * touch, SDL_FingerID id)
int
SDL_GetNumTouchFingers(SDL_TouchID touchID)
SDL_Finger *
SDL_GetTouchFinger(SDL_TouchID touchID, int index)
int
SDL_AddTouch(SDL_TouchID touchID, const char *name)
static int
SDL_AddFinger(SDL_Touch *touch, SDL_FingerID fingerid, float x, float y, float pressure)
static int
SDL_DelFinger(SDL_Touch* touch, SDL_FingerID fingerid)
int
SDL_SendTouch(SDL_TouchID id, SDL_FingerID fingerid,
SDL_bool down, float x, float y, float pressure)
int
SDL_SendTouchMotion(SDL_TouchID id, SDL_FingerID fingerid,
float x, float y, float pressure)
void
SDL_DelTouch(SDL_TouchID id)
void
SDL_TouchQuit(void)
