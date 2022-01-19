git config advise.detachedHead false
pio run -e s31_outlet && esptool.py --baud 256000 --after hard_reset --chip esp8266 write_flash 0 .pio/build/s31_outlet/firmware.bin
