DB_SCHEMA the_schema;
PARSE_PROGRESS the_parse_progress;
int maxbinsz;
static char *
name_from_token(t, pParse)
Token *t;
Parse *pParse;
static ENTITY *
make_entity(name, pParse)
char *name;
Parse *pParse;
static ATTRIBUTE *
make_attribute(name, pParse)
char *name;
Parse *pParse;
static ATTR_TYPE *
make_attrtype(token, ctype, dimension, is_array, is_string, pParse)
char *token;
char *ctype;
int dimension;
int is_array;
int is_string;
Parse *pParse;
static DB_INDEX *
make_index(name, primary, attribute, pParse)
char *name;
ENTITY *primary;
ATTRIBUTE *attribute;
Parse *pParse;
static void
add_entity(entity)
ENTITY *entity;
static void
add_index(idx)
DB_INDEX *idx;
static void
add_attribute(entity, attr)
ENTITY *entity;
ATTRIBUTE * attr;
static ENTITY *
get_current_entity()
static ATTRIBUTE *
get_current_attribute()
static ENTITY *
get_entity_by_name(sought_name)
char *sought_name;
static ATTRIBUTE *
get_attribute_by_name(in_entity, sought_name)
ENTITY * in_entity;
char *sought_name;
static DB_INDEX *
get_index_by_name(sought_name)
char *sought_name;
void
sqlite3BeginParse(Parse *pParse, int explainFlag)
void
bdb_create_database(Token *name, Parse *pParse)
void
sqlite3StartTable(pParse, pName1, pName2, isTemp, isView, isVirtual, noErr)
Parse *pParse;
Token *pName1;
Token *pName2;
int isTemp;
int isView;
int isVirtual;
int noErr;
void
sqlite3AddColumn(Parse *pParse, Token *pName)
static void
delete_spaces(char *s)
static ATTR_TYPE *
map_sql_type(pParse, token)
Parse *pParse;
char *token;
void
sqlite3AddColumnType(pParse, pType)
Parse *pParse;
Token *pType;
void
sqlite3AddPrimaryKey(pParse, pList, onError, autoInc, sortOrder)
Parse *pParse;
ExprList *pList;
int onError;
int autoInc;
int sortOrder;
ExprList *
sqlite3ExprListAppend(pParse, pList, pExpr, pName)
Parse *pParse;
ExprList *pList;
Expr *pExpr;
Token *pName;
void
sqlite3ExprListCheckLength(pParse, pElist, zObject)
Parse *pParse;
ExprList *pElist;
const char *zObject;
SrcList *
sqlite3SrcListAppend(db, pList, pTable, pDatabase)
sqlite3 *db;
SrcList *pList;
Token *pTable;
Token *pDatabase;
void
sqlite3CreateForeignKey(pParse, pFromCol, pTo, pToCol, flags)
Parse *pParse;
ExprList *pFromCol;
Token *pTo;
ExprList *pToCol;
int flags;
void
sqlite3DeferForeignKey(Parse *pParse, int isDeferred)
void
sqlite3CreateIndex(pParse, pName1, pName2, pTblName, pList,
onError, pStart, pEnd, sortOrder, ifNotExist)
Parse *pParse;
Token *pName1;
Token *pName2;
SrcList *pTblName;
ExprList *pList;
int onError;
Token *pStart;
Token *pEnd;
int sortOrder;
int ifNotExist;
void sqlite3EndTable(pParse, pCons, pEnd, pSelect)
Parse *pParse;
Token *pCons;
Token *pEnd;
Select *pSelect;
void
sqlite3FinishCoding(pParse)
Parse *pParse;
