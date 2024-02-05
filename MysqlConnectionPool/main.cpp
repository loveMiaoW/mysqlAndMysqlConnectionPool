#include "public.h"
#include "Connection.h"
#include "MysqlConnectionPool.h"


int main() {

	Connection conn;
	char sql[1024] = { 0 };

	sprintf_s(sql, "insert into user(id,name) values(%d,'%s');",2,"love");
	cout << sql << endl;
	conn.connect("43.142.54.203", 3306, "root", "@centosRoot_2024", "chat");
	conn.update(sql);
	return 0;
}