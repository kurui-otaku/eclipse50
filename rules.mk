MCU = RP2040
BOOTLOADER = rp2040
CUSTOM_MATRIX = yes
SRC += matrix.c
# 分割キーボードを有効にする
SPLIT_KEYBOARD = yes

# 通信方式を選択（どちらか一方を選ぶ）
# I2C通信を使う場合
SPLIT_TRANSPORT = I2C

# または UART通信を使う場合
# SPLIT_TRANSPORT = SERIAL

# スレーブ側もキー入力できるようにする
SPLIT_USB_DETECT = yes