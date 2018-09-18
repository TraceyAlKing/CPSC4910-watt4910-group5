#MYSQL_CONCPP_DIR specifies the location of mysql-connector-c++ library
MYSQL_CONCPP_DIR = /usr/local/mysql-connector-c++

#OBJS specifies which files to compile as part of the project
OBJS = main.cpp

#CC specifies which compiler we're using
CC = clang++ -stdlib=libc++

#COMPILER_FLAGS specifies the additional compilation options we're using
COMPILER_FLAGS = -std=c++11 -I $(MYSQL_CONCPP_DIR)/include -L $(MYSQL_CONCPP_DIR)/lib64

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lmysqlcppconn8

#OBJ_NAME specifies the name of our executable
OBJ_NAME = a.out

#This is the target that compiles our executable
make : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)