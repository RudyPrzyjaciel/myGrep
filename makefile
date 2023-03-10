SRC_DIR = src/
OBJS = main.cpp myGrep.cpp
OBJS_WITH_DIR = $(addprefix $(SRC_DIR), $(OBJS))
FINAL_OBJ = myGrep
BUILD_DIR = build

CC = g++
COMPILER_FLAGS =
LINKER_FLAGS =

all : $(SRC_DIR)main.cpp
	@if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi
	$(CC) $(OBJS_WITH_DIR) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(BUILD_DIR)/$(FINAL_OBJ)
