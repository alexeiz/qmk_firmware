# Quantum Mechanical Keyboard Firmware - Fork

Original can be found at [https://github.com/qmk/qmk_firmware](https://github.com/qmk/qmk_firmware).

## Prerequisites

Fedora:

``` shell
$ sudo dnf install avr-gcc avr-libc avrdude
```

## Build

### S60X

``` shell
$ make s60_x/rgb:my_keymap
```

### Satan

``` shell
$ make satan:my_keymap
```

### 1up keyboards

``` shell
$ make 1upkeyboards/1up60hse:my_keymap
```

### FC660C

``` shell
vim keyboards/fc660c/keymaps/my_keymap/keymap.c
make fc660c:my_keymap

# flash
# press/hold reset button

sudo avrdude -c flip1 -p m32u4 -U flash:w:fc660c_my_keymap.hex:i

# unplug/plug-in keyboard
```

## Flash

``` shell
$ sudo dfu-programmer atmega32u4 erase --force
$ sudo dfu-programmer atmega32u4 flash 1upkeyboards_1up60hse_my_keymap.hex
$ sudo dfu-programmer atmega32u4 reset
```
