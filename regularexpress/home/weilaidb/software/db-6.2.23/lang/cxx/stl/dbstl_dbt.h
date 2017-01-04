#define _DB_STL_DBT_H
START_NS(dbstl)
using std::string;
using std::wstring;
class DataItem
;
bool operator==(const Dbt&d1, const Dbt&d2);
bool operator==(const DBT&d1, const DBT&d2);
END_NS
