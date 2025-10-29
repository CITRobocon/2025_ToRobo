
#include "mbed.h"

// PS3コントローラーライブラリをインクルード
#include "PS3.hpp"
// BlueSignをインクルード
#include "bluesign.h"
// 基板のピン情報をインクルード
#include "YMD01.h"
#include "MucchoEC03.h"

// bluesign使うときのおまじない
using namespace bluesign;

/*  変数定義  */

// PS3Controller
PS3Controller ps3(UART_TX, UART_RX);

// 基板上のLED
DigitalOut led1(LED1_INTERFACE);
DigitalOut led2(LED2_INTERFACE);
DigitalOut led3(LED1);

// 基板上のスイッチ
DigitalIn sw1(SWITCH1_INTERFACE, PullUp);
DigitalIn sw2(SWITCH1_INTERFACE, PullUp);
DigitalIn sw3(BUTTON1, PullUp);

// DCモーター
DCMotor motor1(MOTOR1_A, MOTOR1_B, MOTOR1_PWM);
DCMotor motor2(MOTOR2_A, MOTOR2_B, MOTOR2_PWM);
DCMotor motor3(MOTOR3_A, MOTOR3_B, MOTOR3_PWM);
DCMotor motor4(MOTOR4_A, MOTOR4_B, MOTOR4_PWM);

// サーボ
Servo servo1(SERVO1);
Servo servo2(SERVO2);
Servo servo3(SERVO3);

/* エントリーポイント */

int main() {
  while (true) {
    /* コントローラー状態更新 */
    if (!ps3.update()) {
      // 受信できない場合はすべてのモーターを止める
      led3 = 0;
      motor1.stop();
      motor2.stop();
      motor3.stop();
      motor4.stop();
      continue;
    }
    // 確認用インジケーターを点灯
    led3 = 1;
    /* メイン処理はじめ */

    /* メイン処理終わり */
    /* 安定用のスリープ */
    ThisThread::sleep_for(20ms);
  }
}
