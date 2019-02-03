# MCU name
MCU = atmega32u4


# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.

# Since there are different hardware variations of these adapters and since these
# have different CPU clocks, the clock speed should be set in the rules.mk file of the
# respective hardware variantion (i.e. subproject). For example, in /pro_micro/rules.mk
# this is set to 8000000.
# The value here is only a fallback and is ignored if it is defined in the subproject.
F_CPU = 16000000

DEFAULT_FOLDER = sirius/unigo66


#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
#     This will define a symbol, F_USB, in all source code files equal to the
#     input clock frequency (before any prescaling is performed) in Hz. This value may
#     differ from F_CPU if prescaling is used on the latter, and is required as the
#     raw input clock is fed directly to the PLL sections of the AVR for high speed
#     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
#     at the end, this will be done automatically to create a 32-bit value in your
#     source code.
#
#     If no clock division is performed on the input clock inside the AVR (via the
#     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
F_USB = $(F_CPU)

# Bootloader
#     This definition is optional, and if your keyboard supports multiple bootloaders of
#     different sizes, comment this out, and the correct address will be loaded 
#     automatically (+60). See bootloader.mk for all options.
BOOTLOADER = atmel-dfu

# Interrupt driven control endpoint task
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Build Options
#   comment out to disable the options.
#
# BOOTMAGIC_ENABLE	= yes	# Virtual DIP switch configuration(+1000)
# MOUSEKEY_ENABLE		= yes	# Mouse keys(+4700)
EXTRAKEY_ENABLE		= yes	# Audio control and System control(+450)
# CONSOLE_ENABLE		= yes	# Console for debug(+400)
# COMMAND_ENABLE		= yes  # Commands for debug and configuration
# SLEEP_LED_ENABLE = yes  # Breathing sleep LED during USB suspend
# NKRO_ENABLE = yes	# USB Nkey Rollover - not yet supported in LUFA
# BACKLIGHT_ENABLE = yes
USB_HID_ENABLE = yes

CUSTOM_MATRIX = yes
SRC += custom_matrix.cpp
