<<<<<<< HEAD
PROJ_NAME = SeatHeating
=======
PROJ_NAME = Activity1
>>>>>>> 8ea949d8c4dba74cd8e62549a11c891bd8edd2f4

BUILD_DIR = Build

# All Source code files
<<<<<<< HEAD
SRC = src/activity1.c\
src/activity2.c\
src/activity3.c\
src/activity4.c\
SeatHeatingMain.c


#Object copy to create hexfile
OBJCOPY = avr-objcopy.exe

=======
SRC = Activity_main.c
#src/user_utils.c
>>>>>>> 8ea949d8c4dba74cd8e62549a11c891bd8edd2f4

# All header file paths
INC = -I inc

<<<<<<< HEAD
#Avrdude
AVRDUDE := avrdude

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex

# Find out the OS and configure the variables accordingly
ifdef OS	                    # All configurations for Windwos OS
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
=======
# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
# Correct the path based on OS
   FixPath = $(subst /,\,$1)
# Name of the compiler used
   CC = avr-gcc.exe
# Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihexcpp

else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
# Correct the path based on OS
      FixPath = $1				
# Name of the compiler used
	  CC = avr-gcc
# Name of the elf to hex file converter used
>>>>>>> 8ea949d8c4dba74cd8e62549a11c891bd8edd2f4
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

all:$(BUILD_DIR)
<<<<<<< HEAD
	# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)

hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	#create hex file
	$(OBJCOPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

$(BUILD_DIR):
	# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
	#Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
	#Build the code code documentation using Doxygen command line utility
	make -C documentation
	make -C documentation doc

clean:
	# Remove all the build files and generated document files
	$(RM) -rf build $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
	rmdir $(BUILD_DIR)
	
=======
# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)

hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	#create hex file
	$(AVR_OBJ_CPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
# Remove all the build files and generated document files
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
>>>>>>> 8ea949d8c4dba74cd8e62549a11c891bd8edd2f4
