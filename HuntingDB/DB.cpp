#include "pch.h"
#include "DB.h"

using namespace std;

void DB::connectToDB()
{
	string server = "tcp://127.0.0.1:3306";
	string username = "root";
	string password = "";
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		con->setSchema("caza");

	}
	catch (SQLException e)
	{

	}
}

void DB::readData()
{
	
}
