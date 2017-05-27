################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Leer\ ERM/Constantes.cpp \
../Leer\ ERM/Mat.cpp \
../Leer\ ERM/main.cpp 

OBJS += \
./Leer\ ERM/Constantes.o \
./Leer\ ERM/Mat.o \
./Leer\ ERM/main.o 

CPP_DEPS += \
./Leer\ ERM/Constantes.d \
./Leer\ ERM/Mat.d \
./Leer\ ERM/main.d 


# Each subdirectory must supply rules for building sources it contributes
Leer\ ERM/Constantes.o: ../Leer\ ERM/Constantes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Leer ERM/Constantes.d" -MT"Leer\ ERM/Constantes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Leer\ ERM/Mat.o: ../Leer\ ERM/Mat.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Leer ERM/Mat.d" -MT"Leer\ ERM/Mat.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Leer\ ERM/main.o: ../Leer\ ERM/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Leer ERM/main.d" -MT"Leer\ ERM/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


