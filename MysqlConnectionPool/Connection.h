#pragma once
#include "public.h"
#include "MysqlConnectionPool.h"

/*
	mysql操作
*/

class Connection {
public:
	Connection();
	// 释放数据库连接资源
	~Connection();
	// 连接数据库
	bool connect(string ip, unsigned short port, string user, string password, string dbname);
	// 更新操作 insert、delete、update
	bool update(string sql);
	// 查询操作 select
	MYSQL_RES* query(string sql);
private:
	MYSQL* _conn;
};