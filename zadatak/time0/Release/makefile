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
libtime0.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: libtime0.a secondary-outputs

# Tool invocations
libtime0.a: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR Archiver'
	avr-ar -r  "libtime0.a" $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

libtime0.lss: libtime0.a
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S libtime0.a  >"libtime0.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: libtime0.a
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p libtime0.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(ARCHIVES)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) libtime0.a
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
