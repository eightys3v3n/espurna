git config advise.detachedHead false

# if you get unprecidented crashes try this,
#esptool.py --port /dev/ttyUSB1 erase_flash
pio run -e plant_water && esptool.py --baud 256000 --after hard_reset --chip esp8266 write_flash 0 .pio/build/plant_water/firmware.bin
