#OBJS specifies which files to compile as part of the project
OBJS = User.cpp Admin.cpp Catalog.cpp Driver.cpp Item.cpp Sponsor.cpp Database.cpp

##	Use one of the following section to compile the main function you want:
#MAIN specifies the main file
MAIN = main.cpp
#TEST_DB uses the main for the database test
TEST_DB = TestDatabase.cpp
#TEST_SPONSOR uses the main for the sponsor testing
TEST_SPONSOR = SponsorMain.cpp
#TEST_ADMIN uses the main for the admin testing
TEST_ADMIN = AdminMain.cpp
#TEST_DRIVER = uses the main for the driver testing
TEST_DRIVER = DriverMain.cpp
##	----------------------------------------------------------------------

#CC specifies which compiler we're using
CC = clang++ -stdlib=libc++
GPP = g++

#MYSQL_CONCPP_DIR specifies the location of mysql-connector-c++ library
MYSQL_CONCPP_DIR_MAC = /usr/local/mysql-connector-c++

#COMPILER_FLAGS specifies the additional compilation options we're using
COMPILER_FLAGS_MAC = -std=c++11 -I $(MYSQL_CONCPP_DIR_MAC)/include -I $(MYSQL_CONCPP_DIR_MAC)/include/jdbc -L $(MYSQL_CONCPP_DIR_MAC)/lib64
COMPILER_FLAGS_LIN = -std=c++11 -I /include -I /include/jdbc -L /lib64
COMPILER_FLAGS_WIN = -std=c++11 -I /include -I /include/jdbc -L /lib64

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS_MAC = -lmysqlcppconn -lboost_filesystem-mt -lboost_thread-mt
LINKER_FLAGS_LIN = -lmysqlcppconn -lboost_filesystem -lboost_thread
LINKER_FLAGS_WIN = -lmysqlcppconn -lboost_filesystem -lboost_thread

##	output file
#OBJ_NAME specifies the name of our executable
OBJ_NAME = a.out
OBJ_TEST_DB = test_db
OBJ_TEST_SPONSOR = test_sponsor
OBJ_TEST_ADMIN = test_admin
OBJ_TEST_DRIVER = test_driver

#This is the general format that compiles our executable:
#make : $(OBJS)
#	$(CC) $(OBJS) $(MAIN) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

#This is the target that compiles our executable
mac : $(OBJS)
	$(CC) $(OBJS) $(MAIN) $(COMPILER_FLAGS_MAC) $(LINKER_FLAGS_MAC) -o $(OBJ_NAME)
win : $(OBJS)
	$(CC) $(OBJS) $(MAIN) $(COMPILER_FLAGS_WIN) $(LINKER_FLAGS_LIN) -o $(OBJ_NAME)
lin : $(OBJS)
	$(GPP) $(OBJS) $(MAIN) $(COMPILER_FLAGS_LIN) $(LINKER_FLAGS_WIN) -o $(OBJ_NAME)
#TEST_DB
test_db_mac : $(OBJS)
	$(CC) $(OBJS) $(TEST_DB) $(COMPILER_FLAGS_MAC) $(LINKER_FLAGS_MAC) -o $(OBJ_TEST_DB)
test_db_win : $(OBJS)
	$(CC) $(OBJS) $(TEST_DB) $(COMPILER_FLAGS_WIN) $(LINKER_FLAGS_LIN) -o $(OBJ_TEST_DB)
test_db_lin : $(OBJS)
	$(GPP) $(OBJS) $(TEST_DB) $(COMPILER_FLAGS_LIN) $(LINKER_FLAGS_WIN) -o $(OBJ_TEST_DB)
#TEST_SPONSOR
test_sponsor_mac : $(OBJS)
	$(CC) $(OBJS) $(TEST_SPONSOR) $(COMPILER_FLAGS_MAC) $(LINKER_FLAGS_MAC) -o $(OBJ_TEST_SPONSOR)
test_sponsor_win : $(OBJS)
	$(CC) $(OBJS) $(TEST_SPONSOR) $(COMPILER_FLAGS_WIN) $(LINKER_FLAGS_LIN) -o $(OBJ_TEST_SPONSOR)
test_sponsor_lin : $(OBJS)
	$(GPP) $(OBJS) $(TEST_SPONSOR) $(COMPILER_FLAGS_LIN) $(LINKER_FLAGS_WIN) -o $(OBJ_TEST_SPONSOR)
#TEST_ADMIN
test_admin_mac : $(OBJS)
	$(CC) $(OBJS) $(TEST_ADMIN) $(COMPILER_FLAGS_MAC) $(LINKER_FLAGS_MAC) -o $(OBJ_TEST_ADMIN)
test_admin_win : $(OBJS)
	$(CC) $(OBJS) $(TEST_ADMIN) $(COMPILER_FLAGS_WIN) $(LINKER_FLAGS_LIN) -o $(OBJ_TEST_ADMIN)
test_admin_lin : $(OBJS)
	$(GPP) $(OBJS) $(TEST_ADMIN) $(COMPILER_FLAGS_LIN) $(LINKER_FLAGS_WIN) -o $(OBJ_TEST_ADMIN)
#TEST_DRIVER
test_driver_mac : $(OBJS)
	$(CC) $(OBJS) $(TEST_DRIVER) $(COMPILER_FLAGS_MAC) $(LINKER_FLAGS_MAC) -o $(OBJ_TEST_ADMIN)
test_driver_win : $(OBJS)
	$(CC) $(OBJS) $(TEST_DRIVER) $(COMPILER_FLAGS_WIN) $(LINKER_FLAGS_LIN) -o $(OBJ_TEST_ADMIN)
test_driver_lin : $(OBJS)
	$(GPP) $(OBJS) $(TEST_DRIVER) $(COMPILER_FLAGS_LIN) $(LINKER_FLAGS_WIN) -o $(OBJ_TEST_ADMIN)

