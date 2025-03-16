#pragma once

#define MATRIX_ROWS 3 * 2
#define MATRIX_COLS 5 * 2

#define MATRIX_ROW_PINS { GP20, GP19, GP18 } // ROWピン
#define MATRIX_COL_PINS { GP17, GP16, GP15, GP14, GP13, GP17, GP16, GP15, GP14, GP13 } // COLピン

#define DIODE_DIRECTION CUSTOM_MATRIX

// カスタムマトリクスを有効化
#define CUSTOM_MATRIX

// duplex matrix専用にmatrix_scanをオーバーライドする
#define MATRIX_IO_DELAY 5 // 必要に応じて遅延を調整可能

// マスター/スレーブの自動判定を有効化
#define EE_HANDS

// I2Cの通信設定（使用する場合）
#define SOFT_SERIAL_PIN GP1  // シリアル通信用のピン（使用するピンに変更）

// 分割キーボード用の設定
#define SPLIT_USB_TIMEOUT 2000  // スレーブが応答しない場合のタイムアウト(ms)
#define SPLIT_WATCHDOG_ENABLE 1 // ウォッチドッグ機能を有効化