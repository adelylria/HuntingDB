#pragma once
#include "jdbc/cppconn/connection.h"
#include "jdbc/cppconn/prepared_statement.h"
#include "jdbc/mysql_driver.h"


using namespace sql;

ref class DB
{
private: 
	Driver* driver;
	Connection* con;
	PreparedStatement* pstmt;
	ResultSet* result;
	
public: 
	void connectToDB();
	void readData();
};

