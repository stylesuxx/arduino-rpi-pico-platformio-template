# RPI Pico 2 Core Template
This is a platformIO template meant to be used with an RPI Pico if you want to use both cores. Current mainline raspberrypi platform does not support both cores so some additional configuration is necessary. This all happens in `platformio.ini `.

## Usage
1. Make sure you have [Visual Studio Code](https://code.visualstudio.com/) with the [platformio plugin](https://platformio.org/install/ide?install=vscode) installed
2. Fork this repository, clone it
3. Open it from within the PlatformIO tab from within Visual Studio Code
4. From the PlatformIO tab chose `pico -> General -> Upload and Monitor`. This will flash the pico and display the serial terminal. You should now see debug prints from core 1 and 2.

## Next Steps
Check `./src/main.cpp` - things should be self explanatory from there.

## References
* [Multicore Processing on the RPI Pico - a primer](https://arduino-pico.readthedocs.io/en/latest/multicore.html)
