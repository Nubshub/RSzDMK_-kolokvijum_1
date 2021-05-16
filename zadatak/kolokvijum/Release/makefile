################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
kolokvijum.lss \

FLASH_IMAGE += \
kolokvijum.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: kolokvijum.elf secondary-outputs

# Tool invocations
kolokvijum.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,kolokvijum.map -L"C:\Users\Milos\Desktop\RSZDMK - eclipse\usart\Release" -L"C:\Users\Milos\Desktop\RSZDMK - eclipse\time0\Release" -mmcu=atmega328p -o "kolokvijum.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

kolokvijum.lss: kolokvijum.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S kolokvijum.elf  >"kolokvijum.lss"
	@echo 'Finished building: $@'
	@echo ' '

kolokvijum.hex: kolokvijum.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex kolokvijum.elf  "kolokvijum.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: kolokvijum.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p kolokvijum.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: kolokvijum.elf
	@echo 'Invoking: AVRDude'
	C:\Program Files\eclipse-cpp-2020-12-R-win32-x86_64\bin\avrdude -pm328p -carduino -PCOM3 -Uflash:w:kolokvijum.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) kolokvijum.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
