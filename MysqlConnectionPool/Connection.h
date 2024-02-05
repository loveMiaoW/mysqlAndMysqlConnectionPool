#pragma once
#include "public.h"
#include "MysqlConnectionPool.h"

/*
	mysql����
*/

class Connection {
public:
	Connection();
	// �ͷ����ݿ�������Դ
	~Connection();
	// �������ݿ�
	bool connect(string ip, unsigned short port, string user, string password, string dbname);
	// ���²��� insert��delete��update
	bool update(string sql);
	// ��ѯ���� select
	MYSQL_RES* query(string sql);
private:
	MYSQL* _conn;
};