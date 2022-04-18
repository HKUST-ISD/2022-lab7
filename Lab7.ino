#include <Wire.h>
 
#define IMU_I2C_ADDR             // Page 33 of datasheet
 
// Task 1
// Refer to page 35 of product datasheet, complete the function so that the MCU
// generates the Single-Byte Write Sequence to write data into the register located
// at regAddr
void writeRegister(uint8_t regAddr, uint8_t data) {
 
  // Begin I2C write to IMU_I2C_ADDR
 
  // Send address of register to write to
 
  // Send data to be wirtten into specified register
 
  // End transmission
 
}
 
void setup() {
 
  Wire.begin();
  Wire.setClock(400000);
  Serial.begin(115200);
 
  // Task 2: Write to Power Management 1 Register so that the sensor wakes up
  writeRegister(, );   
 
  // Task 3: Write to Configuration Register so that the 
  //         accelerometer bandwidth is 94 Hz
  //         gyroscope bandwidth is 98 Hz
  //         external sync is disabled
  writeRegister(, );
 
  // Task 4: Write to Accelerometer Configuration Register so that the accelerometer 
  //         full scale range is +-4 g
  writeRegister(, );
 
  // Task 5: Write to Gyroscope Configuration Register so that the gyroscope
  //         full scale range is +-1000 deg/s
  writeRegister(, );
 
}
 
unsigned long lastRan = 0;
 
void loop() {
 
  // Run this code every 5 ms
  if (millis() - lastRan >= 5) {
    lastRan = millis();
 
    uint8_t rxBuf[14];
 
    // Task 6: Request 14 bytes, from register ACCEL_XOUT[15:8] to register GYRO_ZOUT[7:0]
    //         refer to Burst Read Sequence in page 36 of the datasheet
    
 
 
    // Task 7: Store the data received through I2C into rxBuf
    
 
    // Task 8: Manipulate the raw data received, so that 
    //         acceleration is stored in units of g
    //         angular velocity is stored in units of degree per second
    float accX = ;
    float accY = ;
    float accZ = ;
    float gyroX = ;
    float gyroY = ;
    float gyroZ = ;
 
    Serial.print(accX);
    Serial.print('\t');
    Serial.print(accY);
    Serial.print('\t');
    Serial.print(accZ);
    Serial.print('\t');
    Serial.print(gyroX);
    Serial.print('\t');
    Serial.print(gyroY);
    Serial.print('\t');
    Serial.print(gyroZ);
    Serial.print('\t');
    Serial.println();
 
  }
 
}
