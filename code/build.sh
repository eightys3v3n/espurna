git config advise.detachedHead false
pio run -e plant_water && esptool.py --baud 256000 --after hard_reset --chip esp8266 write_flash 0 .pio/build/plant_water/firmware.bin
