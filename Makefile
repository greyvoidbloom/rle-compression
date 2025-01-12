# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Define the target name (the final executable)
TARGET = build/runLengthEncoding

# Define build directory
BUILD_DIR = build

# List of source files
SRCS = src/main.c src/rle_compress.c src/rle_decompress.c src/cli_handling.c

# Object files (compiled .o files) in the build directory
OBJS = $(SRCS:src/%.c=$(BUILD_DIR)/%.o)

# The default rule - build everything
all: $(TARGET)

# Linking step (final executable)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule for compiling each source file into object files (.o) in the build directory
$(BUILD_DIR)/%.o: src/%.c
	@mkdir -p $(BUILD_DIR)  # Create the build directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the target executable in the build directory
clean:
	rm -rf $(BUILD_DIR)

# Rule to run the program after build
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
