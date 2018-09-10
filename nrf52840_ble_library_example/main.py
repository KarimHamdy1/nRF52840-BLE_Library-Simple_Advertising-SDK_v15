
################################################################################
# nRF52840 BLE Library
# BLE Configurations can be set in nrf52840_ble.h Header file.
# Simple BLE Advertising 
# Created by Zerynth Team 2018 CC
# Author: K. Hamdy
###############################################################################



@native_c("_ble_init",["header/nrf52840_ble.c"],[])
def ble_init():
    pass

@native_c("_ble_set_gap",["header/nrf52840_ble.c"],[])
def gap_start():
    pass

@native_c("_ble_set_gap_gatt_services_start",["header/nrf52840_ble.c"],[])
def gap_gatt_services_start():
    pass

@native_c("_continue_advertising",["header/nrf52840_ble.c"],[])
def continue_advertising():
    pass
#---------------------------------------------------

# import the streams module, it is needed to send data around
import streams

# open the default serial port, the output will be visible in the serial console
streams.serial()  



ble_init()
gap_start()
gap_gatt_services_start()



# loop forever
while True:
    continue_advertising()