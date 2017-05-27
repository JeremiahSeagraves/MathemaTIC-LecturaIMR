################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../LeerERM/Constantes.cpp \
../LeerERM/Mat.cpp \
../LeerERM/main.cpp 

OBJS += \
./LeerERM/Constantes.o \
./LeerERM/Mat.o \
./LeerERM/main.o 

CPP_DEPS += \
./LeerERM/Constantes.d \
./LeerERM/Mat.d \
./LeerERM/main.d 


# Each subdirectory must supply rules for building sources it contributes
LeerERM/%.o: ../LeerERM/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


