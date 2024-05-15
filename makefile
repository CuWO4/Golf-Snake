TARGET_DIR := bin
TARGET := $(TARGET_DIR)/golf_snake

FALGS := -O2 -w -include stdio.h -include stdlib.h -include windows.h -include conio.h

$(TARGET): golf_snake.c | $(TARGET_DIR) 
	clang $(FALGS) -o $@ $<

$(TARGET_DIR):
	mkdir $@

.PHONY: run clean
run: $(TARGET)
	./$<

clean:
	rm -r bin/