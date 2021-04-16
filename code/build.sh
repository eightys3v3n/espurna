pushd ..
git config advise.detachedHead false
popd

# if you get unprecidented crashes try this,
#esptool.py --port /dev/ttyUSB1 erase_flash
pio run -e custom && esptool.py --baud 256000 --after hard_reset --chip esp8266 write_flash 0 .pio/build/custom/firmware.bin
