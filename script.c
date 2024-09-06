const int MOTOR_PIN_1 = 9;
const int MOTOR_PIN_2 = 11;
const int MOTOR_DIR_1 = 8;
const int MOTOR_DIR_2 = 10;
const int SENSOR_POWER_PIN = 13;
const int LEFT_SENSOR_PIN = 7;
const int RIGHT_SENSOR_PIN = 6;
bool leftSensorState = 0;
bool rightSensorState = 0;
int speed = 150;
void setup() {
pinMode(SENSOR_POWER_PIN, OUTPUT);
pinMode(MOTOR_PIN_1, OUTPUT);
pinMode(MOTOR_PIN_2, OUTPUT);
pinMode(MOTOR_DIR_1, OUTPUT);
pinMode(MOTOR_DIR_2, OUTPUT);
digitalWrite(MOTOR_DIR_1, LOW);
digitalWrite(MOTOR_DIR_2, LOW);
digitalWrite(SENSOR_POWER_PIN, HIGH);
pinMode(LEFT_SENSOR_PIN, INPUT);
pinMode(RIGHT_SENSOR_PIN, INPUT);
}
void loop() {
leftSensorState = digitalRead(LEFT_SENSOR_PIN);
rightSensorState = digitalRead(RIGHT_SENSOR_PIN);
if (leftSensorState == LOW && rightSensorState == LOW) {
driveForward();
}
else if (leftSensorState == HIGH && rightSensorState == LOW) {
turnRight();
}
else if (leftSensorState == LOW && rightSensorState == HIGH) {
turnLeft();
}
}
void driveForward() {
analogWrite(MOTOR_PIN_1, speed);
analogWrite(MOTOR_PIN_2, speed);
}
void turnRight() {
analogWrite(MOTOR_PIN_1, 0);
analogWrite(MOTOR_PIN_2, speed);
}
void turnLeft() {
analogWrite(MOTOR_PIN_1, speed);
analogWrite(MOTOR_PIN_2, 0);
}
