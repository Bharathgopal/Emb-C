PROJ_NAME = Blinky

BUILD_DIR = Build

SRC = Blinky.c

#Enale below varibel to add include files
#INC = -Iinc

# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
   # Delete command 
   RM = del /q
   # Correct the path based on OS
   FixPath = $(subst /,\,$1)
   # Name of the compiler used
   CC = avr-gcc.exe
   # Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe
else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
   	  # Delete command
      RM = rm -rf				
	  # Correct the path based on OS
      FixPath = $1				
	  # Name of the compiler used
	  CC = avr-gcc
	  # Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

all:$(BUILD_DIR)
	# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328 -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf) $(SRC)

$(BUILD_DIR):
	# Create directory to store the built files
	mkdir $(BUILD_DIR)

doc:
	make -C documentation
clean:
# Remove all the build files 
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)