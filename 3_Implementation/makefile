PROJ_NAME = Digital_Electronics_manual
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = build

ifdef OS
	RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


SRC = \
src/adder.c \
src/decoder.c \
src/demux_1x2.c \
src/demux_1x4.c \
src/demux_1x8.c \
src/down_counter.c \
src/encoder.c \
src/flipflop.c \
src/gates.c \
src/jk.c \
src/johnson_counter.c \
src/latch_sr_d.c \
src/mux_2x1.c \
src/mux_4x1.c \
src/mux_8x1.c \
src/ring_counter.c \
src/Subtractor.c \
src/up_counter.c \
src/up_down_counter.c \
src/dtb.c

TEST_SRC = \
test/unity.c \
test/test.c \


INC = \
-Iinc \
-Itest \

TEST_INC = \
test\


all: $(SRC) $(BUILD_DIR)
	gcc $(SRC) main.c $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test_build: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))



test: test_build
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
