OBJS = main.cpp
FINAL_OBJ = myGrep
BUILD_DIR = build
SRC_DIR = src

CC = g++
COMPILER_FLAGS =
LINKER_FLAGS =

all : $(SRC_DIR)/$(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(SRC_DIR)/$(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(BUILD_DIR)/$(FINAL_OBJ)
