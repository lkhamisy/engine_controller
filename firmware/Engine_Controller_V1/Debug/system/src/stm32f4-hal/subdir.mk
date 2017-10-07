################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/stm32f4-hal/stm32f4xx_hal.c \
../system/src/stm32f4-hal/stm32f4xx_hal_adc.c \
../system/src/stm32f4-hal/stm32f4xx_hal_adc_ex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_cortex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_dma.c \
../system/src/stm32f4-hal/stm32f4xx_hal_dma2d.c \
../system/src/stm32f4-hal/stm32f4xx_hal_dma_ex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_gpio.c \
../system/src/stm32f4-hal/stm32f4xx_hal_pwr.c \
../system/src/stm32f4-hal/stm32f4xx_hal_pwr_ex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_rcc.c \
../system/src/stm32f4-hal/stm32f4xx_hal_rcc_ex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_sd.c \
../system/src/stm32f4-hal/stm32f4xx_hal_sdram.c \
../system/src/stm32f4-hal/stm32f4xx_hal_spi.c \
../system/src/stm32f4-hal/stm32f4xx_hal_sram.c \
../system/src/stm32f4-hal/stm32f4xx_hal_tim.c \
../system/src/stm32f4-hal/stm32f4xx_hal_tim_ex.c \
../system/src/stm32f4-hal/stm32f4xx_hal_uart.c \
../system/src/stm32f4-hal/stm32f4xx_hal_usart.c \
../system/src/stm32f4-hal/stm32f4xx_ll_sdmmc.c 

OBJS += \
./system/src/stm32f4-hal/stm32f4xx_hal.o \
./system/src/stm32f4-hal/stm32f4xx_hal_adc.o \
./system/src/stm32f4-hal/stm32f4xx_hal_adc_ex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_cortex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_dma.o \
./system/src/stm32f4-hal/stm32f4xx_hal_dma2d.o \
./system/src/stm32f4-hal/stm32f4xx_hal_dma_ex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_gpio.o \
./system/src/stm32f4-hal/stm32f4xx_hal_pwr.o \
./system/src/stm32f4-hal/stm32f4xx_hal_pwr_ex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_rcc.o \
./system/src/stm32f4-hal/stm32f4xx_hal_rcc_ex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_sd.o \
./system/src/stm32f4-hal/stm32f4xx_hal_sdram.o \
./system/src/stm32f4-hal/stm32f4xx_hal_spi.o \
./system/src/stm32f4-hal/stm32f4xx_hal_sram.o \
./system/src/stm32f4-hal/stm32f4xx_hal_tim.o \
./system/src/stm32f4-hal/stm32f4xx_hal_tim_ex.o \
./system/src/stm32f4-hal/stm32f4xx_hal_uart.o \
./system/src/stm32f4-hal/stm32f4xx_hal_usart.o \
./system/src/stm32f4-hal/stm32f4xx_ll_sdmmc.o 

C_DEPS += \
./system/src/stm32f4-hal/stm32f4xx_hal.d \
./system/src/stm32f4-hal/stm32f4xx_hal_adc.d \
./system/src/stm32f4-hal/stm32f4xx_hal_adc_ex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_cortex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_dma.d \
./system/src/stm32f4-hal/stm32f4xx_hal_dma2d.d \
./system/src/stm32f4-hal/stm32f4xx_hal_dma_ex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_gpio.d \
./system/src/stm32f4-hal/stm32f4xx_hal_pwr.d \
./system/src/stm32f4-hal/stm32f4xx_hal_pwr_ex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_rcc.d \
./system/src/stm32f4-hal/stm32f4xx_hal_rcc_ex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_sd.d \
./system/src/stm32f4-hal/stm32f4xx_hal_sdram.d \
./system/src/stm32f4-hal/stm32f4xx_hal_spi.d \
./system/src/stm32f4-hal/stm32f4xx_hal_sram.d \
./system/src/stm32f4-hal/stm32f4xx_hal_tim.d \
./system/src/stm32f4-hal/stm32f4xx_hal_tim_ex.d \
./system/src/stm32f4-hal/stm32f4xx_hal_uart.d \
./system/src/stm32f4-hal/stm32f4xx_hal_usart.d \
./system/src/stm32f4-hal/stm32f4xx_ll_sdmmc.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/stm32f4-hal/%.o: ../system/src/stm32f4-hal/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F446xx -DUSE_HAL_DRIVER -DHSE_VALUE=16000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -I"C:\Users\nicks\Desktop\engine_controller\firmware\Engine_Controller_V1\include\Middlewares\Third_Party\FatFs\src" -I"C:\Users\nicks\Desktop\engine_controller\firmware\Engine_Controller_V1\include\Middlewares\Third_Party\FatFs\src\drivers" -I/Engine_Controller_V1/include/Middlewares/Third_Party/FatFs/src/option -I"C:\Users\nicks\Desktop\engine_controller\firmware\Engine_Controller_V1\Inc" -std=gnu11 -Wno-bad-function-cast -Wno-conversion -Wno-sign-conversion -Wno-unused-parameter -Wno-sign-compare -Wno-missing-prototypes -Wno-missing-declarations -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


