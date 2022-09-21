################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../modules/card.c \
../modules/server.c \
../modules/terminal.c 

OBJS += \
./modules/card.o \
./modules/server.o \
./modules/terminal.o 

C_DEPS += \
./modules/card.d \
./modules/server.d \
./modules/terminal.d 


# Each subdirectory must supply rules for building sources it contributes
modules/%.o: ../modules/%.c modules/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


